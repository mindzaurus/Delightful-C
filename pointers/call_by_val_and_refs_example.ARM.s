	.cpu arm7tdmi
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 1
	.eabi_attribute 30, 6
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"call_by_val_and_refs_example.c"
	.text
	.align	2
	.global	add_using_call_by_value
	.syntax unified
	.arm
	.fpu softvfp
	.type	add_using_call_by_value, %function

add_using_call_by_value:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	str	fp, [sp, #-4]!
	add	fp, sp, #0
	sub	sp, sp, #12
	str	r0, [fp, #-8] // copy r0 to stack
	str	r1, [fp, #-12] // copy r1 to stack
	ldr	r2, [fp, #-8] // copy from stack to r2
	ldr	r3, [fp, #-12] // copy from stack to r3
	add	r3, r2, r3 // add r2 and r3
	mov	r0, r3
	add	sp, fp, #0
	@ sp needed
	ldr	fp, [sp], #4
	bx	lr
	.size	add_using_call_by_value, .-add_using_call_by_value
	.align	2
	.global	add_using_call_by_reference
	.syntax unified
	.arm
	.fpu softvfp
	.type	add_using_call_by_reference, %function


add_using_call_by_reference:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	str	fp, [sp, #-4]!
	add	fp, sp, #0
	sub	sp, sp, #12
	str	r0, [fp, #-8]
	str	r1, [fp, #-12]
	ldr	r3, [fp, #-8]
	ldr	r2, [r3] // get 50 from memory address
	ldr	r3, [fp, #-12]
	ldr	r3, [r3] // get 60 from memory address
	add	r3, r2, r3
	mov	r0, r3
	add	sp, fp, #0
	@ sp needed
	ldr	fp, [sp], #4
	bx	lr
	.size	add_using_call_by_reference, .-add_using_call_by_reference
	.align	2
	.global	call_by_value
	.syntax unified
	.arm
	.fpu softvfp
	.type	call_by_value, %function

call_by_value:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #8
	mov	r3, #50 // immediate value gets copied to r3
	str	r3, [fp, #-8]
	mov	r3, #60 // immediate value 60 gets copied to r3
	str	r3, [fp, #-12]
	ldr	r1, [fp, #-12] // r1 has 60 now
	ldr	r0, [fp, #-8]  // r0 has 50 now
	bl	add_using_call_by_value
	mov	r3, r0
	mov	r0, r3
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, lr}
	bx	lr
	.size	call_by_value, .-call_by_value
	.align	2
	.global	call_by_reference
	.syntax unified
	.arm
	.fpu softvfp
	.type	call_by_reference, %function

	
call_by_reference:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #8
	mov	r3, #50     // fp is frame pointer
	str	r3, [fp, #-8] // store 50 in fp - 8 mem location
	mov	r3, #60        
	str	r3, [fp, #-12] // store 60 in fp-12 mem location
	sub	r2, fp, #12 // copy fp-12 address and store in r2
	sub	r3, fp, #8 // copy fp-8 address and store in r3
	mov	r1, r2 // copy memory location address fp-12 in r1
	mov	r0, r3 // copy memory location address fp-8 in r0
	bl	add_using_call_by_reference
	mov	r3, r0
	mov	r0, r3
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, lr}
	bx	lr
	.size	call_by_reference, .-call_by_reference
	.section	.rodata
	.align	2
.LC0:
	.ascii	"call_by_value() returned %d \012\000"
	.align	2
.LC1:
	.ascii	"call_by_reference() returned %d \012\000"
	.text
	.align	2
	.global	main
	.syntax unified
	.arm
	.fpu softvfp
	.type	main, %function
main:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	bl	call_by_value
	mov	r3, r0
	mov	r1, r3
	ldr	r0, .L11
	bl	printf
	bl	call_by_reference
	mov	r3, r0
	mov	r1, r3
	ldr	r0, .L11+4
	bl	printf
	mov	r3, #0
	mov	r0, r3
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, lr}
	bx	lr
.L12:
	.align	2
.L11:
	.word	.LC0
	.word	.LC1
	.size	main, .-main
	.ident	"GCC: (GNU Tools for Arm Embedded Processors 7-2017-q4-major) 7.2.1 20170904 (release) [ARM/embedded-7-branch revision 255204]"

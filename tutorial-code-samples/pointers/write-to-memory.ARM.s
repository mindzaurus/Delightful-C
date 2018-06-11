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
	.file	"write-to-memory.c"
	.text
	.align	2
	.global	increment_memory_content_by_three
	.syntax unified
	.arm
	.fpu softvfp
	.type	increment_memory_content_by_three, %function

increment_memory_content_by_three:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	str	fp, [sp, #-4]!
	add	fp, sp, #0
	sub	sp, sp, #12
	str	r0, [fp, #-8]
	ldr	r3, [fp, #-8] // load the address of old_age into register r3
	ldr	r3, [r3]      // copy content of address in r3 into r3 itself
	add	r2, r3, #3    // add 3 to the value in r3 and store it in r2
	ldr	r3, [fp, #-8] // load the address of old_age's memory location into r3
	str	r2, [r3]      // store the value of r2 into old_age's memory location pointed to by r3
	nop
	add	sp, fp, #0
	@ sp needed
	ldr	fp, [sp], #4
	bx	lr

	.size	increment_memory_content_by_three, .-increment_memory_content_by_three
	.global	old_age
	.data
	.align	2
	.type	old_age, %object
	.size	old_age, 4
old_age:
	.word	90
	.section	.rodata
	.align	2
.LC0:
	.ascii	"old_age before increment %u \012\000"
	.align	2
.LC1:
	.ascii	"old_age after increment %u \012\000"
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
	ldr	r3, .L4
	ldr	r3, [r3]
	mov	r1, r3
	ldr	r0, .L4+4
	bl	printf
	ldr	r0, .L4
	bl	increment_memory_content_by_three
	ldr	r3, .L4
	ldr	r3, [r3]
	mov	r1, r3
	ldr	r0, .L4+8
	bl	printf
	mov	r3, #0
	mov	r0, r3
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, lr}
	bx	lr
.L5:
	.align	2
.L4:
	.word	old_age
	.word	.LC0
	.word	.LC1
	.size	main, .-main
	.ident	"GCC: (GNU Tools for Arm Embedded Processors 7-2017-q4-major) 7.2.1 20170904 (release) [ARM/embedded-7-branch revision 255204]"

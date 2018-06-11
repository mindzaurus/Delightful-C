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
	.file	"pointer-assignments.c"
	.global	initialized_age
	.data
	.align	2
	.type	initialized_age, %object
	.size	initialized_age, 4
initialized_age:
	.word	55
	.comm	uninitialized_age,4,4
	.section	.rodata
	.align	2
.LC0:
	.ascii	"allocated_pointer (heap mem area) %p \012\012global"
	.ascii	"_age_ptr (initialized_age .data mem area) %p \012\012"
	.ascii	"local_age_ptr (&late_age local stack mem area) %p \012"
	.ascii	"\012\012\000"
	.text
	.align	2
	.global	example_pointer_function_one
	.syntax unified
	.arm
	.fpu softvfp
	.type	example_pointer_function_one, %function
example_pointer_function_one:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 32
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #32
	str	r0, [fp, #-32]
	mov	r3, #95
	str	r3, [fp, #-24]
	mov	r3, #0
	str	r3, [fp, #-8]
	ldr	r3, [fp, #-32]
	str	r3, [fp, #-8]
	mov	r0, #4
	bl	malloc
	mov	r3, r0
	str	r3, [fp, #-12]
	ldr	r3, .L2
	str	r3, [fp, #-16]
	sub	r3, fp, #24
	str	r3, [fp, #-20]
	ldr	r3, [fp, #-20]
	ldr	r2, [fp, #-16]
	ldr	r1, [fp, #-12]
	ldr	r0, .L2+4
	bl	printf
	nop
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, lr}
	bx	lr
.L3:
	.align	2
.L2:
	.word	initialized_age
	.word	.LC0
	.size	example_pointer_function_one, .-example_pointer_function_one
	.section	.rodata
	.align	2
.LC1:
	.ascii	"malloc_function_ptr (shared libs mem area) %p \012\012"
	.ascii	"age_ptr (uninitialized_age bss mem area) %p \012\012"
	.ascii	"example_pointer_function_one_ptr (.text area) %p \012"
	.ascii	"\012\000"
	.text
	.align	2
	.global	example_pointer_function_two
	.syntax unified
	.arm
	.fpu softvfp
	.type	example_pointer_function_two, %function
example_pointer_function_two:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #16
	ldr	r3, .L5
	str	r3, [fp, #-8]
	ldr	r3, .L5+4
	str	r3, [fp, #-12]
	ldr	r3, .L5+8
	str	r3, [fp, #-16]
	ldr	r3, [fp, #-16]
	ldr	r2, [fp, #-12]
	ldr	r1, [fp, #-8]
	ldr	r0, .L5+12
	bl	printf
	nop
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, lr}
	bx	lr
.L6:
	.align	2
.L5:
	.word	malloc
	.word	uninitialized_age
	.word	example_pointer_function_one
	.word	.LC1
	.size	example_pointer_function_two, .-example_pointer_function_two
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
	ldr	r3, .L9
	mov	r2, #33
	str	r2, [r3]
	ldr	r0, .L9
	bl	example_pointer_function_one
	bl	example_pointer_function_two
	mov	r3, #0
	mov	r0, r3
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, lr}
	bx	lr
.L10:
	.align	2
.L9:
	.word	uninitialized_age
	.size	main, .-main
	.ident	"GCC: (GNU Tools for Arm Embedded Processors 7-2017-q4-major) 7.2.1 20170904 (release) [ARM/embedded-7-branch revision 255204]"

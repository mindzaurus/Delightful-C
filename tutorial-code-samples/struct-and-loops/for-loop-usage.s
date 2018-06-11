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
	.file	"for-loop-usage.c"
	.section	.rodata
	.align	2
.LC0:
	.ascii	"M is %d i is %d\012\000"
	.text
	.align	2
	.global	function_for_loop_1
	.syntax unified
	.arm
	.fpu softvfp
	.type	function_for_loop_1, %function

function_for_loop_1:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #8
	mvn	r3, #0
	str	r3, [fp, #-8]
	mov	r3, #0
	str	r3, [fp, #-12]
	mov	r3, #0
	str	r3, [fp, #-8]
	b	.L2
.L3:
	ldr	r2, [fp, #-8]
	ldr	r1, [fp, #-12]
	ldr	r0, .L4
	bl	printf
	ldr	r3, [fp, #-12]
	add	r3, r3, #2      // M += 2
	str	r3, [fp, #-12]
	ldr	r3, [fp, #-8]
	add	r3, r3, #1      // i++ compiler inserted
	str	r3, [fp, #-8]
.L2:
	ldr	r3, [fp, #-8]
	cmp	r3, #5
	ble	.L3
	nop
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, lr}
	bx	lr
.L5:
	.align	2
.L4:
	.word	.LC0
	.size	function_for_loop_1, .-function_for_loop_1
	.align	2
	.global	function_for_loop_2
	.syntax unified
	.arm
	.fpu softvfp
	.type	function_for_loop_2, %function

function_for_loop_2:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #8
	mvn	r3, #0
	str	r3, [fp, #-8]
	mov	r3, #0
	str	r3, [fp, #-12]
	mov	r3, #0
	str	r3, [fp, #-8]
	b	.L7
.L8:
	ldr	r2, [fp, #-8]
	ldr	r1, [fp, #-12]
	ldr	r0, .L9
	bl	printf
	ldr	r3, [fp, #-12]
	add	r3, r3, #2
	str	r3, [fp, #-12]
	ldr	r3, [fp, #-8]
	add	r3, r3, #1 // we wrote explicitly i++
	str	r3, [fp, #-8]
.L7:
	ldr	r3, [fp, #-8]
	cmp	r3, #5
	ble	.L8
	nop
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, lr}
	bx	lr
.L10:
	.align	2
.L9:
	.word	.LC0
	.size	function_for_loop_2, .-function_for_loop_2
	.section	.rodata
	.align	2
.LC1:
	.ascii	"\012\000"
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
	bl	function_for_loop_1
	ldr	r0, .L13
	bl	puts
	bl	function_for_loop_2
	mov	r3, #0
	mov	r0, r3
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, lr}
	bx	lr
.L14:
	.align	2
.L13:
	.word	.LC1
	.size	main, .-main
	.ident	"GCC: (GNU Tools for Arm Embedded Processors 7-2017-q4-major) 7.2.1 20170904 (release) [ARM/embedded-7-branch revision 255204]"

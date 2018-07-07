	.arch armv8-a
	.file	"struct-passarg-return.c"
	.text
	.align	2
	.global	struct_by_value_returner
	.type	struct_by_value_returner, %function

struct_by_value_returner:
	stp	x29, x30, [sp, -32]!
	add	x29, sp, 0
	stp	x19, x20, [sp, 16]
	mov	x19, x8
	mov	x20, x0
	mov	x3, x19
	mov	x1, x20
	mov	x0, 416 // struct size is 416 bytes
	mov	x2, x0
	mov	x0, x3
	bl	memcpy // copies struct of 416 bytes to stack using memcpy
	mov	x0, x19
	ldp	x19, x20, [sp, 16]
	ldp	x29, x30, [sp], 32
	ret // return back to caller from here
	.size	struct_by_value_returner, .-struct_by_value_returner
	.align	2
	.global	struct_by_value_passer
	.type	struct_by_value_passer, %function

struct_by_value_passer:
	sub	sp, sp, #1264
	stp	x29, x30, [sp, -16]!
	add	x29, sp, 0
	adrp	x0, __stack_chk_guard
	add	x0, x0, :lo12:__stack_chk_guard
	ldr	x1, [x0]
	str	x1, [x29, 1272]
	mov	x1,0
	add	x0, x29, 16
	add	x1, x29, 440
	mov	x2, 416 // 416 bytes copied to stack using memcpy
	bl	memcpy  // actual memcpy call happens here
	add	x0, x29, 16
	add	x1, x29, 856
	mov	x8, x1
	bl	struct_by_value_returner
	nop
	adrp	x0, __stack_chk_guard
	add	x0, x0, :lo12:__stack_chk_guard
	ldr	x1, [x29, 1272]
	ldr	x0, [x0]
	eor	x0, x1, x0
	cmp	x0, 0
	beq	.L4
	bl	__stack_chk_fail
.L4:
	ldp	x29, x30, [sp], 16
	add	sp, sp, 1264
	ret
	.size	struct_by_value_passer, .-struct_by_value_passer
	.section	.rodata
	.align	3
.LC0:
	.string	" sizeof(struct demo_struct) %lu \n"
	.text
	.align	2
	.global	main
	.type	main, %function

main:
	stp	x29, x30, [sp, -32]!
	add	x29, sp, 0
	mov	x0, 416
	str	x0, [x29, 24]
	adrp	x0, .LC0
	add	x0, x0, :lo12:.LC0
	ldr	x1, [x29, 24]
	bl	printf
	mov	w0, 0
	ldp	x29, x30, [sp], 32
	ret
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits

	.arch armv8-a
	.file	"struct-pass-by-reference.c"
	.global	top_seller
	.data
	.align	3
	.type	top_seller, %object
	.size	top_seller, 8

top_seller:
	.word	501873
	.word	1119564595
	.text
	.align	2
	.global	struct_pass_by_reference
	.type	struct_pass_by_reference, %function

	// This time we didn't see any memcpy because we are only
	// passing addresses (references) around no value copying required
	
	// is not commenting style in assembly .s files just for demo I am using this

struct_pass_by_reference:
	sub	sp, sp, #16
	str	x0, [sp, 8]
	ldr	x0, [sp, 8] // load address passed as arg into register x0
	add	sp, sp, 16 // prepare for return adjust stack pointer
	ret     // return
	.size	struct_pass_by_reference, .-struct_pass_by_reference
	.align	2
	.global	main
	.type	main, %function
	
// No memcpy here to only passing addresses around
main:
	stp	x29, x30, [sp, -32]!
	add	x29, sp, 0
	adrp	x0, top_seller
	add	x0, x0, :lo12:top_seller
	bl	struct_pass_by_reference // call to struct_pass_by_reference
	str	x0, [x29, 24]
	mov	w0, 0
	ldp	x29, x30, [sp], 32
	ret
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits

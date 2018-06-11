	.text
	.globl _initialized_age
	.data
	.align 2
_initialized_age:
	.long	55
	.comm	_uninitialized_age,4,2
	.cstring
	.align 3
lC0:
	.ascii "allocated_pointer (heap mem area) %p \12\12global_age_ptr (initialized_age .data mem area) %p \12\12local_age_ptr (&late_age local stack mem area) %p \12\12\12\0"
	.text
	.globl _example_pointer_function_one
_example_pointer_function_one:
LFB4:
	pushq	%rbp
LCFI0:
	movq	%rsp, %rbp
LCFI1:
	subq	$64, %rsp
	movq	%rdi, -56(%rbp)
	movl	$95, -36(%rbp)
	movq	$0, -8(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, -8(%rbp)
	movl	$4, %edi
	call	_malloc
	movq	%rax, -16(%rbp)
	leaq	_initialized_age(%rip), %rax
	movq	%rax, -24(%rbp)
	leaq	-36(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rcx
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	lC0(%rip), %rdi
	movl	$0, %eax
	call	_printf
	nop
	leave
LCFI2:
	ret
LFE4:
	.cstring
	.align 3
lC1:
	.ascii "malloc_function_ptr (shared libs mem area) %p \12\12age_ptr (uninitialized_age bss mem area) %p \12\12example_pointer_function_one_ptr (.text area) %p \12\12\0"
	.text
	.globl _example_pointer_function_two
_example_pointer_function_two:
LFB5:
	pushq	%rbp
LCFI3:
	movq	%rsp, %rbp
LCFI4:
	subq	$32, %rsp
	movq	_malloc@GOTPCREL(%rip), %rax
	movq	%rax, -8(%rbp)
	movq	_uninitialized_age@GOTPCREL(%rip), %rax
	movq	%rax, -16(%rbp)
	leaq	_example_pointer_function_one(%rip), %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rcx
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	leaq	lC1(%rip), %rdi
	movl	$0, %eax
	call	_printf
	nop
	leave
LCFI5:
	ret
LFE5:
	.globl _main
_main:
LFB6:
	pushq	%rbp
LCFI6:
	movq	%rsp, %rbp
LCFI7:
	movq	_uninitialized_age@GOTPCREL(%rip), %rax
	movl	$33, (%rax)
	movq	_uninitialized_age@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	_example_pointer_function_one
	movl	$0, %eax
	call	_example_pointer_function_two
	movl	$0, %eax
	popq	%rbp
LCFI8:
	ret
LFE6:
	.section __TEXT,__eh_frame,coalesced,no_toc+strip_static_syms+live_support
EH_frame1:
	.set L$set$0,LECIE1-LSCIE1
	.long L$set$0
LSCIE1:
	.long	0
	.byte	0x1
	.ascii "zR\0"
	.byte	0x1
	.byte	0x78
	.byte	0x10
	.byte	0x1
	.byte	0x10
	.byte	0xc
	.byte	0x7
	.byte	0x8
	.byte	0x90
	.byte	0x1
	.align 3
LECIE1:
LSFDE1:
	.set L$set$1,LEFDE1-LASFDE1
	.long L$set$1
LASFDE1:
	.long	LASFDE1-EH_frame1
	.quad	LFB4-.
	.set L$set$2,LFE4-LFB4
	.quad L$set$2
	.byte	0
	.byte	0x4
	.set L$set$3,LCFI0-LFB4
	.long L$set$3
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$4,LCFI1-LCFI0
	.long L$set$4
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$5,LCFI2-LCFI1
	.long L$set$5
	.byte	0xc
	.byte	0x7
	.byte	0x8
	.align 3
LEFDE1:
LSFDE3:
	.set L$set$6,LEFDE3-LASFDE3
	.long L$set$6
LASFDE3:
	.long	LASFDE3-EH_frame1
	.quad	LFB5-.
	.set L$set$7,LFE5-LFB5
	.quad L$set$7
	.byte	0
	.byte	0x4
	.set L$set$8,LCFI3-LFB5
	.long L$set$8
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$9,LCFI4-LCFI3
	.long L$set$9
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$10,LCFI5-LCFI4
	.long L$set$10
	.byte	0xc
	.byte	0x7
	.byte	0x8
	.align 3
LEFDE3:
LSFDE5:
	.set L$set$11,LEFDE5-LASFDE5
	.long L$set$11
LASFDE5:
	.long	LASFDE5-EH_frame1
	.quad	LFB6-.
	.set L$set$12,LFE6-LFB6
	.quad L$set$12
	.byte	0
	.byte	0x4
	.set L$set$13,LCFI6-LFB6
	.long L$set$13
	.byte	0xe
	.byte	0x10
	.byte	0x86
	.byte	0x2
	.byte	0x4
	.set L$set$14,LCFI7-LCFI6
	.long L$set$14
	.byte	0xd
	.byte	0x6
	.byte	0x4
	.set L$set$15,LCFI8-LCFI7
	.long L$set$15
	.byte	0xc
	.byte	0x7
	.byte	0x8
	.align 3
LEFDE5:
	.subsections_via_symbols

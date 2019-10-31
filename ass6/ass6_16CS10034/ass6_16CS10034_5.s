	.file	"test.c"
	.section	.rodata
.LC0:
	.string	"Enter a small number :"
	.text	
	.globl	fibonacci
	.type	fibonacci, @function
fibonacci: 
.LFB0:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$84, %rsp
	movq	%rdi, -20(%rbp)
	movl	$1, %eax
	movl 	%eax, -24(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-24(%rbp), %eax
	je .L4
	jmp .L2
	jmp .L3
.L2: 
	movl	$2, %eax
	movl 	%eax, -28(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-28(%rbp), %eax
	je .L4
	jmp .L5
.L3: 
	jmp .L5
.L4: 
	movl	$1, %eax
	movl 	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	jmp .L5
.L5: 
	movl	$1, %eax
	movl 	%eax, -44(%rbp)
	movl 	-20(%rbp), %eax
	movl 	-44(%rbp), %edx
	subl 	%edx, %eax
	movl 	%eax, -48(%rbp)
	movl 	-48(%rbp), %eax
	movq 	-48(%rbp), %rdi
	call	fibonacci
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	movl 	%eax, -36(%rbp)
	movl	$2, %eax
	movl 	%eax, -60(%rbp)
	movl 	-20(%rbp), %eax
	movl 	-60(%rbp), %edx
	subl 	%edx, %eax
	movl 	%eax, -64(%rbp)
	movl 	-64(%rbp), %eax
	movq 	-64(%rbp), %rdi
	call	fibonacci
	movl	%eax, -68(%rbp)
	movl	-68(%rbp), %eax
	movl 	%eax, -56(%rbp)
	movl 	-36(%rbp), %eax
	movl 	-56(%rbp), %edx
	addl 	%edx, %eax
	movl 	%eax, -76(%rbp)
	movl	-76(%rbp), %eax
	movl 	%eax, -72(%rbp)
	movl	-72(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	fibonacci, .-fibonacci
	.globl	main
	.type	main, @function
main: 
.LFB1:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$68, %rsp

	movq 	$.LC0, -32(%rbp)
	movl 	-32(%rbp), %eax
	movq 	-32(%rbp), %rdi
	call	prints
	movl	%eax, -36(%rbp)
	leaq	-24(%rbp), %rax
	movq 	%rax, -44(%rbp)
	movl 	-44(%rbp), %eax
	movq 	-44(%rbp), %rdi
	call	readi
	movl	%eax, -48(%rbp)
	movl 	-24(%rbp), %eax
	movq 	-24(%rbp), %rdi
	call	fibonacci
	movl	%eax, -60(%rbp)
	movl	-60(%rbp), %eax
	movl 	%eax, -52(%rbp)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident		"Compiled by Mehul Kumar Nirala 16CS10034"
	.section	.note.GNU-stack,"",@progbits

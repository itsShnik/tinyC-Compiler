	.file	"test.c"
	.section	.rodata
.LC0:
	.string	"function call took place sucessfully "
.LC1:
	.string	"\nThe i-th fibonacci number is:"
.LC2:
	.string	"\n"
.LC3:
	.string	"Enter for i-th fibonacci number : "
.LC4:
	.string	"i: "
.LC5:
	.string	"\n"
.LC6:
	.string	"i-th fibonacci number is :"
.LC7:
	.string	"Fibonacci Iterative"
.LC8:
	.string	"\n"
.LC9:
	.string	"successfully returned from the function call Iterative\n"
	.text	
	.globl	FibonacciIterative
	.type	FibonacciIterative, @function
FibonacciIterative: 
.LFB0:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$120, %rsp
	movq	%rdi, -20(%rbp)
	movq 	$.LC0, -28(%rbp)
	movl 	-28(%rbp), %eax
	movq 	-28(%rbp), %rdi
	call	prints
	movl	%eax, -32(%rbp)
	movl	$1, %eax
	movl 	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movl 	%eax, -36(%rbp)
	movl	$0, %eax
	movl 	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	movl 	%eax, -44(%rbp)
	movl	$1, %eax
	movl 	%eax, -56(%rbp)
	movl	-56(%rbp), %eax
	movl 	%eax, -52(%rbp)
.L2: 
	movl	-52(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl .L3
	jmp .L4
.L3: 
	movl	-36(%rbp), %eax
	movl 	%eax, -60(%rbp)
	movl 	-36(%rbp), %eax
	movl 	-44(%rbp), %edx
	addl 	%edx, %eax
	movl 	%eax, -68(%rbp)
	movl	-68(%rbp), %eax
	movl 	%eax, -36(%rbp)
	movl	-60(%rbp), %eax
	movl 	%eax, -44(%rbp)
	movl	$1, %eax
	movl 	%eax, -80(%rbp)
	movl 	-52(%rbp), %eax
	movl 	-80(%rbp), %edx
	addl 	%edx, %eax
	movl 	%eax, -84(%rbp)
	movl	-84(%rbp), %eax
	movl 	%eax, -52(%rbp)
	jmp .L2
.L4: 
	movq 	$.LC1, -92(%rbp)
	movl 	-92(%rbp), %eax
	movq 	-92(%rbp), %rdi
	call	prints
	movl	%eax, -96(%rbp)
	movl 	-36(%rbp), %eax
	movq 	-36(%rbp), %rdi
	call	printi
	movl	%eax, -104(%rbp)
	movq 	$.LC2, -108(%rbp)
	movl 	-108(%rbp), %eax
	movq 	-108(%rbp), %rdi
	call	prints
	movl	%eax, -112(%rbp)
	movl	-36(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	FibonacciIterative, .-FibonacciIterative
	.globl	FibonacciRecursive
	.type	FibonacciRecursive, @function
FibonacciRecursive: 
.LFB1:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$72, %rsp
	movq	%rdi, -20(%rbp)
	movl	$1, %eax
	movl 	%eax, -24(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-24(%rbp), %eax
	je .L9
	jmp .L7
	jmp .L8
.L7: 
	movl	$2, %eax
	movl 	%eax, -28(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-28(%rbp), %eax
	je .L9
	jmp .L10
.L8: 
	jmp .L10
.L9: 
	movl	$1, %eax
	movl 	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	jmp .L10
.L10: 
	movl	$1, %eax
	movl 	%eax, -40(%rbp)
	movl 	-20(%rbp), %eax
	movl 	-40(%rbp), %edx
	subl 	%edx, %eax
	movl 	%eax, -44(%rbp)
	movl 	-44(%rbp), %eax
	movq 	-44(%rbp), %rdi
	call	FibonacciRecursive
	movl	%eax, -48(%rbp)
	movl	$2, %eax
	movl 	%eax, -52(%rbp)
	movl 	-20(%rbp), %eax
	movl 	-52(%rbp), %edx
	subl 	%edx, %eax
	movl 	%eax, -56(%rbp)
	movl 	-56(%rbp), %eax
	movq 	-56(%rbp), %rdi
	call	FibonacciRecursive
	movl	%eax, -60(%rbp)
	movl 	-48(%rbp), %eax
	movl 	-60(%rbp), %edx
	addl 	%edx, %eax
	movl 	%eax, -64(%rbp)
	movl	-64(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	FibonacciRecursive, .-FibonacciRecursive
	.globl	main
	.type	main, @function
main: 
.LFB2:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$128, %rsp

	movq 	$.LC3, -28(%rbp)
	movl 	-28(%rbp), %eax
	movq 	-28(%rbp), %rdi
	call	prints
	movl	%eax, -32(%rbp)
	leaq	-40(%rbp), %rax
	movq 	%rax, -48(%rbp)
	movl 	-48(%rbp), %eax
	movq 	-48(%rbp), %rdi
	call	readi
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	movl 	%eax, -36(%rbp)
	movq 	$.LC4, -60(%rbp)
	movl 	-60(%rbp), %eax
	movq 	-60(%rbp), %rdi
	call	prints
	movl	%eax, -64(%rbp)
	movl 	-36(%rbp), %eax
	movq 	-36(%rbp), %rdi
	call	printi
	movl	%eax, -72(%rbp)
	movq 	$.LC5, -76(%rbp)
	movl 	-76(%rbp), %eax
	movq 	-76(%rbp), %rdi
	call	prints
	movl	%eax, -80(%rbp)
	movq 	$.LC6, -84(%rbp)
	movq 	$.LC7, -88(%rbp)
	movl 	-88(%rbp), %eax
	movq 	-88(%rbp), %rdi
	call	prints
	movl	%eax, -92(%rbp)
	movq 	$.LC8, -96(%rbp)
	movl 	-96(%rbp), %eax
	movq 	-96(%rbp), %rdi
	call	prints
	movl	%eax, -100(%rbp)
	movl 	-36(%rbp), %eax
	movq 	-36(%rbp), %rdi
	call	FibonacciIterative
	movl	%eax, -112(%rbp)
	movl	-112(%rbp), %eax
	movl 	%eax, -104(%rbp)
	movq 	$.LC9, -120(%rbp)
	movl 	-120(%rbp), %eax
	movq 	-120(%rbp), %rdi
	call	prints
	movl	%eax, -124(%rbp)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident		"Compiled by Mehul Kumar Nirala 16CS10034"
	.section	.note.GNU-stack,"",@progbits

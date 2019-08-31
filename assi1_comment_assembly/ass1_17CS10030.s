#################################################
# Name : Nikhil Shah														#
# Roll No. 17CS10030														#
# Assignment 1 : Annotating assembly submission #
############################################### #



###############################Program File###########################################
#include <stdio.h>
#define DIM 20

#void ReadMat(int n, int data[][DIM]);

#void TransMat(int n, int data[][DIM]);

#int VectMult(int n, int firstMat[], int secondMat[]);

#void MatMult(int n, int firstMat[][DIM], int secondMat[][DIM], int M[][DIM]);

#int main()
#{
#		int n, i, j;
#		int A[DIM][DIM],B[DIM][DIM],C[DIM][DIM];
		
#		printf("Enter the dimension of a square matrix: ");
#		scanf("%d", &n);
		
#		printf("Enter the first matix (row-major): ");
#		ReadMat(n, A);
		
#		printf("Enter the second matix (row-major): ");
#		ReadMat(n, B);
		
#		MatMult(n, A, B, C);
		
#		printf("\nThe result matrix:\n");
		
#		for(i=0; i<n; ++i){
#				for(j=0; j<n; ++j) {
#						printf("%d ", C[i][j]);
#				}
#				printf("\n");
#		}
#		
#		return 0;
#}
#void ReadMat(int n, int data[][DIM])
#{
#		int i, j;
#		for(i=0; i<n; ++i) {
#				for(j=0; j<n; ++j) {
#						scanf("%d", &data[i][j]);
#				}
#		}
#}


#void TransMat(int n, int data[][DIM])
#{
#		int i, j, t;
#		for(i=0; i<n; i++) {
#				for(j=0; j<i; j++) {
#						t = data[i][j];
#						data[i][j] = data[j][i];
#						data[j][i] = t;
#				}
#		}
#		printf("\nThe transpose of the second matrix:\n");
#		for(i=0; i<n; ++i){
#				for(j=0; j<n; ++j) {
#						printf("%d ", data[i][j]);
#				}
#				printf("\n");
#		}
#}

#int VectMult(int n, int firstMat[], int secondMat[])
#{
#		int i, result = 0;
#		for(i=0; i<n; i++) {
#				result+=firstMat[i]*secondMat[i];
#		}
#		return result;
#}

#void MatMult(int n, int firstMat[][DIM], int secondMat[][DIM], int M[][DIM])
#{
#		int i, j;
#		TransMat(n, secondMat);
#		for(i=0; i<n; i++) {
#				for(j=0; j<n; j++) {
#						M[i][j] = VectMult(n, &firstMat[i][0], &secondMat[j][0]);
#				}
#		}
#}
#################################################################################################




		.file		"asgn1.c"     										# name of the file
		.section		.rodata 								# read-only data section 
		.align 8												# align with 8 byte boundary
.LC0:																# label of f-string-1st printf
		.string		"Enter the dimension of a square matrix: "		
.LC1:																# label of f-string scanf
		.string		"%d"
		.align 8												# align with 8 byte boundary again
.LC2:																# label of f-string 2nd printf
		.string		"Enter the first matix (row-major): "				
		.align 8												# align with 8 byte bounday again
.LC3:																# label of f-string 3rd printf
		.string		"Enter the second matix (row-major): "				
.LC4:																# label of f-string 4th printf
		.string		"\nThe result matrix:"								
.LC5:																# label of f-string printf to print the integer
		.string		"%d "
		.text														# code starts
		.globl		main												# main is a global name
		.type		main, @function										# main is a function
main:																# main starts
.LFB0:
		.cfi_startproc												# call frame information
		pushq		%rbp												# save old base pointer
		.cfi_def_cfa_offset 16										
		.cfi_offset 6, -16
		movq		%rsp, %rbp										# rbp <-- rsp set new stack pointer
		.cfi_def_cfa_register 6
		subq		$4832, %rsp										# create space for matrices A, B, C
		movq		%fs:40, %rax										# rax <-- fs:40
		movq		%rax, -8(%rbp)										# (rbp - 8) <-- rax
		xorl		%eax, %eax										# set eax to zero
		movl		$.LC0, %edi 										# edi <-- start of the string to enter the dim of sq matrix
		movl		$0, %eax										# eax <-- 0, return
		call		printf												# call printf function
		leaq		-4828(%rbp), %rax								# rax <-- (rbp - 4828), move the address only
		movq		%rax, %rsi										# rsi <-- rax
		movl		$.LC1, %edi										# edi <-- start of the format string, %d for scanf
		movl		$0, %eax										# eax <-- 0, default return value set to zero
		call		__isoc99_scanf										# call scanf, read value of n, return value is in eax
		movl		$.LC2, %edi										# edi <-- start of the string to enter the first matrix
		movl		$0, %eax										# eax <-- 0, set default return tp 0
		call		printf												# call printf
		movl		-4828(%rbp), %eax								# eax <-- (rbp - 4828)
		leaq		-4816(%rbp), %rdx								# rdx <-- (rbp - 4816)
		movq		%rdx, %rsi										# rsi <-- rdx
		movl		%eax, %edi										# edi <-- eax
		call		ReadMat												# call ReadMat function
		movl		$.LC3, %edi										# edi <-- start of the format string, to enter second matrix
		movl		$0, %eax										# eax <-- 0, default return set  to 0
		call		printf												# call printf, to print string
		movl		-4828(%rbp), %eax								# eax <-- (rbp - 4828)
		leaq		-3216(%rbp), %rdx								# rdx <-- (rbp - 3216) 
		movq		%rdx, %rsi										# rsi <-- rdx, second arg to the func ReadMat
		movl		%eax, %edi										# edi <-- eax, first arg to the func
		call		ReadMat												# call to the func ReadMat
		movl		-4828(%rbp), %eax								# eax <-- (rbp - 4828)
		leaq		-1616(%rbp), %rcx								# rcx <-- (rbp - 1616), moves the address into rcx
		leaq		-3216(%rbp), %rdx								# rdx <-- (rbp - 3216), moves the address into rdx
		leaq		-4816(%rbp), %rsi								# rsi <-- (rbp - 4816), moves the address into rsi
		movl		%eax, %edi										# edi <-- eax
		call		MatMult												# call the func MatMult
		movl		$.LC4, %edi										# edi <-- start of the format string, the result matrix
		call		puts												# call the function puts
		movl		$0, -4824(%rbp)										# (rbp - 4824), change in the memory (set variable to zero)
		jmp		.L2												# jumpt to L2 
.L5:
		movl		$0, -4820(%rbp)										# (rbp - 4820) <-- 0, change in the memory
		jmp		.L3												# jump to L3, to the start of the loop
.L4:
		movl		-4820(%rbp), %eax 								# eax <-- (rbp - 4820)
		movslq		%eax, %rcx										# rcx <-- eax, moves 32 bit source into 64 bit dest.
		movl		-4824(%rbp), %eax								# eax <-- (rbp - 4824)
		movslq		%eax, %rdx										# rdx <-- eax
		movq		%rdx, %rax										# rax <-- rdx										
		salq		$2, %rax										# left shift rax by 2 bits
		addq		%rdx, %rax										# rax <-- rax + rdx 
		salq		$2, %rax										# left shift rax by 2 bits
		addq		%rcx, %rax 										# rax <-- rax + rcx
		movl		-1616(%rbp,%rax,4), %eax						# eax <-- (rbp  4 * rax - 1616)
		movl		%eax, %esi										# esi <-- eax 
		movl		$.LC5, %edi										# edi <-- start of the format string
		movl		$0, %eax										# eax <-- 0, eax is the loop counter
		call		printf												# call printf
		addl		$1, -4820(%rbp)										# (rbp - 4820) += 1, add immediate 
.L3:
		movl		-4828(%rbp), %eax								# eax <-- (rbp -4828)
		cmpl		%eax, -4820(%rbp)								# compares eax and rbp - 4820, i < n in c ; the loop condition
		jl		.L4												# if (rbp -4820) < eax jump to L4, to start the inner loop
		movl		$10, %edi										# edi <-- 10
		call		putchar												# call putchar, to print the required
		addl		$1, -4824(%rbp)										# rbp - 4824 counter is incremented by one
.L2:
		movl		-4828(%rbp), %eax								# eax <-- rbp - 4828
		cmpl		%eax, -4824(%rbp)								# compare rbp - 4828 with eax, condition for loop
		jl		.L5												# if its less than jump to L5
		movl		$0, %eax										# eax <-- 0, loop counter
		movq		-8(%rbp), %rcx										# rcx <-- rbp - 8, moving 64 bit data 
		xorq		%fs:40, %rcx										# check if it is equal to the original value 
		je		.L7												# if equal, go to L7 , for leave instructions
		call		__stack_chk_fail								# call __stack_chk_fail
.L7:
		leave
		.cfi_def_cfa 7, 8
		ret														# return
		.cfi_endproc												# call frame info, end process
.LFE0:
		.size		main, .-main										 
		.globl		ReadMat												# ReadMat is a global name
		.type		ReadMat, @function								# ReadMat is a function
ReadMat:														# start function ReadMat
.LFB1:
		.cfi_startproc										 		# call frame info, start process		
		pushq		%rbp												# push the old base pointer
		.cfi_def_cfa_offset 16
		.cfi_offset 6, -16
		movq		%rsp, %rbp										# rbp <-- rsp, set new stack pointer 
		.cfi_def_cfa_register 6
		subq		$32, %rsp										# rsp <-- rsp - 32, add 32 bytes of space to stack
		movl		%edi, -20(%rbp)										# rbp - 20 <-- edi, first arg i.e, n
		movq		%rsi, -32(%rbp)										# rbp - 32 <-- rsi , second arg i.e, matrix "data"
		movl		$0, -8(%rbp)										# rbp - 8 <-- 0, loop counter starts
		jmp		.L9												# jump to L9, loop starts
.L12:
		movl		$0, -4(%rbp)										# rbp - 4 <-- 0, inner loop counter
		jmp		.L10												# jump to L10
.L11:
		movl		-8(%rbp), %eax										# eax <-- rbp - 8
		movslq		%eax, %rdx										# rdx <-- eax, 32 bit to 64 bit		
		movq		%rdx, %rax										# rax <-- rdx
		salq		$2, %rax										# shift left rax by 2 bits i.e, multiply by 4
		addq		%rdx, %rax										# rax <-- rax + rdx
		salq		$4, %rax										# shift left rax by 4 bits
		movq		%rax, %rdx										# rdx <-- rax
		movq		-32(%rbp), %rax										# rax <-- rbp - 32, allocate 32 bytes more
		addq		%rax, %rdx										# rdx <-- rdx + rax
		movl		-4(%rbp), %eax										# eax <-- rbp - 4
		cltq
		salq		$2, %rax										# shift rax by 2 bits on left 
		addq		%rdx, %rax										# rax <-- rdx + rax
		movq		%rax, %rsi										# rsi <-- rax 
		movl		$.LC1, %edi										# edi <== to the start of the format string "%d"
		movl		$0, %eax										# eax <-- 0, set to read int, default value 0
		call		__isoc99_scanf										# call func scanf, read the matrix entry
		addl		$1, -4(%rbp)										# rbp - 4 incremented by 1
.L10:
		movl		-4(%rbp), %eax										# eax <-- rbp - 4
		cmpl		-20(%rbp), %eax										# compare eax with rbp - 20, inner loop condition
		jl		.L11												# if less, jump to L11, continue loop
		addl		$1, -8(%rbp)
.L9:
		movl		-8(%rbp), %eax										# eax <-- rbp - 8
		cmpl		-20(%rbp), %eax										# compare eax with rbp - 20, outer loop condition
		jl		.L12												# if less, jump to L12, move to inner loop
		nop
		leave														# leave instruction to pop stack pointer or end function
		.cfi_def_cfa 7, 8
		ret														# return
		.cfi_endproc												# call frame info, end process
.LFE1:
		.size		ReadMat, .-ReadMat
		.section		.rodata										# read-only data section
		.align 8												# align with 8 byte boundary
.LC6:
		.string		"\nThe transpose of the second matrix:"				# format string
		.text
		.globl		TransMat										# TransMat is a global name
		.type		TransMat, @function								# TransMat is a function
TransMat:
.LFB2:
		.cfi_startproc												# call frame info, start process
		pushq		%rbp												# push the old base pointer
		.cfi_def_cfa_offset 16
		.cfi_offset 6, -16
		movq		%rsp, %rbp										# rbp <-- rsp, move to the new stack pointer
		.cfi_def_cfa_register 6
		subq		$32, %rsp										# rsp <-- rsp - 32, shift it by 32 bytes to allocate space
		movl		%edi, -20(%rbp)										# rbp - 20 <-- edi, the first arg to TransMat func
		movq		%rsi, -32(%rbp)										# rbp - 32 <-- rsi, second arg to the func
		movl		$0, -12(%rbp)										# rbp - 12 <-- 0
		jmp		.L14												# jump to L14, to start the loop
.L17:
		movl		$0, -8(%rbp)										# rbp - 8 <-- 0
		jmp		.L15												# jump to L15, part of loop
.L16:																				# inner loop
		movl		-12(%rbp), %eax										# eax <-- rbp - 12
		movslq		%eax, %rdx										# rdx <-- eax
		movq		%rdx, %rax										# rax <-- rdx
		salq		$2, %rax										# shift rax by 2 bits on the left
		addq		%rdx, %rax										# rax <-- rax + rdx
		salq		$4, %rax										# left shift rax by 4 bits
		movq		%rax, %rdx										# rdx <-- rax
		movq		-32(%rbp), %rax										# rax <-- rbp - 32
		addq		%rax, %rdx										# rdx <-- rax + rdx, perform arithmatic ops
		movl		-8(%rbp), %eax										# eax <-- rbp - 8		
		cltq
		movl		(%rdx,%rax,4), %eax								# eax <-- 4 * rax + rdx
		movl		%eax, -4(%rbp)										# rbp - 4 <-- eax
		movl		-12(%rbp), %eax										# eax <-- rbp - 12
		movslq		%eax, %rdx										# rdx <-- eax
		movq		%rdx, %rax										# rax <-- rdx
		salq		$2, %rax										# left shift rax by 2 bits
		addq		%rdx, %rax										# rax <-- rax + rdx
		salq		$4, %rax										# left shift rax by 4						
		movq		%rax, %rdx										# rdx <-- rax
		movq		-32(%rbp), %rax										# rax <-- rbp - 32
		leaq		(%rdx,%rax), %rcx								# rcx <-- rax + rdx, moving the address only
		movl		-8(%rbp), %eax										# eax <-- rbp - 8
		movslq		%eax, %rdx										# rdx <-- eax
		movq		%rdx, %rax										# rax <-- rdx
		salq		$2, %rax										# left rax by 2
		addq		%rdx, %rax										# rax <-- rdx + rax
		salq		$4, %rax										# left shift by 4 bits
		movq		%rax, %rdx										# rdx <-- rax
		movq		-32(%rbp), %rax										# rax <-- rbp - 32
		addq		%rax, %rdx										# rdx <-- rdx + rax
		movl		-12(%rbp), %eax										# eax <-- rbp - 12
		cltq
		movl		(%rdx,%rax,4), %edx								# edx <-- 4 * rax + rdx
		movl		-8(%rbp), %eax										# eax <-- rbp - 8
		cltq
		movl		%edx, (%rcx,%rax,4)								# (4 * rax + rcx) <-- edx
		movl		-8(%rbp), %eax										# eax <-- rbp - 8
		movslq		%eax, %rdx										# rdx <-- eax
		movq		%rdx, %rax										# rax <-- rdx
		salq		$2, %rax										# left shift 2 bits
		addq		%rdx, %rax										# rax <-- rax + rdx
		salq		$4, %rax										# left shift rax by 4
		movq		%rax, %rdx										# rdx <-- rax
		movq		-32(%rbp), %rax										# rax <-- rbp - 32
		leaq		(%rdx,%rax), %rcx								# rcx <-- rax + rdx , copyin the address
		movl		-12(%rbp), %eax										# eax <-- rbp - 12
		cltq
		movl		-4(%rbp), %edx										# edx <-- rbp - 4
		movl		%edx, (%rcx,%rax,4)								# (4 * rax + rcx ) <-- edx, copying the value from the memory
		addl		$1, -8(%rbp)										# (rbp - 8) incremented by 1, inner loop ends with incrementing counter
.L15:
		movl		-8(%rbp), %eax										# eax <-- rbp - 8
		cmpl		-12(%rbp), %eax										# compare eax with rbp - 12, loop condition
		jl		.L16												# if less, jump to L16, continue
		addl		$1, -12(%rbp)										# (rbp - 12) incremented by 1
.L14:
		movl		-12(%rbp), %eax										# eax <-- rbp - 12
		cmpl		-20(%rbp), %eax										# compare eax with rbp - 20
		jl		.L17												# if less, jump to L17
		movl		$.LC6, %edi										# edi <-- start of the string, the transpose of the second matrix
		call		puts												# call puts
		movl		$0, -12(%rbp)										# rbp - 12 <-- 0
		jmp		.L18												# jump to L18
.L21:
		movl		$0, -8(%rbp)										# (rbp - 8) <-- 0
		jmp		.L19												# jump to L19
.L20:
		movl		-12(%rbp), %eax										# eax <-- rbp - 12
		movslq		%eax, %rdx										# rdx <-- eax
		movq		%rdx, %rax										# rax <-- rdx
		salq		$2, %rax										# left shift rax by 2
		addq		%rdx, %rax										# rax <-- rax + rdx
		salq		$4, %rax										# left shift rax by 4
		movq		%rax, %rdx										# rdx <-- rax
		movq		-32(%rbp), %rax										# rax <-- rbp - 12
		addq		%rax, %rdx										# rdx <-- rax + rdx
		movl		-8(%rbp), %eax										# eax <-- rbp - 8
		cltq
		movl		(%rdx,%rax,4), %eax								# eax <-- 4 * rax + rdx
		movl		%eax, %esi										# esi <-- eax
		movl		$.LC5, %edi										# edi <-- start of the format string, %d to print the number
		movl		$0, %eax										# eax <-- 0, default return value
		call		printf												# call printf
		addl		$1, -8(%rbp)										# rbp - 8 is incremented by 1
.L19:
		movl		-8(%rbp), %eax										# eax <-- rbp - 8
		cmpl		-20(%rbp), %eax										# compare eax with rbp - 20
		jl		.L20												# if less, jump to L20, start of the loop
		movl		$10, %edi										# edi <-- 10
		call		putchar												# call the func putchar, for printing the string
		addl		$1, -12(%rbp)										# (rbp - 12) incremented by 1
.L18:
		movl		-12(%rbp), %eax										# eax <-- rbp - 12
		cmpl		-20(%rbp), %eax										# compare eax with rbp - 20
		jl		.L21												# if less, jump to L21
		nop
		leave														# leave, to end the function
		.cfi_def_cfa 7, 8
		ret														# return 
		.cfi_endproc												# call frame info, end process
.LFE2:
		.size		TransMat, .-TransMat
		.globl		VectMult										# VectMult is a global name
		.type		VectMult, @function								# VectMult is a function
VectMult:
.LFB3:
		.cfi_startproc												# call frame info, start process
		pushq		%rbp												# push the old stack pointer
		.cfi_def_cfa_offset 16
		.cfi_offset 6, -16
		movq		%rsp, %rbp										# rbp <-- rsp, move to the new stack pointer 
		.cfi_def_cfa_register 6
		movl		%edi, -20(%rbp)										# rbp - 20 <-- edi, first arg to the func, integer n
		movq		%rsi, -32(%rbp)										# rbp - 32 <-- rsi, the second argument of the funcion, firstMat
		movq		%rdx, -40(%rbp)										# rbp - 40 <--  rdx, the third arg to the func, secondMat
		movl		$0, -4(%rbp)										# set rbp - 40 to 0
		movl		$0, -8(%rbp)										# rbp - 8  <-- 0
		jmp		.L23												# jump to L23, to start the loop
.L24:																# execute the command to multiply and store result in var result
		movl		-8(%rbp), %eax										# eax <-- rbp - 8
		cltq
		leaq		0(,%rax,4), %rdx								# rdx <-- 4 * rax 
		movq		-32(%rbp), %rax										# rax <-- rbp - 32
		addq		%rdx, %rax										# rax <-- rax + rdx
		movl		(%rax), %edx										# edx <-- rax
		movl		-8(%rbp), %eax										# eax <-- rbp - 8
		cltq
		leaq		0(,%rax,4), %rcx								# rcx <-- 4* rax, moving the address
		movq		-40(%rbp), %rax										# rax <-- rbp - 40
		addq		%rcx, %rax										# rax <-- rax + rcx
		movl		(%rax), %eax										# eax <-- rax
		imull		%edx, %eax										# eax <-- edx
		addl		%eax, -4(%rbp)										# rbp - 4 <-- rbp -4 + eax 
		addl		$1, -8(%rbp)										# increment rbp by 1
.L23:
		movl		-8(%rbp), %eax										# eax <-- rbp - 8
		cmpl		-20(%rbp), %eax										# compare eax with rbp - 20, loop condition
		jl		.L24												# if less. jump to L24
		movl		-4(%rbp), %eax										# eax <-- rbp - 24
		popq		%rbp										  		# Pop the base pointer		
		.cfi_def_cfa 7, 8
		ret														# return
		.cfi_endproc												# call frame info, end process
.LFE3:
		.size		VectMult, .-VectMult
		.globl		MatMult												# MatMult is a global name
		.type		MatMult, @function								# MatMult is a function
MatMult:
.LFB4:
		.cfi_startproc												# start the stack frame
		pushq		%rbp												# push the stack base pointer
		.cfi_def_cfa_offset 16
		.cfi_offset 6, -16
		movq		%rsp, %rbp										# rbp <-- rsp, move to the new stack pointer
		.cfi_def_cfa_register 6
		pushq		%rbx												# push the stack pointer
		subq		$56, %rsp										# rsp <-- rsp - 56
		.cfi_offset 3, -24
		movl		%edi, -36(%rbp)										# (rbp - 36) <-- edi, the first arg to the func
		movq		%rsi, -48(%rbp)										# (rbp - 48) <-- rsi, the second arg to the func
		movq		%rdx, -56(%rbp)										# (rbp - 56) <-- rdx, the third arg to the func
		movq		%rcx, -64(%rbp)										# (rbp - 64) <-- rcx, the fourth arg to the func
		movq		-56(%rbp), %rdx										# rdx <-- rbp - 56
		movl		-36(%rbp), %eax										# eax <-- rbp - 36
		movq		%rdx, %rsi										# rsi <-- rdx
		movl		%eax, %edi										# edi <-- eax
		call		TransMat										# call the func TransMat, to take the transpose
		movl		$0, -24(%rbp)										# (rbp - 24) <-- 0
		jmp		.L27 												# jump to L27, the beginning of the loop
.L30:
		movl		$0, -20(%rbp)										# (rbp - 20) <-- 0
		jmp		.L28												# jump to L28
.L29:
		movl		-24(%rbp), %eax										# eax <-- rbp - 24
		movslq		%eax, %rdx										# rdx <-- eax 
		movq		%rdx, %rax										# rax <-- rdx
		salq		$2, %rax										# left shift rax by 2 bits
		addq		%rdx, %rax										# rax <-- rax + rdx
		salq		$4, %rax										# left shift rax by 4
		movq		%rax, %rdx										# rdx <-- rax
		movq		-64(%rbp), %rax										# rax <-- rbp - 64
		leaq		(%rdx,%rax), %rbx								# rbx <-- rax + rdx, moving the address only
		movl		-20(%rbp), %eax										# eax <-- rbp - 20
		movslq		%eax, %rdx										# rdx <-- eax
		movq		%rdx, %rax										# rax <-- rdx
		salq		$2, %rax										# left shift rax by 2
		addq		%rdx, %rax										# rax <-- rax + rdx
		salq		$4, %rax										# left shift rax by 4 
		movq		%rax, %rdx										# rdx <-- rax 
		movq		-56(%rbp), %rax										# rax <-- rbp - 56
		addq		%rdx, %rax										# rax <-- rax + rdx
		movq		%rax, %rsi										# rsi <-- rax
		movl		-24(%rbp), %eax										# eax <-- rbp - 24
		movslq		%eax, %rdx										# rdx <-- eax
		movq		%rdx, %rax										# rax <-- rdx
		salq		$2, %rax										# left shift rax by 2
		addq		%rdx, %rax										# rax <-- rdx
		salq		$4, %rax										# left shift rax by 4
		movq		%rax, %rdx										# rdx <-- rax
		movq		-48(%rbp), %rax										# rax <-- rbp - 48
		addq		%rdx, %rax										# rax <-- rdx + rax
		movq		%rax, %rcx										# rcx <-- rax
		movl		-36(%rbp), %eax										# eax <-- rbp - 36
		movq		%rsi, %rdx										# rdx <-- rsi
		movq		%rcx, %rsi										# rsi <-- rcx
		movl		%eax, %edi										# edi <-- eax
		call		VectMult										# call the func VectMult, to calculate the product of vectors
		movl		%eax, %edx										# edx <-- eax
		movl		-20(%rbp), %eax										# eax <-- rbp - 20
		cltq
		movl		%edx, (%rbx,%rax,4)								# (4 * rax + rbx) <-- edx
		addl		$1, -20(%rbp)										# (rbp - 20) incremented by 1
.L28:
		movl		-20(%rbp), %eax										# eax <-- eax + (rbp - 20)
		cmpl		-36(%rbp), %eax										# compare eax with rbp - 36
		jl		.L29												# if less, jump to L29
		addl		$1, -24(%rbp)										# (rbp - 24) incremented by 1
.L27:
		movl		-24(%rbp), %eax										# eax <-- rbp - 24
		cmpl		-36(%rbp), %eax										# compare eax with rbp - 36
		jl		.L30 												# if less, jump to L30
		nop
		addq		$56, %rsp										# rsp <-- rsp + 56, freeing 56 bytes of memory
		popq		%rbx												# pop the stack pointer
		popq		%rbp												# pop the stack pointer
		.cfi_def_cfa 7, 8
		ret
		.cfi_endproc												# call frame info, end process
.LFE4:
		.size		MatMult, .-MatMult
		.ident		"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609" # GCC and System config
		.section		.note.GNU-stack,"",@progbits

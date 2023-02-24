	.text 				# this file contains instruction code
.globl myfunc				# myfunc is the name of the function
	# .type	myfunc,@function
myfunc:					# starts the function
	pushl	%ebp			# function preamble:
	movl	%esp, %ebp		# first 3 instructions set up as stack
	subl	$16, %esp

	# A programmer adds specific IA32 instructions
        # here that allocate stack space for any local variables
        # and then implements code using parameters and locals to
        # perform the functionality of the myfunc function
        #
        # the return value should be stored in %eax before returning
	
	leave # function return code
	ret
	
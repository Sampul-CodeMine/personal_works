	.text
	.syntax unified
	.eabi_attribute	67, "2.09"	@ Tag_conformance
	.eabi_attribute	6, 10	@ Tag_CPU_arch
	.eabi_attribute	7, 65	@ Tag_CPU_arch_profile
	.eabi_attribute	8, 1	@ Tag_ARM_ISA_use
	.eabi_attribute	9, 2	@ Tag_THUMB_ISA_use
	.fpu	neon
	.eabi_attribute	34, 1	@ Tag_CPU_unaligned_access
	.eabi_attribute	15, 1	@ Tag_ABI_PCS_RW_data
	.eabi_attribute	16, 1	@ Tag_ABI_PCS_RO_data
	.eabi_attribute	17, 2	@ Tag_ABI_PCS_GOT_use
	.eabi_attribute	20, 1	@ Tag_ABI_FP_denormal
	.eabi_attribute	21, 0	@ Tag_ABI_FP_exceptions
	.eabi_attribute	23, 3	@ Tag_ABI_FP_number_model
	.eabi_attribute	24, 1	@ Tag_ABI_align_needed
	.eabi_attribute	25, 1	@ Tag_ABI_align_preserved
	.eabi_attribute	38, 1	@ Tag_ABI_FP_16bit_format
	.eabi_attribute	18, 4	@ Tag_ABI_PCS_wchar_t
	.eabi_attribute	26, 2	@ Tag_ABI_enum_size
	.eabi_attribute	14, 0	@ Tag_ABI_PCS_R9_use
	.file	"helloworld.c"
	.globl	main                            @ -- Begin function main
	.p2align	2
	.type	main,%function
	.code	32                              @ @main
main:
	.fnstart
@ %bb.0:
	.save	{r11, lr}
	push	{r11, lr}
	.setfp	r11, sp
	mov	r11, sp
	.pad	#8
	sub	sp, sp, #8
	movw	r0, #0
	str	r0, [sp, #4]
	ldr	r0, .LCPI0_1
.LPC0_1:
	add	r0, pc, r0
	bl	printf
	movw	r0, #32
	bl	myfunc
	str	r0, [sp]
	ldr	r1, [sp]
	ldr	r0, .LCPI0_0
.LPC0_0:
	add	r0, pc, r0
	bl	printf
	movw	r0, #0
	mov	sp, r11
	pop	{r11, pc}
	.p2align	2
@ %bb.1:
.LCPI0_0:
	.long	.L.str.1-(.LPC0_0+8)
.LCPI0_1:
	.long	.L.str-(.LPC0_1+8)
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cantunwind
	.fnend
                                        @ -- End function
	.type	.L.str,%object                  @ @.str
	.section	.rodata.str1.1,"aMS",%progbits,1
.L.str:
	.asciz	"Hellow World\n"
	.size	.L.str, 14

	.type	.L.str.1,%object                @ @.str.1
.L.str.1:
	.asciz	"myfunc(32) is %d\n"
	.size	.L.str.1, 18

	.ident	"clang version 15.0.7"
	.section	".note.GNU-stack","",%progbits

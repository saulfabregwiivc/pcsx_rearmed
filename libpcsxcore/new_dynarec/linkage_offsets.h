
#define PTRSZ __SIZEOF_POINTER__

#define LO_next_interupt	64
#define LO_cycle_count		(LO_next_interupt + 4)
#define LO_last_count		(LO_cycle_count + 4)
#define LO_pending_exception	(LO_last_count + 4)
#define LO_stop			(LO_pending_exception + 4)
#define LO_branch_target	(LO_stop + 4)
#define LO_address		(LO_branch_target + 4)
#define LO_align0		(LO_address + 4)
#define LO_psxRegs		(LO_align0 + 4)
#define LO_reg			(LO_psxRegs)
#define LO_lo			(LO_reg + 128)
#define LO_hi			(LO_lo + 4)
#define LO_reg_cop0		(LO_hi + 4)
#define LO_reg_cop2d		(LO_reg_cop0 + 128)
#define LO_reg_cop2c		(LO_reg_cop2d + 128)
#define LO_PC			(LO_reg_cop2c + 128)
#define LO_pcaddr		(LO_PC)
#define LO_code			(LO_PC + 4)
#define LO_cycle		(LO_code + 4)
#define LO_interrupt		(LO_cycle + 4)
#define LO_intCycle		(LO_interrupt + 4)
#define LO_gteBusyCycle		(LO_intCycle + 256)
#define LO_muldivBusyCycle	(LO_gteBusyCycle + 4)
#define LO_psxRegs_reserved	(LO_muldivBusyCycle + 4)
#define LO_psxRegs_end		(LO_psxRegs_reserved + 4*2)
#define LO_rcnts		(LO_psxRegs_end)
#define LO_rcnts_end		(LO_rcnts + 7*4*4)
#define LO_inv_code_start	(LO_rcnts_end)
#define LO_inv_code_end		(LO_inv_code_start + 4)
#define LO_mem_rtab		(LO_inv_code_end + 4)
#define LO_mem_wtab		(LO_mem_rtab + PTRSZ)
#define LO_psxH_ptr		(LO_mem_wtab + PTRSZ)
#define LO_zeromem_ptr		(LO_psxH_ptr + PTRSZ)
#define LO_invc_ptr		(LO_zeromem_ptr + PTRSZ)
#define LO_scratch_buf_ptr	(LO_invc_ptr + PTRSZ)
#define LO_saved_lr		(LO_scratch_buf_ptr + PTRSZ)
#define LO_align1		(LO_saved_lr + PTRSZ)
#define LO_mini_ht		(LO_align1 + PTRSZ)
#define LO_restore_candidate	(LO_mini_ht + PTRSZ*32*2)
#define LO_dynarec_local_size	(LO_restore_candidate + 512)

#define LO_cop2_to_scratch_buf	(LO_scratch_buf_ptr - LO_reg_cop2d)

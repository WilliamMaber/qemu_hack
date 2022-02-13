void glue_mmu_helper_dfault(uint64_t address, uint64_t context, int mmu_idx, uint32_t tl);
void glue_mmu_helper_dprot(uint64_t address, uint64_t context, int mmu_idx, uint32_t tl);
void glue_mmu_helper_dmiss(uint64_t address, uint64_t context);
void glue_mmu_helper_tfault(uint64_t address, uint64_t context);
void glue_mmu_helper_tmiss(uint64_t address, uint64_t context);
void glue_mmu_helper_get_phys_addr_code(uint32_t tl, int mmu_idx, uint64_t prim_context, uint64_t sec_context, uint64_t address);
void glue_mmu_helper_get_phys_addr_data(uint32_t tl, int mmu_idx, uint64_t prim_context, uint64_t sec_context, uint64_t address);
void glue_mmu_helper_mmu_fault(uint64_t address, uint64_t paddr, int mmu_idx, uint32_t tl, uint64_t prim_context, uint64_t sec_context);
void glue_sun4m_cpu_interrupt(unsigned int level);
void glue_sun4m_cpu_reset_interrupt(unsigned int level);
void glue_int_helper_set_softint(uint32_t softint);
void glue_int_helper_clear_softint(uint32_t softint);
void glue_int_helper_write_softint(uint32_t softint);
void glue_sparc64_cpu_check_irqs_reset_irq(int intno);
void glue_sparc64_cpu_check_irqs_noset_irq(uint32_t tl, uint32_t tt, int intno);
void glue_sparc64_cpu_check_irqs_set_irq(unsigned int i, int old, int new);
void glue_sparc64_cpu_check_irqs_disabled(uint32_t pil, uint32_t pil_in, uint32_t softint, int intno);
void glue_win_helper_gregset_error(uint32_t pstate);
void glue_win_helper_switch_pstate(uint32_t pstate_regs, uint32_t new_pstate_regs);
void glue_win_helper_no_switch_pstate(uint32_t new_pstate_regs);
void glue_win_helper_wrpil(uint32_t psrpil, uint32_t new_pil);
void glue_win_helper_done(uint32_t tl);
void glue_win_helper_retry(uint32_t tl);

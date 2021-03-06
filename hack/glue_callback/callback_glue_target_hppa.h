void glue_hppa_tlb_flush_ent(void *env, void *ent, uint64_t va_b, uint64_t va_e, uint64_t pa);
void glue_hppa_tlb_find_entry(void *env, void *ent, int valid, uint64_t va_b, uint64_t va_e, uint64_t pa);
void glue_hppa_tlb_find_entry_not_found(void *env, uint64_t addr);
void glue_hppa_tlb_get_physical_address(void *env, int ret, int prot, uint64_t addr, uint64_t phys);
void glue_hppa_tlb_fill_excp(void *env, uint64_t addr, int size, int type, int mmu_idx);
void glue_hppa_tlb_fill_success(void *env, uint64_t addr, uint64_t phys, int size, int type, int mmu_idx);
void glue_hppa_tlb_itlba(void *env, void *ent, uint64_t va_b, uint64_t va_e, uint64_t pa);
void glue_hppa_tlb_itlbp(void *env, void *ent, int access_id, int u, int pl2, int pl1, int type, int b, int d, int t);
void glue_hppa_tlb_ptlb(void *env);
void glue_hppa_tlb_ptlbe(void *env);
void glue_hppa_tlb_lpa_success(void *env, uint64_t addr, uint64_t phys);
void glue_hppa_tlb_lpa_failed(void *env, uint64_t addr);
void glue_hppa_tlb_probe(uint64_t addr, int level, int want);

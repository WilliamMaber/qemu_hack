void glue_riscv_trap(uint64_t hartid, bool async, uint64_t cause, uint64_t epc, uint64_t tval, const char *desc);
void glue_pmpcfg_csr_read(uint64_t mhartid, uint32_t reg_index, uint64_t val);
void glue_pmpcfg_csr_write(uint64_t mhartid, uint32_t reg_index, uint64_t val);
void glue_pmpaddr_csr_read(uint64_t mhartid, uint32_t addr_index, uint64_t val);
void glue_pmpaddr_csr_write(uint64_t mhartid, uint32_t addr_index, uint64_t val);
void glue_mseccfg_csr_read(uint64_t mhartid, uint64_t val);
void glue_mseccfg_csr_write(uint64_t mhartid, uint64_t val);

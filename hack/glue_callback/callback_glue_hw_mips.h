void glue_gt64120_read(uint64_t addr, uint64_t value);
void glue_gt64120_write(uint64_t addr, uint64_t value);
void glue_gt64120_read_intreg(const char *regname, unsigned size, uint64_t value);
void glue_gt64120_write_intreg(const char *regname, unsigned size, uint64_t value);
void glue_gt64120_isd_remap(uint64_t from_length, uint64_t from_addr, uint64_t to_length, uint64_t to_addr);

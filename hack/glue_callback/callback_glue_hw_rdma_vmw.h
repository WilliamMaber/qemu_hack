void glue_pvrdma_regs_read(uint64_t addr, uint64_t val);
void glue_pvrdma_regs_write(uint64_t addr, uint64_t val, const char *reg_name, const char *val_name);
void glue_pvrdma_uar_write(uint64_t addr, uint64_t val, const char *reg_name, const char *val_name, int val1, int val2);
void glue_pvrdma_map_to_pdir_host_virt(void *vfirst, void *vremaped);
void glue_pvrdma_map_to_pdir_next_page(int page_idx, void *vnext, void *vremaped);
void glue_pvrdma_exec_cmd(int cmd, int err);
void glue_pvrdma_ring_next_elem_read_no_data(char *ring_name);
void glue_pvrdma_post_cqe(uint32_t cq_handle, int notify, uint64_t wr_id, uint64_t qpn, uint32_t op_code, uint32_t status, uint32_t byte_len, uint32_t src_qp, uint32_t wc_flags, uint32_t vendor_err);

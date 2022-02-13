void glue_kvm_enable_cmma(int rc);
void glue_kvm_clear_cmma(int rc);
void glue_kvm_failed_cpu_state_set(int cpu_index, uint8_t state, const char *msg);
void glue_kvm_assign_subch_ioeventfd(int fd, uint32_t addr, bool assign, int datamatch);

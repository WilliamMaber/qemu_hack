void glue_kvm_ioctl(int type, void *arg);
void glue_kvm_vm_ioctl(int type, void *arg);
void glue_kvm_vcpu_ioctl(int cpu_index, int type, void *arg);
void glue_kvm_run_exit(int cpu_index, uint32_t reason);
void glue_kvm_device_ioctl(int fd, int type, void *arg);
void glue_kvm_failed_reg_get(uint64_t id, const char *msg);
void glue_kvm_failed_reg_set(uint64_t id, const char *msg);
void glue_kvm_init_vcpu(int cpu_index, unsigned long arch_cpu_id);
void glue_kvm_irqchip_commit_routes(void);
void glue_kvm_irqchip_add_msi_route(char *name, int vector, int virq);
void glue_kvm_irqchip_update_msi_route(int virq);
void glue_kvm_irqchip_release_virq(int virq);
void glue_kvm_set_ioeventfd_mmio(int fd, uint64_t addr, uint32_t val, bool assign, uint32_t size, bool datamatch);
void glue_kvm_set_ioeventfd_pio(int fd, uint16_t addr, uint32_t val, bool assign, uint32_t size, bool datamatch);
void glue_kvm_set_user_memory(uint32_t slot, uint32_t flags, uint64_t guest_phys_addr, uint64_t memory_size, uint64_t userspace_addr, int ret);
void glue_kvm_clear_dirty_log(uint32_t slot, uint64_t start, uint32_t size);
void glue_kvm_resample_fd_notify(int gsi);
void glue_kvm_dirty_ring_full(int id);
void glue_kvm_dirty_ring_reap_vcpu(int id);
void glue_kvm_dirty_ring_page(int vcpu, uint32_t slot, uint64_t offset);
void glue_kvm_dirty_ring_reaper(const char *s);
void glue_kvm_dirty_ring_reap(uint64_t count, int64_t t);
void glue_kvm_dirty_ring_reaper_kick(const char *reason);
void glue_kvm_dirty_ring_flush(int finished);

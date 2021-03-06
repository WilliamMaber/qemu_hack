void glue_balloon_event(void *opaque, unsigned long addr);
void glue_cpu_in(unsigned int addr, char size, unsigned int val);
void glue_cpu_out(unsigned int addr, char size, unsigned int val);
void glue_memory_region_ops_read(int cpu_index, void *mr, uint64_t addr, uint64_t value, unsigned size, const char *name);
void glue_memory_region_ops_write(int cpu_index, void *mr, uint64_t addr, uint64_t value, unsigned size, const char *name);
void glue_memory_region_subpage_read(int cpu_index, void *mr, uint64_t offset, uint64_t value, unsigned size);
void glue_memory_region_subpage_write(int cpu_index, void *mr, uint64_t offset, uint64_t value, unsigned size);
void glue_memory_region_ram_device_read(int cpu_index, void *mr, uint64_t addr, uint64_t value, unsigned size);
void glue_memory_region_ram_device_write(int cpu_index, void *mr, uint64_t addr, uint64_t value, unsigned size);
void glue_memory_region_sync_dirty(const char *mr, const char *listener, int global);
void glue_flatview_new(void *view, void *root);
void glue_flatview_destroy(void *view, void *root);
void glue_flatview_destroy_rcu(void *view, void *root);
void glue_global_dirty_changed(unsigned int bitmask);
void glue_vm_stop_flush_all(int ret);
void glue_vm_state_notify(int running, int reason, const char *reason_str);
void glue_load_file(const char *name, const char *path);
void glue_runstate_set(int current_state, const char *current_state_str, int new_state, const char *new_state_str);
void glue_system_wakeup_request(int reason);
void glue_qemu_system_shutdown_request(int reason);
void glue_qemu_system_powerdown_request(void);

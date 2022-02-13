void glue_run_poll_handlers_begin(void *ctx, int64_t max_ns, int64_t timeout);
void glue_run_poll_handlers_end(void *ctx, bool progress, int64_t timeout);
void glue_poll_shrink(void *ctx, int64_t old, int64_t new);
void glue_poll_grow(void *ctx, int64_t old, int64_t new);
void glue_poll_add(void *ctx, void *node, int fd, unsigned revents);
void glue_poll_remove(void *ctx, void *node, int fd);
void glue_aio_co_schedule(void *ctx, void *co);
void glue_aio_co_schedule_bh_cb(void *ctx, void *co);
void glue_thread_pool_submit(void *pool, void *req, void *opaque);
void glue_thread_pool_complete(void *pool, void *req, void *opaque, int ret);
void glue_thread_pool_cancel(void *req, void *opaque);
void glue_buffer_resize(const char *buf, size_t olen, size_t len);
void glue_buffer_move_empty(const char *buf, size_t len, const char *from);
void glue_buffer_move(const char *buf, size_t len, const char *from);
void glue_buffer_free(const char *buf, size_t len);
void glue_qemu_file_monitor_add_watch(void *mon, const char *dirpath, const char *filename, void *cb, void *opaque, int64_t id);
void glue_qemu_file_monitor_remove_watch(void *mon, const char *dirpath, int64_t id);
void glue_qemu_file_monitor_new(void *mon, int fd);
void glue_qemu_file_monitor_enable_watch(void *mon, const char *dirpath, int id);
void glue_qemu_file_monitor_disable_watch(void *mon, const char *dirpath, int id);
void glue_qemu_file_monitor_event(void *mon, const char *dirpath, const char *filename, int mask, unsigned int id);
void glue_qemu_file_monitor_dispatch(void *mon, const char *dirpath, const char *filename, int ev, void *cb, void *opaque, int64_t id);
void glue_qemu_aio_coroutine_enter(void *ctx, void *from, void *to, void *opaque);
void glue_qemu_coroutine_yield(void *from, void *to);
void glue_qemu_coroutine_terminate(void *co);
void glue_qemu_co_mutex_lock_uncontended(void *mutex, void *self);
void glue_qemu_co_mutex_lock_entry(void *mutex, void *self);
void glue_qemu_co_mutex_lock_return(void *mutex, void *self);
void glue_qemu_co_mutex_unlock_entry(void *mutex, void *self);
void glue_qemu_co_mutex_unlock_return(void *mutex, void *self);
void glue_qemu_memalign(size_t alignment, size_t size, void *ptr);
void glue_qemu_anon_ram_alloc(size_t size, void *ptr);
void glue_qemu_vfree(void *ptr);
void glue_qemu_anon_ram_free(void *ptr, size_t size);
void glue_hbitmap_iter_skip_words(const void *hb, void *hbi, uint64_t pos, unsigned long cur);
void glue_hbitmap_reset(void *hb, uint64_t start, uint64_t count, uint64_t sbit, uint64_t ebit);
void glue_hbitmap_set(void *hb, uint64_t start, uint64_t count, uint64_t sbit, uint64_t ebit);
void glue_lockcnt_fast_path_attempt(const void *lockcnt, int expected, int new);
void glue_lockcnt_fast_path_success(const void *lockcnt, int expected, int new);
void glue_lockcnt_unlock_attempt(const void *lockcnt, int expected, int new);
void glue_lockcnt_unlock_success(const void *lockcnt, int expected, int new);
void glue_lockcnt_futex_wait_prepare(const void *lockcnt, int expected, int new);
void glue_lockcnt_futex_wait(const void *lockcnt, int val);
void glue_lockcnt_futex_wait_resume(const void *lockcnt, int new);
void glue_lockcnt_futex_wake(const void *lockcnt);
void glue_socket_listen(int num);
void glue_qemu_mutex_lock(void *mutex, const char *file, const int line);
void glue_qemu_mutex_locked(void *mutex, const char *file, const int line);
void glue_qemu_mutex_unlock(void *mutex, const char *file, const int line);
void glue_qemu_vfio_dma_reset_temporary(void *s);
void glue_qemu_vfio_ram_block_added(void *s, void *p, size_t size);
void glue_qemu_vfio_ram_block_removed(void *s, void *p, size_t size);
void glue_qemu_vfio_dump_mapping(void *host, uint64_t iova, size_t size);
void glue_qemu_vfio_find_mapping(void *s, void *p);
void glue_qemu_vfio_new_mapping(void *s, void *host, size_t size, int index, uint64_t iova);
void glue_qemu_vfio_do_mapping(void *s, void *host, uint64_t iova, size_t size);
void glue_qemu_vfio_dma_map(void *s, void *host, size_t size, bool temporary, uint64_t *iova);
void glue_qemu_vfio_dma_mapped(void *s, void *host, uint64_t iova, size_t size);
void glue_qemu_vfio_dma_unmap(void *s, void *host);
void glue_qemu_vfio_pci_read_config(void *buf, int ofs, int size, uint64_t region_ofs, uint64_t region_size);
void glue_qemu_vfio_pci_write_config(void *buf, int ofs, int size, uint64_t region_ofs, uint64_t region_size);
void glue_qemu_vfio_region_info(const char *desc, uint64_t region_ofs, uint64_t region_size, uint32_t cap_offset);
void glue_qemu_vfio_pci_map_bar(int index, uint64_t region_ofs, uint64_t region_size, int ofs, void *host);
void glue_uffd_query_features_nosys(int err);
void glue_uffd_query_features_api_failed(int err);
void glue_uffd_create_fd_nosys(int err);
void glue_uffd_create_fd_api_failed(int err);
void glue_uffd_create_fd_api_noioctl(uint64_t ioctl_req, uint64_t ioctl_supp);
void glue_uffd_register_memory_failed(void *addr, uint64_t length, uint64_t mode, int err);
void glue_uffd_unregister_memory_failed(void *addr, uint64_t length, int err);
void glue_module_load_module(const char *name);
void glue_module_lookup_object_type(const char *name);
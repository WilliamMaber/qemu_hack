void glue_vhost_commit(bool started, bool changed);
void glue_vhost_region_add_section(const char *name, uint64_t gpa, uint64_t size, uint64_t host);
void glue_vhost_region_add_section_merge(const char *name, uint64_t new_size, uint64_t gpa, uint64_t owr);
void glue_vhost_region_add_section_aligned(const char *name, uint64_t gpa, uint64_t size, uint64_t host);
void glue_vhost_section(const char *name);
void glue_vhost_reject_section(const char *name, int d);
void glue_vhost_iotlb_miss(void *dev, int step);
void glue_vhost_user_postcopy_end_entry(void);
void glue_vhost_user_postcopy_end_exit(void);
void glue_vhost_user_postcopy_fault_handler(const char *name, uint64_t fault_address, int nregions);
void glue_vhost_user_postcopy_fault_handler_loop(int i, uint64_t client_base, uint64_t size);
void glue_vhost_user_postcopy_fault_handler_found(int i, uint64_t region_offset, uint64_t rb_offset);
void glue_vhost_user_postcopy_listen(void);
void glue_vhost_user_set_mem_table_postcopy(uint64_t client_addr, uint64_t qhva, int reply_i, int region_i);
void glue_vhost_user_set_mem_table_withfd(int index, const char *name, uint64_t memory_size, uint64_t guest_phys_addr, uint64_t userspace_addr, uint64_t offset);
void glue_vhost_user_postcopy_waker(const char *rb, uint64_t rb_offset);
void glue_vhost_user_postcopy_waker_found(uint64_t client_addr);
void glue_vhost_user_postcopy_waker_nomatch(const char *rb, uint64_t rb_offset);
void glue_vhost_vdpa_dma_map(void *vdpa, int fd, uint32_t msg_type, uint64_t iova, uint64_t size, uint64_t uaddr, uint8_t perm, uint8_t type);
void glue_vhost_vdpa_dma_unmap(void *vdpa, int fd, uint32_t msg_type, uint64_t iova, uint64_t size, uint8_t type);
void glue_vhost_vdpa_listener_region_add(void *vdpa, uint64_t iova, uint64_t llend, void *vaddr, bool readonly);
void glue_vhost_vdpa_listener_region_del(void *vdpa, uint64_t iova, uint64_t llend);
void glue_vhost_vdpa_add_status(void *dev, uint8_t status);
void glue_vhost_vdpa_init(void *dev, void *vdpa);
void glue_vhost_vdpa_cleanup(void *dev, void *vdpa);
void glue_vhost_vdpa_memslots_limit(void *dev, int ret);
void glue_vhost_vdpa_set_mem_table(void *dev, uint32_t nregions, uint32_t padding);
void glue_vhost_vdpa_dump_regions(void *dev, int i, uint64_t guest_phys_addr, uint64_t memory_size, uint64_t userspace_addr, uint64_t flags_padding);
void glue_vhost_vdpa_set_features(void *dev, uint64_t features);
void glue_vhost_vdpa_get_device_id(void *dev, uint32_t device_id);
void glue_vhost_vdpa_reset_device(void *dev, uint8_t status);
void glue_vhost_vdpa_get_vq_index(void *dev, int idx, int vq_idx);
void glue_vhost_vdpa_set_vring_ready(void *dev);
void glue_vhost_vdpa_dump_config(void *dev, const char *line);
void glue_vhost_vdpa_set_config(void *dev, uint32_t offset, uint32_t size, uint32_t flags);
void glue_vhost_vdpa_get_config(void *dev, void *config, uint32_t config_len);
void glue_vhost_vdpa_dev_start(void *dev, bool started);
void glue_vhost_vdpa_set_log_base(void *dev, uint64_t base, unsigned long long size, int refcnt, int fd, void *log);
void glue_vhost_vdpa_set_vring_addr(void *dev, unsigned int index, unsigned int flags, uint64_t desc_user_addr, uint64_t used_user_addr, uint64_t avail_user_addr, uint64_t log_guest_addr);
void glue_vhost_vdpa_set_vring_num(void *dev, unsigned int index, unsigned int num);
void glue_vhost_vdpa_set_vring_base(void *dev, unsigned int index, unsigned int num);
void glue_vhost_vdpa_get_vring_base(void *dev, unsigned int index, unsigned int num);
void glue_vhost_vdpa_set_vring_kick(void *dev, unsigned int index, int fd);
void glue_vhost_vdpa_set_vring_call(void *dev, unsigned int index, int fd);
void glue_vhost_vdpa_get_features(void *dev, uint64_t features);
void glue_vhost_vdpa_set_owner(void *dev);
void glue_vhost_vdpa_vq_get_addr(void *dev, void *vq, uint64_t desc_user_addr, uint64_t avail_user_addr, uint64_t used_user_addr);
void glue_vhost_vdpa_get_iova_range(void *dev, uint64_t first, uint64_t last);
void glue_virtqueue_alloc_element(void *elem, size_t sz, unsigned in_num, unsigned out_num);
void glue_virtqueue_fill(void *vq, const void *elem, unsigned int len, unsigned int idx);
void glue_virtqueue_flush(void *vq, unsigned int count);
void glue_virtqueue_pop(void *vq, void *elem, unsigned int in_num, unsigned int out_num);
void glue_virtio_queue_notify(void *vdev, int n, void *vq);
void glue_virtio_notify_irqfd(void *vdev, void *vq);
void glue_virtio_notify(void *vdev, void *vq);
void glue_virtio_set_status(void *vdev, uint8_t val);
void glue_virtio_rng_guest_not_ready(void *rng);
void glue_virtio_rng_cpu_is_stopped(void *rng, int size);
void glue_virtio_rng_popped(void *rng);
void glue_virtio_rng_pushed(void *rng, size_t len);
void glue_virtio_rng_request(void *rng, size_t size, unsigned quota);
void glue_virtio_rng_vm_state_change(void *rng, int running, int state);
void glue_virtio_balloon_bad_addr(uint64_t gpa);
void glue_virtio_balloon_handle_output(const char *name, uint64_t gpa);
void glue_virtio_balloon_get_config(uint32_t num_pages, uint32_t actual);
void glue_virtio_balloon_set_config(uint32_t actual, uint32_t oldactual);
void glue_virtio_balloon_to_target(uint64_t target, uint32_t num_pages);
void glue_virtio_mmio_read(uint64_t offset);
void glue_virtio_mmio_write_offset(uint64_t offset, uint64_t value);
void glue_virtio_mmio_guest_page(uint64_t size, int shift);
void glue_virtio_mmio_queue_write(uint64_t value, int max_size);
void glue_virtio_mmio_setting_irq(int level);
void glue_virtio_iommu_device_reset(void);
void glue_virtio_iommu_get_features(uint64_t features);
void glue_virtio_iommu_device_status(uint8_t status);
void glue_virtio_iommu_get_config(uint64_t page_size_mask, uint64_t start, uint64_t end, uint32_t domain_start, uint32_t domain_end, uint32_t probe_size);
void glue_virtio_iommu_attach(uint32_t domain_id, uint32_t ep_id);
void glue_virtio_iommu_detach(uint32_t domain_id, uint32_t ep_id);
void glue_virtio_iommu_map(uint32_t domain_id, uint64_t virt_start, uint64_t virt_end, uint64_t phys_start, uint32_t flags);
void glue_virtio_iommu_unmap(uint32_t domain_id, uint64_t virt_start, uint64_t virt_end);
void glue_virtio_iommu_unmap_done(uint32_t domain_id, uint64_t virt_start, uint64_t virt_end);
void glue_virtio_iommu_translate(const char *name, uint32_t rid, uint64_t iova, int flag);
void glue_virtio_iommu_init_iommu_mr(char *iommu_mr);
void glue_virtio_iommu_get_endpoint(uint32_t ep_id);
void glue_virtio_iommu_put_endpoint(uint32_t ep_id);
void glue_virtio_iommu_get_domain(uint32_t domain_id);
void glue_virtio_iommu_put_domain(uint32_t domain_id);
void glue_virtio_iommu_translate_out(uint64_t virt_addr, uint64_t phys_addr, uint32_t sid);
void glue_virtio_iommu_report_fault(uint8_t reason, uint32_t flags, uint32_t endpoint, uint64_t addr);
void glue_virtio_iommu_fill_resv_property(uint32_t devid, uint8_t subtype, uint64_t start, uint64_t end);
void glue_virtio_iommu_notify_map(const char *name, uint64_t virt_start, uint64_t virt_end, uint64_t phys_start, uint32_t flags);
void glue_virtio_iommu_notify_unmap(const char *name, uint64_t virt_start, uint64_t virt_end);
void glue_virtio_iommu_remap(const char *name, uint64_t virt_start, uint64_t virt_end, uint64_t phys_start);
void glue_virtio_iommu_set_page_size_mask(const char *name, uint64_t old, uint64_t new);
void glue_virtio_iommu_notify_flag_add(const char *name);
void glue_virtio_iommu_notify_flag_del(const char *name);
void glue_virtio_mem_send_response(uint16_t type);
void glue_virtio_mem_plug_request(uint64_t addr, uint16_t nb_blocks);
void glue_virtio_mem_unplug_request(uint64_t addr, uint16_t nb_blocks);
void glue_virtio_mem_unplugged_all(void);
void glue_virtio_mem_unplug_all_request(void);
void glue_virtio_mem_resized_usable_region(uint64_t old_size, uint64_t new_size);
void glue_virtio_mem_state_request(uint64_t addr, uint16_t nb_blocks);
void glue_virtio_mem_state_response(uint16_t state);
void glue_virtio_pmem_flush_request(void);
void glue_virtio_pmem_response(void);
void glue_virtio_pmem_flush_done(int type);

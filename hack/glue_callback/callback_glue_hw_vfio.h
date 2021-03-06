void glue_vfio_intx_interrupt(const char *name, char line);
void glue_vfio_intx_eoi(const char *name);
void glue_vfio_intx_enable_kvm(const char *name);
void glue_vfio_intx_disable_kvm(const char *name);
void glue_vfio_intx_update(const char *name, int new_irq, int target_irq);
void glue_vfio_intx_enable(const char *name);
void glue_vfio_intx_disable(const char *name);
void glue_vfio_msi_interrupt(const char *name, int index, uint64_t addr, int data);
void glue_vfio_msix_vector_do_use(const char *name, int index);
void glue_vfio_msix_vector_release(const char *name, int index);
void glue_vfio_msix_enable(const char *name);
void glue_vfio_msix_pba_disable(const char *name);
void glue_vfio_msix_pba_enable(const char *name);
void glue_vfio_msix_disable(const char *name);
void glue_vfio_msix_fixup(const char *name, int bar, uint64_t start, uint64_t end);
void glue_vfio_msix_relo(const char *name, int bar, uint64_t offset);
void glue_vfio_msi_enable(const char *name, int nr_vectors);
void glue_vfio_msi_disable(const char *name);
void glue_vfio_pci_load_rom(const char *name, unsigned long size, unsigned long offset, unsigned long flags);
void glue_vfio_rom_read(const char *name, uint64_t addr, int size, uint64_t data);
void glue_vfio_pci_size_rom(const char *name, int size);
void glue_vfio_vga_write(uint64_t addr, uint64_t data, int size);
void glue_vfio_vga_read(uint64_t addr, int size, uint64_t data);
void glue_vfio_pci_read_config(const char *name, int addr, int len, int val);
void glue_vfio_pci_write_config(const char *name, int addr, int val, int len);
void glue_vfio_msi_setup(const char *name, int pos);
void glue_vfio_msix_early_setup(const char *name, int pos, int table_bar, int offset, int entries);
void glue_vfio_check_pcie_flr(const char *name);
void glue_vfio_check_pm_reset(const char *name);
void glue_vfio_check_af_flr(const char *name);
void glue_vfio_pci_hot_reset(const char *name, const char *type);
void glue_vfio_pci_hot_reset_has_dep_devices(const char *name);
void glue_vfio_pci_hot_reset_dep_devices(int domain, int bus, int slot, int function, int group_id);
void glue_vfio_pci_hot_reset_result(const char *name, const char *result);
void glue_vfio_populate_device_config(const char *name, unsigned long size, unsigned long offset, unsigned long flags);
void glue_vfio_populate_device_get_irq_info_failure(const char *errstr);
void glue_vfio_realize(const char *name, int group_id);
void glue_vfio_mdev(const char *name, bool is_mdev);
void glue_vfio_add_ext_cap_dropped(const char *name, uint16_t cap, uint16_t offset);
void glue_vfio_pci_reset(const char *name);
void glue_vfio_pci_reset_flr(const char *name);
void glue_vfio_pci_reset_pm(const char *name);
void glue_vfio_pci_emulated_vendor_id(const char *name, uint16_t val);
void glue_vfio_pci_emulated_device_id(const char *name, uint16_t val);
void glue_vfio_pci_emulated_sub_vendor_id(const char *name, uint16_t val);
void glue_vfio_pci_emulated_sub_device_id(const char *name, uint16_t val);
void glue_vfio_quirk_rom_in_denylist(const char *name, uint16_t vid, uint16_t did);
void glue_vfio_quirk_generic_window_address_write(const char *name, const char * region_name, uint64_t data);
void glue_vfio_quirk_generic_window_data_read(const char *name, const char * region_name, uint64_t data);
void glue_vfio_quirk_generic_window_data_write(const char *name, const char * region_name, uint64_t data);
void glue_vfio_quirk_generic_mirror_read(const char *name, const char * region_name, uint64_t addr, uint64_t data);
void glue_vfio_quirk_generic_mirror_write(const char *name, const char * region_name, uint64_t addr, uint64_t data);
void glue_vfio_quirk_ati_3c3_read(const char *name, uint64_t data);
void glue_vfio_quirk_ati_3c3_probe(const char *name);
void glue_vfio_quirk_ati_bar4_probe(const char *name);
void glue_vfio_quirk_ati_bar2_probe(const char *name);
void glue_vfio_quirk_nvidia_3d0_state(const char *name, const char *state);
void glue_vfio_quirk_nvidia_3d0_read(const char *name, uint8_t offset, unsigned size, uint64_t val);
void glue_vfio_quirk_nvidia_3d0_write(const char *name, uint8_t offset, uint64_t data, unsigned size);
void glue_vfio_quirk_nvidia_3d0_probe(const char *name);
void glue_vfio_quirk_nvidia_bar5_state(const char *name, const char *state);
void glue_vfio_quirk_nvidia_bar5_probe(const char *name);
void glue_vfio_quirk_nvidia_bar0_msi_ack(const char *name);
void glue_vfio_quirk_nvidia_bar0_probe(const char *name);
void glue_vfio_quirk_rtl8168_fake_latch(const char *name, uint64_t val);
void glue_vfio_quirk_rtl8168_msix_write(const char *name, uint16_t offset, uint64_t val);
void glue_vfio_quirk_rtl8168_msix_read(const char *name, uint16_t offset, uint64_t val);
void glue_vfio_quirk_rtl8168_probe(const char *name);
void glue_vfio_quirk_ati_bonaire_reset_skipped(const char *name);
void glue_vfio_quirk_ati_bonaire_reset_no_smc(const char *name);
void glue_vfio_quirk_ati_bonaire_reset_timeout(const char *name);
void glue_vfio_quirk_ati_bonaire_reset_done(const char *name);
void glue_vfio_quirk_ati_bonaire_reset(const char *name);
void glue_vfio_ioeventfd_exit(const char *name, uint64_t addr, unsigned size, uint64_t data);
void glue_vfio_ioeventfd_handler(const char *name, uint64_t addr, unsigned size, uint64_t data);
void glue_vfio_ioeventfd_init(const char *name, uint64_t addr, unsigned size, uint64_t data, bool vfio);
void glue_vfio_pci_igd_opregion_enabled(const char *name);
void glue_vfio_pci_nvidia_gpu_setup_quirk(const char *name, uint64_t tgt, uint64_t size);
void glue_vfio_pci_nvlink2_setup_quirk_ssatgt(const char *name, uint64_t tgt, uint64_t size);
void glue_vfio_pci_nvlink2_setup_quirk_lnkspd(const char *name, uint32_t link_speed);
void glue_vfio_pci_igd_bar4_write(const char *name, uint32_t index, uint32_t data, uint32_t base);
void glue_vfio_pci_igd_bdsm_enabled(const char *name, int size);
void glue_vfio_pci_igd_host_bridge_enabled(const char *name);
void glue_vfio_pci_igd_lpc_bridge_enabled(const char *name);
void glue_vfio_region_write(const char *name, int index, uint64_t addr, uint64_t data, unsigned size);
void glue_vfio_region_read(char *name, int index, uint64_t addr, unsigned size, uint64_t data);
void glue_vfio_iommu_map_notify(const char *op, uint64_t iova_start, uint64_t iova_end);
void glue_vfio_listener_region_add_skip(uint64_t start, uint64_t end);
void glue_vfio_spapr_group_attach(int groupfd, int tablefd);
void glue_vfio_listener_region_add_iommu(uint64_t start, uint64_t end);
void glue_vfio_listener_region_add_ram(uint64_t iova_start, uint64_t iova_end, void *vaddr);
void glue_vfio_listener_region_add_no_dma_map(const char *name, uint64_t iova, uint64_t size, uint64_t page_size);
void glue_vfio_listener_region_del_skip(uint64_t start, uint64_t end);
void glue_vfio_listener_region_del(uint64_t start, uint64_t end);
void glue_vfio_disconnect_container(int fd);
void glue_vfio_put_group(int fd);
void glue_vfio_get_device(const char * name, unsigned int flags, unsigned int num_regions, unsigned int num_irqs);
void glue_vfio_put_base_device(int fd);
void glue_vfio_region_setup(const char *dev, int index, const char *name, unsigned long flags, unsigned long offset, unsigned long size);
void glue_vfio_region_mmap_fault(const char *name, int index, unsigned long offset, unsigned long size, int fault);
void glue_vfio_region_mmap(const char *name, unsigned long offset, unsigned long end);
void glue_vfio_region_exit(const char *name, int index);
void glue_vfio_region_finalize(const char *name, int index);
void glue_vfio_region_mmaps_set_enabled(const char *name, bool enabled);
void glue_vfio_region_unmap(const char *name, unsigned long offset, unsigned long end);
void glue_vfio_region_sparse_mmap_header(const char *name, int index, int nr_areas);
void glue_vfio_region_sparse_mmap_entry(int i, unsigned long start, unsigned long end);
void glue_vfio_get_dev_region(const char *name, int index, uint32_t type, uint32_t subtype);
void glue_vfio_dma_unmap_overflow_workaround(void);
void glue_vfio_platform_base_device_init(char *name, int groupid);
void glue_vfio_platform_realize(char *name, char *compat);
void glue_vfio_platform_eoi(int pin, int fd);
void glue_vfio_platform_intp_mmap_enable(int pin);
void glue_vfio_platform_intp_interrupt(int pin, int fd);
void glue_vfio_platform_intp_inject_pending_lockheld(int pin, int fd);
void glue_vfio_platform_populate_interrupts(int pin, int count, int flags);
void glue_vfio_intp_interrupt_set_pending(int index);
void glue_vfio_platform_start_level_irqfd_injection(int index, int fd, int resamplefd);
void glue_vfio_platform_start_edge_irqfd_injection(int index, int fd);
void glue_vfio_prereg_listener_region_add_skip(uint64_t start, uint64_t end);
void glue_vfio_prereg_listener_region_del_skip(uint64_t start, uint64_t end);
void glue_vfio_prereg_register(uint64_t va, uint64_t size, int ret);
void glue_vfio_prereg_unregister(uint64_t va, uint64_t size, int ret);
void glue_vfio_spapr_create_window(int ps, unsigned int levels, uint64_t ws, uint64_t off);
void glue_vfio_spapr_remove_window(uint64_t off);
void glue_vfio_display_edid_available(void);
void glue_vfio_display_edid_link_up(void);
void glue_vfio_display_edid_link_down(void);
void glue_vfio_display_edid_update(uint32_t prefx, uint32_t prefy);
void glue_vfio_display_edid_write_error(void);
void glue_vfio_migration_probe(const char *name, uint32_t index);
void glue_vfio_migration_set_state(const char *name, uint32_t state);
void glue_vfio_vmstate_change(const char *name, int running, const char *reason, uint32_t dev_state);
void glue_vfio_migration_state_notifier(const char *name, const char *state);
void glue_vfio_save_setup(const char *name);
void glue_vfio_save_cleanup(const char *name);
void glue_vfio_save_buffer(const char *name, uint64_t data_offset, uint64_t data_size, uint64_t pending);
void glue_vfio_update_pending(const char *name, uint64_t pending);
void glue_vfio_save_device_config_state(const char *name);
void glue_vfio_save_pending(const char *name, uint64_t precopy, uint64_t postcopy, uint64_t compatible);
void glue_vfio_save_iterate(const char *name, int data_size);
void glue_vfio_save_complete_precopy(const char *name);
void glue_vfio_load_device_config_state(const char *name);
void glue_vfio_load_state(const char *name, uint64_t data);
void glue_vfio_load_state_device_data(const char *name, uint64_t data_offset, uint64_t data_size);
void glue_vfio_load_cleanup(const char *name);
void glue_vfio_get_dirty_bitmap(int fd, uint64_t iova, uint64_t size, uint64_t bitmap_size, uint64_t start);
void glue_vfio_iommu_map_dirty_notify(uint64_t iova_start, uint64_t iova_end);

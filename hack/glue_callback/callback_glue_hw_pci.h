void glue_pci_update_mappings_del(const char *dev, uint32_t bus, uint32_t slot, uint32_t func, int bar, uint64_t addr, uint64_t size);
void glue_pci_update_mappings_add(const char *dev, uint32_t bus, uint32_t slot, uint32_t func, int bar, uint64_t addr, uint64_t size);
void glue_pci_cfg_read(const char *dev, uint32_t bus, uint32_t slot, uint32_t func, unsigned offs, unsigned val);
void glue_pci_cfg_write(const char *dev, uint32_t bus, uint32_t slot, uint32_t func, unsigned offs, unsigned val);
void glue_msix_write_config(char *name, bool enabled, bool masked);

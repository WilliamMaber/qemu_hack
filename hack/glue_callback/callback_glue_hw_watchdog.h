void glue_cmsdk_apb_watchdog_read(uint64_t offset, uint64_t data, unsigned size);
void glue_cmsdk_apb_watchdog_write(uint64_t offset, uint64_t data, unsigned size);
void glue_cmsdk_apb_watchdog_reset(void);
void glue_cmsdk_apb_watchdog_lock(uint32_t lock);
void glue_aspeed_wdt_read(uint64_t addr, uint32_t size);
void glue_aspeed_wdt_write(uint64_t addr, uint32_t size, uint64_t data);

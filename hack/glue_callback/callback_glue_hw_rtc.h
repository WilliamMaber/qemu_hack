void glue_allwinner_rtc_read(uint64_t addr, uint64_t value);
void glue_allwinner_rtc_write(uint64_t addr, uint64_t value);
void glue_sun4v_rtc_read(uint64_t addr, uint64_t value);
void glue_sun4v_rtc_write(uint64_t addr, uint64_t value);
void glue_xlnx_zynqmp_rtc_gettime(int year, int month, int day, int hour, int min, int sec);
void glue_pl031_irq_state(int level);
void glue_pl031_read(uint32_t addr, uint32_t value);
void glue_pl031_write(uint32_t addr, uint32_t value);
void glue_pl031_alarm_raised(void);
void glue_pl031_set_alarm(uint32_t ticks);
void glue_aspeed_rtc_read(uint64_t addr, uint64_t value);
void glue_aspeed_rtc_write(uint64_t addr, uint64_t value);
void glue_m48txx_nvram_io_read(uint64_t addr, uint64_t value);
void glue_m48txx_nvram_io_write(uint64_t addr, uint64_t value);
void glue_m48txx_nvram_mem_read(uint32_t addr, uint32_t value);
void glue_m48txx_nvram_mem_write(uint32_t addr, uint32_t value);
void glue_goldfish_rtc_read(uint64_t addr, uint64_t value);
void glue_goldfish_rtc_write(uint64_t addr, uint64_t value);

void glue_allwinner_cpucfg_cpu_reset(uint8_t cpu_id, uint32_t reset_addr);
void glue_allwinner_cpucfg_read(uint64_t offset, uint64_t data, unsigned size);
void glue_allwinner_cpucfg_write(uint64_t offset, uint64_t data, unsigned size);
void glue_allwinner_h3_dramc_rowmirror_disable(void);
void glue_allwinner_h3_dramc_rowmirror_enable(uint64_t addr);
void glue_allwinner_h3_dramcom_read(uint64_t offset, uint64_t data, unsigned size);
void glue_allwinner_h3_dramcom_write(uint64_t offset, uint64_t data, unsigned size);
void glue_allwinner_h3_dramctl_read(uint64_t offset, uint64_t data, unsigned size);
void glue_allwinner_h3_dramctl_write(uint64_t offset, uint64_t data, unsigned size);
void glue_allwinner_h3_dramphy_read(uint64_t offset, uint64_t data, unsigned size);
void glue_allwinner_h3_dramphy_write(uint64_t offset, uint64_t data, unsigned size);
void glue_allwinner_sid_read(uint64_t offset, uint64_t data, unsigned size);
void glue_allwinner_sid_write(uint64_t offset, uint64_t data, unsigned size);
void glue_avr_power_read(uint8_t value);
void glue_avr_power_write(uint8_t value);
void glue_ecc_mem_writel_mer(uint32_t val);
void glue_ecc_mem_writel_mdr(uint32_t val);
void glue_ecc_mem_writel_mfsr(uint32_t val);
void glue_ecc_mem_writel_vcr(uint32_t val);
void glue_ecc_mem_writel_dr(uint32_t val);
void glue_ecc_mem_writel_ecr0(uint32_t val);
void glue_ecc_mem_writel_ecr1(uint32_t val);
void glue_ecc_mem_readl_mer(uint32_t ret);
void glue_ecc_mem_readl_mdr(uint32_t ret);
void glue_ecc_mem_readl_mfsr(uint32_t ret);
void glue_ecc_mem_readl_vcr(uint32_t ret);
void glue_ecc_mem_readl_mfar0(uint32_t ret);
void glue_ecc_mem_readl_mfar1(uint32_t ret);
void glue_ecc_mem_readl_dr(uint32_t ret);
void glue_ecc_mem_readl_ecr0(uint32_t ret);
void glue_ecc_mem_readl_ecr1(uint32_t ret);
void glue_ecc_diag_mem_writeb(uint64_t addr, uint32_t val);
void glue_ecc_diag_mem_readb(uint64_t addr, uint32_t ret);
void glue_empty_slot_write(uint64_t addr, unsigned width, uint64_t value, unsigned size, const char *name);
void glue_slavio_misc_update_irq_raise(void);
void glue_slavio_misc_update_irq_lower(void);
void glue_slavio_set_power_fail(int power_failing, uint8_t config);
void glue_slavio_cfg_mem_writeb(uint32_t val);
void glue_slavio_cfg_mem_readb(uint32_t ret);
void glue_slavio_diag_mem_writeb(uint32_t val);
void glue_slavio_diag_mem_readb(uint32_t ret);
void glue_slavio_mdm_mem_writeb(uint32_t val);
void glue_slavio_mdm_mem_readb(uint32_t ret);
void glue_slavio_aux1_mem_writeb(uint32_t val);
void glue_slavio_aux1_mem_readb(uint32_t ret);
void glue_slavio_aux2_mem_writeb(uint32_t val);
void glue_slavio_aux2_mem_readb(uint32_t ret);
void glue_apc_mem_writeb(uint32_t val);
void glue_apc_mem_readb(uint32_t ret);
void glue_slavio_sysctrl_mem_writel(uint32_t val);
void glue_slavio_sysctrl_mem_readl(uint32_t ret);
void glue_slavio_led_mem_writew(uint32_t val);
void glue_slavio_led_mem_readw(uint32_t ret);
void glue_aspeed_scu_write(uint64_t offset, unsigned size, uint32_t data);
void glue_mps2_scc_read(uint64_t offset, uint64_t data, unsigned size);
void glue_mps2_scc_write(uint64_t offset, uint64_t data, unsigned size);
void glue_mps2_scc_reset(void);
void glue_mps2_scc_cfg_write(unsigned function, unsigned device, uint32_t value);
void glue_mps2_scc_cfg_read(unsigned function, unsigned device, uint32_t value);
void glue_mps2_fpgaio_read(uint64_t offset, uint64_t data, unsigned size);
void glue_mps2_fpgaio_write(uint64_t offset, uint64_t data, unsigned size);
void glue_mps2_fpgaio_reset(void);
void glue_msf2_sysreg_write(uint64_t offset, uint32_t val, uint32_t prev);
void glue_msf2_sysreg_read(uint64_t offset, uint32_t val);
void glue_msf2_sysreg_write_pll_status(void);
void glue_imx7_gpr_read(uint64_t offset);
void glue_imx7_gpr_write(uint64_t offset, uint64_t value);
void glue_mos6522_set_counter(int index, unsigned int val);
void glue_mos6522_get_next_irq_time(uint16_t latch, int64_t d, int64_t delta);
void glue_mos6522_set_sr_int(void);
void glue_mos6522_write(uint64_t addr, uint64_t val);
void glue_mos6522_read(uint64_t addr, unsigned val);
void glue_npcm7xx_clk_read(uint64_t offset, uint32_t value);
void glue_npcm7xx_clk_write(uint64_t offset, uint32_t value);
void glue_npcm7xx_gcr_read(uint64_t offset, uint32_t value);
void glue_npcm7xx_gcr_write(uint64_t offset, uint32_t value);
void glue_npcm7xx_mft_read(const char *name, uint64_t offset, uint16_t value);
void glue_npcm7xx_mft_write(const char *name, uint64_t offset, uint16_t value);
void glue_npcm7xx_mft_rpm(const char *clock, uint32_t clock_hz, int state, int32_t cnt, uint32_t rpm, uint32_t duty);
void glue_npcm7xx_mft_capture(const char *name, int irq_level);
void glue_npcm7xx_mft_update_clock(const char *name, uint16_t sel, uint64_t clock_period, uint64_t prescaled_clock_period);
void glue_npcm7xx_mft_set_duty(const char *name, int n, int value);
void glue_npcm7xx_rng_read(uint64_t offset, uint64_t value, unsigned size);
void glue_npcm7xx_rng_write(uint64_t offset, uint64_t value, unsigned size);
void glue_npcm7xx_pwm_read(const char *id, uint64_t offset, uint32_t value);
void glue_npcm7xx_pwm_write(const char *id, uint64_t offset, uint32_t value);
void glue_npcm7xx_pwm_update_freq(const char *id, uint8_t index, uint32_t old_value, uint32_t new_value);
void glue_npcm7xx_pwm_update_duty(const char *id, uint8_t index, uint32_t old_value, uint32_t new_value);
void glue_stm32f4xx_syscfg_set_irq(int gpio, int line, int level);
void glue_stm32f4xx_pulse_exti(int irq);
void glue_stm32f4xx_syscfg_read(uint64_t addr);
void glue_stm32f4xx_syscfg_write(uint64_t addr, uint64_t data);
void glue_stm32f4xx_exti_set_irq(int irq, int leve);
void glue_stm32f4xx_exti_read(uint64_t addr);
void glue_stm32f4xx_exti_write(uint64_t addr, uint64_t data);
void glue_tz_mpc_reg_read(uint32_t offset, uint64_t data, unsigned size);
void glue_tz_mpc_reg_write(uint32_t offset, uint64_t data, unsigned size);
void glue_tz_mpc_mem_blocked_read(uint64_t addr, unsigned size, bool secure);
void glue_tz_mpc_mem_blocked_write(uint64_t addr, uint64_t data, unsigned size, bool secure);
void glue_tz_mpc_translate(uint64_t addr, int flags, const char *idx, const char *res);
void glue_tz_mpc_iommu_notify(uint64_t addr);
void glue_tz_msc_reset(void);
void glue_tz_msc_cfg_nonsec(int level);
void glue_tz_msc_cfg_sec_resp(int level);
void glue_tz_msc_irq_clear(int level);
void glue_tz_msc_update_irq(int level);
void glue_tz_msc_access_blocked(uint64_t offset);
void glue_tz_ppc_reset(void);
void glue_tz_ppc_cfg_nonsec(int n, int level);
void glue_tz_ppc_cfg_ap(int n, int level);
void glue_tz_ppc_cfg_sec_resp(int level);
void glue_tz_ppc_irq_enable(int level);
void glue_tz_ppc_irq_clear(int level);
void glue_tz_ppc_update_irq(int level);
void glue_tz_ppc_read_blocked(int n, uint64_t offset, bool secure, bool user);
void glue_tz_ppc_write_blocked(int n, uint64_t offset, bool secure, bool user);
void glue_iotkit_secctl_s_read(uint32_t offset, uint64_t data, unsigned size);
void glue_iotkit_secctl_s_write(uint32_t offset, uint64_t data, unsigned size);
void glue_iotkit_secctl_ns_read(uint32_t offset, uint64_t data, unsigned size);
void glue_iotkit_secctl_ns_write(uint32_t offset, uint64_t data, unsigned size);
void glue_ccm_entry(void);
void glue_ccm_freq(uint32_t freq);
void glue_ccm_clock_freq(uint32_t clock, uint32_t freq);
void glue_ccm_read_reg(const char *reg_name, uint32_t value);
void glue_ccm_write_reg(const char *reg_name, uint32_t value);
void glue_iotkit_sysinfo_read(uint64_t offset, uint64_t data, unsigned size);
void glue_iotkit_sysinfo_write(uint64_t offset, uint64_t data, unsigned size);
void glue_iotkit_sysctl_read(uint64_t offset, uint64_t data, unsigned size);
void glue_iotkit_sysctl_write(uint64_t offset, uint64_t data, unsigned size);
void glue_iotkit_sysctl_reset(void);
void glue_armsse_cpu_pwrctrl_read(uint64_t offset, uint64_t data, unsigned size);
void glue_armsse_cpu_pwrctrl_write(uint64_t offset, uint64_t data, unsigned size);
void glue_armsse_cpuid_read(uint64_t offset, uint64_t data, unsigned size);
void glue_armsse_cpuid_write(uint64_t offset, uint64_t data, unsigned size);
void glue_armsse_mhu_read(uint64_t offset, uint64_t data, unsigned size);
void glue_armsse_mhu_write(uint64_t offset, uint64_t data, unsigned size);
void glue_aspeed_xdma_write(uint64_t offset, uint64_t data);
void glue_bcm2835_mbox_property(uint32_t tag, uint32_t bufsize, size_t resplen);
void glue_bcm2835_mbox_write(unsigned int size, uint64_t addr, uint64_t value);
void glue_bcm2835_mbox_read(unsigned int size, uint64_t addr, uint64_t value);
void glue_bcm2835_mbox_irq(unsigned level);
void glue_via1_rtc_update_data_out(int count, int value);
void glue_via1_rtc_update_data_in(int count, int value);
void glue_via1_rtc_internal_status(int cmd, int alt, int value);
void glue_via1_rtc_internal_cmd(int cmd);
void glue_via1_rtc_cmd_invalid(int value);
void glue_via1_rtc_internal_time(uint32_t time);
void glue_via1_rtc_internal_set_cmd(int cmd);
void glue_via1_rtc_internal_ignore_cmd(int cmd);
void glue_via1_rtc_internal_set_alt(int alt, int sector, int offset);
void glue_via1_rtc_cmd_seconds_read(int reg, int value);
void glue_via1_rtc_cmd_seconds_write(int reg, int value);
void glue_via1_rtc_cmd_test_write(int value);
void glue_via1_rtc_cmd_wprotect_write(int value);
void glue_via1_rtc_cmd_pram_read(int addr, int value);
void glue_via1_rtc_cmd_pram_write(int addr, int value);
void glue_via1_rtc_cmd_pram_sect_read(int sector, int offset, int addr, int value);
void glue_via1_rtc_cmd_pram_sect_write(int sector, int offset, int addr, int value);
void glue_via1_adb_send(const char *state, uint8_t data, const char *vadbint);
void glue_via1_adb_receive(const char *state, uint8_t data, const char *vadbint, int status, int index, int size);
void glue_via1_adb_poll(uint8_t data, const char *vadbint, int status, int index, int size);
void glue_via1_auxmode(int mode);
void glue_grlib_ahb_pnp_read(uint64_t addr, uint32_t value);
void glue_grlib_apb_pnp_read(uint64_t addr, uint32_t value);
void glue_led_set_intensity(const char *color, const char *desc, uint8_t intensity_percent);
void glue_led_change_intensity(const char *color, const char *desc, uint8_t old_intensity_percent, uint8_t new_intensity_percent);
void glue_pca955x_gpio_status(const char *description, const char *buf);
void glue_pca955x_gpio_change(const char *description, unsigned id, unsigned prev_state, unsigned current_state);
void glue_bcm2835_cprman_read(uint64_t offset, uint64_t value);
void glue_bcm2835_cprman_write(uint64_t offset, uint64_t value);
void glue_bcm2835_cprman_write_invalid_magic(uint64_t offset, uint64_t value);
void glue_virt_ctrl_read(void *dev, unsigned int addr, unsigned int size, uint64_t value);
void glue_virt_ctrl_write(void *dev, unsigned int addr, unsigned int size, uint64_t value);
void glue_virt_ctrl_reset(void *dev);
void glue_virt_ctrl_realize(void *dev);
void glue_virt_ctrl_instance_init(void *dev);

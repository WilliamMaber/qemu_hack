void glue_npcm7xx_gpio_read(const char *id, uint64_t offset, uint64_t value);
void glue_npcm7xx_gpio_write(const char *id, uint64_t offset, uint64_t value);
void glue_npcm7xx_gpio_set_input(const char *id, int32_t line, int32_t level);
void glue_npcm7xx_gpio_set_output(const char *id, int32_t line, int32_t level);
void glue_npcm7xx_gpio_update_events(const char *id, uint32_t evst, uint32_t even);
void glue_nrf51_gpio_read(uint64_t offset, uint64_t r);
void glue_nrf51_gpio_write(uint64_t offset, uint64_t value);
void glue_nrf51_gpio_set(int64_t line, int64_t value);
void glue_nrf51_gpio_update_output_irq(int64_t line, int64_t value);
void glue_pl061_update(const char *id, uint32_t dir, uint32_t data, uint32_t pullups, uint32_t floating);
void glue_pl061_set_output(const char *id, int gpio, int level);
void glue_pl061_input_change(const char *id, int gpio, int level);
void glue_pl061_update_istate(const char *id, uint32_t istate, uint32_t im, int level);
void glue_pl061_read(const char *id, uint64_t offset, uint64_t r);
void glue_pl061_write(const char *id, uint64_t offset, uint64_t value);
void glue_pl061_reset(const char *id);
void glue_sifive_gpio_read(uint64_t offset, uint64_t r);
void glue_sifive_gpio_write(uint64_t offset, uint64_t value);
void glue_sifive_gpio_set(int64_t line, int64_t value);
void glue_sifive_gpio_update_output_irq(int64_t line, int64_t value);
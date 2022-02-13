void glue_npcm7xx_adc_read(const char *id, uint64_t offset, uint32_t value);
void glue_npcm7xx_adc_write(const char *id, uint64_t offset, uint32_t value);
void glue_aspeed_adc_engine_read(uint32_t engine_id, uint64_t addr, uint64_t value);
void glue_aspeed_adc_engine_write(uint32_t engine_id, uint64_t addr, uint64_t value);

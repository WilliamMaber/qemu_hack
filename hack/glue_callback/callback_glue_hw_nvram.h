void glue_nvram_read(uint32_t addr, uint32_t ret);
void glue_nvram_write(uint32_t addr, uint32_t old, uint32_t val);
void glue_fw_cfg_select(void *s, uint16_t key_value, const char *key_name, int ret);
void glue_fw_cfg_read(void *s, uint64_t ret);
void glue_fw_cfg_add_bytes(uint16_t key_value, const char *key_name, size_t len);
void glue_fw_cfg_add_file(void *s, int index, char *name, size_t len);
void glue_fw_cfg_add_string(uint16_t key_value, const char *key_name, const char *value);
void glue_fw_cfg_add_i16(uint16_t key_value, const char *key_name, uint16_t value);
void glue_fw_cfg_add_i32(uint16_t key_value, const char *key_name, uint32_t value);
void glue_fw_cfg_add_i64(uint16_t key_value, const char *key_name, uint64_t value);
void glue_macio_nvram_read(uint32_t addr, uint8_t val);
void glue_macio_nvram_write(uint32_t addr, uint8_t val);

void glue_cuda_delay_set_sr_int(void);
void glue_cuda_data_send(uint8_t data);
void glue_cuda_data_recv(uint8_t data);
void glue_cuda_receive_packet_cmd(const char *cmd);
void glue_cuda_packet_receive(int len);
void glue_cuda_packet_receive_data(int i, const uint8_t data);
void glue_cuda_packet_send(int len);
void glue_cuda_packet_send_data(int i, const uint8_t data);
void glue_macio_timer_write(uint64_t addr, unsigned len, uint64_t val);
void glue_macio_timer_read(uint64_t addr, unsigned len, uint32_t val);
void glue_macio_set_gpio(int gpio, bool state);
void glue_macio_gpio_irq_assert(int gpio);
void glue_macio_gpio_irq_deassert(int gpio);
void glue_macio_gpio_write(uint64_t addr, uint64_t val);
void glue_pmu_adb_poll(int olen);
void glue_pmu_one_sec_timer(void);
void glue_pmu_cmd_set_int_mask(int intmask);
void glue_pmu_cmd_set_adb_autopoll(int mask);
void glue_pmu_cmd_adb_nobus(void);
void glue_pmu_cmd_adb_request(int inlen, int indata0, int indata1, int indata2, int indata3, int indata4);
void glue_pmu_cmd_adb_reply(int len);
void glue_pmu_dispatch_cmd(const char *name);
void glue_pmu_dispatch_unknown_cmd(int cmd);
void glue_pmu_debug_protocol_string(const char *str);
void glue_pmu_debug_protocol_resp_size(int size);
void glue_pmu_debug_protocol_error(int portB);
void glue_pmu_debug_protocol_clear_treq(int state);
void glue_pmu_debug_protocol_cmd(int cmd, int cmdlen, int rsplen);
void glue_pmu_debug_protocol_cmdlen(int len);
void glue_pmu_debug_protocol_cmd_toobig(int len);
void glue_pmu_debug_protocol_cmd_send_resp_size(int len);
void glue_pmu_debug_protocol_cmd_send_resp(int pos, int len);
void glue_pmu_debug_protocol_cmd_resp_complete(int ier);
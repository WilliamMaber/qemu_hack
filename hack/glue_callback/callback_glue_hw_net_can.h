void glue_xlnx_can_update_irq(uint32_t isr, uint32_t ier, uint32_t irq);
void glue_xlnx_can_reset(uint32_t val);
void glue_xlnx_can_rx_fifo_filter_reject(uint32_t id, uint8_t dlc);
void glue_xlnx_can_filter_id_pre_write(uint8_t filter_num, uint32_t value);
void glue_xlnx_can_filter_mask_pre_write(uint8_t filter_num, uint32_t value);
void glue_xlnx_can_tx_data(uint32_t id, uint8_t dlc, uint8_t db0, uint8_t db1, uint8_t db2, uint8_t db3, uint8_t db4, uint8_t db5, uint8_t db6, uint8_t db7);
void glue_xlnx_can_rx_data(uint32_t id, uint32_t dlc, uint8_t db0, uint8_t db1, uint8_t db2, uint8_t db3, uint8_t db4, uint8_t db5, uint8_t db6, uint8_t db7);
void glue_xlnx_can_rx_discard(uint32_t status);

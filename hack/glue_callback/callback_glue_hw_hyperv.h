void glue_vmbus_recv_message(uint32_t type, uint32_t size);
void glue_vmbus_signal_event(void);
void glue_vmbus_channel_notify_guest(uint32_t chan_id);
void glue_vmbus_post_msg(uint32_t type, uint32_t size);
void glue_vmbus_msg_cb(int status);
void glue_vmbus_process_incoming_message(uint32_t message_type);
void glue_vmbus_initiate_contact(uint16_t major, uint16_t minor, uint32_t vcpu, uint64_t monitor_page1, uint64_t monitor_page2, uint64_t interrupt_page);
void glue_vmbus_send_offer(uint32_t chan_id, void *dev);
void glue_vmbus_terminate_offers(void);
void glue_vmbus_gpadl_header(uint32_t gpadl_id, uint16_t num_gfns);
void glue_vmbus_gpadl_body(uint32_t gpadl_id);
void glue_vmbus_gpadl_created(uint32_t gpadl_id);
void glue_vmbus_gpadl_teardown(uint32_t gpadl_id);
void glue_vmbus_gpadl_torndown(uint32_t gpadl_id);
void glue_vmbus_open_channel(uint32_t chan_id, uint32_t gpadl_id, uint32_t target_vp);
void glue_vmbus_channel_open(uint32_t chan_id, uint32_t status);
void glue_vmbus_close_channel(uint32_t chan_id);

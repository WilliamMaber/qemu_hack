void glue_qemu_loadvm_state_section(unsigned int section_type);
void glue_qemu_loadvm_state_section_command(int ret);
void glue_qemu_loadvm_state_section_partend(uint32_t section_id);
void glue_qemu_loadvm_state_post_main(int ret);
void glue_qemu_loadvm_state_section_startfull(uint32_t section_id, const char *idstr, uint32_t instance_id, uint32_t version_id);
void glue_qemu_savevm_send_packaged(void);
void glue_loadvm_state_setup(void);
void glue_loadvm_state_cleanup(void);
void glue_loadvm_handle_cmd_packaged(unsigned int length);
void glue_loadvm_handle_cmd_packaged_main(int ret);
void glue_loadvm_handle_cmd_packaged_received(int ret);
void glue_loadvm_handle_recv_bitmap(char *s);
void glue_loadvm_postcopy_handle_advise(void);
void glue_loadvm_postcopy_handle_listen(void);
void glue_loadvm_postcopy_handle_run(void);
void glue_loadvm_postcopy_handle_run_cpu_sync(void);
void glue_loadvm_postcopy_handle_run_vmstart(void);
void glue_loadvm_postcopy_handle_resume(void);
void glue_loadvm_postcopy_ram_handle_discard(void);
void glue_loadvm_postcopy_ram_handle_discard_end(void);
void glue_loadvm_postcopy_ram_handle_discard_header(const char *ramid, uint16_t len);
void glue_loadvm_process_command(uint16_t com, uint16_t len);
void glue_loadvm_process_command_ping(uint32_t val);
void glue_postcopy_ram_listen_thread_exit(void);
void glue_postcopy_ram_listen_thread_start(void);
void glue_qemu_savevm_send_postcopy_advise(void);
void glue_qemu_savevm_send_postcopy_ram_discard(const char *id, uint16_t len);
void glue_savevm_command_send(uint16_t command, uint16_t len);
void glue_savevm_section_start(const char *id, unsigned int section_id);
void glue_savevm_section_end(const char *id, unsigned int section_id, int ret);
void glue_savevm_section_skip(const char *id, unsigned int section_id);
void glue_savevm_send_open_return_path(void);
void glue_savevm_send_ping(uint32_t val);
void glue_savevm_send_postcopy_listen(void);
void glue_savevm_send_postcopy_run(void);
void glue_savevm_send_postcopy_resume(void);
void glue_savevm_send_colo_enable(void);
void glue_savevm_send_recv_bitmap(char *name);
void glue_savevm_state_setup(void);
void glue_savevm_state_resume_prepare(void);
void glue_savevm_state_header(void);
void glue_savevm_state_iterate(void);
void glue_savevm_state_cleanup(void);
void glue_savevm_state_complete_precopy(void);
void glue_vmstate_save(const char *idstr, const char *vmsd_name);
void glue_vmstate_load(const char *idstr, const char *vmsd_name);
void glue_postcopy_pause_incoming(void);
void glue_postcopy_pause_incoming_continued(void);
void glue_postcopy_page_req_sync(void *host_addr);
void glue_vmstate_load_field_error(const char *field, int ret);
void glue_vmstate_load_state(const char *name, int version_id);
void glue_vmstate_load_state_end(const char *name, const char *reason, int val);
void glue_vmstate_load_state_field(const char *name, const char *field);
void glue_vmstate_n_elems(const char *name, int n_elems);
void glue_vmstate_subsection_load(const char *parent);
void glue_vmstate_subsection_load_bad(const char *parent,  const char *sub, const char *sub2);
void glue_vmstate_subsection_load_good(const char *parent);
void glue_vmstate_save_state_pre_save_res(const char *name, int res);
void glue_vmstate_save_state_loop(const char *name, const char *field, int n_elems);
void glue_vmstate_save_state_top(const char *idstr);
void glue_vmstate_subsection_save_loop(const char *name, const char *sub);
void glue_vmstate_subsection_save_top(const char *idstr);
void glue_get_qtailq(const char *name, int version_id);
void glue_get_qtailq_end(const char *name, const char *reason, int val);
void glue_put_qtailq(const char *name, int version_id);
void glue_put_qtailq_end(const char *name, const char *reason);
void glue_get_gtree(const char *field_name, const char *key_vmsd_name, const char *val_vmsd_name, uint32_t nnodes);
void glue_get_gtree_end(const char *field_name, const char *key_vmsd_name, const char *val_vmsd_name, int ret);
void glue_put_gtree(const char *field_name, const char *key_vmsd_name, const char *val_vmsd_name, uint32_t nnodes);
void glue_put_gtree_end(const char *field_name, const char *key_vmsd_name, const char *val_vmsd_name, int ret);
void glue_get_qlist(const char *field_name, const char *vmsd_name, int version_id);
void glue_get_qlist_end(const char *field_name, const char *vmsd_name);
void glue_put_qlist(const char *field_name, const char *vmsd_name, int version_id);
void glue_put_qlist_end(const char *field_name, const char *vmsd_name);
void glue_qemu_file_fclose(void);
void glue_get_queued_page(const char *block_name, uint64_t tmp_offset, unsigned long page_abs);
void glue_get_queued_page_not_dirty(const char *block_name, uint64_t tmp_offset, unsigned long page_abs);
void glue_migration_bitmap_sync_start(void);
void glue_migration_bitmap_sync_end(uint64_t dirty_pages);
void glue_migration_bitmap_clear_dirty(char *str, uint64_t start, uint64_t size, unsigned long page);
void glue_migration_throttle(void);
void glue_ram_discard_range(const char *rbname, uint64_t start, size_t len);
void glue_ram_load_loop(const char *rbname, uint64_t addr, int flags, void *host);
void glue_ram_load_postcopy_loop(uint64_t addr, int flags);
void glue_ram_postcopy_send_discard_bitmap(void);
void glue_ram_save_page(const char *rbname, uint64_t offset, void *host);
void glue_ram_save_queue_pages(const char *rbname, size_t start, size_t len);
void glue_ram_dirty_bitmap_request(char *str);
void glue_ram_dirty_bitmap_reload_begin(char *str);
void glue_ram_dirty_bitmap_reload_complete(char *str);
void glue_ram_dirty_bitmap_sync_start(void);
void glue_ram_dirty_bitmap_sync_wait(void);
void glue_ram_dirty_bitmap_sync_complete(void);
void glue_ram_state_resume_prepare(uint64_t v);
void glue_colo_flush_ram_cache_begin(uint64_t dirty_pages);
void glue_colo_flush_ram_cache_end(void);
void glue_save_xbzrle_page_skipping(void);
void glue_save_xbzrle_page_overflow(void);
void glue_ram_save_iterate_big_wait(uint64_t milliconds, int iterations);
void glue_ram_load_complete(int ret, uint64_t seq_iter);
void glue_ram_write_tracking_ramblock_start(const char *block_id, size_t page_size, void *addr, size_t length);
void glue_ram_write_tracking_ramblock_stop(const char *block_id, size_t page_size, void *addr, size_t length);
void glue_multifd_new_send_channel_async(uint8_t id);
void glue_multifd_recv(uint8_t id, uint64_t packet_num, uint32_t used, uint32_t flags, uint32_t next_packet_size);
void glue_multifd_recv_new_channel(uint8_t id);
void glue_multifd_recv_sync_main(long packet_num);
void glue_multifd_recv_sync_main_signal(uint8_t id);
void glue_multifd_recv_sync_main_wait(uint8_t id);
void glue_multifd_recv_terminate_threads(bool error);
void glue_multifd_recv_thread_end(uint8_t id, uint64_t packets, uint64_t pages);
void glue_multifd_recv_thread_start(uint8_t id);
void glue_multifd_send(uint8_t id, uint64_t packet_num, uint32_t used, uint32_t flags, uint32_t next_packet_size);
void glue_multifd_send_error(uint8_t id);
void glue_multifd_send_sync_main(long packet_num);
void glue_multifd_send_sync_main_signal(uint8_t id);
void glue_multifd_send_sync_main_wait(uint8_t id);
void glue_multifd_send_terminate_threads(bool error);
void glue_multifd_send_thread_end(uint8_t id, uint64_t packets, uint64_t pages);
void glue_multifd_send_thread_start(uint8_t id);
void glue_multifd_tls_outgoing_handshake_start(void *ioc, void *tioc, const char *hostname);
void glue_multifd_tls_outgoing_handshake_error(void *ioc, const char *err);
void glue_multifd_tls_outgoing_handshake_complete(void *ioc);
void glue_multifd_set_outgoing_channel(void *ioc, const char *ioctype, const char *hostname, void *err);
void glue_await_return_path_close_on_source_close(void);
void glue_await_return_path_close_on_source_joining(void);
void glue_migrate_set_state(const char *new_state);
void glue_migrate_fd_cleanup(void);
void glue_migrate_fd_error(const char *error_desc);
void glue_migrate_fd_cancel(void);
void glue_migrate_handle_rp_req_pages(const char *rbname, size_t start, size_t len);
void glue_migrate_pending(uint64_t size, uint64_t max, uint64_t pre, uint64_t compat, uint64_t post);
void glue_migrate_send_rp_message(int msg_type, uint16_t len);
void glue_migrate_send_rp_recv_bitmap(char *name, int64_t size);
void glue_migration_completion_file_err(void);
void glue_migration_completion_vm_stop(int ret);
void glue_migration_completion_postcopy_end(void);
void glue_migration_completion_postcopy_end_after_complete(void);
void glue_migration_rate_limit_pre(int ms);
void glue_migration_rate_limit_post(int urgent);
void glue_migration_return_path_end_before(void);
void glue_migration_return_path_end_after(int rp_error);
void glue_migration_thread_after_loop(void);
void glue_migration_thread_file_err(void);
void glue_migration_thread_setup_complete(void);
void glue_open_return_path_on_source(void);
void glue_open_return_path_on_source_continue(void);
void glue_postcopy_start(void);
void glue_postcopy_pause_return_path(void);
void glue_postcopy_pause_return_path_continued(void);
void glue_postcopy_pause_continued(void);
void glue_postcopy_start_set_run(void);
void glue_postcopy_page_req_add(void *addr, int count);
void glue_source_return_path_thread_bad_end(void);
void glue_source_return_path_thread_end(void);
void glue_source_return_path_thread_entry(void);
void glue_source_return_path_thread_loop_top(void);
void glue_source_return_path_thread_pong(uint32_t val);
void glue_source_return_path_thread_shut(uint32_t val);
void glue_source_return_path_thread_resume_ack(uint32_t v);
void glue_migration_thread_low_pending(uint64_t pending);
void glue_migrate_transferred(uint64_t tranferred, uint64_t time_spent, uint64_t bandwidth, uint64_t size);
void glue_process_incoming_migration_co_end(int ret, int ps);
void glue_process_incoming_migration_co_postcopy_end_main(void);
void glue_migration_set_incoming_channel(void *ioc, const char *ioctype);
void glue_migration_set_outgoing_channel(void *ioc, const char *ioctype, const char *hostname, void *err);
void glue_migrate_state_too_big(void);
void glue_migrate_global_state_post_load(const char *state);
void glue_migrate_global_state_pre_save(const char *state);
void glue_qemu_rdma_accept_incoming_migration(void);
void glue_qemu_rdma_accept_incoming_migration_accepted(void);
void glue_qemu_rdma_accept_pin_state(bool pin);
void glue_qemu_rdma_accept_pin_verbsc(void *verbs);
void glue_qemu_rdma_block_for_wrid_miss(const char *wcompstr, int wcomp, const char *gcompstr, uint64_t req);
void glue_qemu_rdma_cleanup_disconnect(void);
void glue_qemu_rdma_close(void);
void glue_qemu_rdma_connect_pin_all_requested(void);
void glue_qemu_rdma_connect_pin_all_outcome(bool pin);
void glue_qemu_rdma_dest_init_trying(const char *host, const char *ip);
void glue_qemu_rdma_dump_gid(const char *who, const char *src, const char *dst);
void glue_qemu_rdma_exchange_get_response_start(const char *desc);
void glue_qemu_rdma_exchange_get_response_none(const char *desc, int type);
void glue_qemu_rdma_exchange_send_issue_callback(void);
void glue_qemu_rdma_exchange_send_waiting(const char *desc);
void glue_qemu_rdma_exchange_send_received(const char *desc);
void glue_qemu_rdma_fill(size_t control_len, size_t size);
void glue_qemu_rdma_init_ram_blocks(int blocks);
void glue_qemu_rdma_poll_recv(const char *compstr, int64_t comp, int64_t id, int sent);
void glue_qemu_rdma_poll_write(const char *compstr, int64_t comp, int left, uint64_t block, uint64_t chunk, void *local, void *remote);
void glue_qemu_rdma_poll_other(const char *compstr, int64_t comp, int left);
void glue_qemu_rdma_post_send_control(const char *desc);
void glue_qemu_rdma_register_and_get_keys(uint64_t len, void *start);
void glue_qemu_rdma_register_odp_mr(const char *name);
void glue_qemu_rdma_advise_mr(const char *name, uint32_t len, uint64_t addr, const char *res);
void glue_qemu_rdma_registration_handle_compress(int64_t length, int index, int64_t offset);
void glue_qemu_rdma_registration_handle_finished(void);
void glue_qemu_rdma_registration_handle_ram_blocks(void);
void glue_qemu_rdma_registration_handle_ram_blocks_loop(const char *name, uint64_t offset, uint64_t length, void *local_host_addr, unsigned int src_index);
void glue_qemu_rdma_registration_handle_register(int requests);
void glue_qemu_rdma_registration_handle_register_loop(int req, int index, uint64_t addr, uint64_t chunks);
void glue_qemu_rdma_registration_handle_register_rkey(int rkey);
void glue_qemu_rdma_registration_handle_unregister(int requests);
void glue_qemu_rdma_registration_handle_unregister_loop(int count, int index, uint64_t chunk);
void glue_qemu_rdma_registration_handle_unregister_success(uint64_t chunk);
void glue_qemu_rdma_registration_handle_wait(void);
void glue_qemu_rdma_registration_start(uint64_t flags);
void glue_qemu_rdma_registration_stop(uint64_t flags);
void glue_qemu_rdma_registration_stop_ram(void);
void glue_qemu_rdma_resolve_host_trying(const char *host, const char *ip);
void glue_qemu_rdma_signal_unregister_append(uint64_t chunk, int pos);
void glue_qemu_rdma_signal_unregister_already(uint64_t chunk);
void glue_qemu_rdma_unregister_waiting_inflight(uint64_t chunk);
void glue_qemu_rdma_unregister_waiting_proc(uint64_t chunk, int pos);
void glue_qemu_rdma_unregister_waiting_send(uint64_t chunk);
void glue_qemu_rdma_unregister_waiting_complete(uint64_t chunk);
void glue_qemu_rdma_write_flush(int sent);
void glue_qemu_rdma_write_one_block(int count, int block, uint64_t chunk, uint64_t current, uint64_t len, int nb_sent, int nb_chunks);
void glue_qemu_rdma_write_one_post(uint64_t chunk, long addr, long remote, uint32_t len);
void glue_qemu_rdma_write_one_queue_full(void);
void glue_qemu_rdma_write_one_recvregres(int mykey, int theirkey, uint64_t chunk);
void glue_qemu_rdma_write_one_sendreg(uint64_t chunk, int len, int index, int64_t offset);
void glue_qemu_rdma_write_one_top(uint64_t chunks, uint64_t size);
void glue_qemu_rdma_write_one_zero(uint64_t chunk, int len, int index, int64_t offset);
void glue_rdma_add_block(const char *block_name, int block, uint64_t addr, uint64_t offset, uint64_t len, uint64_t end, uint64_t bits, int chunks);
void glue_rdma_block_notification_handle(const char *name, int index);
void glue_rdma_delete_block(void *block, uint64_t addr, uint64_t offset, uint64_t len, uint64_t end, uint64_t bits, int chunks);
void glue_rdma_start_incoming_migration(void);
void glue_rdma_start_incoming_migration_after_dest_init(void);
void glue_rdma_start_incoming_migration_after_rdma_listen(void);
void glue_rdma_start_outgoing_migration_after_rdma_connect(void);
void glue_rdma_start_outgoing_migration_after_rdma_source_init(void);
void glue_postcopy_discard_send_finish(const char *ramblock, int nwords, int ncmds);
void glue_postcopy_discard_send_range(const char *ramblock, unsigned long start, unsigned long length);
void glue_postcopy_cleanup_range(const char *ramblock, void *host_addr, size_t offset, size_t length);
void glue_postcopy_init_range(const char *ramblock, void *host_addr, size_t offset, size_t length);
void glue_postcopy_nhp_range(const char *ramblock, void *host_addr, size_t offset, size_t length);
void glue_postcopy_place_page(void *host_addr);
void glue_postcopy_place_page_zero(void *host_addr);
void glue_postcopy_ram_enable_notify(void);
void glue_mark_postcopy_blocktime_begin(uint64_t addr, void *dd, uint32_t time, int cpu, int received);
void glue_mark_postcopy_blocktime_end(uint64_t addr, void *dd, uint32_t time, int affected_cpu);
void glue_postcopy_pause_fault_thread(void);
void glue_postcopy_pause_fault_thread_continued(void);
void glue_postcopy_ram_fault_thread_entry(void);
void glue_postcopy_ram_fault_thread_exit(void);
void glue_postcopy_ram_fault_thread_fds_core(int baseufd, int quitfd);
void glue_postcopy_ram_fault_thread_fds_extra(size_t index, const char *name, int fd);
void glue_postcopy_ram_fault_thread_quit(void);
void glue_postcopy_ram_fault_thread_request(uint64_t hostaddr, const char *ramblock, size_t offset, uint32_t pid);
void glue_postcopy_ram_incoming_cleanup_closeuf(void);
void glue_postcopy_ram_incoming_cleanup_entry(void);
void glue_postcopy_ram_incoming_cleanup_exit(void);
void glue_postcopy_ram_incoming_cleanup_join(void);
void glue_postcopy_ram_incoming_cleanup_blocktime(uint64_t total);
void glue_postcopy_request_shared_page(const char *sharer, const char *rb, uint64_t rb_offset);
void glue_postcopy_request_shared_page_present(const char *sharer, const char *rb, uint64_t rb_offset);
void glue_postcopy_wake_shared(uint64_t client_addr, const char *rb);
void glue_postcopy_page_req_del(void *addr, int count);
void glue_get_mem_fault_cpu_index(int cpu, uint32_t pid);
void glue_migration_exec_outgoing(const char *cmd);
void glue_migration_exec_incoming(const char *cmd);
void glue_migration_fd_outgoing(int fd);
void glue_migration_fd_incoming(int fd);
void glue_migration_socket_incoming_accepted(void);
void glue_migration_socket_outgoing_connected(const char *hostname);
void glue_migration_socket_outgoing_error(const char *err);
void glue_migration_tls_outgoing_handshake_start(const char *hostname);
void glue_migration_tls_outgoing_handshake_error(const char *err);
void glue_migration_tls_outgoing_handshake_complete(void);
void glue_migration_tls_incoming_handshake_start(void);
void glue_migration_tls_incoming_handshake_error(const char *err);
void glue_migration_tls_incoming_handshake_complete(void);
void glue_colo_vm_state_change(const char *old, const char *new);
void glue_colo_send_message(const char *msg);
void glue_colo_receive_message(const char *msg);
void glue_colo_failover_set_state(const char *new_state);
void glue_send_bitmap_header_enter(void);
void glue_send_bitmap_bits(uint32_t flags, uint64_t start_sector, uint32_t nr_sectors, uint64_t data_size);
void glue_dirty_bitmap_save_iterate(int in_postcopy);
void glue_dirty_bitmap_save_complete_enter(void);
void glue_dirty_bitmap_save_complete_finish(void);
void glue_dirty_bitmap_save_pending(uint64_t pending, uint64_t max_size);
void glue_dirty_bitmap_load_complete(void);
void glue_dirty_bitmap_load_bits_enter(uint64_t first_sector, uint32_t nr_sectors);
void glue_dirty_bitmap_load_bits_zeroes(void);
void glue_dirty_bitmap_load_header(uint32_t flags);
void glue_dirty_bitmap_load_enter(void);
void glue_dirty_bitmap_load_success(void);
void glue_dirtyrate_set_state(const char *new_state);
void glue_query_dirty_rate_info(const char *new_state);
void glue_get_ramblock_vfn_hash(const char *idstr, uint64_t vfn, uint32_t crc);
void glue_calc_page_dirty_rate(const char *idstr, uint32_t new_crc, uint32_t old_crc);
void glue_skip_sample_ramblock(const char *idstr, uint64_t ramblock_size);
void glue_find_page_matched(const char *idstr);
void glue_dirtyrate_calculate(int64_t dirtyrate);
void glue_dirtyrate_do_calculate_vcpu(int idx, uint64_t rate);
void glue_migration_block_init_shared(const char *blk_device_name);
void glue_migration_block_init_full(const char *blk_device_name);
void glue_migration_block_save_device_dirty(int64_t sector);
void glue_migration_block_flush_blks(const char *action, int submitted, int read_done, int transferred);
void glue_migration_block_save(const char *mig_stage, int submitted, int transferred);
void glue_migration_block_save_complete(void);
void glue_migration_block_save_pending(uint64_t pending);
void glue_migration_pagecache_init(int64_t max_num_items);
void glue_migration_pagecache_insert(void);

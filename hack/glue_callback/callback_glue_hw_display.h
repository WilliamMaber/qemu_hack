void glue_jazz_led_read(uint64_t addr, uint8_t val);
void glue_jazz_led_write(uint64_t addr, uint8_t new);
void glue_xenfb_mouse_event(void *opaque, int dx, int dy, int dz, int button_state, int abs_pointer_wanted);
void glue_xenfb_key_event(void *opaque, int scancode, int button_state);
void glue_xenfb_input_connected(void *xendev, int abs_pointer_wanted);
void glue_g364fb_read(uint64_t addr, uint32_t val);
void glue_g364fb_write(uint64_t addr, uint32_t new);
void glue_vmware_value_read(uint32_t index, uint32_t value);
void glue_vmware_value_write(uint32_t index, uint32_t value);
void glue_vmware_palette_read(uint32_t index, uint32_t value);
void glue_vmware_palette_write(uint32_t index, uint32_t value);
void glue_vmware_scratch_read(uint32_t index, uint32_t value);
void glue_vmware_scratch_write(uint32_t index, uint32_t value);
void glue_vmware_setmode(uint32_t w, uint32_t h, uint32_t bpp);
void glue_virtio_gpu_features(bool virgl);
void glue_virtio_gpu_cmd_get_display_info(void);
void glue_virtio_gpu_cmd_get_edid(uint32_t scanout);
void glue_virtio_gpu_cmd_set_scanout(uint32_t id, uint32_t res, uint32_t w, uint32_t h, uint32_t x, uint32_t y);
void glue_virtio_gpu_cmd_set_scanout_blob(uint32_t id, uint32_t res, uint32_t w, uint32_t h, uint32_t x, uint32_t y);
void glue_virtio_gpu_cmd_res_create_2d(uint32_t res, uint32_t fmt, uint32_t w, uint32_t h);
void glue_virtio_gpu_cmd_res_create_3d(uint32_t res, uint32_t fmt, uint32_t w, uint32_t h, uint32_t d);
void glue_virtio_gpu_cmd_res_create_blob(uint32_t res, uint64_t size);
void glue_virtio_gpu_cmd_res_unref(uint32_t res);
void glue_virtio_gpu_cmd_res_back_attach(uint32_t res);
void glue_virtio_gpu_cmd_res_back_detach(uint32_t res);
void glue_virtio_gpu_cmd_res_xfer_toh_2d(uint32_t res);
void glue_virtio_gpu_cmd_res_xfer_toh_3d(uint32_t res);
void glue_virtio_gpu_cmd_res_xfer_fromh_3d(uint32_t res);
void glue_virtio_gpu_cmd_res_flush(uint32_t res, uint32_t w, uint32_t h, uint32_t x, uint32_t y);
void glue_virtio_gpu_cmd_ctx_create(uint32_t ctx, const char *name);
void glue_virtio_gpu_cmd_ctx_destroy(uint32_t ctx);
void glue_virtio_gpu_cmd_ctx_res_attach(uint32_t ctx, uint32_t res);
void glue_virtio_gpu_cmd_ctx_res_detach(uint32_t ctx, uint32_t res);
void glue_virtio_gpu_cmd_ctx_submit(uint32_t ctx, uint32_t size);
void glue_virtio_gpu_update_cursor(uint32_t scanout, uint32_t x, uint32_t y, const char *type, uint32_t res);
void glue_virtio_gpu_fence_ctrl(uint64_t fence, uint32_t type);
void glue_virtio_gpu_fence_resp(uint64_t fence);
void glue_qxl_interface_set_mm_time(int qid, uint32_t mm_time);
void glue_qxl_io_write_vga(int qid, const char *mode, uint32_t addr, uint32_t val);
void glue_qxl_create_guest_primary(int qid, uint32_t width, uint32_t height, uint64_t mem, uint32_t format, uint32_t position);
void glue_qxl_create_guest_primary_rest(int qid, int32_t stride, uint32_t type, uint32_t flags);
void glue_qxl_destroy_primary(int qid);
void glue_qxl_enter_vga_mode(int qid);
void glue_qxl_exit_vga_mode(int qid);
void glue_qxl_hard_reset(int qid, int64_t loadvm);
void glue_qxl_interface_async_complete_io(int qid, uint32_t current_async, void *cookie);
void glue_qxl_interface_attach_worker(int qid);
void glue_qxl_interface_get_init_info(int qid);
void glue_qxl_interface_set_compression_level(int qid, int64_t level);
void glue_qxl_interface_update_area_complete(int qid, uint32_t surface_id, uint32_t dirty_left, uint32_t dirty_right, uint32_t dirty_top, uint32_t dirty_bottom);
void glue_qxl_interface_update_area_complete_rest(int qid, uint32_t num_updated_rects);
void glue_qxl_interface_update_area_complete_overflow(int qid, int max);
void glue_qxl_interface_update_area_complete_schedule_bh(int qid, uint32_t num_dirty);
void glue_qxl_io_destroy_primary_ignored(int qid, const char *mode);
void glue_qxl_io_log(int qid, const char *log_buf);
void glue_qxl_io_read_unexpected(int qid);
void glue_qxl_io_unexpected_vga_mode(int qid, uint64_t addr, uint64_t val, const char *desc);
void glue_qxl_io_write(int qid, const char *mode, uint64_t addr, const char *aname, uint64_t val, unsigned size, int async);
void glue_qxl_memslot_add_guest(int qid, uint32_t slot_id, uint64_t guest_start, uint64_t guest_end);
void glue_qxl_post_load(int qid, const char *mode);
void glue_qxl_pre_load(int qid);
void glue_qxl_pre_save(int qid);
void glue_qxl_reset_surfaces(int qid);
void glue_qxl_ring_command_check(int qid, const char *mode);
void glue_qxl_ring_command_get(int qid, const char *mode);
void glue_qxl_ring_command_req_notification(int qid);
void glue_qxl_ring_cursor_check(int qid, const char *mode);
void glue_qxl_ring_cursor_get(int qid, const char *mode);
void glue_qxl_ring_cursor_req_notification(int qid);
void glue_qxl_ring_res_push(int qid, const char *mode, uint32_t surface_count, uint32_t free_res, void *last_release, const char *notify);
void glue_qxl_ring_res_push_rest(int qid, uint32_t ring_has, uint32_t ring_size, uint32_t prod, uint32_t cons);
void glue_qxl_ring_res_put(int qid, uint32_t free_res);
void glue_qxl_set_mode(int qid, int modenr, uint32_t x_res, uint32_t y_res, uint32_t bits, uint64_t devmem);
void glue_qxl_soft_reset(int qid);
void glue_qxl_spice_destroy_surfaces_complete(int qid);
void glue_qxl_spice_destroy_surfaces(int qid, int async);
void glue_qxl_spice_destroy_surface_wait_complete(int qid, uint32_t id);
void glue_qxl_spice_destroy_surface_wait(int qid, uint32_t id, int async);
void glue_qxl_spice_flush_surfaces_async(int qid, uint32_t surface_count, uint32_t num_free_res);
void glue_qxl_spice_monitors_config(int qid);
void glue_qxl_spice_loadvm_commands(int qid, void *ext, uint32_t count);
void glue_qxl_spice_oom(int qid);
void glue_qxl_spice_reset_cursor(int qid);
void glue_qxl_spice_reset_image_cache(int qid);
void glue_qxl_spice_reset_memslots(int qid);
void glue_qxl_spice_update_area(int qid, uint32_t surface_id, uint32_t left, uint32_t right, uint32_t top, uint32_t bottom);
void glue_qxl_spice_update_area_rest(int qid, uint32_t num_dirty_rects, uint32_t clear_dirty_region);
void glue_qxl_surfaces_dirty(int qid, uint64_t offset, uint64_t size);
void glue_qxl_send_events(int qid, uint32_t events);
void glue_qxl_send_events_vm_stopped(int qid, uint32_t events);
void glue_qxl_set_guest_bug(int qid);
void glue_qxl_interrupt_client_monitors_config(int qid, int num_heads, void *heads);
void glue_qxl_client_monitors_config_unsupported_by_guest(int qid, uint32_t int_mask, void *client_monitors_config);
void glue_qxl_client_monitors_config_unsupported_by_device(int qid, int revision);
void glue_qxl_client_monitors_config_capped(int qid, int requested, int limit);
void glue_qxl_client_monitors_config_crc(int qid, unsigned size, uint32_t crc32);
void glue_qxl_set_client_capabilities_unsupported_by_revision(int qid, int revision);
void glue_qxl_render_blit(int32_t stride, int32_t left, int32_t right, int32_t top, int32_t bottom);
void glue_qxl_render_guest_primary_resized(int32_t width, int32_t height, int32_t stride, int32_t bytes_pp, int32_t bits_pp);
void glue_qxl_render_update_area_done(void *cookie);
void glue_vga_std_read_io(uint32_t addr, uint32_t val);
void glue_vga_std_write_io(uint32_t addr, uint32_t val);
void glue_vga_vbe_read(uint32_t index, uint32_t val);
void glue_vga_vbe_write(uint32_t index, uint32_t val);
void glue_vga_cirrus_read_io(uint32_t addr, uint32_t val);
void glue_vga_cirrus_write_io(uint32_t addr, uint32_t val);
void glue_vga_cirrus_write_blt(uint32_t offset, uint32_t val);
void glue_vga_cirrus_write_gr(uint8_t index, uint8_t val);
void glue_vga_cirrus_bitblt_start(uint8_t blt_rop, uint8_t blt_mode, uint8_t blt_modeext, int blt_width, int blt_height, int blt_dstpitch, int blt_srcpitch, uint32_t blt_dstaddr, uint32_t blt_srcaddr, uint8_t gr_val);
void glue_sii9022_read_reg(uint8_t addr, uint8_t val);
void glue_sii9022_write_reg(uint8_t addr, uint8_t val);
void glue_sii9022_switch_mode(const char *mode);
void glue_ati_mm_read(unsigned int size, uint64_t addr, const char *name, uint64_t val);
void glue_ati_mm_write(unsigned int size, uint64_t addr, const char *name, uint64_t val);
void glue_artist_reg_read(unsigned int size, uint64_t addr, const char *name, uint64_t val);
void glue_artist_reg_write(unsigned int size, uint64_t addr, const char *name, uint64_t val);
void glue_artist_vram_read(unsigned int size, uint64_t addr, int posx, int posy, uint64_t val);
void glue_artist_vram_write(unsigned int size, uint64_t addr, uint64_t val);
void glue_artist_fill_window(unsigned int start_x, unsigned int start_y, unsigned int width, unsigned int height, uint32_t op, uint32_t ctlpln);
void glue_artist_block_move(unsigned int start_x, unsigned int start_y, unsigned int dest_x, unsigned int dest_y, unsigned int width, unsigned int height);
void glue_artist_draw_line(unsigned int start_x, unsigned int start_y, unsigned int end_x, unsigned int end_y);
void glue_cg3_read(uint32_t addr, uint32_t val, unsigned size);
void glue_cg3_write(uint32_t addr, uint32_t val, unsigned size);
void glue_dpcd_read(uint32_t addr, uint8_t val);
void glue_dpcd_write(uint32_t addr, uint8_t val);
void glue_sm501_system_config_read(uint32_t addr, uint32_t val);
void glue_sm501_system_config_write(uint32_t addr, uint32_t val);
void glue_sm501_i2c_read(uint32_t addr, uint8_t val);
void glue_sm501_i2c_write(uint32_t addr, uint32_t val);
void glue_sm501_palette_read(uint32_t addr);
void glue_sm501_palette_write(uint32_t addr, uint32_t val);
void glue_sm501_disp_ctrl_read(uint32_t addr, uint32_t val);
void glue_sm501_disp_ctrl_write(uint32_t addr, uint32_t val);
void glue_sm501_2d_engine_read(uint32_t addr, uint32_t val);
void glue_sm501_2d_engine_write(uint32_t addr, uint32_t val);
void glue_macfb_ctrl_read(uint64_t addr, uint64_t value, unsigned int size);
void glue_macfb_ctrl_write(uint64_t addr, uint64_t value, unsigned int size);
void glue_macfb_sense_read(uint32_t value);
void glue_macfb_sense_write(uint32_t value);
void glue_macfb_update_mode(uint32_t width, uint32_t height, uint8_t depth);

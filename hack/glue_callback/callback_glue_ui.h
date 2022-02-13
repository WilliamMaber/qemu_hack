void glue_console_gfx_new(void);
void glue_console_gfx_reuse(int index);
void glue_console_gfx_close(int index);
void glue_console_putchar_csi(int esc_param0, int esc_param1, int ch, int nb_esc_params);
void glue_console_putchar_unhandled(int ch);
void glue_console_txt_new(int w, int h);
void glue_console_select(int nr);
void glue_console_refresh(int interval);
void glue_displaysurface_create(void *display_surface, int w, int h);
void glue_displaysurface_create_from(void *display_surface, int w, int h, uint32_t format);
void glue_displaysurface_create_pixman(void *display_surface);
void glue_displaysurface_free(void *display_surface);
void glue_displaychangelistener_register(void *dcl, const char *name);
void glue_displaychangelistener_unregister(void *dcl, const char *name);
void glue_ppm_save(int fd, void *image);
void glue_gd_switch(const char *tab, int width, int height);
void glue_gd_update(const char *tab, int x, int y, int w, int h);
void glue_gd_key_event(const char *tab, int gdk_keycode, int qkeycode, const char *action);
void glue_gd_grab(const char *tab, const char *device, const char *reason);
void glue_gd_ungrab(const char *tab, const char *device);
void glue_gd_keymap_windowing(const char *name);
void glue_vnc_key_guest_leds(bool caps, bool num, bool scroll);
void glue_vnc_key_map_init(const char *layout);
void glue_vnc_key_event_ext(bool down, int sym, int keycode, const char *name);
void glue_vnc_key_event_map(bool down, int sym, int keycode, const char *name);
void glue_vnc_key_sync_numlock(bool on);
void glue_vnc_key_sync_capslock(bool on);
void glue_vnc_msg_server_audio_begin(void *state, void *ioc);
void glue_vnc_msg_server_audio_end(void *state, void *ioc);
void glue_vnc_msg_server_audio_data(void *state, void *ioc, const void *buf, size_t len);
void glue_vnc_msg_server_desktop_resize(void *state, void *ioc, int width, int height);
void glue_vnc_msg_server_ext_desktop_resize(void *state, void *ioc, int width, int height, int reason);
void glue_vnc_msg_client_audio_enable(void *state, void *ioc);
void glue_vnc_msg_client_audio_disable(void *state, void *ioc);
void glue_vnc_msg_client_audio_format(void *state, void *ioc, int fmt, int channels, int freq);
void glue_vnc_msg_client_set_desktop_size(void *state, void *ioc, int width, int height, int screens);
void glue_vnc_client_eof(void *state, void *ioc);
void glue_vnc_client_io_error(void *state, void *ioc, const char *msg);
void glue_vnc_client_connect(void *state, void *ioc);
void glue_vnc_client_disconnect_start(void *state, void *ioc);
void glue_vnc_client_disconnect_finish(void *state, void *ioc);
void glue_vnc_client_io_wrap(void *state, void *ioc, const char *type);
void glue_vnc_client_throttle_threshold(void *state, void *ioc, size_t oldoffset, size_t offset, int client_width, int client_height, int bytes_per_pixel, void *audio_cap);
void glue_vnc_client_throttle_incremental(void *state, void *ioc, int job_update, size_t offset);
void glue_vnc_client_throttle_forced(void *state, void *ioc, int job_update, size_t offset);
void glue_vnc_client_throttle_audio(void *state, void *ioc, size_t offset);
void glue_vnc_client_unthrottle_forced(void *state, void *ioc);
void glue_vnc_client_unthrottle_incremental(void *state, void *ioc, size_t offset);
void glue_vnc_client_output_limit(void *state, void *ioc, size_t offset, size_t threshold);
void glue_vnc_server_dpy_pageflip(void *dpy, int w, int h, int fmt);
void glue_vnc_server_dpy_recreate(void *dpy, int w, int h, int fmt);
void glue_vnc_job_add_rect(void *state, void *job, int x, int y, int w, int h);
void glue_vnc_job_discard_rect(void *state, void *job, int x, int y, int w, int h);
void glue_vnc_job_clamp_rect(void *state, void *job, int x, int y, int w, int h);
void glue_vnc_job_clamped_rect(void *state, void *job, int x, int y, int w, int h);
void glue_vnc_job_nrects(void *state, void *job, int nrects);
void glue_vnc_auth_init(void *display, int websock, int auth, int subauth);
void glue_vnc_auth_start(void *state, int method);
void glue_vnc_auth_pass(void *state, int method);
void glue_vnc_auth_fail(void *state, int method, const char *message, const char *reason);
void glue_vnc_auth_reject(void *state, int expect, int got);
void glue_vnc_auth_vencrypt_version(void *state, int major, int minor);
void glue_vnc_auth_vencrypt_subauth(void *state, int auth);
void glue_vnc_auth_sasl_mech_list(void *state, const char *mechs);
void glue_vnc_auth_sasl_mech_choose(void *state, const char *mech);
void glue_vnc_auth_sasl_start(void *state, const void *clientdata, size_t clientlen, const void *serverdata, size_t severlen, int ret);
void glue_vnc_auth_sasl_step(void *state, const void *clientdata, size_t clientlen, const void *serverdata, size_t severlen, int ret);
void glue_vnc_auth_sasl_ssf(void *state, int ssf);
void glue_vnc_auth_sasl_username(void *state, const char *name);
void glue_input_event_key_number(int conidx, int number, const char *qcode, bool down);
void glue_input_event_key_qcode(int conidx, const char *qcode, bool down);
void glue_input_event_btn(int conidx, const char *btn, bool down);
void glue_input_event_rel(int conidx, const char *axis, int value);
void glue_input_event_abs(int conidx, const char *axis, int value);
void glue_input_event_sync(void);
void glue_input_mouse_mode(int absolute);
void glue_sdl2_process_key(int sdl_scancode, int qcode, const char *action);
void glue_qemu_spice_add_memslot(int qid, uint32_t slot_id, unsigned long virt_start, unsigned long virt_end, int async);
void glue_qemu_spice_del_memslot(int qid, uint32_t gid, uint32_t slot_id);
void glue_qemu_spice_create_primary_surface(int qid, uint32_t sid, void *surface, int async);
void glue_qemu_spice_destroy_primary_surface(int qid, uint32_t sid, int async);
void glue_qemu_spice_wakeup(uint32_t qid);
void glue_qemu_spice_create_update(uint32_t left, uint32_t right, uint32_t top, uint32_t bottom);
void glue_qemu_spice_display_update(int qid, uint32_t x, uint32_t y, uint32_t w, uint32_t h);
void glue_qemu_spice_display_surface(int qid, uint32_t w, uint32_t h, int fast);
void glue_qemu_spice_display_refresh(int qid, int notify);
void glue_qemu_spice_ui_info(int qid, uint32_t width, uint32_t height);
void glue_qemu_spice_gl_surface(int qid, uint32_t w, uint32_t h, uint32_t fourcc);
void glue_qemu_spice_gl_scanout_disable(int qid);
void glue_qemu_spice_gl_scanout_texture(int qid, uint32_t w, uint32_t h, uint32_t fourcc);
void glue_qemu_spice_gl_cursor(int qid, bool enabled, bool hotspot);
void glue_qemu_spice_gl_forward_dmabuf(int qid, uint32_t width, uint32_t height);
void glue_qemu_spice_gl_render_dmabuf(int qid, uint32_t width, uint32_t height);
void glue_qemu_spice_gl_update(int qid, uint32_t x, uint32_t y, uint32_t w, uint32_t h);
void glue_keymap_parse(const char *file);
void glue_keymap_add(int sym, int code, const char *line);
void glue_keymap_unmapped(int sym);
void glue_xkeymap_extension(const char *name);
void glue_xkeymap_vendor(const char *name);
void glue_xkeymap_keycodes(const char *name);
void glue_xkeymap_keymap(const char *name);
void glue_vdagent_open(void);
void glue_vdagent_close(void);
void glue_vdagent_send(const char *name);
void glue_vdagent_send_empty_clipboard(void);
void glue_vdagent_recv_chunk(uint32_t size);
void glue_vdagent_recv_msg(const char *name, uint32_t size);
void glue_vdagent_peer_cap(const char *name);
void glue_vdagent_cb_grab_selection(const char *name);
void glue_vdagent_cb_grab_type(const char *name);
void glue_vdagent_cb_serial_discard(uint32_t current, uint32_t received);
void glue_dbus_registered_listener(const char *bus_name);
void glue_dbus_listener_vanished(const char *bus_name);
void glue_dbus_kbd_press(unsigned int keycode);
void glue_dbus_kbd_release(unsigned int keycode);
void glue_dbus_mouse_press(unsigned int button);
void glue_dbus_mouse_release(unsigned int button);
void glue_dbus_mouse_set_pos(unsigned int x, unsigned int y);
void glue_dbus_mouse_rel_motion(int dx, int dy);
void glue_dbus_update(int x, int y, int w, int h);
void glue_dbus_clipboard_grab_failed(void);
void glue_dbus_clipboard_register(const char *bus_name);
void glue_dbus_clipboard_unregister(const char *bus_name);
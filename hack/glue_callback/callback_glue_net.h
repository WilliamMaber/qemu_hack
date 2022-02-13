void glue_qemu_announce_self_iter(const char *id, const char *name, const char *mac, int skip);
void glue_qemu_announce_timer_del(bool free_named, bool free_timer, char *id);
void glue_vhost_user_event(const char *chr, int event);
void glue_colo_proxy_main(const char *chr);
void glue_colo_compare_main(const char *chr);
void glue_colo_compare_drop_packet(const char *queue, const char *chr);
void glue_colo_compare_udp_miscompare(const char *sta, int size);
void glue_colo_compare_icmp_miscompare(const char *sta, int size);
void glue_colo_compare_ip_info(int psize, const char *sta, const char *stb, int ssize, const char *stc, const char *std);
void glue_colo_old_packet_check_found(int64_t old_time);
void glue_colo_compare_tcp_info(const char *pkt, uint32_t seq, uint32_t ack, int hdlen, int pdlen, int offset, int flags);
void glue_colo_filter_rewriter_pkt_info(const char *func, const char *src, const char *dst, uint32_t seq, uint32_t ack, uint32_t flag);
void glue_colo_filter_rewriter_conn_offset(uint32_t offset);
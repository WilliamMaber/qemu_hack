void glue_pci_nvme_irq_msix(uint32_t vector);
void glue_pci_nvme_irq_pin(void);
void glue_pci_nvme_irq_masked(void);
void glue_pci_nvme_dma_read(uint64_t prp1, uint64_t prp2);
void glue_pci_nvme_map_addr(uint64_t addr, uint64_t len);
void glue_pci_nvme_map_addr_cmb(uint64_t addr, uint64_t len);
void glue_pci_nvme_map_prp(uint64_t trans_len, uint32_t len, uint64_t prp1, uint64_t prp2, int num_prps);
void glue_pci_nvme_map_sgl(uint8_t typ, uint64_t len);
void glue_pci_nvme_io_cmd(uint16_t cid, uint32_t nsid, uint16_t sqid, uint8_t opcode, const char *opname);
void glue_pci_nvme_admin_cmd(uint16_t cid, uint16_t sqid, uint8_t opcode, const char *opname);
void glue_pci_nvme_flush_ns(uint32_t nsid);
void glue_pci_nvme_format_set(uint32_t nsid, uint8_t lbaf, uint8_t mset, uint8_t pi, uint8_t pil);
void glue_pci_nvme_read(uint16_t cid, uint32_t nsid, uint32_t nlb, uint64_t count, uint64_t lba);
void glue_pci_nvme_write(uint16_t cid, const char *verb, uint32_t nsid, uint32_t nlb, uint64_t count, uint64_t lba);
void glue_pci_nvme_rw_cb(uint16_t cid, const char *blkname);
void glue_pci_nvme_misc_cb(uint16_t cid);
void glue_pci_nvme_dif_rw(uint8_t pract, uint8_t prinfo);
void glue_pci_nvme_dif_rw_cb(uint16_t cid, const char *blkname);
void glue_pci_nvme_dif_rw_mdata_in_cb(uint16_t cid, const char *blkname);
void glue_pci_nvme_dif_rw_mdata_out_cb(uint16_t cid, const char *blkname);
void glue_pci_nvme_dif_rw_check_cb(uint16_t cid, uint8_t prinfo, uint16_t apptag, uint16_t appmask, uint32_t reftag);
void glue_pci_nvme_dif_pract_generate_dif(size_t len, size_t lba_size, size_t chksum_len, uint16_t apptag, uint32_t reftag);
void glue_pci_nvme_dif_check(uint8_t prinfo, uint16_t chksum_len);
void glue_pci_nvme_dif_prchk_disabled(uint16_t apptag, uint32_t reftag);
void glue_pci_nvme_dif_prchk_guard(uint16_t guard, uint16_t crc);
void glue_pci_nvme_dif_prchk_apptag(uint16_t apptag, uint16_t elbat, uint16_t elbatm);
void glue_pci_nvme_dif_prchk_reftag(uint32_t reftag, uint32_t elbrt);
void glue_pci_nvme_copy(uint16_t cid, uint32_t nsid, uint16_t nr, uint8_t format);
void glue_pci_nvme_copy_source_range(uint64_t slba, uint32_t nlb);
void glue_pci_nvme_copy_out(uint64_t slba, uint32_t nlb);
void glue_pci_nvme_verify(uint16_t cid, uint32_t nsid, uint64_t slba, uint32_t nlb);
void glue_pci_nvme_verify_mdata_in_cb(uint16_t cid, const char *blkname);
void glue_pci_nvme_verify_cb(uint16_t cid, uint8_t prinfo, uint16_t apptag, uint16_t appmask, uint32_t reftag);
void glue_pci_nvme_rw_complete_cb(uint16_t cid, const char *blkname);
void glue_pci_nvme_block_status(int64_t offset, int64_t bytes, int64_t pnum, int ret, bool zeroed);
void glue_pci_nvme_dsm(uint32_t nr, uint32_t attr);
void glue_pci_nvme_dsm_deallocate(uint64_t slba, uint32_t nlb);
void glue_pci_nvme_dsm_single_range_limit_exceeded(uint32_t nlb, uint32_t dmrsl);
void glue_pci_nvme_compare(uint16_t cid, uint32_t nsid, uint64_t slba, uint32_t nlb);
void glue_pci_nvme_compare_data_cb(uint16_t cid);
void glue_pci_nvme_compare_mdata_cb(uint16_t cid);
void glue_pci_nvme_aio_discard_cb(uint16_t cid);
void glue_pci_nvme_aio_copy_in_cb(uint16_t cid);
void glue_pci_nvme_aio_flush_cb(uint16_t cid, const char *blkname);
void glue_pci_nvme_create_sq(uint64_t addr, uint16_t sqid, uint16_t cqid, uint16_t qsize, uint16_t qflags);
void glue_pci_nvme_create_cq(uint64_t addr, uint16_t cqid, uint16_t vector, uint16_t size, uint16_t qflags, int ien);
void glue_pci_nvme_del_sq(uint16_t qid);
void glue_pci_nvme_del_cq(uint16_t cqid);
void glue_pci_nvme_identify(uint16_t cid, uint8_t cns, uint16_t ctrlid, uint8_t csi);
void glue_pci_nvme_identify_ctrl(void);
void glue_pci_nvme_identify_ctrl_csi(uint8_t csi);
void glue_pci_nvme_identify_ns(uint32_t ns);
void glue_pci_nvme_identify_ctrl_list(uint8_t cns, uint16_t cntid);
void glue_pci_nvme_identify_ns_csi(uint32_t ns, uint8_t csi);
void glue_pci_nvme_identify_nslist(uint32_t ns);
void glue_pci_nvme_identify_nslist_csi(uint16_t ns, uint8_t csi);
void glue_pci_nvme_identify_cmd_set(void);
void glue_pci_nvme_identify_ns_descr_list(uint32_t ns);
void glue_pci_nvme_get_log(uint16_t cid, uint8_t lid, uint8_t lsp, uint8_t rae, uint32_t len, uint64_t off);
void glue_pci_nvme_getfeat(uint16_t cid, uint32_t nsid, uint8_t fid, uint8_t sel, uint32_t cdw11);
void glue_pci_nvme_setfeat(uint16_t cid, uint32_t nsid, uint8_t fid, uint8_t save, uint32_t cdw11);
void glue_pci_nvme_getfeat_vwcache(const char* result);
void glue_pci_nvme_getfeat_numq(int result);
void glue_pci_nvme_setfeat_numq(int reqcq, int reqsq, int gotcq, int gotsq);
void glue_pci_nvme_setfeat_timestamp(uint64_t ts);
void glue_pci_nvme_getfeat_timestamp(uint64_t ts);
void glue_pci_nvme_process_aers(int queued);
void glue_pci_nvme_aer(uint16_t cid);
void glue_pci_nvme_aer_aerl_exceeded(void);
void glue_pci_nvme_aer_masked(uint8_t type, uint8_t mask);
void glue_pci_nvme_aer_post_cqe(uint8_t typ, uint8_t info, uint8_t log_page);
void glue_pci_nvme_ns_attachment(uint16_t cid, uint8_t sel);
void glue_pci_nvme_ns_attachment_attach(uint16_t cntlid, uint32_t nsid);
void glue_pci_nvme_enqueue_event(uint8_t typ, uint8_t info, uint8_t log_page);
void glue_pci_nvme_enqueue_event_noqueue(int queued);
void glue_pci_nvme_enqueue_event_masked(uint8_t typ);
void glue_pci_nvme_no_outstanding_aers(void);
void glue_pci_nvme_enqueue_req_completion(uint16_t cid, uint16_t cqid, uint32_t dw0, uint32_t dw1, uint16_t status);
void glue_pci_nvme_mmio_read(uint64_t addr, unsigned size);
void glue_pci_nvme_mmio_write(uint64_t addr, uint64_t data, unsigned size);
void glue_pci_nvme_mmio_doorbell_cq(uint16_t cqid, uint16_t new_head);
void glue_pci_nvme_mmio_doorbell_sq(uint16_t sqid, uint16_t new_tail);
void glue_pci_nvme_mmio_intm_set(uint64_t data, uint64_t new_mask);
void glue_pci_nvme_mmio_intm_clr(uint64_t data, uint64_t new_mask);
void glue_pci_nvme_mmio_cfg(uint64_t data);
void glue_pci_nvme_mmio_aqattr(uint64_t data);
void glue_pci_nvme_mmio_asqaddr(uint64_t data);
void glue_pci_nvme_mmio_acqaddr(uint64_t data);
void glue_pci_nvme_mmio_asqaddr_hi(uint64_t data, uint64_t new_addr);
void glue_pci_nvme_mmio_acqaddr_hi(uint64_t data, uint64_t new_addr);
void glue_pci_nvme_mmio_start_success(void);
void glue_pci_nvme_mmio_stopped(void);
void glue_pci_nvme_mmio_shutdown_set(void);
void glue_pci_nvme_mmio_shutdown_cleared(void);
void glue_pci_nvme_zns_zone_reset(uint64_t zslba);
void glue_pci_nvme_set_descriptor_extension(uint64_t slba, uint32_t zone_idx);
void glue_pci_nvme_zd_extension_set(uint32_t zone_idx);
void glue_pci_nvme_clear_ns_close(uint32_t state, uint64_t slba);
void glue_pci_nvme_clear_ns_reset(uint32_t state, uint64_t slba);
void glue_pci_nvme_err_mdts(size_t len);
void glue_pci_nvme_err_zasl(size_t len);
void glue_pci_nvme_err_req_status(uint16_t cid, uint32_t nsid, uint16_t status, uint8_t opc);
void glue_pci_nvme_err_addr_read(uint64_t addr);
void glue_pci_nvme_err_addr_write(uint64_t addr);
void glue_pci_nvme_err_cfs(void);
void glue_pci_nvme_err_aio(uint16_t cid, const char *errname, uint16_t status);
void glue_pci_nvme_err_copy_invalid_format(uint8_t format);
void glue_pci_nvme_err_invalid_sgld(uint16_t cid, uint8_t typ);
void glue_pci_nvme_err_invalid_num_sgld(uint16_t cid, uint8_t typ);
void glue_pci_nvme_err_invalid_sgl_excess_length(uint32_t residual);
void glue_pci_nvme_err_invalid_dma(void);
void glue_pci_nvme_err_invalid_prplist_ent(uint64_t prplist);
void glue_pci_nvme_err_invalid_prp2_align(uint64_t prp2);
void glue_pci_nvme_err_invalid_opc(uint8_t opc);
void glue_pci_nvme_err_invalid_admin_opc(uint8_t opc);
void glue_pci_nvme_err_invalid_lba_range(uint64_t start, uint64_t len, uint64_t limit);
void glue_pci_nvme_err_invalid_log_page_offset(uint64_t ofs, uint64_t size);
void glue_pci_nvme_err_cmb_invalid_cba(uint64_t cmbmsc);
void glue_pci_nvme_err_cmb_not_enabled(uint64_t cmbmsc);
void glue_pci_nvme_err_unaligned_zone_cmd(uint8_t action, uint64_t slba, uint64_t zslba);
void glue_pci_nvme_err_invalid_zone_state_transition(uint8_t action, uint64_t slba, uint8_t attrs);
void glue_pci_nvme_err_write_not_at_wp(uint64_t slba, uint64_t zone, uint64_t wp);
void glue_pci_nvme_err_append_not_at_start(uint64_t slba, uint64_t zone);
void glue_pci_nvme_err_zone_is_full(uint64_t zslba);
void glue_pci_nvme_err_zone_is_read_only(uint64_t zslba);
void glue_pci_nvme_err_zone_is_offline(uint64_t zslba);
void glue_pci_nvme_err_zone_boundary(uint64_t slba, uint32_t nlb, uint64_t zcap);
void glue_pci_nvme_err_zone_invalid_write(uint64_t slba, uint64_t wp);
void glue_pci_nvme_err_zone_write_not_ok(uint64_t slba, uint32_t nlb, uint16_t status);
void glue_pci_nvme_err_zone_read_not_ok(uint64_t slba, uint32_t nlb, uint16_t status);
void glue_pci_nvme_err_insuff_active_res(uint32_t max_active);
void glue_pci_nvme_err_insuff_open_res(uint32_t max_open);
void glue_pci_nvme_err_zd_extension_map_error(uint32_t zone_idx);
void glue_pci_nvme_err_invalid_iocsci(uint32_t idx);
void glue_pci_nvme_err_invalid_del_sq(uint16_t qid);
void glue_pci_nvme_err_invalid_create_sq_cqid(uint16_t cqid);
void glue_pci_nvme_err_invalid_create_sq_sqid(uint16_t sqid);
void glue_pci_nvme_err_invalid_create_sq_size(uint16_t qsize);
void glue_pci_nvme_err_invalid_create_sq_addr(uint64_t addr);
void glue_pci_nvme_err_invalid_create_sq_qflags(uint16_t qflags);
void glue_pci_nvme_err_invalid_del_cq_cqid(uint16_t cqid);
void glue_pci_nvme_err_invalid_del_cq_notempty(uint16_t cqid);
void glue_pci_nvme_err_invalid_create_cq_cqid(uint16_t cqid);
void glue_pci_nvme_err_invalid_create_cq_size(uint16_t size);
void glue_pci_nvme_err_invalid_create_cq_addr(uint64_t addr);
void glue_pci_nvme_err_invalid_create_cq_vector(uint16_t vector);
void glue_pci_nvme_err_invalid_create_cq_qflags(uint16_t qflags);
void glue_pci_nvme_err_invalid_identify_cns(uint16_t cns);
void glue_pci_nvme_err_invalid_getfeat(int dw10);
void glue_pci_nvme_err_invalid_setfeat(uint32_t dw10);
void glue_pci_nvme_err_invalid_log_page(uint16_t cid, uint16_t lid);
void glue_pci_nvme_err_startfail_cq(void);
void glue_pci_nvme_err_startfail_sq(void);
void glue_pci_nvme_err_startfail_asq_misaligned(uint64_t addr);
void glue_pci_nvme_err_startfail_acq_misaligned(uint64_t addr);
void glue_pci_nvme_err_startfail_page_too_small(uint8_t log2ps, uint8_t maxlog2ps);
void glue_pci_nvme_err_startfail_page_too_large(uint8_t log2ps, uint8_t maxlog2ps);
void glue_pci_nvme_err_startfail_cqent_too_small(uint8_t log2ps, uint8_t maxlog2ps);
void glue_pci_nvme_err_startfail_cqent_too_large(uint8_t log2ps, uint8_t maxlog2ps);
void glue_pci_nvme_err_startfail_sqent_too_small(uint8_t log2ps, uint8_t maxlog2ps);
void glue_pci_nvme_err_startfail_sqent_too_large(uint8_t log2ps, uint8_t maxlog2ps);
void glue_pci_nvme_err_startfail_css(uint8_t css);
void glue_pci_nvme_err_startfail_asqent_sz_zero(void);
void glue_pci_nvme_err_startfail_acqent_sz_zero(void);
void glue_pci_nvme_err_startfail_zasl_too_small(uint32_t zasl, uint32_t pagesz);
void glue_pci_nvme_err_startfail(void);
void glue_pci_nvme_err_invalid_mgmt_action(uint8_t action);
void glue_pci_nvme_ub_mmiowr_misaligned32(uint64_t offset);
void glue_pci_nvme_ub_mmiowr_toosmall(uint64_t offset, unsigned size);
void glue_pci_nvme_ub_mmiowr_intmask_with_msix(void);
void glue_pci_nvme_ub_mmiowr_ro_csts(void);
void glue_pci_nvme_ub_mmiowr_ssreset_w1c_unsupported(void);
void glue_pci_nvme_ub_mmiowr_ssreset_unsupported(void);
void glue_pci_nvme_ub_mmiowr_cmbloc_reserved(void);
void glue_pci_nvme_ub_mmiowr_cmbsz_readonly(void);
void glue_pci_nvme_ub_mmiowr_pmrcap_readonly(void);
void glue_pci_nvme_ub_mmiowr_pmrsts_readonly(void);
void glue_pci_nvme_ub_mmiowr_pmrebs_readonly(void);
void glue_pci_nvme_ub_mmiowr_pmrswtp_readonly(void);
void glue_pci_nvme_ub_mmiowr_invalid(uint64_t offset, uint64_t data);
void glue_pci_nvme_ub_mmiord_misaligned32(uint64_t offset);
void glue_pci_nvme_ub_mmiord_toosmall(uint64_t offset);
void glue_pci_nvme_ub_mmiord_invalid_ofs(uint64_t offset);
void glue_pci_nvme_ub_db_wr_misaligned(uint64_t offset);
void glue_pci_nvme_ub_db_wr_invalid_cq(uint32_t qid);
void glue_pci_nvme_ub_db_wr_invalid_cqhead(uint32_t qid, uint16_t new_head);
void glue_pci_nvme_ub_db_wr_invalid_sq(uint32_t qid);
void glue_pci_nvme_ub_db_wr_invalid_sqtail(uint32_t qid, uint16_t new_tail);
void glue_pci_nvme_ub_unknown_css_value(void);
void glue_pci_nvme_ub_too_many_mappings(void);

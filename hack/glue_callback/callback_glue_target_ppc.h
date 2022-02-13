void glue_kvm_failed_spr_set(int spr, const char *msg);
void glue_kvm_failed_spr_get(int spr, const char *msg);
void glue_kvm_failed_fpscr_set(const char *msg);
void glue_kvm_failed_fp_set(const char *fpname, int fpnum, const char *msg);
void glue_kvm_failed_vscr_set(const char *msg);
void glue_kvm_failed_vr_set(int vr, const char *msg);
void glue_kvm_failed_fpscr_get(const char *msg);
void glue_kvm_failed_fp_get(const char *fpname, int fpnum, const char *msg);
void glue_kvm_failed_vscr_get(const char *msg);
void glue_kvm_failed_vr_get(int vr, const char *msg);
void glue_kvm_failed_vpa_addr_get(const char *msg);
void glue_kvm_failed_slb_get(const char *msg);
void glue_kvm_failed_dtl_get(const char *msg);
void glue_kvm_failed_vpa_addr_set(const char *msg);
void glue_kvm_failed_slb_set(const char *msg);
void glue_kvm_failed_dtl_set(const char *msg);
void glue_kvm_failed_null_vpa_addr_set(const char *msg);
void glue_kvm_failed_put_vpa(void);
void glue_kvm_failed_get_vpa(void);
void glue_kvm_handle_dcr_write(void);
void glue_kvm_handle_dcr_read(void);
void glue_kvm_handle_halt(void);
void glue_kvm_handle_papr_hcall(void);
void glue_kvm_handle_epr(void);
void glue_kvm_handle_watchdog_expiry(void);
void glue_kvm_handle_debug_exception(void);
void glue_kvm_handle_nmi_exception(void);
void glue_ppc_excp_rfi(uint64_t nip, uint64_t msr);
void glue_ppc_excp_dsi(uint64_t dsisr, uint64_t dar);
void glue_ppc_excp_isi(uint64_t msr, uint64_t nip);
void glue_ppc_excp_fp_ignore(void);
void glue_ppc_excp_inval(uint64_t nip);
void glue_ppc_excp_print(const char *excp);

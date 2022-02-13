void glue_arm_gt_recalc(int timer, int irqstate, uint64_t nexttick);
void glue_arm_gt_recalc_disabled(int timer);
void glue_arm_gt_cval_write(int timer, uint64_t value);
void glue_arm_gt_tval_write(int timer, uint64_t value);
void glue_arm_gt_ctl_write(int timer, uint64_t value);
void glue_arm_gt_imask_toggle(int timer, int irqstate);
void glue_arm_gt_cntvoff_write(uint64_t value);
void glue_kvm_arm_fixup_msi_route(uint64_t iova, uint64_t gpa);

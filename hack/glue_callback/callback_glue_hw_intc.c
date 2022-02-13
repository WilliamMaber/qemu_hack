
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_intc.h"

void glue_pic_update_irq(bool master, uint8_t imr, uint8_t irr, uint8_t padd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pic_update_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,B,B,B)" ,master,imr,irr,padd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pic_set_irq(bool master, int irq, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pic_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,i,i)" ,master,irq,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pic_interrupt(int irq, int intno){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pic_interrupt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,irq,intno);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pic_ioport_write(bool master, uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pic_ioport_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,K,K)" ,master,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pic_ioport_read(bool master, uint64_t addr, int val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pic_ioport_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,K,i)" ,master,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpu_set_apic_base(uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpu_set_apic_base");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpu_get_apic_base(uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpu_get_apic_base");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_apic_report_irq_delivered(int apic_irq_delivered){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"apic_report_irq_delivered");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,apic_irq_delivered);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_apic_reset_irq_delivered(int apic_irq_delivered){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"apic_reset_irq_delivered");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,apic_irq_delivered);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_apic_get_irq_delivered(int apic_irq_delivered){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"apic_get_irq_delivered");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,apic_irq_delivered);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_apic_local_deliver(int vector, uint32_t lvt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"apic_local_deliver");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,vector,lvt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_apic_deliver_irq(uint8_t dest, uint8_t dest_mode, uint8_t delivery_mode, uint8_t vector_num, uint8_t trigger_mode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"apic_deliver_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B,B,B)" ,dest,dest_mode,delivery_mode,vector_num,trigger_mode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_apic_mem_readl(uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"apic_mem_readl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_apic_mem_writel(uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"apic_mem_writel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ioapic_set_remote_irr(int n){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ioapic_set_remote_irr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,n);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ioapic_clear_remote_irr(int n, int vector){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ioapic_clear_remote_irr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,n,vector);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ioapic_eoi_broadcast(int vector){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ioapic_eoi_broadcast");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,vector);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ioapic_eoi_delayed_reassert(int vector){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ioapic_eoi_delayed_reassert");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,vector);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ioapic_mem_read(uint8_t addr, uint8_t regsel, uint8_t size, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ioapic_mem_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B,K)" ,addr,regsel,size,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ioapic_mem_write(uint8_t addr, uint8_t regsel, uint8_t size, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ioapic_mem_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B,K)" ,addr,regsel,size,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ioapic_set_irq(int vector, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ioapic_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,vector,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_intctl_mem_readl(uint32_t cpu, uint64_t addr, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_intctl_mem_readl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,cpu,addr,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_intctl_mem_writel(uint32_t cpu, uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_intctl_mem_writel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,cpu,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_intctl_mem_writel_clear(uint32_t cpu, uint32_t val, uint32_t intreg_pending){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_intctl_mem_writel_clear");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,cpu,val,intreg_pending);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_intctl_mem_writel_set(uint32_t cpu, uint32_t val, uint32_t intreg_pending){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_intctl_mem_writel_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,cpu,val,intreg_pending);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_intctlm_mem_readl(uint64_t addr, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_intctlm_mem_readl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_intctlm_mem_writel(uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_intctlm_mem_writel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_intctlm_mem_writel_enable(uint32_t val, uint32_t intregm_disabled){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_intctlm_mem_writel_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,val,intregm_disabled);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_intctlm_mem_writel_disable(uint32_t val, uint32_t intregm_disabled){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_intctlm_mem_writel_disable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,val,intregm_disabled);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_intctlm_mem_writel_target(uint32_t cpu){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_intctlm_mem_writel_target");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,cpu);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_check_interrupts(uint32_t pending, uint32_t intregm_disabled){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_check_interrupts");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,pending,intregm_disabled);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_set_irq(uint32_t target_cpu, int irq, uint32_t pil, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,K,i)" ,target_cpu,irq,pil,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_set_timer_irq_cpu(int cpu, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_set_timer_irq_cpu");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cpu,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_grlib_irqmp_check_irqs(uint32_t pend, uint32_t force, uint32_t mask, uint32_t lvl1, uint32_t lvl2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"grlib_irqmp_check_irqs");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K)" ,pend,force,mask,lvl1,lvl2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_grlib_irqmp_ack(int intno){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"grlib_irqmp_ack");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,intno);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_grlib_irqmp_set_irq(int irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"grlib_irqmp_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_grlib_irqmp_readl_unknown(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"grlib_irqmp_readl_unknown");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_grlib_irqmp_writel_unknown(uint64_t addr, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"grlib_irqmp_writel_unknown");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xics_icp_check_ipi(int server, uint8_t mfrr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xics_icp_check_ipi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B)" ,server,mfrr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xics_icp_accept(uint32_t old_xirr, uint32_t new_xirr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xics_icp_accept");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,old_xirr,new_xirr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xics_icp_eoi(int server, uint32_t xirr, uint32_t new_xirr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xics_icp_eoi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,server,xirr,new_xirr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xics_icp_irq(int server, int nr, uint8_t priority){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xics_icp_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,B)" ,server,nr,priority);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xics_icp_raise(uint32_t xirr, uint8_t pending_priority){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xics_icp_raise");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B)" ,xirr,pending_priority);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xics_ics_set_irq_msi(int srcno, int nr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xics_ics_set_irq_msi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,srcno,nr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xics_masked_pending(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xics_masked_pending");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xics_ics_set_irq_lsi(int srcno, int nr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xics_ics_set_irq_lsi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,srcno,nr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xics_ics_write_xive(int nr, int srcno, int server, uint8_t priority){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xics_ics_write_xive");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,B)" ,nr,srcno,server,priority);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xics_ics_reject(int nr, int srcno){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xics_ics_reject");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,nr,srcno);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xics_ics_eoi(int nr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xics_ics_eoi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,nr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_flic_create_device(int err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"flic_create_device");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_flic_reset_failed(int err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"flic_reset_failed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_s390_airq_suppressed(uint8_t type, uint8_t isc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_s390_airq_suppressed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,type,isc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_s390_suppress_airq(uint8_t isc, const char *from, const char *to){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_s390_suppress_airq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,b,b)" ,isc,&from,&to);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_vic_set_irq(int irq, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_vic_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,irq,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_vic_update_fiq(int flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_vic_update_fiq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_vic_update_irq(int flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_vic_update_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_vic_read(uint64_t offset, unsigned size, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_vic_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,K)" ,offset,size,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_vic_write(uint64_t offset, unsigned size, uint32_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_vic_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,K)" ,offset,size,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gic_enable_irq(int irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gic_enable_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gic_disable_irq(int irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gic_disable_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gic_set_irq(int irq, int level, int cpumask, int target){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gic_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,irq,level,cpumask,target);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gic_update_bestirq(const char *s, int cpu, int irq, int prio, int priority_mask, int running_priority){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gic_update_bestirq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i,i,i,i)" ,&s,cpu,irq,prio,priority_mask,running_priority);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gic_update_set_irq(int cpu, const char *name, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gic_update_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,i)" ,cpu,&name,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gic_acknowledge_irq(const char *s, int cpu, int irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gic_acknowledge_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&s,cpu,irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gic_cpu_write(const char *s, int cpu, int addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gic_cpu_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i,K)" ,&s,cpu,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gic_cpu_read(const char *s, int cpu, int addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gic_cpu_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i,K)" ,&s,cpu,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gic_hyp_read(int addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gic_hyp_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gic_hyp_write(int addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gic_hyp_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gic_dist_read(int addr, unsigned int size, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gic_dist_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,I,K)" ,addr,size,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gic_dist_write(int addr, unsigned int size, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gic_dist_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,I,K)" ,addr,size,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gic_lr_entry(int cpu, int entry, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gic_lr_entry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K)" ,cpu,entry,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gic_update_maintenance_irq(int cpu, int val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gic_update_maintenance_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_pmr_read(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_pmr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_pmr_write(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_pmr_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_bpr_read(int grp, uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_bpr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,grp,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_bpr_write(int grp, uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_bpr_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,grp,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_ap_read(int grp, int regno, uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_ap_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,K)" ,grp,regno,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_ap_write(int grp, int regno, uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_ap_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,K)" ,grp,regno,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_igrpen_read(int grp, uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_igrpen_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,grp,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_igrpen_write(int grp, uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_igrpen_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,grp,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_igrpen1_el3_read(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_igrpen1_el3_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_igrpen1_el3_write(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_igrpen1_el3_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_ctlr_read(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_ctlr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_ctlr_write(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_ctlr_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_ctlr_el3_read(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_ctlr_el3_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_ctlr_el3_write(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_ctlr_el3_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_cpuif_update(uint32_t cpuid, int irq, int grp, int prio){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_cpuif_update");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i,i)" ,cpuid,irq,grp,prio);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_cpuif_set_irqs(uint32_t cpuid, int fiqlevel, int irqlevel){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_cpuif_set_irqs");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i)" ,cpuid,fiqlevel,irqlevel);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_generate_sgi(uint32_t cpuid, int irq, int irm, uint32_t aff, uint32_t targetlist){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_generate_sgi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i,K,K)" ,cpuid,irq,irm,aff,targetlist);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_iar0_read(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_iar0_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_iar1_read(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_iar1_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_eoir_write(int grp, uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_eoir_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,grp,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_hppir0_read(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_hppir0_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_hppir1_read(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_hppir1_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_dir_write(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_dir_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icc_rpr_read(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icc_rpr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_ich_ap_read(int grp, int regno, uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_ich_ap_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,K)" ,grp,regno,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_ich_ap_write(int grp, int regno, uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_ich_ap_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,K)" ,grp,regno,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_ich_hcr_read(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_ich_hcr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_ich_hcr_write(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_ich_hcr_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_ich_vmcr_read(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_ich_vmcr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_ich_vmcr_write(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_ich_vmcr_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_ich_lr_read(int regno, uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_ich_lr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,regno,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_ich_lr32_read(int regno, uint32_t cpu, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_ich_lr32_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,regno,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_ich_lrc_read(int regno, uint32_t cpu, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_ich_lrc_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,regno,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_ich_lr_write(int regno, uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_ich_lr_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,regno,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_ich_lr32_write(int regno, uint32_t cpu, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_ich_lr32_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,regno,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_ich_lrc_write(int regno, uint32_t cpu, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_ich_lrc_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,regno,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_ich_vtr_read(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_ich_vtr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_ich_misr_read(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_ich_misr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_ich_eisr_read(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_ich_eisr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_ich_elrsr_read(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_ich_elrsr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icv_ap_read(int grp, int regno, uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icv_ap_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,K)" ,grp,regno,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icv_ap_write(int grp, int regno, uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icv_ap_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,K)" ,grp,regno,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icv_bpr_read(int grp, uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icv_bpr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,grp,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icv_bpr_write(int grp, uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icv_bpr_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,grp,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icv_pmr_read(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icv_pmr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icv_pmr_write(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icv_pmr_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icv_igrpen_read(int grp, uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icv_igrpen_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,grp,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icv_igrpen_write(int grp, uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icv_igrpen_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,grp,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icv_ctlr_read(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icv_ctlr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icv_ctlr_write(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icv_ctlr_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icv_rpr_read(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icv_rpr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icv_hppir_read(int grp, uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icv_hppir_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,grp,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icv_dir_write(uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icv_dir_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icv_iar_read(int grp, uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icv_iar_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,grp,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_icv_eoir_write(int grp, uint32_t cpu, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_icv_eoir_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,grp,cpu,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_cpuif_virt_update(uint32_t cpuid, int idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_cpuif_virt_update");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,cpuid,idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_cpuif_virt_set_irqs(uint32_t cpuid, int fiqlevel, int irqlevel, int maintlevel){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_cpuif_virt_set_irqs");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i,i)" ,cpuid,fiqlevel,irqlevel,maintlevel);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_dist_read(uint64_t offset, uint64_t data, unsigned size, bool secure){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_dist_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I,p)" ,offset,data,size,secure);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_dist_badread(uint64_t offset, unsigned size, bool secure){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_dist_badread");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,p)" ,offset,size,secure);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_dist_write(uint64_t offset, uint64_t data, unsigned size, bool secure){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_dist_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I,p)" ,offset,data,size,secure);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_dist_badwrite(uint64_t offset, uint64_t data, unsigned size, bool secure){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_dist_badwrite");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I,p)" ,offset,data,size,secure);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_dist_set_irq(int irq, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_dist_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,irq,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_redist_read(uint32_t cpu, uint64_t offset, uint64_t data, unsigned size, bool secure){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_redist_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,I,p)" ,cpu,offset,data,size,secure);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_redist_badread(uint32_t cpu, uint64_t offset, unsigned size, bool secure){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_redist_badread");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I,p)" ,cpu,offset,size,secure);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_redist_write(uint32_t cpu, uint64_t offset, uint64_t data, unsigned size, bool secure){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_redist_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,I,p)" ,cpu,offset,data,size,secure);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_redist_badwrite(uint32_t cpu, uint64_t offset, uint64_t data, unsigned size, bool secure){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_redist_badwrite");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,I,p)" ,cpu,offset,data,size,secure);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_redist_set_irq(uint32_t cpu, int irq, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_redist_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i)" ,cpu,irq,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gicv3_redist_send_sgi(uint32_t cpu, int irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gicv3_redist_send_sgi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,cpu,irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvic_recompute_state(int vectpending, int vectpending_prio, int exception_prio){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvic_recompute_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,vectpending,vectpending_prio,exception_prio);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvic_recompute_state_secure(int vectpending, bool vectpending_is_s_banked, int vectpending_prio, int exception_prio){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvic_recompute_state_secure");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,p,i,i)" ,vectpending,vectpending_is_s_banked,vectpending_prio,exception_prio);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvic_set_prio(int irq, bool secure, uint8_t prio){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvic_set_prio");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,p,B)" ,irq,secure,prio);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvic_irq_update(int vectpending, int pendprio, int exception_prio, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvic_irq_update");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,vectpending,pendprio,exception_prio,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvic_escalate_prio(int irq, int irqprio, int runprio){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvic_escalate_prio");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,irq,irqprio,runprio);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvic_escalate_disabled(int irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvic_escalate_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvic_set_pending(int irq, bool secure, bool targets_secure, bool derived, int en, int prio){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvic_set_pending");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,p,p,p,i,i)" ,irq,secure,targets_secure,derived,en,prio);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvic_clear_pending(int irq, bool secure, int en, int prio){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvic_clear_pending");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,p,i,i)" ,irq,secure,en,prio);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvic_acknowledge_irq(int irq, int prio){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvic_acknowledge_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,irq,prio);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvic_get_pending_irq_info(int irq, bool secure){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvic_get_pending_irq_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,p)" ,irq,secure);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvic_complete_irq(int irq, bool secure){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvic_complete_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,p)" ,irq,secure);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvic_set_irq_level(int irq, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvic_set_irq_level");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,irq,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvic_set_nmi_level(int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvic_set_nmi_level");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvic_sysreg_read(uint64_t addr, uint32_t value, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvic_sysreg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,addr,value,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvic_sysreg_write(uint64_t addr, uint32_t value, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvic_sysreg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,addr,value,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_heathrow_write(uint64_t addr, unsigned int n, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"heathrow_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,K)" ,addr,n,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_heathrow_read(uint64_t addr, unsigned int n, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"heathrow_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,K)" ,addr,n,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_heathrow_set_irq(int num, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"heathrow_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,num,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bcm2835_ic_set_gpu_irq(int irq, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bcm2835_ic_set_gpu_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,irq,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bcm2835_ic_set_cpu_irq(int irq, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bcm2835_ic_set_cpu_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,irq,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_xive_claim_irq(uint32_t lisn, bool lsi){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_xive_claim_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,p)" ,lisn,lsi);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_xive_free_irq(uint32_t lisn){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_xive_free_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,lisn);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_xive_set_irq(uint32_t lisn, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_xive_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,lisn,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_xive_get_source_info(uint64_t flags, uint64_t lisn){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_xive_get_source_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,flags,lisn);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_xive_set_source_config(uint64_t flags, uint64_t lisn, uint64_t target, uint64_t priority, uint64_t eisn){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_xive_set_source_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K)" ,flags,lisn,target,priority,eisn);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_xive_get_source_config(uint64_t flags, uint64_t lisn){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_xive_get_source_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,flags,lisn);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_xive_get_queue_info(uint64_t flags, uint64_t target, uint64_t priority){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_xive_get_queue_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,flags,target,priority);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_xive_set_queue_config(uint64_t flags, uint64_t target, uint64_t priority, uint64_t qpage, uint64_t qsize){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_xive_set_queue_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K)" ,flags,target,priority,qpage,qsize);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_xive_get_queue_config(uint64_t flags, uint64_t target, uint64_t priority){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_xive_get_queue_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,flags,target,priority);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_xive_set_os_reporting_line(uint64_t flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_xive_set_os_reporting_line");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_xive_get_os_reporting_line(uint64_t flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_xive_get_os_reporting_line");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_xive_esb(uint64_t flags, uint64_t lisn, uint64_t offset, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_xive_esb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,flags,lisn,offset,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_xive_sync(uint64_t flags, uint64_t lisn){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_xive_sync");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,flags,lisn);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_xive_reset(uint64_t flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_xive_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_xive_cpu_connect(uint32_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_xive_cpu_connect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_xive_source_reset(uint32_t srcno){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_xive_source_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,srcno);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xive_tctx_accept(uint32_t index, uint8_t ring, uint8_t ipb, uint8_t pipr, uint8_t cppr, uint8_t nsr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xive_tctx_accept");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B,B,B,B,B)" ,index,ring,ipb,pipr,cppr,nsr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xive_tctx_notify(uint32_t index, uint8_t ring, uint8_t ipb, uint8_t pipr, uint8_t cppr, uint8_t nsr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xive_tctx_notify");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B,B,B,B,B)" ,index,ring,ipb,pipr,cppr,nsr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xive_tctx_set_cppr(uint32_t index, uint8_t ring, uint8_t ipb, uint8_t pipr, uint8_t cppr, uint8_t nsr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xive_tctx_set_cppr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B,B,B,B,B)" ,index,ring,ipb,pipr,cppr,nsr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xive_source_esb_read(uint64_t addr, uint32_t srcno, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xive_source_esb_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,srcno,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xive_source_esb_write(uint64_t addr, uint32_t srcno, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xive_source_esb_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,srcno,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xive_router_end_notify(uint8_t end_blk, uint32_t end_idx, uint32_t end_data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xive_router_end_notify");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,K)" ,end_blk,end_idx,end_data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xive_router_end_escalate(uint8_t end_blk, uint32_t end_idx, uint8_t esc_blk, uint32_t esc_idx, uint32_t end_data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xive_router_end_escalate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,B,K,K)" ,end_blk,end_idx,esc_blk,esc_idx,end_data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xive_tctx_tm_write(uint64_t offset, unsigned int size, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xive_tctx_tm_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,K)" ,offset,size,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xive_tctx_tm_read(uint64_t offset, unsigned int size, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xive_tctx_tm_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,K)" ,offset,size,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xive_presenter_notify(uint8_t nvt_blk, uint32_t nvt_idx, uint8_t ring){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xive_presenter_notify");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,B)" ,nvt_blk,nvt_idx,ring);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xive_end_source_read(uint8_t end_blk, uint32_t end_idx, uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xive_end_source_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,K)" ,end_blk,end_idx,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pnv_xive_ic_hw_trigger(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pnv_xive_ic_hw_trigger");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_goldfish_irq_request(void *dev, int idx, int irq, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"goldfish_irq_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,i)" ,&dev,idx,irq,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_goldfish_pic_read(void *dev, int idx, unsigned int addr, unsigned int size, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"goldfish_pic_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,I,I,K)" ,&dev,idx,addr,size,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_goldfish_pic_write(void *dev, int idx, unsigned int addr, unsigned int size, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"goldfish_pic_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,I,I,K)" ,&dev,idx,addr,size,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_goldfish_pic_reset(void *dev, int idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"goldfish_pic_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&dev,idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_goldfish_pic_realize(void *dev, int idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"goldfish_pic_realize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&dev,idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_goldfish_pic_instance_init(void *dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"goldfish_pic_instance_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&dev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sh_intc_sources(int p, int a, int c, int m, unsigned short v, const char *s1, const char *s2, const char *s3){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sh_intc_sources");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i,b,b,b)" ,p,a,c,m,&s1,&s2,&s3);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sh_intc_pending(int p, unsigned short v){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sh_intc_pending");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,p);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sh_intc_register(const char *s, int id, unsigned short v, int c, int m){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sh_intc_register");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i,i)" ,&s,id,c,m);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sh_intc_read(unsigned size, uint64_t offset, unsigned long val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sh_intc_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,K)" ,size,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sh_intc_write(unsigned size, uint64_t offset, unsigned long val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sh_intc_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,K)" ,size,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sh_intc_set(int id, int enable){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sh_intc_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,id,enable);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

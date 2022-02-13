
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_ppc.h"

void glue_spapr_pci_msi(const char *msg, uint32_t ca){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_pci_msi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&msg,ca);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_pci_msi_setup(const char *name, unsigned vector, uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_pci_msi_setup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,I,K)" ,&name,vector,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_pci_rtas_ibm_change_msi(unsigned cfg, unsigned func, unsigned req, unsigned first){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_pci_rtas_ibm_change_msi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I,I,I)" ,cfg,func,req,first);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_pci_rtas_ibm_query_interrupt_source_number(unsigned ioa, unsigned intr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_pci_rtas_ibm_query_interrupt_source_number");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I)" ,ioa,intr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_pci_msi_write(uint64_t addr, uint64_t data, uint32_t dt_irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_pci_msi_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,data,dt_irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_pci_lsi_set(const char *busname, int pin, uint32_t irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_pci_lsi_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,K)" ,&busname,pin,irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_pci_msi_retry(unsigned config_addr, unsigned req_num, unsigned max_irqs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_pci_msi_retry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I,I)" ,config_addr,req_num,max_irqs);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_cas_continue(unsigned long n){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_cas_continue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_cas_pvr(uint32_t cur_pvr, bool explicit_match, uint32_t new_pvr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_cas_pvr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,p,K)" ,cur_pvr,explicit_match,new_pvr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_h_resize_hpt_prepare(uint64_t flags, uint64_t shift){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_h_resize_hpt_prepare");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,flags,shift);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_h_resize_hpt_commit(uint64_t flags, uint64_t shift){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_h_resize_hpt_commit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,flags,shift);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_update_dt(unsigned cb){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_update_dt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,cb);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_update_dt_failed_size(unsigned cbold, unsigned cbnew, unsigned magic){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_update_dt_failed_size");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I,I)" ,cbold,cbnew,magic);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_update_dt_failed_check(unsigned cbold, unsigned cbnew, unsigned magic){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_update_dt_failed_check");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I,I)" ,cbold,cbnew,magic);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_h_tpm_comm(const char *device_path, uint64_t operation){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_h_tpm_comm");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&device_path,operation);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_tpm_execute(uint64_t data_in, uint64_t data_in_sz, uint64_t data_out, uint64_t data_out_sz){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_tpm_execute");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,data_in,data_in_sz,data_out,data_out_sz);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_iommu_put(uint64_t liobn, uint64_t ioba, uint64_t tce, uint64_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_iommu_put");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,liobn,ioba,tce,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_iommu_get(uint64_t liobn, uint64_t ioba, uint64_t ret, uint64_t tce){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_iommu_get");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,liobn,ioba,ret,tce);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_iommu_indirect(uint64_t liobn, uint64_t ioba, uint64_t tce, uint64_t iobaN, uint64_t tceN, uint64_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_iommu_indirect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K,K)" ,liobn,ioba,tce,iobaN,tceN,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_iommu_stuff(uint64_t liobn, uint64_t ioba, uint64_t tce_value, uint64_t npages, uint64_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_iommu_stuff");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K)" ,liobn,ioba,tce_value,npages,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_iommu_pci_put(uint64_t liobn, uint64_t ioba, uint64_t tce, uint64_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_iommu_pci_put");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,liobn,ioba,tce,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_iommu_pci_get(uint64_t liobn, uint64_t ioba, uint64_t ret, uint64_t tce){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_iommu_pci_get");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,liobn,ioba,ret,tce);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_iommu_pci_indirect(uint64_t liobn, uint64_t ioba, uint64_t tce, uint64_t iobaN, uint64_t tceN, uint64_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_iommu_pci_indirect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K,K)" ,liobn,ioba,tce,iobaN,tceN,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_iommu_pci_stuff(uint64_t liobn, uint64_t ioba, uint64_t tce_value, uint64_t npages, uint64_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_iommu_pci_stuff");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K)" ,liobn,ioba,tce_value,npages,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_iommu_xlate(uint64_t liobn, uint64_t ioba, uint64_t tce, unsigned perm, unsigned pgsize){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_iommu_xlate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,I,I)" ,liobn,ioba,tce,perm,pgsize);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_iommu_new_table(uint64_t liobn, void *table, int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_iommu_new_table");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,O&,i)" ,liobn,&table,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_iommu_pre_save(uint64_t liobn, uint32_t nb, uint64_t offs, uint32_t ps){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_iommu_pre_save");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,liobn,nb,offs,ps);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_iommu_post_load(uint64_t liobn, uint32_t pre_nb, uint32_t post_nb, uint64_t offs, uint32_t ps){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_iommu_post_load");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K)" ,liobn,pre_nb,post_nb,offs,ps);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_iommu_ddw_query(uint64_t buid, uint32_t cfgaddr, unsigned wa, uint64_t win_size, uint32_t pgmask){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_iommu_ddw_query");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I,K,K)" ,buid,cfgaddr,wa,win_size,pgmask);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_iommu_ddw_create(uint64_t buid, uint32_t cfgaddr, uint64_t pg_size, uint64_t req_size, uint64_t start, uint32_t liobn){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_iommu_ddw_create");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K,K)" ,buid,cfgaddr,pg_size,req_size,start,liobn);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_iommu_ddw_remove(uint32_t liobn){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_iommu_ddw_remove");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,liobn);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_iommu_ddw_reset(uint64_t buid, uint32_t cfgaddr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_iommu_ddw_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,buid,cfgaddr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_drc_set_isolation_state(uint32_t index, int state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_drc_set_isolation_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,index,state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_drc_set_isolation_state_finalizing(uint32_t index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_drc_set_isolation_state_finalizing");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_drc_set_dr_indicator(uint32_t index, int state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_drc_set_dr_indicator");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,index,state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_drc_set_allocation_state(uint32_t index, int state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_drc_set_allocation_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,index,state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_drc_set_allocation_state_finalizing(uint32_t index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_drc_set_allocation_state_finalizing");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_drc_set_configured(uint32_t index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_drc_set_configured");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_drc_attach(uint32_t index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_drc_attach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_drc_unplug_request(uint32_t index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_drc_unplug_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_drc_awaiting_quiesce(uint32_t index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_drc_awaiting_quiesce");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_drc_reset(uint32_t index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_drc_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_drc_realize(uint32_t index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_drc_realize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_drc_realize_child(uint32_t index, const char *childname){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_drc_realize_child");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b)" ,index,&childname);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_drc_realize_complete(uint32_t index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_drc_realize_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_drc_unrealize(uint32_t index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_drc_unrealize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_ovec_parse_vector(int vector, int byte, uint16_t vec_len, uint8_t entry){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_ovec_parse_vector");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,B)" ,vector,byte,vec_len,entry);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_ovec_populate_dt(int byte, uint16_t vec_len, uint8_t entry){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_ovec_populate_dt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,B)" ,byte,vec_len,entry);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_rtas_get_sensor_state_not_supported(uint32_t index, uint32_t type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_rtas_get_sensor_state_not_supported");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,index,type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_rtas_get_sensor_state_invalid(uint32_t index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_rtas_get_sensor_state_invalid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_rtas_ibm_configure_connector_invalid(uint32_t index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_rtas_ibm_configure_connector_invalid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vio_h_reg_crq(uint64_t reg, uint64_t queue_addr, uint64_t queue_len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vio_h_reg_crq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,reg,queue_addr,queue_len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vio_free_crq(uint32_t reg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vio_free_crq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,reg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_error_str_truncated(const char *s, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_error_str_truncated");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&s,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_error_param(const char *method, int nargscheck, int nretcheck, int nargs, int nret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_error_param");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i,i,i)" ,&method,nargscheck,nretcheck,nargs,nret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_error_unknown_service(const char *service, int nargs, int nret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_error_unknown_service");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&service,nargs,nret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_error_unknown_method(const char *method){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_error_unknown_method");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&method);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_error_unknown_ihandle_close(uint32_t ih){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_error_unknown_ihandle_close");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ih);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_error_unknown_path(const char *path){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_error_unknown_path");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&path);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_error_write(uint32_t ih){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_error_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ih);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_finddevice(const char *path, uint32_t ph){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_finddevice");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&path,ph);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_claim(uint32_t virt, uint32_t size, uint32_t align, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_claim");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,virt,size,align,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_release(uint32_t virt, uint32_t size, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_release");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,virt,size,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_method(uint32_t ihandle, const char *method, uint32_t param, uint32_t ret, uint32_t ret2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_method");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K,K,K)" ,ihandle,&method,param,ret,ret2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_getprop(uint32_t ph, const char *prop, uint32_t ret, const char *val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_getprop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K,b)" ,ph,&prop,ret,&val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_getproplen(uint32_t ph, const char *prop, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_getproplen");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K)" ,ph,&prop,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_open(const char *path, uint32_t ph, uint32_t ih){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_open");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&path,ph,ih);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_interpret(const char *cmd, uint32_t param1, uint32_t param2, uint32_t ret, uint32_t ret2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_interpret");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K,K)" ,&cmd,param1,param2,ret,ret2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_package_to_path(uint32_t ph, const char *tmp, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_package_to_path");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,i)" ,ph,&tmp,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_instance_to_path(uint32_t ih, uint32_t ph, const char *tmp, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_instance_to_path");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,b,i)" ,ih,ph,&tmp,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_instance_to_package(uint32_t ih, uint32_t ph){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_instance_to_package");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,ih,ph);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_write(uint32_t ih, unsigned cb, const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,b)" ,ih,cb,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_avail(uint64_t start, uint64_t end, uint64_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_avail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,start,end,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vof_claimed(uint64_t start, uint64_t end, uint64_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vof_claimed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,start,end,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc_tb_adjust(uint64_t offs1, uint64_t offs2, int64_t diff, int64_t seconds){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc_tb_adjust");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,L,L)" ,offs1,offs2,diff,seconds);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc_tb_load(uint64_t tb){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc_tb_load");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,tb);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc_tb_store(uint64_t tb, uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc_tb_store");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,tb,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc_decr_load(uint64_t tb){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc_decr_load");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,tb);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc_decr_excp(const char *action){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc_decr_excp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&action);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc_decr_store(uint32_t nr_bits, uint64_t decr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc_decr_store");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,nr_bits,decr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc4xx_fit(uint32_t ir, uint64_t tcr, uint64_t tsr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc4xx_fit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,ir,tcr,tsr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc4xx_pit_stop(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc4xx_pit_stop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc4xx_pit_start(uint64_t reload){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc4xx_pit_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,reload);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc4xx_pit(uint32_t ar, uint32_t ir, uint64_t tcr, uint64_t tsr, uint64_t reload){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc4xx_pit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K)" ,ar,ir,tcr,tsr,reload);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc4xx_wdt(uint64_t tcr, uint64_t tsr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc4xx_wdt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,tcr,tsr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc40x_store_pit(uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc40x_store_pit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc40x_store_tcr(uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc40x_store_tcr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc40x_store_tsr(uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc40x_store_tsr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc40x_set_tb_clk(uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc40x_set_tb_clk");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc40x_timers_init(uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc40x_timers_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc_irq_set(void *env, uint32_t pin, uint32_t level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc_irq_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K)" ,&env,pin,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc_irq_set_exit(void *env, uint32_t n_IRQ, uint32_t level, uint32_t pending, uint32_t request){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc_irq_set_exit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K,K)" ,&env,n_IRQ,level,pending,request);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc_irq_set_state(const char *name, uint32_t level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc_irq_set_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&name,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc_irq_reset(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc_irq_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc_irq_cpu(const char *action){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc_irq_cpu");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&action);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc_dcr_read(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc_dcr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc_dcr_write(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc_dcr_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_prep_systemio_read(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"prep_systemio_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_prep_systemio_write(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"prep_systemio_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rs6000mc_id_read(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rs6000mc_id_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rs6000mc_presence_read(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rs6000mc_presence_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rs6000mc_size_read(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rs6000mc_size_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rs6000mc_size_write(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rs6000mc_size_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rs6000mc_parity_read(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rs6000mc_parity_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc4xx_pci_map_irq(int32_t devfn, int irq_num, int slot){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc4xx_pci_map_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(l,i,i)" ,devfn,irq_num,slot);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc4xx_pci_set_irq(int irq_num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc4xx_pci_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,irq_num);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc440_pcix_map_irq(int32_t devfn, int irq_num, int slot){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc440_pcix_map_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(l,i,i)" ,devfn,irq_num,slot);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc440_pcix_set_irq(int irq_num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc440_pcix_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,irq_num);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc440_pcix_update_pim(int idx, uint64_t size, uint64_t la){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc440_pcix_update_pim");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,idx,size,la);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc440_pcix_update_pom(int idx, uint32_t size, uint64_t la, uint64_t pcia){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc440_pcix_update_pom");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K)" ,idx,size,la,pcia);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc440_pcix_reg_read(uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc440_pcix_reg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc440_pcix_reg_write(uint64_t addr, uint32_t val, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc440_pcix_reg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,val,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_opba_readb(uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"opba_readb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_opba_writeb(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"opba_writeb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_opba_init(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"opba_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc405_gpio_read(uint64_t addr, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc405_gpio_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc405_gpio_write(uint64_t addr, uint32_t size, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc405_gpio_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,size,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc405_gpio_init(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc405_gpio_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ocm_update_mappings(uint32_t isarc, uint32_t isacntl, uint32_t dsarc, uint32_t dsacntl, uint32_t ocm_isarc, uint32_t ocm_isacntl, uint32_t ocm_dsarc, uint32_t ocm_dsacntl){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ocm_update_mappings");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K,K,K,K)" ,isarc,isacntl,dsarc,dsacntl,ocm_isarc,ocm_isacntl,ocm_dsarc,ocm_dsacntl);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ocm_map(const char* prefix, uint32_t isarc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ocm_map");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,isarc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ocm_unmap(const char* prefix, uint32_t isarc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ocm_unmap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,isarc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc4xx_gpt_read(uint64_t addr, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc4xx_gpt_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc4xx_gpt_write(uint64_t addr, uint32_t size, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc4xx_gpt_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,size,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc4xx_gpt_init(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc4xx_gpt_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc405ep_clocks_compute(const char *param, uint32_t param2, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc405ep_clocks_compute");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&param,param2,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc405ep_clocks_setup(const char *trace){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc405ep_clocks_setup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&trace);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc4xx_sdram_enable(const char *trace){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc4xx_sdram_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&trace);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc4xx_sdram_unmap(uint64_t addr, uint64_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc4xx_sdram_unmap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc4xx_sdram_map(uint64_t addr, uint64_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc4xx_sdram_map");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

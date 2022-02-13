
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_i386.h"

void glue_x86_iommu_iec_notify(bool global, uint32_t index, uint32_t mask){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"x86_iommu_iec_notify");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,K,K)" ,global,index,mask);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_inv_desc(const char *type, uint64_t hi, uint64_t lo){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_inv_desc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&type,hi,lo);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_inv_desc_cc_domain(uint16_t domain){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_inv_desc_cc_domain");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,domain);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_inv_desc_cc_global(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_inv_desc_cc_global");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_inv_desc_cc_device(uint8_t bus, uint8_t dev, uint8_t fn){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_inv_desc_cc_device");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B)" ,bus,dev,fn);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_inv_desc_cc_devices(uint16_t sid, uint16_t fmask){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_inv_desc_cc_devices");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,sid,fmask);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_inv_desc_iotlb_global(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_inv_desc_iotlb_global");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_inv_desc_iotlb_domain(uint16_t domain){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_inv_desc_iotlb_domain");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,domain);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_inv_desc_iotlb_pages(uint16_t domain, uint64_t addr, uint8_t mask){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_inv_desc_iotlb_pages");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,B)" ,domain,addr,mask);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_inv_desc_wait_sw(uint64_t addr, uint32_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_inv_desc_wait_sw");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_inv_desc_wait_irq(const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_inv_desc_wait_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_inv_desc_wait_write_fail(uint64_t hi, uint64_t lo){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_inv_desc_wait_write_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,hi,lo);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_inv_desc_iec(uint32_t granularity, uint32_t index, uint32_t mask){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_inv_desc_iec");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,granularity,index,mask);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_inv_qi_enable(bool enable){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_inv_qi_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,enable);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_inv_qi_setup(uint64_t addr, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_inv_qi_setup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_inv_qi_head(uint16_t head){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_inv_qi_head");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,head);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_inv_qi_tail(uint16_t head){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_inv_qi_tail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,head);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_inv_qi_fetch(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_inv_qi_fetch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_context_cache_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_context_cache_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_re_not_present(uint8_t bus){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_re_not_present");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,bus);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_ce_not_present(uint8_t bus, uint8_t devfn){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_ce_not_present");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,bus,devfn);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_iotlb_page_hit(uint16_t sid, uint64_t addr, uint64_t slpte, uint16_t domain){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_iotlb_page_hit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,i)" ,sid,addr,slpte,domain);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_iotlb_page_update(uint16_t sid, uint64_t addr, uint64_t slpte, uint16_t domain){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_iotlb_page_update");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,i)" ,sid,addr,slpte,domain);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_iotlb_cc_hit(uint8_t bus, uint8_t devfn, uint64_t high, uint64_t low, uint32_t gen){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_iotlb_cc_hit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,K,K,K)" ,bus,devfn,high,low,gen);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_iotlb_cc_update(uint8_t bus, uint8_t devfn, uint64_t high, uint64_t low, uint32_t gen1, uint32_t gen2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_iotlb_cc_update");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,K,K,K,K)" ,bus,devfn,high,low,gen1,gen2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_iotlb_reset(const char *reason){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_iotlb_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&reason);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_fault_disabled(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_fault_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_replay_ce_valid(const char *mode, uint8_t bus, uint8_t dev, uint8_t fn, uint16_t domain, uint64_t hi, uint64_t lo){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_replay_ce_valid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B,B,B,i,K,K)" ,&mode,bus,dev,fn,domain,hi,lo);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_replay_ce_invalid(uint8_t bus, uint8_t dev, uint8_t fn){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_replay_ce_invalid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B)" ,bus,dev,fn);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_page_walk_level(uint64_t addr, uint32_t level, uint64_t start, uint64_t end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_page_walk_level");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,addr,level,start,end);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_page_walk_one(uint16_t domain, uint64_t iova, uint64_t gpa, uint64_t mask, int perm){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_page_walk_one");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K,i)" ,domain,iova,gpa,mask,perm);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_page_walk_one_skip_map(uint64_t iova, uint64_t mask, uint64_t translated){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_page_walk_one_skip_map");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,iova,mask,translated);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_page_walk_one_skip_unmap(uint64_t iova, uint64_t mask){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_page_walk_one_skip_unmap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,iova,mask);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_page_walk_skip_read(uint64_t iova, uint64_t next){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_page_walk_skip_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,iova,next);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_page_walk_skip_reserve(uint64_t iova, uint64_t next){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_page_walk_skip_reserve");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,iova,next);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_switch_address_space(uint8_t bus, uint8_t slot, uint8_t fn, bool on){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_switch_address_space");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B,p)" ,bus,slot,fn,on);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_as_unmap_whole(uint8_t bus, uint8_t slot, uint8_t fn, uint64_t iova, uint64_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_as_unmap_whole");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B,K,K)" ,bus,slot,fn,iova,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_translate_pt(uint16_t sid, uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_translate_pt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,sid,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_pt_enable_fast_path(uint16_t sid, bool success){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_pt_enable_fast_path");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,p)" ,sid,success);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_irq_generate(uint64_t addr, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_irq_generate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_reg_read(uint64_t addr, uint64_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_reg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_reg_write(uint64_t addr, uint64_t size, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_reg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,size,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_reg_dmar_root(uint64_t addr, bool scalable){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_reg_dmar_root");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,p)" ,addr,scalable);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_reg_ir_root(uint64_t addr, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_reg_ir_root");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_reg_write_gcmd(uint32_t status, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_reg_write_gcmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,status,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_reg_write_fectl(uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_reg_write_fectl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_reg_write_iectl(uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_reg_write_iectl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_reg_ics_clear_ip(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_reg_ics_clear_ip");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_dmar_translate(uint8_t bus, uint8_t slot, uint8_t func, uint64_t iova, uint64_t gpa, uint64_t mask){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_dmar_translate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B,K,K,K)" ,bus,slot,func,iova,gpa,mask);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_dmar_enable(bool en){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_dmar_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,en);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_dmar_fault(uint16_t sid, int fault, uint64_t addr, bool is_write){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_dmar_fault");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,p)" ,sid,fault,addr,is_write);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_ir_enable(bool en){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_ir_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,en);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_ir_irte_get(int index, uint64_t lo, uint64_t hi){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_ir_irte_get");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,index,lo,hi);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_ir_remap(int index, int tri, int vec, int deliver, uint32_t dest, int dest_mode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_ir_remap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i,K,i)" ,index,tri,vec,deliver,dest,dest_mode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_ir_remap_type(const char *type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_ir_remap_type");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_ir_remap_msi(uint64_t addr, uint64_t data, uint64_t addr2, uint64_t data2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_ir_remap_msi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,addr,data,addr2,data2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_ir_remap_msi_req(uint64_t addr, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_ir_remap_msi_req");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_fsts_ppf(bool set){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_fsts_ppf");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,set);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_fsts_clear_ip(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_fsts_clear_ip");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_frr_new(int index, uint64_t hi, uint64_t lo){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_frr_new");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,index,hi,lo);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_warn_invalid_qi_tail(uint16_t tail){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_warn_invalid_qi_tail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,tail);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_warn_ir_vector(uint16_t sid, int index, int vec, int target){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_warn_ir_vector");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,sid,index,vec,target);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vtd_warn_ir_trigger(uint16_t sid, int index, int trig, int target){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vtd_warn_ir_trigger");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,sid,index,trig,target);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_evntlog_fail(uint64_t addr, uint32_t head){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_evntlog_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,head);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_cache_update(uint16_t domid, uint8_t bus, uint8_t slot, uint8_t func, uint64_t gpa, uint64_t txaddr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_cache_update");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,B,B,K,K)" ,domid,bus,slot,func,gpa,txaddr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_completion_wait_fail(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_completion_wait_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_mmio_write(const char *reg, uint64_t addr, unsigned size, uint64_t val, uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_mmio_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,I,K,K)" ,&reg,addr,size,val,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_mmio_read(const char *reg, uint64_t addr, unsigned size, uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_mmio_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,I,K)" ,&reg,addr,size,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_mmio_read_invalid(int max, uint64_t addr, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_mmio_read_invalid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,I)" ,max,addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_command_error(uint64_t status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_command_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_command_read_fail(uint64_t addr, uint32_t head){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_command_read_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,head);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_command_exec(uint32_t head, uint32_t tail, uint64_t buf){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_command_exec");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,head,tail,buf);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_unhandled_command(uint8_t type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_unhandled_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_intr_inval(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_intr_inval");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_iotlb_inval(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_iotlb_inval");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_prefetch_pages(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_prefetch_pages");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_pages_inval(uint16_t domid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_pages_inval");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,domid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_all_inval(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_all_inval");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_ppr_exec(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_ppr_exec");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_devtab_inval(uint8_t bus, uint8_t slot, uint8_t func){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_devtab_inval");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B)" ,bus,slot,func);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_completion_wait(uint64_t addr, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_completion_wait");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_control_status(uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_control_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_iotlb_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_iotlb_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_dte_get_fail(uint64_t addr, uint32_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_dte_get_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_invalid_dte(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_invalid_dte");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_get_pte_hwerror(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_get_pte_hwerror");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_mode_invalid(uint8_t level, uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_mode_invalid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K)" ,level,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_page_fault(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_page_fault");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_iotlb_hit(uint8_t bus, uint8_t slot, uint8_t func, uint64_t addr, uint64_t txaddr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_iotlb_hit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B,K,K)" ,bus,slot,func,addr,txaddr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_translation_result(uint8_t bus, uint8_t slot, uint8_t func, uint64_t addr, uint64_t txaddr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_translation_result");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B,K,K)" ,bus,slot,func,addr,txaddr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_mem_ir_write_req(uint64_t addr, uint64_t val, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_mem_ir_write_req");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,val,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_mem_ir_write(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_mem_ir_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_ir_remap_msi_req(uint64_t addr, uint64_t data, uint8_t devid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_ir_remap_msi_req");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,B)" ,addr,data,devid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_ir_remap_msi(uint64_t addr, uint64_t data, uint64_t addr2, uint64_t data2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_ir_remap_msi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,addr,data,addr2,data2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_err(const char *str){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_err");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&str);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_ir_irte(uint64_t addr, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_ir_irte");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_ir_irte_val(uint32_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_ir_irte_val");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_ir_err(const char *str){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_ir_err");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&str);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_ir_intctl(uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_ir_intctl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_ir_target_abort(const char *str){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_ir_target_abort");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&str);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_ir_delivery_mode(const char *str){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_ir_delivery_mode");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&str);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_amdvi_ir_irte_ga_val(uint64_t hi, uint64_t lo){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"amdvi_ir_irte_ga_val");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,hi,lo);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmport_register(unsigned char command, void *func, void *opaque){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmport_register");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,O&)" ,&command,&func,&opaque);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmport_command(unsigned char command){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmport_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&command);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_x86_gsi_interrupt(int irqn, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"x86_gsi_interrupt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,irqn,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_x86_pic_interrupt(int irqn, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"x86_pic_interrupt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,irqn,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_port92_read(uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"port92_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_port92_write(uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"port92_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

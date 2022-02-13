
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_arm.h"

void glue_virt_acpi_setup(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virt_acpi_setup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmu_add_mr(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmu_add_mr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmu_ptw_level(int level, uint64_t iova, size_t subpage_size, uint64_t baseaddr, uint32_t offset, uint64_t pte){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmu_ptw_level");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,i,K,K,K)" ,level,iova,subpage_size,baseaddr,offset,pte);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmu_ptw_invalid_pte(int stage, int level, uint64_t baseaddr, uint64_t pteaddr, uint32_t offset, uint64_t pte){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmu_ptw_invalid_pte");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,K,K,K)" ,stage,level,baseaddr,pteaddr,offset,pte);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmu_ptw_page_pte(int stage, int level,  uint64_t iova, uint64_t baseaddr, uint64_t pteaddr, uint64_t pte, uint64_t address){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmu_ptw_page_pte");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,K,K,K,K)" ,stage,level,iova,baseaddr,pteaddr,pte,address);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmu_ptw_block_pte(int stage, int level, uint64_t baseaddr, uint64_t pteaddr, uint64_t pte, uint64_t iova, uint64_t gpa, int bsize_mb){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmu_ptw_block_pte");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,K,K,K,K,i)" ,stage,level,baseaddr,pteaddr,pte,iova,gpa,bsize_mb);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmu_get_pte(uint64_t baseaddr, int index, uint64_t pteaddr, uint64_t pte){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmu_get_pte");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,K,K)" ,baseaddr,index,pteaddr,pte);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmu_iotlb_inv_all(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmu_iotlb_inv_all");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmu_iotlb_inv_asid(uint16_t asid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmu_iotlb_inv_asid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,asid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmu_iotlb_inv_iova(uint16_t asid, uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmu_iotlb_inv_iova");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,asid,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmu_inv_notifiers_mr(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmu_inv_notifiers_mr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmu_iotlb_lookup_hit(uint16_t asid, uint64_t addr, uint32_t hit, uint32_t miss, uint32_t p){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmu_iotlb_lookup_hit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K,K)" ,asid,addr,hit,miss,p);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmu_iotlb_lookup_miss(uint16_t asid, uint64_t addr, uint32_t hit, uint32_t miss, uint32_t p){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmu_iotlb_lookup_miss");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K,K)" ,asid,addr,hit,miss,p);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmu_iotlb_insert(uint16_t asid, uint64_t addr, uint8_t tg, uint8_t level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmu_iotlb_insert");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,B,B)" ,asid,addr,tg,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_read_mmio(uint64_t addr, uint64_t val, unsigned size, uint32_t r){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_read_mmio");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I,K)" ,addr,val,size,r);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_trigger_irq(int irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_trigger_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_write_gerror(uint32_t toggled, uint32_t gerror){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_write_gerror");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,toggled,gerror);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_write_gerrorn(uint32_t acked, uint32_t gerrorn){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_write_gerrorn");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,acked,gerrorn);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_unhandled_cmd(uint32_t type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_unhandled_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_cmdq_consume(uint32_t prod, uint32_t cons, uint8_t prod_wrap, uint8_t cons_wrap){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_cmdq_consume");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,B,B)" ,prod,cons,prod_wrap,cons_wrap);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_cmdq_opcode(const char *opcode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_cmdq_opcode");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&opcode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_cmdq_consume_out(uint32_t prod, uint32_t cons, uint8_t prod_wrap, uint8_t cons_wrap){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_cmdq_consume_out");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,B,B)" ,prod,cons,prod_wrap,cons_wrap);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_cmdq_consume_error(const char *cmd_name, uint8_t cmd_error){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_cmdq_consume_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B)" ,&cmd_name,cmd_error);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_write_mmio(uint64_t addr, uint64_t val, unsigned size, uint32_t r){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_write_mmio");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I,K)" ,addr,val,size,r);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_record_event(const char *type, uint32_t sid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_record_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&type,sid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_find_ste(uint16_t sid, uint32_t features, uint16_t sid_split){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_find_ste");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,i)" ,sid,features,sid_split);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_find_ste_2lvl(uint64_t strtab_base, uint64_t l1ptr, int l1_ste_offset, uint64_t l2ptr, int l2_ste_offset, int max_l2_ste){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_find_ste_2lvl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i,K,i,i)" ,strtab_base,l1ptr,l1_ste_offset,l2ptr,l2_ste_offset,max_l2_ste);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_get_ste(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_get_ste");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_translate_disable(const char *n, uint16_t sid, uint64_t addr, bool is_write){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_translate_disable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,K,p)" ,&n,sid,addr,is_write);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_translate_bypass(const char *n, uint16_t sid, uint64_t addr, bool is_write){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_translate_bypass");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,K,p)" ,&n,sid,addr,is_write);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_translate_abort(const char *n, uint16_t sid, uint64_t addr, bool is_write){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_translate_abort");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,K,p)" ,&n,sid,addr,is_write);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_translate_success(const char *n, uint16_t sid, uint64_t iova, uint64_t translated, int perm){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_translate_success");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,K,K,i)" ,&n,sid,iova,translated,perm);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_get_cd(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_get_cd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_decode_cd(uint32_t oas){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_decode_cd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,oas);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_decode_cd_tt(int i, uint32_t tsz, uint64_t ttb, uint32_t granule_sz, bool had){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_decode_cd_tt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K,p)" ,i,tsz,ttb,granule_sz,had);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_cmdq_cfgi_ste(int streamid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_cmdq_cfgi_ste");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,streamid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_cmdq_cfgi_ste_range(int start, int end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_cmdq_cfgi_ste_range");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,start,end);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_cmdq_cfgi_cd(uint32_t sid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_cmdq_cfgi_cd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,sid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_config_cache_hit(uint32_t sid, uint32_t hits, uint32_t misses, uint32_t perc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_config_cache_hit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,sid,hits,misses,perc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_config_cache_miss(uint32_t sid, uint32_t hits, uint32_t misses, uint32_t perc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_config_cache_miss");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,sid,hits,misses,perc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_s1_range_inval(int vmid, int asid, uint64_t addr, uint8_t tg, uint64_t num_pages, uint8_t ttl, bool leaf){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_s1_range_inval");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,B,K,B,p)" ,vmid,asid,addr,tg,num_pages,ttl,leaf);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_cmdq_tlbi_nh(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_cmdq_tlbi_nh");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_cmdq_tlbi_nh_asid(uint16_t asid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_cmdq_tlbi_nh_asid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,asid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_config_cache_inv(uint32_t sid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_config_cache_inv");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,sid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_notify_flag_add(const char *iommu){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_notify_flag_add");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&iommu);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_notify_flag_del(const char *iommu){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_notify_flag_del");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&iommu);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_smmuv3_inv_notifiers_iova(const char *name, uint16_t asid, uint64_t iova, uint8_t tg, uint64_t num_pages){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"smmuv3_inv_notifiers_iova");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,K,B,K)" ,&name,asid,iova,tg,num_pages);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

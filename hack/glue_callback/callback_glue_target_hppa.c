
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_target_hppa.h"

void glue_hppa_tlb_flush_ent(void *env, void *ent, uint64_t va_b, uint64_t va_e, uint64_t pa){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hppa_tlb_flush_ent");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,K,K,K)" ,&env,&ent,va_b,va_e,pa);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hppa_tlb_find_entry(void *env, void *ent, int valid, uint64_t va_b, uint64_t va_e, uint64_t pa){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hppa_tlb_find_entry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,K,K,K)" ,&env,&ent,valid,va_b,va_e,pa);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hppa_tlb_find_entry_not_found(void *env, uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hppa_tlb_find_entry_not_found");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K)" ,&env,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hppa_tlb_get_physical_address(void *env, int ret, int prot, uint64_t addr, uint64_t phys){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hppa_tlb_get_physical_address");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,K,K)" ,&env,ret,prot,addr,phys);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hppa_tlb_fill_excp(void *env, uint64_t addr, int size, int type, int mmu_idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hppa_tlb_fill_excp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,i,i,i)" ,&env,addr,size,type,mmu_idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hppa_tlb_fill_success(void *env, uint64_t addr, uint64_t phys, int size, int type, int mmu_idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hppa_tlb_fill_success");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,i,i,i)" ,&env,addr,phys,size,type,mmu_idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hppa_tlb_itlba(void *env, void *ent, uint64_t va_b, uint64_t va_e, uint64_t pa){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hppa_tlb_itlba");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,K,K,K)" ,&env,&ent,va_b,va_e,pa);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hppa_tlb_itlbp(void *env, void *ent, int access_id, int u, int pl2, int pl1, int type, int b, int d, int t){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hppa_tlb_itlbp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,i,i,i,i,i,i,i)" ,&env,&ent,access_id,u,pl2,pl1,type,b,d,t);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hppa_tlb_ptlb(void *env){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hppa_tlb_ptlb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&env);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hppa_tlb_ptlbe(void *env){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hppa_tlb_ptlbe");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&env);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hppa_tlb_lpa_success(void *env, uint64_t addr, uint64_t phys){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hppa_tlb_lpa_success");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K)" ,&env,addr,phys);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hppa_tlb_lpa_failed(void *env, uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hppa_tlb_lpa_failed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K)" ,&env,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hppa_tlb_probe(uint64_t addr, int level, int want){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hppa_tlb_probe");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i)" ,addr,level,want);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

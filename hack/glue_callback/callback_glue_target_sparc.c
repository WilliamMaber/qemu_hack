
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_target_sparc.h"

void glue_mmu_helper_dfault(uint64_t address, uint64_t context, int mmu_idx, uint32_t tl){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mmu_helper_dfault");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i,K)" ,address,context,mmu_idx,tl);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mmu_helper_dprot(uint64_t address, uint64_t context, int mmu_idx, uint32_t tl){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mmu_helper_dprot");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i,K)" ,address,context,mmu_idx,tl);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mmu_helper_dmiss(uint64_t address, uint64_t context){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mmu_helper_dmiss");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,address,context);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mmu_helper_tfault(uint64_t address, uint64_t context){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mmu_helper_tfault");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,address,context);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mmu_helper_tmiss(uint64_t address, uint64_t context){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mmu_helper_tmiss");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,address,context);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mmu_helper_get_phys_addr_code(uint32_t tl, int mmu_idx, uint64_t prim_context, uint64_t sec_context, uint64_t address){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mmu_helper_get_phys_addr_code");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,K,K,K)" ,tl,mmu_idx,prim_context,sec_context,address);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mmu_helper_get_phys_addr_data(uint32_t tl, int mmu_idx, uint64_t prim_context, uint64_t sec_context, uint64_t address){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mmu_helper_get_phys_addr_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,K,K,K)" ,tl,mmu_idx,prim_context,sec_context,address);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mmu_helper_mmu_fault(uint64_t address, uint64_t paddr, int mmu_idx, uint32_t tl, uint64_t prim_context, uint64_t sec_context){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mmu_helper_mmu_fault");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i,K,K,K)" ,address,paddr,mmu_idx,tl,prim_context,sec_context);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sun4m_cpu_interrupt(unsigned int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sun4m_cpu_interrupt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sun4m_cpu_reset_interrupt(unsigned int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sun4m_cpu_reset_interrupt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_int_helper_set_softint(uint32_t softint){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"int_helper_set_softint");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,softint);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_int_helper_clear_softint(uint32_t softint){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"int_helper_clear_softint");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,softint);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_int_helper_write_softint(uint32_t softint){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"int_helper_write_softint");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,softint);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc64_cpu_check_irqs_reset_irq(int intno){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc64_cpu_check_irqs_reset_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,intno);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc64_cpu_check_irqs_noset_irq(uint32_t tl, uint32_t tt, int intno){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc64_cpu_check_irqs_noset_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,tl,tt,intno);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc64_cpu_check_irqs_set_irq(unsigned int i, int old, int new){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc64_cpu_check_irqs_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,i,i)" ,i,old,new);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc64_cpu_check_irqs_disabled(uint32_t pil, uint32_t pil_in, uint32_t softint, int intno){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc64_cpu_check_irqs_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,i)" ,pil,pil_in,softint,intno);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_win_helper_gregset_error(uint32_t pstate){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"win_helper_gregset_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,pstate);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_win_helper_switch_pstate(uint32_t pstate_regs, uint32_t new_pstate_regs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"win_helper_switch_pstate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,pstate_regs,new_pstate_regs);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_win_helper_no_switch_pstate(uint32_t new_pstate_regs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"win_helper_no_switch_pstate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,new_pstate_regs);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_win_helper_wrpil(uint32_t psrpil, uint32_t new_pil){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"win_helper_wrpil");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,psrpil,new_pil);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_win_helper_done(uint32_t tl){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"win_helper_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,tl);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_win_helper_retry(uint32_t tl){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"win_helper_retry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,tl);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

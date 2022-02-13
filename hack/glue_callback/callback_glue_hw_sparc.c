
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_sparc.h"

void glue_sun4m_cpu_set_irq_raise(int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sun4m_cpu_set_irq_raise");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sun4m_cpu_set_irq_lower(int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sun4m_cpu_set_irq_lower");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sun4m_iommu_mem_readl(uint64_t addr, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sun4m_iommu_mem_readl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sun4m_iommu_mem_writel(uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sun4m_iommu_mem_writel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sun4m_iommu_mem_writel_ctrl(uint64_t iostart){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sun4m_iommu_mem_writel_ctrl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,iostart);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sun4m_iommu_mem_writel_tlbflush(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sun4m_iommu_mem_writel_tlbflush");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sun4m_iommu_mem_writel_pgflush(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sun4m_iommu_mem_writel_pgflush");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sun4m_iommu_page_get_flags(uint64_t pa, uint64_t iopte, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sun4m_iommu_page_get_flags");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,pa,iopte,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sun4m_iommu_translate_pa(uint64_t addr, uint64_t pa, uint32_t iopte){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sun4m_iommu_translate_pa");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,pa,iopte);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sun4m_iommu_bad_addr(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sun4m_iommu_bad_addr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_leon3_set_irq(int intno){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"leon3_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,intno);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_leon3_reset_irq(int intno){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"leon3_reset_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,intno);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_int_helper_icache_freeze(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"int_helper_icache_freeze");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_int_helper_dcache_freeze(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"int_helper_dcache_freeze");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}


#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_sparc64.h"

void glue_ebus_isa_irq_handler(int n, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ebus_isa_irq_handler");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,n,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sun4u_iommu_mem_read(uint64_t addr, uint64_t val, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sun4u_iommu_mem_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,addr,val,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sun4u_iommu_mem_write(uint64_t addr, uint64_t val, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sun4u_iommu_mem_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,addr,val,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sun4u_iommu_translate(uint64_t addr, uint64_t trans_addr, uint64_t tte){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sun4u_iommu_translate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,trans_addr,tte);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc64_cpu_ivec_raise_irq(int irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc64_cpu_ivec_raise_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc64_cpu_ivec_lower_irq(int irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc64_cpu_ivec_lower_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc64_cpu_tick_irq_disabled(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc64_cpu_tick_irq_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc64_cpu_tick_irq_fire(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc64_cpu_tick_irq_fire");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc64_cpu_stick_irq_disabled(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc64_cpu_stick_irq_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc64_cpu_stick_irq_fire(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc64_cpu_stick_irq_fire");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc64_cpu_hstick_irq_disabled(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc64_cpu_hstick_irq_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc64_cpu_hstick_irq_fire(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc64_cpu_hstick_irq_fire");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc64_cpu_tick_set_count(const char *name, uint64_t real_count, const char *npt, void *p){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc64_cpu_tick_set_count");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,b,O&)" ,&name,real_count,&npt,&p);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc64_cpu_tick_get_count(const char *name, uint64_t real_count, const char *npt, void *p){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc64_cpu_tick_get_count");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,b,O&)" ,&name,real_count,&npt,&p);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc64_cpu_tick_set_limit(const char *name, uint64_t real_limit, const char *dis, void *p, uint64_t limit, uint64_t t, uint64_t dt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc64_cpu_tick_set_limit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,b,O&,K,K,K)" ,&name,real_limit,&dis,&p,limit,t,dt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc64_cpu_tick_set_limit_zero(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc64_cpu_tick_set_limit_zero");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

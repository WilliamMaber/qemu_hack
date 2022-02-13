
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_target_arm_hvf.h"

void glue_hvf_unhandled_sysreg_read(uint64_t pc, uint32_t reg, uint32_t op0, uint32_t op1, uint32_t crn, uint32_t crm, uint32_t op2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hvf_unhandled_sysreg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K,K,K)" ,pc,reg,op0,op1,crn,crm,op2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hvf_unhandled_sysreg_write(uint64_t pc, uint32_t reg, uint32_t op0, uint32_t op1, uint32_t crn, uint32_t crm, uint32_t op2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hvf_unhandled_sysreg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K,K,K)" ,pc,reg,op0,op1,crn,crm,op2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hvf_inject_fiq(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hvf_inject_fiq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hvf_inject_irq(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hvf_inject_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hvf_data_abort(uint64_t pc, uint64_t va, uint64_t pa, bool isv, bool iswrite, bool s1ptw, uint32_t len, uint32_t srt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hvf_data_abort");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,p,p,p,K,K)" ,pc,va,pa,isv,iswrite,s1ptw,len,srt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hvf_sysreg_read(uint32_t reg, uint32_t op0, uint32_t op1, uint32_t crn, uint32_t crm, uint32_t op2, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hvf_sysreg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K,K,K)" ,reg,op0,op1,crn,crm,op2,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hvf_sysreg_write(uint32_t reg, uint32_t op0, uint32_t op1, uint32_t crn, uint32_t crm, uint32_t op2, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hvf_sysreg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K,K,K)" ,reg,op0,op1,crn,crm,op2,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hvf_unknown_hvc(uint64_t x0){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hvf_unknown_hvc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,x0);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hvf_unknown_smc(uint64_t x0){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hvf_unknown_smc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,x0);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hvf_exit(uint64_t syndrome, uint32_t ec, uint64_t pc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hvf_exit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,syndrome,ec,pc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hvf_psci_call(uint64_t x0, uint64_t x1, uint64_t x2, uint64_t x3, uint32_t cpuid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hvf_psci_call");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K)" ,x0,x1,x2,x3,cpuid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

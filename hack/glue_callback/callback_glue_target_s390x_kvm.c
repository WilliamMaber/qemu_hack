
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_target_s390x_kvm.h"

void glue_kvm_enable_cmma(int rc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_enable_cmma");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,rc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_clear_cmma(int rc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_clear_cmma");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,rc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_cpu_state_set(int cpu_index, uint8_t state, const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_cpu_state_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,b)" ,cpu_index,state,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_assign_subch_ioeventfd(int fd, uint32_t addr, bool assign, int datamatch){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_assign_subch_ioeventfd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,p,i)" ,fd,addr,assign,datamatch);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

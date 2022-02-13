
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_target_i386_kvm.h"

void glue_kvm_x86_fixup_msi_error(uint32_t gsi){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_x86_fixup_msi_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,gsi);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_x86_add_msi_route(int virq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_x86_add_msi_route");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,virq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_x86_remove_msi_route(int virq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_x86_remove_msi_route");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,virq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_x86_update_msi_routes(int num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_x86_update_msi_routes");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,num);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}


#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_target_i386.h"

void glue_kvm_sev_init(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_sev_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_memcrypt_register_region(void *addr, size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_memcrypt_register_region");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&addr,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_memcrypt_unregister_region(void *addr, size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_memcrypt_unregister_region");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&addr,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_sev_change_state(const char *old, const char *new){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_sev_change_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&old,&new);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_sev_launch_start(int policy, void *session, void *pdh){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_sev_launch_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,O&,O&)" ,policy,&session,&pdh);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_sev_launch_update_data(void *addr, uint64_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_sev_launch_update_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K)" ,&addr,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_sev_launch_measurement(const char *value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_sev_launch_measurement");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_sev_launch_finish(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_sev_launch_finish");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_sev_launch_secret(uint64_t hpa, uint64_t hva, uint64_t secret, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_sev_launch_secret");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,i)" ,hpa,hva,secret,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_sev_attestation_report(const char *mnonce, const char *data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_sev_attestation_report");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&mnonce,&data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

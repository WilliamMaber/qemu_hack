
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_linux-user.h"

void glue_signal_table_init(int i){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"signal_table_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,i);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_signal_do_sigaction_guest(int sig, int max){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"signal_do_sigaction_guest");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,sig,max);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_signal_do_sigaction_host(int sig, int max){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"signal_do_sigaction_host");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,sig,max);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_user_setup_frame(void *env, uint64_t frame_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"user_setup_frame");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K)" ,&env,frame_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_user_setup_rt_frame(void *env, uint64_t frame_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"user_setup_rt_frame");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K)" ,&env,frame_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_user_do_rt_sigreturn(void *env, uint64_t frame_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"user_do_rt_sigreturn");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K)" ,&env,frame_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_user_do_sigreturn(void *env, uint64_t frame_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"user_do_sigreturn");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K)" ,&env,frame_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_user_force_sig(void *env, int target_sig, int host_sig){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"user_force_sig");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&env,target_sig,host_sig);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_user_handle_signal(void *env, int target_sig){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"user_handle_signal");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&env,target_sig);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_user_host_signal(void *env, int host_sig, int target_sig){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"user_host_signal");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&env,host_sig,target_sig);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_user_queue_signal(void *env, int target_sig){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"user_queue_signal");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&env,target_sig);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_user_s390x_restore_sigregs(void *env, uint64_t sc_psw_addr, uint64_t env_psw_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"user_s390x_restore_sigregs");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K)" ,&env,sc_psw_addr,env_psw_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_target_mprotect(uint64_t start, uint64_t len, int flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"target_mprotect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,start,len,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_target_mmap(uint64_t start, uint64_t len, int pflags, int mflags, int fd, uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"target_mmap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i,i,i,K)" ,start,len,pflags,mflags,fd,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_target_mmap_complete(uint64_t retaddr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"target_mmap_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,retaddr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_target_munmap(uint64_t start, uint64_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"target_munmap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,start,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

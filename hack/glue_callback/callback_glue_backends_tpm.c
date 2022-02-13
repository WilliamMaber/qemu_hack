
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_backends_tpm.h"

void glue_tpm_passthrough_handle_request(void *cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_passthrough_handle_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_passthrough_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_passthrough_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_util_get_buffer_size_hdr_len(uint32_t len, size_t expected){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_util_get_buffer_size_hdr_len");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,len,expected);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_util_get_buffer_size_len(uint32_t len, size_t expected){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_util_get_buffer_size_len");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,len,expected);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_util_get_buffer_size_hdr_len2(uint32_t len, size_t expected){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_util_get_buffer_size_hdr_len2");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,len,expected);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_util_get_buffer_size_len2(uint32_t len, size_t expected){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_util_get_buffer_size_len2");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,len,expected);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_util_get_buffer_size(size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_util_get_buffer_size");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_util_show_buffer(const char *direction, size_t len, const char *buf){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_util_show_buffer");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,b)" ,&direction,len,&buf);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_emulator_set_locality(uint8_t locty){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_emulator_set_locality");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,locty);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_emulator_handle_request(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_emulator_handle_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_emulator_probe_caps(uint64_t caps){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_emulator_probe_caps");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,caps);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_emulator_set_buffer_size(uint32_t buffersize, uint32_t minsize, uint32_t maxsize){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_emulator_set_buffer_size");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,buffersize,minsize,maxsize);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_emulator_startup_tpm_resume(bool is_resume, size_t buffersize){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_emulator_startup_tpm_resume");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,i)" ,is_resume,buffersize);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_emulator_get_tpm_established_flag(uint8_t flag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_emulator_get_tpm_established_flag");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,flag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_emulator_cancel_cmd_not_supt(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_emulator_cancel_cmd_not_supt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_emulator_handle_device_opts_tpm12(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_emulator_handle_device_opts_tpm12");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_emulator_handle_device_opts_tpm2(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_emulator_handle_device_opts_tpm2");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_emulator_handle_device_opts_unspec(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_emulator_handle_device_opts_unspec");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_emulator_handle_device_opts_startup_error(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_emulator_handle_device_opts_startup_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_emulator_get_state_blob(uint8_t type, uint32_t size, uint32_t flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_emulator_get_state_blob");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,K)" ,type,size,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_emulator_set_state_blob(uint8_t type, uint32_t size, uint32_t flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_emulator_set_state_blob");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,K)" ,type,size,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_emulator_set_state_blobs(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_emulator_set_state_blobs");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_emulator_set_state_blobs_error(const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_emulator_set_state_blobs_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_emulator_set_state_blobs_done(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_emulator_set_state_blobs_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_emulator_pre_save(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_emulator_pre_save");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_emulator_inst_init(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_emulator_inst_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

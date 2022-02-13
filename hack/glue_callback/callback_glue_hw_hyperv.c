
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_hyperv.h"

void glue_vmbus_recv_message(uint32_t type, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmbus_recv_message");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,type,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmbus_signal_event(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmbus_signal_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmbus_channel_notify_guest(uint32_t chan_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmbus_channel_notify_guest");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,chan_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmbus_post_msg(uint32_t type, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmbus_post_msg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,type,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmbus_msg_cb(int status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmbus_msg_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmbus_process_incoming_message(uint32_t message_type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmbus_process_incoming_message");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,message_type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmbus_initiate_contact(uint16_t major, uint16_t minor, uint32_t vcpu, uint64_t monitor_page1, uint64_t monitor_page2, uint64_t interrupt_page){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmbus_initiate_contact");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,K,K,K)" ,major,minor,vcpu,monitor_page1,monitor_page2,interrupt_page);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmbus_send_offer(uint32_t chan_id, void *dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmbus_send_offer");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,O&)" ,chan_id,&dev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmbus_terminate_offers(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmbus_terminate_offers");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmbus_gpadl_header(uint32_t gpadl_id, uint16_t num_gfns){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmbus_gpadl_header");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,gpadl_id,num_gfns);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmbus_gpadl_body(uint32_t gpadl_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmbus_gpadl_body");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,gpadl_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmbus_gpadl_created(uint32_t gpadl_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmbus_gpadl_created");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,gpadl_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmbus_gpadl_teardown(uint32_t gpadl_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmbus_gpadl_teardown");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,gpadl_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmbus_gpadl_torndown(uint32_t gpadl_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmbus_gpadl_torndown");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,gpadl_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmbus_open_channel(uint32_t chan_id, uint32_t gpadl_id, uint32_t target_vp){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmbus_open_channel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,chan_id,gpadl_id,target_vp);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmbus_channel_open(uint32_t chan_id, uint32_t status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmbus_channel_open");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,chan_id,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmbus_close_channel(uint32_t chan_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmbus_close_channel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,chan_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

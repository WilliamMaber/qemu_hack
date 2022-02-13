
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_monitor.h"

void glue_handle_hmp_command(void *mon, const char *cmdline){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"handle_hmp_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&mon,&cmdline);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_monitor_protocol_event_handler(uint32_t event, void *qdict){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"monitor_protocol_event_handler");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,O&)" ,event,&qdict);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_monitor_protocol_event_emit(uint32_t event, void *data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"monitor_protocol_event_emit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,O&)" ,event,&data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_monitor_protocol_event_queue(uint32_t event, void *qdict, uint64_t rate){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"monitor_protocol_event_queue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,O&,K)" ,event,&qdict,rate);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_monitor_suspend(void *ptr, int cnt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"monitor_suspend");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&ptr,cnt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_monitor_qmp_in_band_enqueue(void *req, void *mon, unsigned len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"monitor_qmp_in_band_enqueue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,I)" ,&req,&mon,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_monitor_qmp_in_band_dequeue(void *req, unsigned len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"monitor_qmp_in_band_dequeue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I)" ,&req,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_monitor_qmp_cmd_in_band(const char *id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"monitor_qmp_cmd_in_band");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_monitor_qmp_err_in_band(const char *desc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"monitor_qmp_err_in_band");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&desc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_monitor_qmp_cmd_out_of_band(const char *id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"monitor_qmp_cmd_out_of_band");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_monitor_qmp_respond(void *mon, const char *json){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"monitor_qmp_respond");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&mon,&json);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_handle_qmp_command(void *mon, const char *req){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"handle_qmp_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&mon,&req);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

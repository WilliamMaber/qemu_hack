
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_target_s390x.h"

void glue_get_skeys_nonzero(int rc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"get_skeys_nonzero");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,rc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_set_skeys_nonzero(int rc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"set_skeys_nonzero");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,rc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ioinst(const char *insn){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ioinst");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&insn);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ioinst_sch_id(const char *insn, int cssid, int ssid, int schid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ioinst_sch_id");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i,i)" ,&insn,cssid,ssid,schid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ioinst_chp_id(const char *insn, int cssid, int chpid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ioinst_chp_id");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&insn,cssid,chpid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ioinst_chsc_cmd(uint16_t cmd, uint16_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ioinst_chsc_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cmd,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpu_set_state(int cpu_index, uint8_t state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpu_set_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B)" ,cpu_index,state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpu_halt(int cpu_index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpu_halt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cpu_index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpu_unhalt(int cpu_index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpu_unhalt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cpu_index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sigp_finished(uint8_t order, int cpu_index, int dst_index, int cc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sigp_finished");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,i,i,i)" ,order,cpu_index,dst_index,cc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

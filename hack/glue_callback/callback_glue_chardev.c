
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_chardev.h"

void glue_wct_init(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"wct_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_wct_cmd_re(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"wct_cmd_re");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_wct_cmd_st(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"wct_cmd_st");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_wct_cmd_sp(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"wct_cmd_sp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_wct_cmd_ts(int input){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"wct_cmd_ts");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,input);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_wct_cmd_other(const char *cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"wct_cmd_other");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_wct_speed(int speed){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"wct_speed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,speed);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spice_chr_discard_write(int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spice_chr_discard_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spice_vmc_write(ssize_t out, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spice_vmc_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,out,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spice_vmc_read(int bytes, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spice_vmc_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,bytes,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spice_vmc_register_interface(void *scd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spice_vmc_register_interface");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&scd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spice_vmc_unregister_interface(void *scd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spice_vmc_unregister_interface");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&scd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spice_vmc_event(int event){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spice_vmc_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,event);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

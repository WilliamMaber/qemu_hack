
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_nvram.h"

void glue_nvram_read(uint32_t addr, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvram_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvram_write(uint32_t addr, uint32_t old, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvram_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,old,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_fw_cfg_select(void *s, uint16_t key_value, const char *key_name, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"fw_cfg_select");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,b,i)" ,&s,key_value,&key_name,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_fw_cfg_read(void *s, uint64_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"fw_cfg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K)" ,&s,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_fw_cfg_add_bytes(uint16_t key_value, const char *key_name, size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"fw_cfg_add_bytes");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,i)" ,key_value,&key_name,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_fw_cfg_add_file(void *s, int index, char *name, size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"fw_cfg_add_file");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,b,i)" ,&s,index,&name,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_fw_cfg_add_string(uint16_t key_value, const char *key_name, const char *value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"fw_cfg_add_string");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,b)" ,key_value,&key_name,&value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_fw_cfg_add_i16(uint16_t key_value, const char *key_name, uint16_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"fw_cfg_add_i16");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,i)" ,key_value,&key_name,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_fw_cfg_add_i32(uint16_t key_value, const char *key_name, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"fw_cfg_add_i32");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,K)" ,key_value,&key_name,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_fw_cfg_add_i64(uint16_t key_value, const char *key_name, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"fw_cfg_add_i64");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,K)" ,key_value,&key_name,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_macio_nvram_read(uint32_t addr, uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"macio_nvram_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_macio_nvram_write(uint32_t addr, uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"macio_nvram_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

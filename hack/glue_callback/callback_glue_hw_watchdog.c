
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_watchdog.h"

void glue_cmsdk_apb_watchdog_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cmsdk_apb_watchdog_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cmsdk_apb_watchdog_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cmsdk_apb_watchdog_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cmsdk_apb_watchdog_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cmsdk_apb_watchdog_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cmsdk_apb_watchdog_lock(uint32_t lock){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cmsdk_apb_watchdog_lock");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,lock);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_wdt_read(uint64_t addr, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_wdt_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_wdt_write(uint64_t addr, uint32_t size, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_wdt_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,size,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

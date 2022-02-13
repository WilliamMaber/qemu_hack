
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_adc.h"

void glue_npcm7xx_adc_read(const char *id, uint64_t offset, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_adc_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&id,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_adc_write(const char *id, uint64_t offset, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_adc_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&id,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_adc_engine_read(uint32_t engine_id, uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_adc_engine_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,engine_id,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_adc_engine_write(uint32_t engine_id, uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_adc_engine_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,engine_id,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}


#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_nubus.h"

void glue_nubus_slot_read(uint64_t addr, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nubus_slot_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nubus_slot_write(uint64_t addr, uint64_t val, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nubus_slot_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,addr,val,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nubus_super_slot_read(uint64_t addr, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nubus_super_slot_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nubus_super_slot_write(uint64_t addr, uint64_t val, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nubus_super_slot_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,addr,val,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

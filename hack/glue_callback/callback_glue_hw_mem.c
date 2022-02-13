
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_mem.h"

void glue_mhp_pc_dimm_assigned_slot(int slot){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mhp_pc_dimm_assigned_slot");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,slot);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_memory_device_pre_plug(const char *id, uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"memory_device_pre_plug");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&id,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_memory_device_plug(const char *id, uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"memory_device_plug");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&id,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_memory_device_unplug(const char *id, uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"memory_device_unplug");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&id,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}


#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_mips.h"

void glue_gt64120_read(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gt64120_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gt64120_write(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gt64120_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gt64120_read_intreg(const char *regname, unsigned size, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gt64120_read_intreg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,I,K)" ,&regname,size,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gt64120_write_intreg(const char *regname, unsigned size, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gt64120_write_intreg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,I,K)" ,&regname,size,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gt64120_isd_remap(uint64_t from_length, uint64_t from_addr, uint64_t to_length, uint64_t to_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gt64120_isd_remap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,from_length,from_addr,to_length,to_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

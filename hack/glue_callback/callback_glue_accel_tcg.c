
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_accel_tcg.h"

void glue_exec_tb(void *tb, uintptr_t pc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exec_tb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&tb);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_exec_tb_nocache(void *tb, uintptr_t pc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exec_tb_nocache");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&tb);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_exec_tb_exit(void *last_tb, unsigned int flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"exec_tb_exit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I)" ,&last_tb,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_translate_block(void *tb, uintptr_t pc, const void *tb_code){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"translate_block");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&tb,&tb_code);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

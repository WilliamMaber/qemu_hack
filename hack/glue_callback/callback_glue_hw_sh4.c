
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_sh4.h"

void glue_sh7750_porta(uint16_t prev, uint16_t cur, uint16_t pdtr, uint16_t pctr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sh7750_porta");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,prev,cur,pdtr,pctr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sh7750_portb(uint16_t prev, uint16_t cur, uint16_t pdtr, uint16_t pctr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sh7750_portb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,prev,cur,pdtr,pctr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

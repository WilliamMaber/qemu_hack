
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_ebpf.h"

void glue_ebpf_error(const char *s1, const char *s2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ebpf_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&s1,&s2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

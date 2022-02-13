
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_qom.h"

void glue_object_dynamic_cast_assert(const char *type, const char *target, const char *file, int line, const char *func){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"object_dynamic_cast_assert");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,b,i,b)" ,&type,&target,&file,line,&func);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_object_class_dynamic_cast_assert(const char *type, const char *target, const char *file, int line, const char *func){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"object_class_dynamic_cast_assert");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,b,i,b)" ,&type,&target,&file,line,&func);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}


#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_scsi.h"

void glue_pr_manager_execute(int fd, int cmd, int sa){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pr_manager_execute");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,fd,cmd,sa);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pr_manager_run(int fd, int cmd, int sa){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pr_manager_run");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,fd,cmd,sa);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

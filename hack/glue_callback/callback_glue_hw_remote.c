
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_remote.h"

void glue_mpqemu_send_io_error(int cmd, int size, int nfds){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mpqemu_send_io_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,cmd,size,nfds);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mpqemu_recv_io_error(int cmd, int size, int nfds){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mpqemu_recv_io_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,cmd,size,nfds);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

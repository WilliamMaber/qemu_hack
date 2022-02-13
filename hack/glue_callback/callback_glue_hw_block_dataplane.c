
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_block_dataplane.h"

void glue_virtio_blk_data_plane_start(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_blk_data_plane_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_blk_data_plane_stop(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_blk_data_plane_stop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

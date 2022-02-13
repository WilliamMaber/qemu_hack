
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_pci.h"

void glue_pci_update_mappings_del(const char *dev, uint32_t bus, uint32_t slot, uint32_t func, int bar, uint64_t addr, uint64_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_update_mappings_del");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K,i,K,K)" ,&dev,bus,slot,func,bar,addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_update_mappings_add(const char *dev, uint32_t bus, uint32_t slot, uint32_t func, int bar, uint64_t addr, uint64_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_update_mappings_add");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K,i,K,K)" ,&dev,bus,slot,func,bar,addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_cfg_read(const char *dev, uint32_t bus, uint32_t slot, uint32_t func, unsigned offs, unsigned val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_cfg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K,I,I)" ,&dev,bus,slot,func,offs,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_cfg_write(const char *dev, uint32_t bus, uint32_t slot, uint32_t func, unsigned offs, unsigned val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_cfg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K,I,I)" ,&dev,bus,slot,func,offs,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_msix_write_config(char *name, bool enabled, bool masked){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"msix_write_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,p,p)" ,&name,enabled,masked);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

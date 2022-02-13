
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_isa.h"

void glue_superio_create_parallel(int id, uint16_t base, unsigned int irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"superio_create_parallel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,I)" ,id,base,irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_superio_create_serial(int id, uint16_t base, unsigned int irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"superio_create_serial");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,I)" ,id,base,irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_superio_create_floppy(int id, uint16_t base, unsigned int irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"superio_create_floppy");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,I)" ,id,base,irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_superio_create_ide(int id, uint16_t base, unsigned int irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"superio_create_ide");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,I)" ,id,base,irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pc87312_io_read(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pc87312_io_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pc87312_io_write(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pc87312_io_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_apm_io_read(uint8_t addr, uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"apm_io_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_apm_io_write(uint8_t addr, uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"apm_io_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via_isa_write(uint32_t addr, uint32_t val, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via_isa_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,addr,val,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via_pm_write(uint32_t addr, uint32_t val, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via_pm_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,addr,val,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via_pm_io_read(uint32_t addr, uint32_t val, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via_pm_io_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,addr,val,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via_pm_io_write(uint32_t addr, uint32_t val, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via_pm_io_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,addr,val,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via_superio_read(uint8_t addr, uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via_superio_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via_superio_write(uint8_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via_superio_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

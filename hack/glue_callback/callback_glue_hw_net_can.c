
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_net_can.h"

void glue_xlnx_can_update_irq(uint32_t isr, uint32_t ier, uint32_t irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xlnx_can_update_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,isr,ier,irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xlnx_can_reset(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xlnx_can_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xlnx_can_rx_fifo_filter_reject(uint32_t id, uint8_t dlc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xlnx_can_rx_fifo_filter_reject");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B)" ,id,dlc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xlnx_can_filter_id_pre_write(uint8_t filter_num, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xlnx_can_filter_id_pre_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K)" ,filter_num,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xlnx_can_filter_mask_pre_write(uint8_t filter_num, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xlnx_can_filter_mask_pre_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K)" ,filter_num,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xlnx_can_tx_data(uint32_t id, uint8_t dlc, uint8_t db0, uint8_t db1, uint8_t db2, uint8_t db3, uint8_t db4, uint8_t db5, uint8_t db6, uint8_t db7){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xlnx_can_tx_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B,B,B,B,B,B,B,B,B)" ,id,dlc,db0,db1,db2,db3,db4,db5,db6,db7);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xlnx_can_rx_data(uint32_t id, uint32_t dlc, uint8_t db0, uint8_t db1, uint8_t db2, uint8_t db3, uint8_t db4, uint8_t db5, uint8_t db6, uint8_t db7){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xlnx_can_rx_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,B,B,B,B,B,B,B,B)" ,id,dlc,db0,db1,db2,db3,db4,db5,db6,db7);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xlnx_can_rx_discard(uint32_t status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xlnx_can_rx_discard");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

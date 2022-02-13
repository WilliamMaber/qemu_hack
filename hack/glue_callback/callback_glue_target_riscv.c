
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_target_riscv.h"

void glue_riscv_trap(uint64_t hartid, bool async, uint64_t cause, uint64_t epc, uint64_t tval, const char *desc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"riscv_trap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,p,K,K,K,b)" ,hartid,async,cause,epc,tval,&desc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmpcfg_csr_read(uint64_t mhartid, uint32_t reg_index, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmpcfg_csr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,mhartid,reg_index,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmpcfg_csr_write(uint64_t mhartid, uint32_t reg_index, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmpcfg_csr_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,mhartid,reg_index,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmpaddr_csr_read(uint64_t mhartid, uint32_t addr_index, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmpaddr_csr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,mhartid,addr_index,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmpaddr_csr_write(uint64_t mhartid, uint32_t addr_index, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmpaddr_csr_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,mhartid,addr_index,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mseccfg_csr_read(uint64_t mhartid, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mseccfg_csr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,mhartid,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mseccfg_csr_write(uint64_t mhartid, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mseccfg_csr_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,mhartid,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}


#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_rdma_vmw.h"

void glue_pvrdma_regs_read(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvrdma_regs_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvrdma_regs_write(uint64_t addr, uint64_t val, const char *reg_name, const char *val_name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvrdma_regs_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,b,b)" ,addr,val,&reg_name,&val_name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvrdma_uar_write(uint64_t addr, uint64_t val, const char *reg_name, const char *val_name, int val1, int val2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvrdma_uar_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,b,b,i,i)" ,addr,val,&reg_name,&val_name,val1,val2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvrdma_map_to_pdir_host_virt(void *vfirst, void *vremaped){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvrdma_map_to_pdir_host_virt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&vfirst,&vremaped);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvrdma_map_to_pdir_next_page(int page_idx, void *vnext, void *vremaped){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvrdma_map_to_pdir_next_page");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,O&,O&)" ,page_idx,&vnext,&vremaped);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvrdma_exec_cmd(int cmd, int err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvrdma_exec_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cmd,err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvrdma_ring_next_elem_read_no_data(char *ring_name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvrdma_ring_next_elem_read_no_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&ring_name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvrdma_post_cqe(uint32_t cq_handle, int notify, uint64_t wr_id, uint64_t qpn, uint32_t op_code, uint32_t status, uint32_t byte_len, uint32_t src_qp, uint32_t wc_flags, uint32_t vendor_err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvrdma_post_cqe");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,K,K,K,K,K,K,K,K)" ,cq_handle,notify,wr_id,qpn,op_code,status,byte_len,src_qp,wc_flags,vendor_err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}


#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_rdma.h"

void glue_rdma_check_dev_attr(const char *name, int max_bk, int max_fe){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_check_dev_attr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&name,max_bk,max_fe);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_create_ah_cache_hit(uint64_t subnet, uint64_t if_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_create_ah_cache_hit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,subnet,if_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_create_ah_cache_miss(uint64_t subnet, uint64_t if_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_create_ah_cache_miss");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,subnet,if_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_poll_cq(int ne, void *ibcq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_poll_cq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,O&)" ,ne,&ibcq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdmacm_mux(const char *title, int msg_type, int op_code){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdmacm_mux");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&title,msg_type,op_code);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdmacm_mux_check_op_status(int msg_type, int op_code, int err_code){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdmacm_mux_check_op_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,msg_type,op_code,err_code);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_mad_message(const char *title, int len, char *data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_mad_message");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,b)" ,&title,len,&data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_backend_rc_qp_state_init(uint32_t qpn){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_backend_rc_qp_state_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,qpn);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_backend_ud_qp_state_init(uint32_t qpn, uint32_t qkey){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_backend_ud_qp_state_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,qpn,qkey);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_backend_rc_qp_state_rtr(uint32_t qpn, uint64_t subnet, uint64_t ifid, uint8_t sgid_idx, uint32_t dqpn, uint32_t rq_psn){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_backend_rc_qp_state_rtr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,B,K,K)" ,qpn,subnet,ifid,sgid_idx,dqpn,rq_psn);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_backend_ud_qp_state_rtr(uint32_t qpn, uint32_t qkey){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_backend_ud_qp_state_rtr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,qpn,qkey);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_backend_rc_qp_state_rts(uint32_t qpn, uint32_t sq_psn){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_backend_rc_qp_state_rts");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,qpn,sq_psn);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_backend_ud_qp_state_rts(uint32_t qpn, uint32_t sq_psn, uint32_t qkey){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_backend_ud_qp_state_rts");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,qpn,sq_psn,qkey);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_backend_get_gid_index(uint64_t subnet, uint64_t ifid, int gid_idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_backend_get_gid_index");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,subnet,ifid,gid_idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_backend_gid_change(const char *op, uint64_t subnet, uint64_t ifid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_backend_gid_change");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&op,subnet,ifid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_res_tbl_get(char *name, uint32_t handle){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_res_tbl_get");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&name,handle);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_res_tbl_alloc(char *name, uint32_t handle){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_res_tbl_alloc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&name,handle);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_res_tbl_dealloc(char *name, uint32_t handle){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_res_tbl_dealloc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&name,handle);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_rm_alloc_mr(uint32_t mr_handle, void *host_virt, uint64_t guest_start, uint64_t guest_length, int access_flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_rm_alloc_mr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,O&,K,K,i)" ,mr_handle,&host_virt,guest_start,guest_length,access_flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_rm_dealloc_mr(uint32_t mr_handle, uint64_t guest_start){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_rm_dealloc_mr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,mr_handle,guest_start);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_rm_alloc_qp(uint32_t rm_qpn, uint32_t backend_qpn, uint8_t qp_type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_rm_alloc_qp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,B)" ,rm_qpn,backend_qpn,qp_type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_rm_modify_qp(uint32_t qpn, uint32_t attr_mask, int qp_state, uint8_t sgid_idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_rm_modify_qp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i,B)" ,qpn,attr_mask,qp_state,sgid_idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_pci_dma_map(uint64_t addr, void *vaddr, uint64_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_pci_dma_map");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,O&,K)" ,addr,&vaddr,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_pci_dma_unmap(void *vaddr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_pci_dma_unmap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&vaddr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}


#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_target_ppc.h"

void glue_kvm_failed_spr_set(int spr, const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_spr_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,spr,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_spr_get(int spr, const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_spr_get");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,spr,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_fpscr_set(const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_fpscr_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_fp_set(const char *fpname, int fpnum, const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_fp_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,b)" ,&fpname,fpnum,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_vscr_set(const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_vscr_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_vr_set(int vr, const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_vr_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,vr,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_fpscr_get(const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_fpscr_get");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_fp_get(const char *fpname, int fpnum, const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_fp_get");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,b)" ,&fpname,fpnum,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_vscr_get(const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_vscr_get");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_vr_get(int vr, const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_vr_get");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,vr,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_vpa_addr_get(const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_vpa_addr_get");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_slb_get(const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_slb_get");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_dtl_get(const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_dtl_get");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_vpa_addr_set(const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_vpa_addr_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_slb_set(const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_slb_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_dtl_set(const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_dtl_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_null_vpa_addr_set(const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_null_vpa_addr_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_put_vpa(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_put_vpa");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_get_vpa(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_get_vpa");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_handle_dcr_write(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_handle_dcr_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_handle_dcr_read(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_handle_dcr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_handle_halt(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_handle_halt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_handle_papr_hcall(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_handle_papr_hcall");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_handle_epr(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_handle_epr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_handle_watchdog_expiry(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_handle_watchdog_expiry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_handle_debug_exception(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_handle_debug_exception");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_handle_nmi_exception(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_handle_nmi_exception");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc_excp_rfi(uint64_t nip, uint64_t msr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc_excp_rfi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,nip,msr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc_excp_dsi(uint64_t dsisr, uint64_t dar){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc_excp_dsi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,dsisr,dar);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc_excp_isi(uint64_t msr, uint64_t nip){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc_excp_isi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,msr,nip);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc_excp_fp_ignore(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc_excp_fp_ignore");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc_excp_inval(uint64_t nip){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc_excp_inval");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,nip);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppc_excp_print(const char *excp){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppc_excp_print");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&excp);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

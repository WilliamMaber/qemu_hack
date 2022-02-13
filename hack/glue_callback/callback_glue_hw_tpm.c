
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_tpm.h"

void glue_tpm_crb_mmio_read(uint64_t addr, unsigned size, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_crb_mmio_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,K)" ,addr,size,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_crb_mmio_write(uint64_t addr, unsigned size, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_crb_mmio_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,K)" ,addr,size,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_tis_raise_irq(uint32_t irqmask){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_tis_raise_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,irqmask);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_tis_new_active_locality(uint8_t locty){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_tis_new_active_locality");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,locty);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_tis_abort(uint8_t locty){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_tis_abort");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,locty);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_tis_data_read(uint32_t value, uint32_t off){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_tis_data_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,value,off);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_tis_mmio_read(unsigned size, uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_tis_mmio_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,K,K)" ,size,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_tis_mmio_write(unsigned size, uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_tis_mmio_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,K,K)" ,size,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_tis_mmio_write_locty4(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_tis_mmio_write_locty4");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_tis_mmio_write_release_locty(uint8_t locty){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_tis_mmio_write_release_locty");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,locty);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_tis_mmio_write_locty_req_use(uint8_t locty){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_tis_mmio_write_locty_req_use");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,locty);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_tis_mmio_write_next_locty(uint8_t locty){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_tis_mmio_write_next_locty");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,locty);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_tis_mmio_write_locty_seized(uint8_t locty, uint8_t active){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_tis_mmio_write_locty_seized");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,locty,active);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_tis_mmio_write_init_abort(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_tis_mmio_write_init_abort");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_tis_mmio_write_lowering_irq(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_tis_mmio_write_lowering_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_tis_mmio_write_data2send(uint32_t value, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_tis_mmio_write_data2send");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I)" ,value,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_tis_pre_save(uint8_t locty, uint32_t rw_offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_tis_pre_save");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K)" ,locty,rw_offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_ppi_memset(uint8_t *ptr, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_ppi_memset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,i)" ,&ptr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_spapr_do_crq(uint8_t raw1, uint8_t raw2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_spapr_do_crq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,raw1,raw2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_spapr_do_crq_crq_result(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_spapr_do_crq_crq_result");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_spapr_do_crq_crq_complete_result(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_spapr_do_crq_crq_complete_result");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_spapr_do_crq_tpm_command(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_spapr_do_crq_tpm_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_spapr_do_crq_tpm_get_rtce_buffer_size(size_t buffersize){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_spapr_do_crq_tpm_get_rtce_buffer_size");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,buffersize);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_spapr_do_crq_get_version(uint32_t version){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_spapr_do_crq_get_version");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,version);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_spapr_do_crq_prepare_to_suspend(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_spapr_do_crq_prepare_to_suspend");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_spapr_do_crq_unknown_msg_type(uint8_t type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_spapr_do_crq_unknown_msg_type");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_spapr_do_crq_unknown_crq(uint8_t raw1, uint8_t raw2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_spapr_do_crq_unknown_crq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,raw1,raw2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_spapr_post_load(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_spapr_post_load");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tpm_spapr_caught_response(uint32_t v){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tpm_spapr_caught_response");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,v);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

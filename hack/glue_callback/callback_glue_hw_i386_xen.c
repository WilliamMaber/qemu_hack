
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_i386_xen.h"

void glue_xen_platform_log(char *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_platform_log");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_pv_mmio_read(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_pv_mmio_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_pv_mmio_write(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_pv_mmio_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_ram_alloc(unsigned long ram_addr, unsigned long size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_ram_alloc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_client_set_memory(uint64_t start_addr, unsigned long size, bool log_dirty){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_client_set_memory");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,p)" ,start_addr,log_dirty);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_handle_ioreq(void *req, uint32_t type, uint32_t dir, uint32_t df, uint32_t data_is_ptr, uint64_t addr, uint64_t data, uint32_t count, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"handle_ioreq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K,K,K,K,K,K)" ,&req,type,dir,df,data_is_ptr,addr,data,count,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_handle_ioreq_read(void *req, uint32_t type, uint32_t df, uint32_t data_is_ptr, uint64_t addr, uint64_t data, uint32_t count, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"handle_ioreq_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K,K,K,K,K)" ,&req,type,df,data_is_ptr,addr,data,count,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_handle_ioreq_write(void *req, uint32_t type, uint32_t df, uint32_t data_is_ptr, uint64_t addr, uint64_t data, uint32_t count, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"handle_ioreq_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K,K,K,K,K)" ,&req,type,df,data_is_ptr,addr,data,count,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpu_ioreq_pio(void *req, uint32_t dir, uint32_t df, uint32_t data_is_ptr, uint64_t addr, uint64_t data, uint32_t count, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpu_ioreq_pio");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K,K,K,K,K)" ,&req,dir,df,data_is_ptr,addr,data,count,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpu_ioreq_pio_read_reg(void *req, uint64_t data, uint64_t addr, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpu_ioreq_pio_read_reg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K)" ,&req,data,addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpu_ioreq_pio_write_reg(void *req, uint64_t data, uint64_t addr, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpu_ioreq_pio_write_reg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K)" ,&req,data,addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpu_ioreq_move(void *req, uint32_t dir, uint32_t df, uint32_t data_is_ptr, uint64_t addr, uint64_t data, uint32_t count, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpu_ioreq_move");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K,K,K,K,K)" ,&req,dir,df,data_is_ptr,addr,data,count,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_map_resource_ioreq(uint32_t id, void *addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_map_resource_ioreq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,O&)" ,id,&addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpu_ioreq_config_read(void *req, uint32_t sbdf, uint32_t reg, uint32_t size, uint32_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpu_ioreq_config_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K,K)" ,&req,sbdf,reg,size,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpu_ioreq_config_write(void *req, uint32_t sbdf, uint32_t reg, uint32_t size, uint32_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpu_ioreq_config_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K,K)" ,&req,sbdf,reg,size,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_map_cache(uint64_t phys_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_map_cache");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,phys_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_remap_bucket(uint64_t index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_remap_bucket");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_map_cache_return(void* ptr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_map_cache_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

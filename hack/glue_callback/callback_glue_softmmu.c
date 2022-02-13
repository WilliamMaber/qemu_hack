
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_softmmu.h"

void glue_balloon_event(void *opaque, unsigned long addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"balloon_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&opaque);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpu_in(unsigned int addr, char size, unsigned int val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpu_in");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,b,I)" ,addr,size,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpu_out(unsigned int addr, char size, unsigned int val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpu_out");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,b,I)" ,addr,size,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_memory_region_ops_read(int cpu_index, void *mr, uint64_t addr, uint64_t value, unsigned size, const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"memory_region_ops_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,O&,K,K,I,b)" ,cpu_index,&mr,addr,value,size,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_memory_region_ops_write(int cpu_index, void *mr, uint64_t addr, uint64_t value, unsigned size, const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"memory_region_ops_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,O&,K,K,I,b)" ,cpu_index,&mr,addr,value,size,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_memory_region_subpage_read(int cpu_index, void *mr, uint64_t offset, uint64_t value, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"memory_region_subpage_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,O&,K,K,I)" ,cpu_index,&mr,offset,value,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_memory_region_subpage_write(int cpu_index, void *mr, uint64_t offset, uint64_t value, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"memory_region_subpage_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,O&,K,K,I)" ,cpu_index,&mr,offset,value,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_memory_region_ram_device_read(int cpu_index, void *mr, uint64_t addr, uint64_t value, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"memory_region_ram_device_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,O&,K,K,I)" ,cpu_index,&mr,addr,value,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_memory_region_ram_device_write(int cpu_index, void *mr, uint64_t addr, uint64_t value, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"memory_region_ram_device_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,O&,K,K,I)" ,cpu_index,&mr,addr,value,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_memory_region_sync_dirty(const char *mr, const char *listener, int global){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"memory_region_sync_dirty");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,i)" ,&mr,&listener,global);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_flatview_new(void *view, void *root){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"flatview_new");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&view,&root);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_flatview_destroy(void *view, void *root){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"flatview_destroy");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&view,&root);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_flatview_destroy_rcu(void *view, void *root){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"flatview_destroy_rcu");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&view,&root);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_global_dirty_changed(unsigned int bitmask){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"global_dirty_changed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,bitmask);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vm_stop_flush_all(int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vm_stop_flush_all");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vm_state_notify(int running, int reason, const char *reason_str){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vm_state_notify");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,b)" ,running,reason,&reason_str);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_load_file(const char *name, const char *path){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"load_file");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&name,&path);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_runstate_set(int current_state, const char *current_state_str, int new_state, const char *new_state_str){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"runstate_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,i,b)" ,current_state,&current_state_str,new_state,&new_state_str);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_system_wakeup_request(int reason){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"system_wakeup_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,reason);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_system_shutdown_request(int reason){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_system_shutdown_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,reason);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_system_powerdown_request(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_system_powerdown_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

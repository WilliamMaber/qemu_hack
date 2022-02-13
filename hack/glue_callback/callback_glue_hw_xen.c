
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_xen.h"

void glue_xen_default_ioreq_server(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_default_ioreq_server");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_ioreq_server_create(uint32_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_ioreq_server_create");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_ioreq_server_destroy(uint32_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_ioreq_server_destroy");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_ioreq_server_state(uint32_t id, bool enable){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_ioreq_server_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,p)" ,id,enable);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_map_mmio_range(uint32_t id, uint64_t start_addr, uint64_t end_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_map_mmio_range");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,id,start_addr,end_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_unmap_mmio_range(uint32_t id, uint64_t start_addr, uint64_t end_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_unmap_mmio_range");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,id,start_addr,end_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_map_portio_range(uint32_t id, uint64_t start_addr, uint64_t end_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_map_portio_range");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,id,start_addr,end_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_unmap_portio_range(uint32_t id, uint64_t start_addr, uint64_t end_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_unmap_portio_range");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,id,start_addr,end_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_map_pcidev(uint32_t id, uint8_t bus, uint8_t dev, uint8_t func){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_map_pcidev");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B,B,B)" ,id,bus,dev,func);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_unmap_pcidev(uint32_t id, uint8_t bus, uint8_t dev, uint8_t func){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_unmap_pcidev");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B,B,B)" ,id,bus,dev,func);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_domid_restrict(int err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_domid_restrict");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_bus_realize(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_bus_realize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_bus_unrealize(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_bus_unrealize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_bus_enumerate(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_bus_enumerate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_bus_cleanup(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_bus_cleanup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_bus_type_enumerate(const char *type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_bus_type_enumerate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_bus_backend_create(const char *type, const char *path){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_bus_backend_create");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&type,&path);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_bus_device_cleanup(const char *type, char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_bus_device_cleanup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&type,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_bus_add_watch(const char *node, const char *key){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_bus_add_watch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&node,&key);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_bus_remove_watch(const char *node, const char *key){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_bus_remove_watch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&node,&key);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_device_realize(const char *type, char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_device_realize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&type,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_device_unrealize(const char *type, char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_device_unrealize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&type,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_device_backend_state(const char *type, char *name, const char *state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_device_backend_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,b)" ,&type,&name,&state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_device_backend_online(const char *type, char *name, bool online){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_device_backend_online");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,p)" ,&type,&name,online);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_device_backend_changed(const char *type, char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_device_backend_changed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&type,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_device_frontend_state(const char *type, char *name, const char *state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_device_frontend_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,b)" ,&type,&name,&state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_device_frontend_changed(const char *type, char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_device_frontend_changed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&type,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_device_unplug(const char *type, char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_device_unplug");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&type,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_device_add_watch(const char *type, char *name, const char *node, const char *key){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_device_add_watch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,b,b)" ,&type,&name,&node,&key);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_device_remove_watch(const char *type, char *name, const char *node, const char *key){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_device_remove_watch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,b,b)" ,&type,&name,&node,&key);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xs_node_create(const char *node){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xs_node_create");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&node);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xs_node_destroy(const char *node){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xs_node_destroy");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&node);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xs_node_vprintf(char *path, char *value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xs_node_vprintf");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&path,&value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xs_node_vscanf(char *path, char *value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xs_node_vscanf");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&path,&value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xs_node_watch(char *path){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xs_node_watch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&path);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xs_node_unwatch(char *path){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xs_node_unwatch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&path);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

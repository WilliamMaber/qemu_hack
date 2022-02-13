
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_s390x.h"

void glue_css_enable_facility(const char *facility){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"css_enable_facility");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&facility);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_css_crw(uint8_t rsc, uint8_t erc, uint16_t rsid, const char *chained){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"css_crw");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,i,b)" ,rsc,erc,rsid,&chained);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_css_chpid_add(uint8_t cssid, uint8_t chpid, uint8_t type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"css_chpid_add");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B)" ,cssid,chpid,type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_css_new_image(uint8_t cssid, const char *default_cssid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"css_new_image");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,b)" ,cssid,&default_cssid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_css_assign_subch(const char *do_assign, uint8_t cssid, uint8_t ssid, uint16_t schid, uint16_t devno){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"css_assign_subch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B,B,i,i)" ,&do_assign,cssid,ssid,schid,devno);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_css_io_interrupt(int cssid, int ssid, int schid, uint32_t intparm, uint8_t isc, const char *conditional){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"css_io_interrupt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,K,B,b)" ,cssid,ssid,schid,intparm,isc,&conditional);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_css_adapter_interrupt(uint8_t isc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"css_adapter_interrupt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,isc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_css_do_sic(uint16_t mode, uint8_t isc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"css_do_sic");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B)" ,mode,isc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_ccw_interpret_ccw(int cssid, int ssid, int schid, int cmd_code){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_ccw_interpret_ccw");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,cssid,ssid,schid,cmd_code);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_ccw_new_device(int cssid, int ssid, int schid, int devno, const char *devno_mode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_ccw_new_device");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i,b)" ,cssid,ssid,schid,devno,&devno_mode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_ccw_set_ind(uint64_t ind_loc, uint8_t ind_old, uint8_t ind_new){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_ccw_set_ind");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B,B)" ,ind_loc,ind_old,ind_new);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_s390_pci_clp_cap(const char *id, uint32_t cap){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"s390_pci_clp_cap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&id,cap);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_s390_pci_clp_cap_size(const char *id, uint32_t size, uint32_t cap){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"s390_pci_clp_cap_size");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&id,size,cap);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_s390_pci_clp_dev_info(const char *id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"s390_pci_clp_dev_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

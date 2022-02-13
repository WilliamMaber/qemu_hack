
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_accel_kvm.h"

void glue_kvm_ioctl(int type, void *arg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_ioctl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,O&)" ,type,&arg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_vm_ioctl(int type, void *arg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_vm_ioctl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,O&)" ,type,&arg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_vcpu_ioctl(int cpu_index, int type, void *arg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_vcpu_ioctl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,O&)" ,cpu_index,type,&arg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_run_exit(int cpu_index, uint32_t reason){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_run_exit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,cpu_index,reason);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_device_ioctl(int fd, int type, void *arg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_device_ioctl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,O&)" ,fd,type,&arg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_reg_get(uint64_t id, const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_reg_get");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b)" ,id,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_failed_reg_set(uint64_t id, const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_failed_reg_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b)" ,id,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_init_vcpu(int cpu_index, unsigned long arch_cpu_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_init_vcpu");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cpu_index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_irqchip_commit_routes(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_irqchip_commit_routes");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_irqchip_add_msi_route(char *name, int vector, int virq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_irqchip_add_msi_route");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&name,vector,virq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_irqchip_update_msi_route(int virq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_irqchip_update_msi_route");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,virq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_irqchip_release_virq(int virq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_irqchip_release_virq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,virq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_set_ioeventfd_mmio(int fd, uint64_t addr, uint32_t val, bool assign, uint32_t size, bool datamatch){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_set_ioeventfd_mmio");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,p,K,p)" ,fd,addr,val,assign,size,datamatch);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_set_ioeventfd_pio(int fd, uint16_t addr, uint32_t val, bool assign, uint32_t size, bool datamatch){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_set_ioeventfd_pio");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,p,K,p)" ,fd,addr,val,assign,size,datamatch);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_set_user_memory(uint32_t slot, uint32_t flags, uint64_t guest_phys_addr, uint64_t memory_size, uint64_t userspace_addr, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_set_user_memory");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K,i)" ,slot,flags,guest_phys_addr,memory_size,userspace_addr,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_clear_dirty_log(uint32_t slot, uint64_t start, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_clear_dirty_log");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,slot,start,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_resample_fd_notify(int gsi){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_resample_fd_notify");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,gsi);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_dirty_ring_full(int id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_dirty_ring_full");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_dirty_ring_reap_vcpu(int id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_dirty_ring_reap_vcpu");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_dirty_ring_page(int vcpu, uint32_t slot, uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_dirty_ring_page");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,vcpu,slot,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_dirty_ring_reaper(const char *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_dirty_ring_reaper");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_dirty_ring_reap(uint64_t count, int64_t t){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_dirty_ring_reap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,L)" ,count,t);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_dirty_ring_reaper_kick(const char *reason){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_dirty_ring_reaper_kick");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&reason);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_dirty_ring_flush(int finished){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_dirty_ring_flush");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,finished);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

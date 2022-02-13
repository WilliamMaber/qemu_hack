
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_virtio.h"

void glue_vhost_commit(bool started, bool changed){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_commit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,p)" ,started,changed);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_region_add_section(const char *name, uint64_t gpa, uint64_t size, uint64_t host){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_region_add_section");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K)" ,&name,gpa,size,host);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_region_add_section_merge(const char *name, uint64_t new_size, uint64_t gpa, uint64_t owr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_region_add_section_merge");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K)" ,&name,new_size,gpa,owr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_region_add_section_aligned(const char *name, uint64_t gpa, uint64_t size, uint64_t host){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_region_add_section_aligned");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K)" ,&name,gpa,size,host);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_section(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_section");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_reject_section(const char *name, int d){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_reject_section");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,d);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_iotlb_miss(void *dev, int step){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_iotlb_miss");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&dev,step);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_user_postcopy_end_entry(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_user_postcopy_end_entry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_user_postcopy_end_exit(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_user_postcopy_end_exit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_user_postcopy_fault_handler(const char *name, uint64_t fault_address, int nregions){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_user_postcopy_fault_handler");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,i)" ,&name,fault_address,nregions);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_user_postcopy_fault_handler_loop(int i, uint64_t client_base, uint64_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_user_postcopy_fault_handler_loop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,i,client_base,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_user_postcopy_fault_handler_found(int i, uint64_t region_offset, uint64_t rb_offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_user_postcopy_fault_handler_found");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,i,region_offset,rb_offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_user_postcopy_listen(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_user_postcopy_listen");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_user_set_mem_table_postcopy(uint64_t client_addr, uint64_t qhva, int reply_i, int region_i){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_user_set_mem_table_postcopy");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i,i)" ,client_addr,qhva,reply_i,region_i);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_user_set_mem_table_withfd(int index, const char *name, uint64_t memory_size, uint64_t guest_phys_addr, uint64_t userspace_addr, uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_user_set_mem_table_withfd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,K,K,K,K)" ,index,&name,memory_size,guest_phys_addr,userspace_addr,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_user_postcopy_waker(const char *rb, uint64_t rb_offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_user_postcopy_waker");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&rb,rb_offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_user_postcopy_waker_found(uint64_t client_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_user_postcopy_waker_found");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,client_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_user_postcopy_waker_nomatch(const char *rb, uint64_t rb_offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_user_postcopy_waker_nomatch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&rb,rb_offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_dma_map(void *vdpa, int fd, uint32_t msg_type, uint64_t iova, uint64_t size, uint64_t uaddr, uint8_t perm, uint8_t type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_dma_map");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,K,K,K,K,B,B)" ,&vdpa,fd,msg_type,iova,size,uaddr,perm,type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_dma_unmap(void *vdpa, int fd, uint32_t msg_type, uint64_t iova, uint64_t size, uint8_t type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_dma_unmap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,K,K,K,B)" ,&vdpa,fd,msg_type,iova,size,type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_listener_region_add(void *vdpa, uint64_t iova, uint64_t llend, void *vaddr, bool readonly){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_listener_region_add");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,O&,p)" ,&vdpa,iova,llend,&vaddr,readonly);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_listener_region_del(void *vdpa, uint64_t iova, uint64_t llend){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_listener_region_del");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K)" ,&vdpa,iova,llend);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_add_status(void *dev, uint8_t status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_add_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,B)" ,&dev,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_init(void *dev, void *vdpa){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&dev,&vdpa);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_cleanup(void *dev, void *vdpa){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_cleanup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&dev,&vdpa);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_memslots_limit(void *dev, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_memslots_limit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&dev,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_set_mem_table(void *dev, uint32_t nregions, uint32_t padding){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_set_mem_table");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K)" ,&dev,nregions,padding);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_dump_regions(void *dev, int i, uint64_t guest_phys_addr, uint64_t memory_size, uint64_t userspace_addr, uint64_t flags_padding){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_dump_regions");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,K,K,K,K)" ,&dev,i,guest_phys_addr,memory_size,userspace_addr,flags_padding);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_set_features(void *dev, uint64_t features){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_set_features");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K)" ,&dev,features);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_get_device_id(void *dev, uint32_t device_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_get_device_id");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K)" ,&dev,device_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_reset_device(void *dev, uint8_t status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_reset_device");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,B)" ,&dev,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_get_vq_index(void *dev, int idx, int vq_idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_get_vq_index");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&dev,idx,vq_idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_set_vring_ready(void *dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_set_vring_ready");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&dev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_dump_config(void *dev, const char *line){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_dump_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&dev,&line);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_set_config(void *dev, uint32_t offset, uint32_t size, uint32_t flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_set_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K)" ,&dev,offset,size,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_get_config(void *dev, void *config, uint32_t config_len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_get_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,K)" ,&dev,&config,config_len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_dev_start(void *dev, bool started){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_dev_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,p)" ,&dev,started);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_set_log_base(void *dev, uint64_t base, unsigned long long size, int refcnt, int fd, void *log){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_set_log_base");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,i,i,O&)" ,&dev,base,refcnt,fd,&log);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_set_vring_addr(void *dev, unsigned int index, unsigned int flags, uint64_t desc_user_addr, uint64_t used_user_addr, uint64_t avail_user_addr, uint64_t log_guest_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_set_vring_addr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I,I,K,K,K,K)" ,&dev,index,flags,desc_user_addr,used_user_addr,avail_user_addr,log_guest_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_set_vring_num(void *dev, unsigned int index, unsigned int num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_set_vring_num");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I,I)" ,&dev,index,num);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_set_vring_base(void *dev, unsigned int index, unsigned int num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_set_vring_base");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I,I)" ,&dev,index,num);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_get_vring_base(void *dev, unsigned int index, unsigned int num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_get_vring_base");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I,I)" ,&dev,index,num);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_set_vring_kick(void *dev, unsigned int index, int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_set_vring_kick");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I,i)" ,&dev,index,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_set_vring_call(void *dev, unsigned int index, int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_set_vring_call");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I,i)" ,&dev,index,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_get_features(void *dev, uint64_t features){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_get_features");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K)" ,&dev,features);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_set_owner(void *dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_set_owner");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&dev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_vq_get_addr(void *dev, void *vq, uint64_t desc_user_addr, uint64_t avail_user_addr, uint64_t used_user_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_vq_get_addr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,K,K,K)" ,&dev,&vq,desc_user_addr,avail_user_addr,used_user_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_vdpa_get_iova_range(void *dev, uint64_t first, uint64_t last){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_vdpa_get_iova_range");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K)" ,&dev,first,last);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtqueue_alloc_element(void *elem, size_t sz, unsigned in_num, unsigned out_num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtqueue_alloc_element");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,I,I)" ,&elem,sz,in_num,out_num);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtqueue_fill(void *vq, const void *elem, unsigned int len, unsigned int idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtqueue_fill");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,I,I)" ,&vq,&elem,len,idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtqueue_flush(void *vq, unsigned int count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtqueue_flush");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I)" ,&vq,count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtqueue_pop(void *vq, void *elem, unsigned int in_num, unsigned int out_num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtqueue_pop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,I,I)" ,&vq,&elem,in_num,out_num);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_queue_notify(void *vdev, int n, void *vq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_queue_notify");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,O&)" ,&vdev,n,&vq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_notify_irqfd(void *vdev, void *vq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_notify_irqfd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&vdev,&vq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_notify(void *vdev, void *vq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_notify");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&vdev,&vq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_set_status(void *vdev, uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_set_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,B)" ,&vdev,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_rng_guest_not_ready(void *rng){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_rng_guest_not_ready");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&rng);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_rng_cpu_is_stopped(void *rng, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_rng_cpu_is_stopped");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&rng,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_rng_popped(void *rng){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_rng_popped");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&rng);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_rng_pushed(void *rng, size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_rng_pushed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&rng,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_rng_request(void *rng, size_t size, unsigned quota){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_rng_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,I)" ,&rng,size,quota);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_rng_vm_state_change(void *rng, int running, int state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_rng_vm_state_change");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&rng,running,state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_balloon_bad_addr(uint64_t gpa){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_balloon_bad_addr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,gpa);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_balloon_handle_output(const char *name, uint64_t gpa){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_balloon_handle_output");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&name,gpa);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_balloon_get_config(uint32_t num_pages, uint32_t actual){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_balloon_get_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,num_pages,actual);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_balloon_set_config(uint32_t actual, uint32_t oldactual){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_balloon_set_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,actual,oldactual);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_balloon_to_target(uint64_t target, uint32_t num_pages){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_balloon_to_target");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,target,num_pages);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_mmio_read(uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_mmio_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_mmio_write_offset(uint64_t offset, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_mmio_write_offset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_mmio_guest_page(uint64_t size, int shift){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_mmio_guest_page");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,size,shift);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_mmio_queue_write(uint64_t value, int max_size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_mmio_queue_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,value,max_size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_mmio_setting_irq(int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_mmio_setting_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_device_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_device_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_get_features(uint64_t features){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_get_features");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,features);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_device_status(uint8_t status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_device_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_get_config(uint64_t page_size_mask, uint64_t start, uint64_t end, uint32_t domain_start, uint32_t domain_end, uint32_t probe_size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_get_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K,K)" ,page_size_mask,start,end,domain_start,domain_end,probe_size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_attach(uint32_t domain_id, uint32_t ep_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_attach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,domain_id,ep_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_detach(uint32_t domain_id, uint32_t ep_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_detach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,domain_id,ep_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_map(uint32_t domain_id, uint64_t virt_start, uint64_t virt_end, uint64_t phys_start, uint32_t flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_map");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K)" ,domain_id,virt_start,virt_end,phys_start,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_unmap(uint32_t domain_id, uint64_t virt_start, uint64_t virt_end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_unmap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,domain_id,virt_start,virt_end);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_unmap_done(uint32_t domain_id, uint64_t virt_start, uint64_t virt_end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_unmap_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,domain_id,virt_start,virt_end);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_translate(const char *name, uint32_t rid, uint64_t iova, int flag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_translate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,i)" ,&name,rid,iova,flag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_init_iommu_mr(char *iommu_mr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_init_iommu_mr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&iommu_mr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_get_endpoint(uint32_t ep_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_get_endpoint");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ep_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_put_endpoint(uint32_t ep_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_put_endpoint");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ep_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_get_domain(uint32_t domain_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_get_domain");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,domain_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_put_domain(uint32_t domain_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_put_domain");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,domain_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_translate_out(uint64_t virt_addr, uint64_t phys_addr, uint32_t sid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_translate_out");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,virt_addr,phys_addr,sid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_report_fault(uint8_t reason, uint32_t flags, uint32_t endpoint, uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_report_fault");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,K,K)" ,reason,flags,endpoint,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_fill_resv_property(uint32_t devid, uint8_t subtype, uint64_t start, uint64_t end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_fill_resv_property");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B,K,K)" ,devid,subtype,start,end);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_notify_map(const char *name, uint64_t virt_start, uint64_t virt_end, uint64_t phys_start, uint32_t flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_notify_map");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K,K)" ,&name,virt_start,virt_end,phys_start,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_notify_unmap(const char *name, uint64_t virt_start, uint64_t virt_end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_notify_unmap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&name,virt_start,virt_end);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_remap(const char *name, uint64_t virt_start, uint64_t virt_end, uint64_t phys_start){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_remap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K)" ,&name,virt_start,virt_end,phys_start);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_set_page_size_mask(const char *name, uint64_t old, uint64_t new){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_set_page_size_mask");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&name,old,new);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_notify_flag_add(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_notify_flag_add");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_iommu_notify_flag_del(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_iommu_notify_flag_del");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_mem_send_response(uint16_t type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_mem_send_response");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_mem_plug_request(uint64_t addr, uint16_t nb_blocks){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_mem_plug_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,addr,nb_blocks);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_mem_unplug_request(uint64_t addr, uint16_t nb_blocks){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_mem_unplug_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,addr,nb_blocks);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_mem_unplugged_all(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_mem_unplugged_all");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_mem_unplug_all_request(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_mem_unplug_all_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_mem_resized_usable_region(uint64_t old_size, uint64_t new_size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_mem_resized_usable_region");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,old_size,new_size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_mem_state_request(uint64_t addr, uint16_t nb_blocks){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_mem_state_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,addr,nb_blocks);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_mem_state_response(uint16_t state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_mem_state_response");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_pmem_flush_request(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_pmem_flush_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_pmem_response(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_pmem_response");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_pmem_flush_done(int type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_pmem_flush_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

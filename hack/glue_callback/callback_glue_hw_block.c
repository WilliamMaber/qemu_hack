
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_block.h"

void glue_fdc_ioport_read(uint8_t reg, uint8_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"fdc_ioport_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,reg,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_fdc_ioport_write(uint8_t reg, uint8_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"fdc_ioport_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,reg,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_fdctrl_tc_pulse(int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"fdctrl_tc_pulse");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_chip_erase_invalid(const char *name, uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_chip_erase_invalid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&name,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_chip_erase_start(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_chip_erase_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_data_read(const char *name, uint64_t offset, unsigned size, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_data_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,I,K)" ,&name,offset,size,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_data_write(const char *name, uint64_t offset, unsigned size, uint32_t value, uint64_t counter){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_data_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,I,K,K)" ,&name,offset,size,value,counter);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_device_id(const char *name, uint16_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_device_id");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_device_info(const char *name, uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_device_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&name,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_erase_complete(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_erase_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_erase_timeout(const char *name, int count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_erase_timeout");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_io_read(const char *name, uint64_t offset, unsigned int size, uint32_t value, uint8_t cmd, uint8_t wcycle){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_io_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,I,K,B,B)" ,&name,offset,size,value,cmd,wcycle);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_io_write(const char *name, uint64_t offset, unsigned int size, uint32_t value, uint8_t wcycle){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_io_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,I,K,B)" ,&name,offset,size,value,wcycle);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_manufacturer_id(const char *name, uint16_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_manufacturer_id");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_mode_read_array(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_mode_read_array");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_postload_cb(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_postload_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_read_done(const char *name, uint64_t offset, uint64_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_read_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&name,offset,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_read_status(const char *name, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_read_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&name,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_read_unknown_state(const char *name, uint8_t cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_read_unknown_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B)" ,&name,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_reset(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_sector_erase_start(const char *name, int width1, uint64_t start, int width2, uint64_t end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_sector_erase_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,K,i,K)" ,&name,width1,start,width2,end);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_timer_expired(const char *name, uint8_t cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_timer_expired");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B)" ,&name,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_unlock0_failed(const char *name, uint64_t offset, uint8_t cmd, uint16_t addr0){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_unlock0_failed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,B,i)" ,&name,offset,cmd,addr0);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_unlock1_failed(const char *name, uint64_t offset, uint8_t cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_unlock1_failed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,B)" ,&name,offset,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_unsupported_device_configuration(const char *name, uint8_t width, uint8_t max){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_unsupported_device_configuration");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B,B)" ,&name,width,max);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_write(const char *name, const char *str){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&name,&str);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_write_block(const char *name, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_write_block");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&name,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_write_block_erase(const char *name, uint64_t offset, uint64_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_write_block_erase");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&name,offset,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_write_failed(const char *name, uint64_t offset, uint8_t cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_write_failed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,B)" ,&name,offset,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_write_invalid(const char *name, uint8_t cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_write_invalid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B)" ,&name,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_write_invalid_command(const char *name, uint8_t cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_write_invalid_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B)" ,&name,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_write_invalid_state(const char *name, uint8_t cmd, int wc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_write_invalid_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B,i)" ,&name,cmd,wc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_write_start(const char *name, uint8_t cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_write_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B)" ,&name,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pflash_write_unknown(const char *name, uint8_t cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pflash_write_unknown");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B)" ,&name,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_blk_req_complete(void *vdev, void *req, int status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_blk_req_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i)" ,&vdev,&req,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_blk_rw_complete(void *vdev, void *req, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_blk_rw_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i)" ,&vdev,&req,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_blk_handle_write(void *vdev, void *req, uint64_t sector, size_t nsectors){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_blk_handle_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,K,i)" ,&vdev,&req,sector,nsectors);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_blk_handle_read(void *vdev, void *req, uint64_t sector, size_t nsectors){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_blk_handle_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,K,i)" ,&vdev,&req,sector,nsectors);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_blk_submit_multireq(void *vdev, void *mrb, int start, int num_reqs, uint64_t offset, size_t size, bool is_write){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_blk_submit_multireq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,i,K,i,p)" ,&vdev,&mrb,start,num_reqs,offset,size,is_write);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hd_geometry_lchs_guess(void *blk, int cyls, int heads, int secs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hd_geometry_lchs_guess");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,i)" ,&blk,cyls,heads,secs);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hd_geometry_guess(void *blk, uint32_t cyls, uint32_t heads, uint32_t secs, int trans){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hd_geometry_guess");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K,i)" ,&blk,cyls,heads,secs,trans);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_block_realize(const char *type, uint32_t disk, uint32_t partition){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_block_realize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&type,disk,partition);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_block_connect(const char *type, uint32_t disk, uint32_t partition){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_block_connect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&type,disk,partition);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_block_disconnect(const char *type, uint32_t disk, uint32_t partition){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_block_disconnect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&type,disk,partition);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_block_unrealize(const char *type, uint32_t disk, uint32_t partition){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_block_unrealize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&type,disk,partition);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_block_size(const char *type, uint32_t disk, uint32_t partition, int64_t sectors){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_block_size");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,L)" ,&type,disk,partition,sectors);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_disk_realize(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_disk_realize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_disk_unrealize(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_disk_unrealize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_cdrom_realize(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_cdrom_realize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_cdrom_unrealize(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_cdrom_unrealize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_block_blockdev_add(char *str){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_block_blockdev_add");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&str);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_block_blockdev_del(const char *node_name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_block_blockdev_del");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&node_name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_block_device_create(unsigned int number){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_block_device_create");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,number);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xen_block_device_destroy(unsigned int number){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xen_block_device_destroy");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,number);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_m25p80_flash_erase(void *s, int offset, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"m25p80_flash_erase");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,K)" ,&s,offset,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_m25p80_programming_zero_to_one(void *s, uint32_t addr, uint8_t prev, uint8_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"m25p80_programming_zero_to_one");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,B,B)" ,&s,addr,prev,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_m25p80_reset_done(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"m25p80_reset_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_m25p80_command_decoded(void *s, uint32_t cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"m25p80_command_decoded");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K)" ,&s,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_m25p80_complete_collecting(void *s, uint32_t cmd, int n, uint8_t ear, uint32_t cur_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"m25p80_complete_collecting");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,i,B,K)" ,&s,cmd,n,ear,cur_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_m25p80_populated_jedec(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"m25p80_populated_jedec");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_m25p80_chip_erase(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"m25p80_chip_erase");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_m25p80_select(void *s, const char *what){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"m25p80_select");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&s,&what);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_m25p80_page_program(void *s, uint32_t addr, uint8_t tx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"m25p80_page_program");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,B)" ,&s,addr,tx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_m25p80_transfer(void *s, uint8_t state, uint32_t len, uint8_t needed, uint32_t pos, uint32_t cur_addr, uint8_t t){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"m25p80_transfer");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,B,K,B,K,K,B)" ,&s,state,len,needed,pos,cur_addr,t);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_m25p80_read_byte(void *s, uint32_t addr, uint8_t v){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"m25p80_read_byte");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,B)" ,&s,addr,v);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_m25p80_read_data(void *s, uint32_t pos, uint8_t v){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"m25p80_read_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,B)" ,&s,pos,v);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_m25p80_binding(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"m25p80_binding");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_m25p80_binding_no_bdrv(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"m25p80_binding_no_bdrv");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

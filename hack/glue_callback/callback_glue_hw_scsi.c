
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_scsi.h"

void glue_scsi_req_alloc(int target, int lun, int tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_req_alloc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,target,lun,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_req_cancel(int target, int lun, int tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_req_cancel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,target,lun,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_req_data(int target, int lun, int tag, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_req_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,target,lun,tag,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_req_data_canceled(int target, int lun, int tag, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_req_data_canceled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,target,lun,tag,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_req_dequeue(int target, int lun, int tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_req_dequeue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,target,lun,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_req_continue(int target, int lun, int tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_req_continue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,target,lun,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_req_continue_canceled(int target, int lun, int tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_req_continue_canceled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,target,lun,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_req_parsed(int target, int lun, int tag, int cmd, int mode, int xfer){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_req_parsed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i,i,i)" ,target,lun,tag,cmd,mode,xfer);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_req_parsed_lba(int target, int lun, int tag, int cmd, uint64_t lba){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_req_parsed_lba");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i,K)" ,target,lun,tag,cmd,lba);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_req_parse_bad(int target, int lun, int tag, int cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_req_parse_bad");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,target,lun,tag,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_req_build_sense(int target, int lun, int tag, int key, int asc, int ascq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_req_build_sense");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i,i,i)" ,target,lun,tag,key,asc,ascq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_device_set_ua(int target, int lun, int key, int asc, int ascq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_device_set_ua");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i,i)" ,target,lun,key,asc,ascq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_report_luns(int target, int lun, int tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_report_luns");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,target,lun,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_inquiry(int target, int lun, int tag, int cdb1, int cdb2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_inquiry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i,i)" ,target,lun,tag,cdb1,cdb2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_test_unit_ready(int target, int lun, int tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_test_unit_ready");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,target,lun,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_request_sense(int target, int lun, int tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_request_sense");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,target,lun,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mptsas_command_complete(void *dev, uint32_t ctx, uint32_t status, uint32_t resid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mptsas_command_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K)" ,&dev,ctx,status,resid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mptsas_diag_read(void *dev, uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mptsas_diag_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K)" ,&dev,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mptsas_diag_write(void *dev, uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mptsas_diag_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K)" ,&dev,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mptsas_irq_intx(void *dev, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mptsas_irq_intx");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&dev,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mptsas_irq_msi(void *dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mptsas_irq_msi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&dev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mptsas_mmio_read(void *dev, uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mptsas_mmio_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K)" ,&dev,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mptsas_mmio_unhandled_read(void *dev, uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mptsas_mmio_unhandled_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K)" ,&dev,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mptsas_mmio_unhandled_write(void *dev, uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mptsas_mmio_unhandled_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K)" ,&dev,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mptsas_mmio_write(void *dev, uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mptsas_mmio_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K)" ,&dev,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mptsas_process_message(void *dev, int msg, uint32_t ctx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mptsas_process_message");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,K)" ,&dev,msg,ctx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mptsas_process_scsi_io_request(void *dev, int bus, int target, int lun, uint64_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mptsas_process_scsi_io_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,i,K)" ,&dev,bus,target,lun,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mptsas_reset(void *dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mptsas_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&dev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mptsas_scsi_overflow(void *dev, uint32_t ctx, uint64_t req, uint64_t found){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mptsas_scsi_overflow");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K)" ,&dev,ctx,req,found);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mptsas_sgl_overflow(void *dev, uint32_t ctx, uint64_t req, uint64_t found){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mptsas_sgl_overflow");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K)" ,&dev,ctx,req,found);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mptsas_unhandled_cmd(void *dev, uint32_t ctx, uint8_t msg_cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mptsas_unhandled_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,B)" ,&dev,ctx,msg_cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mptsas_unhandled_doorbell_cmd(void *dev, int cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mptsas_unhandled_doorbell_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&dev,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mptsas_config_sas_device(void *dev, int address, int port, int phy_handle, int dev_handle, int page){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mptsas_config_sas_device");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,i,i,i)" ,&dev,address,port,phy_handle,dev_handle,page);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mptsas_config_sas_phy(void *dev, int address, int port, int phy_handle, int dev_handle, int page){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mptsas_config_sas_phy");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,i,i,i)" ,&dev,address,port,phy_handle,dev_handle,page);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_init_firmware(uint64_t pa){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_init_firmware");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,pa);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_init_queue(uint64_t queue_pa, int queue_len, uint32_t head, uint32_t tail, uint32_t flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_init_queue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,K,K,K)" ,queue_pa,queue_len,head,tail,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_initq_map_failed(int frame){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_initq_map_failed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,frame);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_initq_mapped(uint64_t pa){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_initq_mapped");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,pa);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_initq_mismatch(int queue_len, int fw_cmds){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_initq_mismatch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,queue_len,fw_cmds);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_qf_mapped(unsigned int index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_qf_mapped");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_qf_new(unsigned int index, uint64_t frame){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_qf_new");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,K)" ,index,frame);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_qf_busy(unsigned long pa){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_qf_busy");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_qf_enqueue(unsigned int index, unsigned int count, uint64_t context, uint32_t head, uint32_t tail, unsigned int busy){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_qf_enqueue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I,K,K,K,I)" ,index,count,context,head,tail,busy);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_qf_update(uint32_t head, uint32_t tail, unsigned int busy){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_qf_update");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,head,tail,busy);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_qf_map_failed(int cmd, unsigned long frame){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_qf_map_failed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_qf_complete_noirq(uint64_t context){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_qf_complete_noirq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,context);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_qf_complete(uint64_t context, uint32_t head, uint32_t tail, int busy){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_qf_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,i)" ,context,head,tail,busy);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_frame_busy(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_frame_busy");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_unhandled_frame_cmd(int cmd, uint8_t frame_cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_unhandled_frame_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B)" ,cmd,frame_cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_handle_scsi(const char *frame, int bus, int dev, int lun, void *sdev, unsigned long size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_handle_scsi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i,i,O&)" ,&frame,bus,dev,lun,&sdev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_scsi_target_not_present(const char *frame, int bus, int dev, int lun){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_scsi_target_not_present");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i,i)" ,&frame,bus,dev,lun);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_scsi_invalid_cdb_len(const char *frame, int bus, int dev, int lun, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_scsi_invalid_cdb_len");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i,i,i)" ,&frame,bus,dev,lun,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_iov_read_overflow(int cmd, int bytes, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_iov_read_overflow");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,cmd,bytes,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_iov_write_overflow(int cmd, int bytes, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_iov_write_overflow");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,cmd,bytes,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_iov_read_underflow(int cmd, int bytes, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_iov_read_underflow");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,cmd,bytes,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_iov_write_underflow(int cmd, int bytes, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_iov_write_underflow");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,cmd,bytes,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_scsi_req_alloc_failed(const char *frame, int dev, int lun){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_scsi_req_alloc_failed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&frame,dev,lun);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_scsi_read_start(int cmd, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_scsi_read_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cmd,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_scsi_write_start(int cmd, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_scsi_write_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cmd,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_scsi_nodata(int cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_scsi_nodata");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_scsi_complete(int cmd, uint32_t status, int len, int xfer){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_scsi_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,i,i)" ,cmd,status,len,xfer);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_command_complete(int cmd, uint32_t status, uint32_t resid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_command_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,cmd,status,resid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_handle_io(int cmd, const char *frame, int dev, int lun, unsigned long lba, unsigned long count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_handle_io");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,i,i)" ,cmd,&frame,dev,lun);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_io_target_not_present(int cmd, const char *frame, int dev, int lun){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_io_target_not_present");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,i,i)" ,cmd,&frame,dev,lun);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_io_read_start(int cmd, unsigned long lba, unsigned long count, unsigned long len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_io_read_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_io_write_start(int cmd, unsigned long lba, unsigned long count, unsigned long len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_io_write_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_io_complete(int cmd, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_io_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,cmd,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_iovec_sgl_overflow(int cmd, int index, int limit){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_iovec_sgl_overflow");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,cmd,index,limit);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_iovec_sgl_underflow(int cmd, int index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_iovec_sgl_underflow");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cmd,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_iovec_sgl_invalid(int cmd, int index, uint64_t pa, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_iovec_sgl_invalid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,K)" ,cmd,index,pa,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_iovec_overflow(int cmd, int len, int limit){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_iovec_overflow");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,cmd,len,limit);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_iovec_underflow(int cmd, int len, int limit){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_iovec_underflow");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,cmd,len,limit);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_handle_dcmd(int cmd, int opcode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_handle_dcmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cmd,opcode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_finish_dcmd(int cmd, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_finish_dcmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cmd,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_dcmd_req_alloc_failed(int cmd, const char *desc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_dcmd_req_alloc_failed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,cmd,&desc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_dcmd_internal_submit(int cmd, const char *desc, int dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_dcmd_internal_submit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,i)" ,cmd,&desc,dev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_dcmd_internal_finish(int cmd, int opcode, int lun){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_dcmd_internal_finish");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,cmd,opcode,lun);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_dcmd_internal_invalid(int cmd, int opcode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_dcmd_internal_invalid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cmd,opcode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_dcmd_unhandled(int cmd, int opcode, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_dcmd_unhandled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,cmd,opcode,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_dcmd_zero_sge(int cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_dcmd_zero_sge");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_dcmd_invalid_sge(int cmd, int count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_dcmd_invalid_sge");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cmd,count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_dcmd_invalid_xfer_len(int cmd, unsigned long size, unsigned long max){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_dcmd_invalid_xfer_len");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_dcmd_enter(int cmd, const char *dcmd, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_dcmd_enter");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,i)" ,cmd,&dcmd,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_dcmd_dummy(int cmd, unsigned long size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_dcmd_dummy");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_dcmd_set_fw_time(int cmd, unsigned long time){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_dcmd_set_fw_time");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_dcmd_pd_get_list(int cmd, int num, int max, int offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_dcmd_pd_get_list");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,cmd,num,max,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_dcmd_ld_get_list(int cmd, int num, int max){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_dcmd_ld_get_list");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,cmd,num,max);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_dcmd_ld_get_info(int cmd, int ld_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_dcmd_ld_get_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cmd,ld_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_dcmd_ld_list_query(int cmd, int flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_dcmd_ld_list_query");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cmd,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_dcmd_pd_get_info(int cmd, int pd_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_dcmd_pd_get_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cmd,pd_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_dcmd_pd_list_query(int cmd, int flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_dcmd_pd_list_query");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cmd,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_dcmd_reset_ld(int cmd, int target_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_dcmd_reset_ld");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cmd,target_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_dcmd_unsupported(int cmd, unsigned long size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_dcmd_unsupported");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_abort_frame(int cmd, int abort_cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_abort_frame");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cmd,abort_cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_abort_no_cmd(int cmd, uint64_t context){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_abort_no_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,cmd,context);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_abort_invalid_context(int cmd, uint64_t context, int abort_cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_abort_invalid_context");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,i)" ,cmd,context,abort_cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_reset(int fw_state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,fw_state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_init(int sges, int cmds, const char *mode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,b)" ,sges,cmds,&mode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_msix_raise(int vector){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_msix_raise");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,vector);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_msi_raise(int vector){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_msi_raise");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,vector);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_irq_lower(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_irq_lower");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_irq_raise(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_irq_raise");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_intr_enabled(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_intr_enabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_intr_disabled(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_intr_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_msix_enabled(int vector){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_msix_enabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,vector);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_msi_enabled(int vector){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_msi_enabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,vector);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_mmio_readl(const char *reg, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_mmio_readl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&reg,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_mmio_invalid_readl(unsigned long addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_mmio_invalid_readl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_mmio_writel(const char *reg, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_mmio_writel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&reg,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_megasas_mmio_invalid_writel(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"megasas_mmio_invalid_writel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_ring_init_data(uint32_t txr_len_log2, uint32_t rxr_len_log2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_ring_init_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,txr_len_log2,rxr_len_log2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_ring_init_msg(uint32_t len_log2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_ring_init_msg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,len_log2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_ring_flush_cmp(uint64_t filled_cmp_ptr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_ring_flush_cmp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,filled_cmp_ptr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_ring_flush_msg(uint64_t filled_cmp_ptr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_ring_flush_msg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,filled_cmp_ptr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_update_irq_level(bool raise, uint64_t mask, uint64_t status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_update_irq_level");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,K,K)" ,raise,mask,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_update_irq_msi(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_update_irq_msi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_cmp_ring_put(unsigned long addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_cmp_ring_put");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_msg_ring_put(unsigned long addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_msg_ring_put");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_complete_request(uint64_t context, uint64_t len, uint8_t sense_key){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_complete_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,B)" ,context,len,sense_key);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_get_sg_list(int nsg, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_get_sg_list");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,nsg,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_get_next_sg_elem(uint32_t flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_get_next_sg_elem");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_command_complete_not_found(uint32_t tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_command_complete_not_found");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_command_complete_data_run(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_command_complete_data_run");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_command_complete_sense_len(int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_command_complete_sense_len");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_convert_sglist(uint64_t context, unsigned long addr, uint32_t resid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_convert_sglist");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,context,resid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_process_req_descr(uint8_t cmd, uint64_t ctx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_process_req_descr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K)" ,cmd,ctx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_process_req_descr_unknown_device(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_process_req_descr_unknown_device");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_process_req_descr_invalid_dir(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_process_req_descr_invalid_dir");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_process_io(unsigned long addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_process_io");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_on_cmd_noimpl(const char* cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_on_cmd_noimpl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_on_cmd_reset_dev(uint32_t tgt, int lun, void* dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_on_cmd_reset_dev");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,tgt,lun);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_on_cmd_arrived(const char* cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_on_cmd_arrived");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_on_cmd_abort(uint64_t ctx, uint32_t tgt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_on_cmd_abort");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,ctx,tgt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_on_cmd_unknown(uint64_t cmd_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_on_cmd_unknown");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,cmd_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_on_cmd_unknown_data(uint32_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_on_cmd_unknown_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_io_write(const char* cmd, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_io_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_io_write_unknown(unsigned long addr, unsigned sz, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_io_write_unknown");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,K)" ,sz,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_io_read(const char* cmd, uint64_t status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_io_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_io_read_unknown(unsigned long addr, unsigned sz){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_io_read_unknown");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,sz);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_init_msi_fail(int res){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_init_msi_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,res);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_state(const char* state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_tx_rings_ppn(const char* label, uint64_t ppn){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_tx_rings_ppn");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ppn);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pvscsi_tx_rings_num_pages(const char* label, uint32_t num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pvscsi_tx_rings_num_pages");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,num);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_error_fifo_overrun(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_error_fifo_overrun");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_error_unhandled_command(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_error_unhandled_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_error_invalid_write(uint32_t val, uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_error_invalid_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,val,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_raise_irq(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_raise_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_lower_irq(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_lower_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_raise_drq(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_raise_drq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_lower_drq(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_lower_drq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_dma_enable(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_dma_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_dma_disable(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_dma_disable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_pdma_read(int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_pdma_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_pdma_write(int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_pdma_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_get_cmd(uint32_t dmalen, int target){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_get_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,dmalen,target);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_do_command_phase(uint8_t busid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_do_command_phase");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,busid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_do_identify(uint8_t byte){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_do_identify");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,byte);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_handle_satn_stop(uint32_t cmdlen){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_handle_satn_stop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,cmdlen);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_write_response(uint32_t status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_write_response");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_do_dma(uint32_t cmdlen, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_do_dma");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,cmdlen,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_command_complete(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_command_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_command_complete_deferred(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_command_complete_deferred");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_command_complete_unexpected(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_command_complete_unexpected");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_command_complete_fail(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_command_complete_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_transfer_data(uint32_t dma_left, int32_t ti_size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_transfer_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,l)" ,dma_left,ti_size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_handle_ti(uint32_t minlen){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_handle_ti");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,minlen);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_handle_ti_cmd(uint32_t cmdlen){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_handle_ti_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,cmdlen);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_mem_readb(uint32_t saddr, uint8_t reg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_mem_readb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B)" ,saddr,reg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_mem_writeb(uint32_t saddr, uint8_t reg, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_mem_writeb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B,K)" ,saddr,reg,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_mem_writeb_cmd_nop(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_mem_writeb_cmd_nop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_mem_writeb_cmd_flush(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_mem_writeb_cmd_flush");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_mem_writeb_cmd_reset(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_mem_writeb_cmd_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_mem_writeb_cmd_bus_reset(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_mem_writeb_cmd_bus_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_mem_writeb_cmd_iccs(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_mem_writeb_cmd_iccs");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_mem_writeb_cmd_msgacc(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_mem_writeb_cmd_msgacc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_mem_writeb_cmd_pad(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_mem_writeb_cmd_pad");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_mem_writeb_cmd_satn(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_mem_writeb_cmd_satn");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_mem_writeb_cmd_rstatn(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_mem_writeb_cmd_rstatn");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_mem_writeb_cmd_sel(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_mem_writeb_cmd_sel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_mem_writeb_cmd_selatn(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_mem_writeb_cmd_selatn");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_mem_writeb_cmd_selatns(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_mem_writeb_cmd_selatns");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_mem_writeb_cmd_ensel(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_mem_writeb_cmd_ensel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_mem_writeb_cmd_dissel(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_mem_writeb_cmd_dissel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_mem_writeb_cmd_ti(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_mem_writeb_cmd_ti");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_pci_error_invalid_dma_direction(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_pci_error_invalid_dma_direction");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_pci_error_invalid_read(uint32_t reg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_pci_error_invalid_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,reg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_pci_error_invalid_write(uint32_t reg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_pci_error_invalid_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,reg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_pci_error_invalid_write_dma(uint32_t val, uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_pci_error_invalid_write_dma");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,val,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_pci_dma_read(uint32_t saddr, uint32_t reg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_pci_dma_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,saddr,reg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_pci_dma_write(uint32_t saddr, uint32_t reg, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_pci_dma_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,saddr,reg,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_pci_dma_idle(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_pci_dma_idle");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_pci_dma_blast(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_pci_dma_blast");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_pci_dma_abort(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_pci_dma_abort");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_pci_dma_start(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_pci_dma_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_pci_sbac_read(uint32_t reg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_pci_sbac_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,reg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_esp_pci_sbac_write(uint32_t reg, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"esp_pci_sbac_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,reg,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_send_rsp(uint8_t status, int32_t res_in, int32_t res_out){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_send_rsp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,l,l)" ,status,res_in,res_out);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_fetch_desc_no_data(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_fetch_desc_no_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_fetch_desc_direct(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_fetch_desc_direct");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_fetch_desc_indirect(uint32_t qtag, unsigned desc, unsigned local_desc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_fetch_desc_indirect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,I)" ,qtag,desc,local_desc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_fetch_desc_out_of_range(unsigned desc, unsigned desc_offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_fetch_desc_out_of_range");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I)" ,desc,desc_offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_fetch_desc_dma_read_error(int rc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_fetch_desc_dma_read_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,rc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_fetch_desc_indirect_seg_ext(uint32_t qtag, unsigned n, unsigned desc, uint64_t va, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_fetch_desc_indirect_seg_ext");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,I,K,K)" ,qtag,n,desc,va,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_fetch_desc_out_of_desc(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_fetch_desc_out_of_desc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_fetch_desc_out_of_desc_boundary(unsigned offset, unsigned desc, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_fetch_desc_out_of_desc_boundary");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I,K)" ,offset,desc,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_fetch_desc_done(unsigned desc_num, unsigned desc_offset, uint64_t va, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_fetch_desc_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I,K,K)" ,desc_num,desc_offset,va,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_srp_indirect_data(uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_srp_indirect_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_srp_indirect_data_rw(int writing, int rc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_srp_indirect_data_rw");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,writing,rc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_srp_indirect_data_buf(unsigned a, unsigned b, unsigned c, unsigned d){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_srp_indirect_data_buf");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I,I,I)" ,a,b,c,d);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_srp_transfer_data(uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_srp_transfer_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_transfer_data(uint32_t tag, uint32_t len, void *req){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_transfer_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,O&)" ,tag,len,&req);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_command_complete(uint32_t tag, uint32_t status, void *req){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_command_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,O&)" ,tag,status,&req);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_command_complete_sense_data1(uint32_t len, unsigned s0, unsigned s1, unsigned s2, unsigned s3, unsigned s4, unsigned s5, unsigned s6, unsigned s7){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_command_complete_sense_data1");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,I,I,I,I,I,I,I)" ,len,s0,s1,s2,s3,s4,s5,s6,s7);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_command_complete_sense_data2(unsigned s8, unsigned s9, unsigned s10, unsigned s11, unsigned s12, unsigned s13, unsigned s14, unsigned s15){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_command_complete_sense_data2");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I,I,I,I,I,I,I)" ,s8,s9,s10,s11,s12,s13,s14,s15);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_command_complete_status(uint32_t status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_command_complete_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_save_request(uint32_t qtag, unsigned desc, unsigned offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_save_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,I)" ,qtag,desc,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_load_request(uint32_t qtag, unsigned desc, unsigned offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_load_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,I)" ,qtag,desc,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_process_login(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_process_login");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_process_tsk_mgmt(uint8_t func){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_process_tsk_mgmt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,func);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_queue_cmd_no_drive(uint64_t lun){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_queue_cmd_no_drive");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,lun);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_queue_cmd(uint32_t qtag, unsigned cdb, const char *cmd, int lun, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_queue_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,b,i,i)" ,qtag,cdb,&cmd,lun,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_spapr_vscsi_do_crq(unsigned c0, unsigned c1){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"spapr_vscsi_do_crq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I)" ,c0,c1);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_update_irq(int level, uint8_t dstat, uint8_t sist1, uint8_t sist0){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_update_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,B,B)" ,level,dstat,sist1,sist0);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_update_irq_disconnected(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_update_irq_disconnected");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_script_scsi_interrupt(uint8_t stat1, uint8_t stat0, uint8_t sist1, uint8_t sist0){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_script_scsi_interrupt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B,B)" ,stat1,stat0,sist1,sist0);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_script_dma_interrupt(uint8_t stat, uint8_t dstat){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_script_dma_interrupt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,stat,dstat);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_bad_phase_jump(uint32_t dsp){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_bad_phase_jump");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,dsp);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_bad_phase_interrupt(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_bad_phase_interrupt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_bad_selection(uint32_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_bad_selection");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_do_dma_unavailable(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_do_dma_unavailable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_do_dma(uint64_t addr, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_do_dma");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,addr,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_queue_command(uint32_t tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_queue_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_add_msg_byte_error(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_add_msg_byte_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_add_msg_byte(uint8_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_add_msg_byte");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_reselect(int id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_reselect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_queue_req_error(void *p){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_queue_req_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&p);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_queue_req(uint32_t tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_queue_req");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_command_complete(uint32_t status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_command_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_transfer_data(uint32_t tag, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_transfer_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,tag,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_do_command(uint32_t dbc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_do_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,dbc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_do_status(uint32_t dbc, uint8_t status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_do_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B)" ,dbc,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_do_status_error(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_do_status_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_do_msgin(uint32_t dbc, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_do_msgin");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,dbc,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_do_msgout(uint32_t dbc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_do_msgout");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,dbc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_do_msgout_disconnect(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_do_msgout_disconnect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_do_msgout_noop(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_do_msgout_noop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_do_msgout_extended(uint8_t msg, uint8_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_do_msgout_extended");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,msg,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_do_msgout_ignored(const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_do_msgout_ignored");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_do_msgout_simplequeue(uint8_t select_tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_do_msgout_simplequeue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,select_tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_do_msgout_abort(uint32_t tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_do_msgout_abort");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_do_msgout_clearqueue(uint32_t tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_do_msgout_clearqueue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_do_msgout_busdevicereset(uint32_t tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_do_msgout_busdevicereset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_do_msgout_select(int id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_do_msgout_select");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_memcpy(uint32_t dest, uint32_t src, int count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_memcpy");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,dest,src,count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_wait_reselect(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_wait_reselect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script(uint32_t dsp, uint32_t insn, uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,dsp,insn,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_blockmove_delayed(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_blockmove_delayed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_blockmove_badphase(const char *phase, const char *expected){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_blockmove_badphase");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&phase,&expected);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_io_alreadyreselected(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_io_alreadyreselected");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_io_selected(uint8_t id, const char *atn){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_io_selected");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,b)" ,id,&atn);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_io_disconnect(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_io_disconnect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_io_set(const char *atn, const char *ack, const char *tm, const char *cc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_io_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,b,b)" ,&atn,&ack,&tm,&cc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_io_clear(const char *atn, const char *ack, const char *tm, const char *cc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_io_clear");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,b,b)" ,&atn,&ack,&tm,&cc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_io_opcode(const char *opcode, int reg, const char *opname, uint8_t data8, uint32_t sfbr, const char *ssfbr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_io_opcode");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,b,B,K,b)" ,&opcode,reg,&opname,data8,sfbr,&ssfbr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_tc_nop(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_tc_nop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_tc_delayedselect_timeout(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_tc_delayedselect_timeout");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_tc_compc(int result){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_tc_compc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,result);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_tc_compp(const char *phase, char op, const char *insn_phase){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_tc_compp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,b)" ,&phase,op,&insn_phase);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_tc_compd(uint32_t sfbr, uint8_t mask, char op, int result){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_tc_compd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B,b,i)" ,sfbr,mask,op,result);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_tc_jump(uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_tc_jump");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_tc_call(uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_tc_call");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_tc_return(uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_tc_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_tc_interrupt(uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_tc_interrupt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_tc_illegal(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_tc_illegal");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_tc_cc_failed(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_tc_cc_failed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_mm_load(int reg, int n, uint32_t addr, int data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_mm_load");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,i)" ,reg,n,addr,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_mm_store(int reg, int n, uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_mm_store");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K)" ,reg,n,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_execute_script_stop(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_execute_script_stop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_awoken(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_awoken");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_reg_read(const char *name, int offset, uint8_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_reg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,B)" ,&name,offset,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lsi_reg_write(const char *name, int offset, uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lsi_reg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,B)" ,&name,offset,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_scsi_cmd_req(int lun, uint32_t tag, uint8_t cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_scsi_cmd_req");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,B)" ,lun,tag,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_scsi_cmd_resp(int lun, uint32_t tag, int response, uint8_t status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_scsi_cmd_resp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,i,B)" ,lun,tag,response,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_scsi_tmf_req(int lun, uint32_t tag, int subtype){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_scsi_tmf_req");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,i)" ,lun,tag,subtype);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_scsi_tmf_resp(int lun, uint32_t tag, int response){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_scsi_tmf_resp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,i)" ,lun,tag,response);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_scsi_an_req(int lun, uint32_t event_requested){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_scsi_an_req");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,lun,event_requested);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_scsi_an_resp(int lun, int response){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_scsi_an_resp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,lun,response);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_scsi_event(int lun, int event, int reason){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_scsi_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,lun,event,reason);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_check_condition(uint32_t tag, uint8_t key, uint8_t asc, uint8_t ascq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_check_condition");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B,B,B)" ,tag,key,asc,ascq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_read_complete(uint32_t tag, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_read_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,tag,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_read_data_count(uint32_t sector_count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_read_data_count");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,sector_count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_read_data_invalid(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_read_data_invalid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_write_complete_noio(uint32_t tag, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_write_complete_noio");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,tag,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_write_data_invalid(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_write_data_invalid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_emulate_vpd_page_00(size_t xfer){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_emulate_vpd_page_00");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,xfer);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_emulate_vpd_page_80_not_supported(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_emulate_vpd_page_80_not_supported");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_emulate_vpd_page_80(size_t xfer){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_emulate_vpd_page_80");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,xfer);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_emulate_vpd_page_83(size_t xfer){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_emulate_vpd_page_83");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,xfer);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_emulate_vpd_page_b0_not_supported(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_emulate_vpd_page_b0_not_supported");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_emulate_mode_sense(int cmd, int page, size_t xfer, int control){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_emulate_mode_sense");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,cmd,page,xfer,control);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_emulate_read_toc(int start_track, int format, int msf){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_emulate_read_toc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,start_track,format,msf);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_emulate_read_data(int buflen){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_emulate_read_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,buflen);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_emulate_write_data(int buflen){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_emulate_write_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,buflen);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_emulate_command_SAI_16(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_emulate_command_SAI_16");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_emulate_command_SAI_unsupported(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_emulate_command_SAI_unsupported");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_emulate_command_SEEK_10(uint64_t lba){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_emulate_command_SEEK_10");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,lba);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_emulate_command_MODE_SELECT(size_t xfer){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_emulate_command_MODE_SELECT");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,xfer);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_emulate_command_MODE_SELECT_10(size_t xfer){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_emulate_command_MODE_SELECT_10");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,xfer);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_emulate_command_UNMAP(size_t xfer){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_emulate_command_UNMAP");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,xfer);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_emulate_command_VERIFY(int bytchk){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_emulate_command_VERIFY");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,bytchk);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_emulate_command_WRITE_SAME(int cmd, size_t xfer){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_emulate_command_WRITE_SAME");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cmd,xfer);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_emulate_command_UNKNOWN(int cmd, const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_emulate_command_UNKNOWN");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,cmd,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_dma_command_READ(uint64_t lba, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_dma_command_READ");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,lba,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_dma_command_WRITE(const char *cmd, uint64_t lba, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_dma_command_WRITE");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,i)" ,&cmd,lba,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_new_request(uint32_t lun, uint32_t tag, const char *line){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_new_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,b)" ,lun,tag,&line);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_disk_aio_sgio_command(uint32_t tag, uint8_t cmd, uint64_t lba, int len, uint32_t timeout){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_disk_aio_sgio_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B,K,i,K)" ,tag,cmd,lba,len,timeout);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_generic_command_complete_noio(void *req, uint32_t tag, int statuc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_generic_command_complete_noio");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,i)" ,&req,tag,statuc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_generic_read_complete(uint32_t tag, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_generic_read_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,tag,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_generic_read_data(uint32_t tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_generic_read_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_generic_write_complete(int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_generic_write_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_write_complete(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_write_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_generic_write_complete_blocksize(int blocksize){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_generic_write_complete_blocksize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,blocksize);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_generic_write_data(uint32_t tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_generic_write_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_generic_send_command(const char *line){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_generic_send_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&line);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_generic_realize_type(int type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_generic_realize_type");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_generic_realize_blocksize(int blocksize){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_generic_realize_blocksize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,blocksize);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_generic_aio_sgio_command(uint32_t tag, uint8_t cmd, uint32_t timeout){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_generic_aio_sgio_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B,K)" ,tag,cmd,timeout);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_generic_ioctl_sgio_command(uint8_t cmd, uint32_t timeout){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_generic_ioctl_sgio_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K)" ,cmd,timeout);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_scsi_generic_ioctl_sgio_done(uint8_t cmd, int ret, uint8_t status, uint8_t host_status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"scsi_generic_ioctl_sgio_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,i,B,B)" ,cmd,ret,status,host_status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

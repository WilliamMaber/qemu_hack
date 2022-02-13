
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_ide.h"

void glue_ide_ioport_read(uint32_t addr, const char *reg, uint32_t val, void *bus, void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_ioport_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K,O&,O&)" ,addr,&reg,val,&bus,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_ioport_write(uint32_t addr, const char *reg, uint32_t val, void *bus, void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_ioport_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K,O&,O&)" ,addr,&reg,val,&bus,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_status_read(uint32_t addr, uint32_t val, void *bus, void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_status_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,O&,O&)" ,addr,val,&bus,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_ctrl_write(uint32_t addr, uint32_t val, void *bus){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_ctrl_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,O&)" ,addr,val,&bus);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_data_readw(uint32_t addr, uint32_t val, void *bus, void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_data_readw");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,O&,O&)" ,addr,val,&bus,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_data_writew(uint32_t addr, uint32_t val, void *bus, void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_data_writew");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,O&,O&)" ,addr,val,&bus,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_data_readl(uint32_t addr, uint32_t val, void *bus, void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_data_readl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,O&,O&)" ,addr,val,&bus,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_data_writel(uint32_t addr, uint32_t val, void *bus, void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_data_writel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,O&,O&)" ,addr,val,&bus,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_exec_cmd(void *bus, void *state, uint32_t cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_exec_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,K)" ,&bus,&state,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_cancel_dma_sync_buffered(void *fn, void *req){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_cancel_dma_sync_buffered");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&fn,&req);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_cancel_dma_sync_remaining(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_cancel_dma_sync_remaining");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_sector_read(int64_t sector_num, int nsectors){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_sector_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(L,i)" ,sector_num,nsectors);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_sector_write(int64_t sector_num, int nsectors){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_sector_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(L,i)" ,sector_num,nsectors);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_reset(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_bus_reset_aio(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_bus_reset_aio");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_dma_cb(void *s, int64_t sector_num, int n, const char *dma){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_dma_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,i,b)" ,&s,sector_num,n,&dma);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bmdma_read_cmd646(uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bmdma_read_cmd646");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bmdma_write_cmd646(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bmdma_write_cmd646");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bmdma_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bmdma_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bmdma_cmd_writeb(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bmdma_cmd_writeb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bmdma_addr_read(uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bmdma_addr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bmdma_addr_write(uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bmdma_addr_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bmdma_read(uint64_t addr, uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bmdma_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bmdma_write(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bmdma_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sii3112_read(int size, uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sii3112_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,size,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sii3112_write(int size, uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sii3112_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,size,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sii3112_set_irq(int channel, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sii3112_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,channel,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bmdma_read_via(uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bmdma_read_via");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bmdma_write_via(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bmdma_write_via");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cd_read_sector_sync(int lba){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cd_read_sector_sync");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,lba);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cd_read_sector_cb(int lba, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cd_read_sector_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,lba,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cd_read_sector(int lba){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cd_read_sector");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,lba);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_atapi_cmd_error(void *s, int sense_key, int asc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_atapi_cmd_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&s,sense_key,asc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_atapi_cmd_reply_end(void *s, int tx_size, int elem_tx_size, int32_t index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_atapi_cmd_reply_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,l)" ,&s,tx_size,elem_tx_size,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_atapi_cmd_reply_end_eot(void *s, int status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_atapi_cmd_reply_end_eot");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&s,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_atapi_cmd_reply_end_bcl(void *s, int bcl){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_atapi_cmd_reply_end_bcl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&s,bcl);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_atapi_cmd_reply_end_new(void *s, int status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_atapi_cmd_reply_end_new");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&s,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_atapi_cmd_check_status(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_atapi_cmd_check_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_atapi_cmd_read(void *s, const char *method, int lba, int nb_sectors){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_atapi_cmd_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,i,i)" ,&s,&method,lba,nb_sectors);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_atapi_cmd(void *s, uint8_t cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_atapi_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,B)" ,&s,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_atapi_cmd_read_dma_cb_aio(void *s, int lba, int n){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_atapi_cmd_read_dma_cb_aio");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&s,lba,n);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ide_atapi_cmd_packet(void *s, uint16_t limit, const char *packet){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ide_atapi_cmd_packet");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,b)" ,&s,limit,&packet);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_port_read(void *s, int port, const char *reg, int offset, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_port_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,b,i,K)" ,&s,port,&reg,offset,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_port_read_default(void *s, int port, const char *reg, int offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_port_read_default");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,b,i)" ,&s,port,&reg,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_irq_raise(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_irq_raise");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_irq_lower(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_irq_lower");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_check_irq(void *s, uint32_t old, uint32_t new){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_check_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K)" ,&s,old,new);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_trigger_irq(void *s, int port, const char *name, uint32_t val, uint32_t old, uint32_t new, uint32_t effective){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_trigger_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,b,K,K,K,K)" ,&s,port,&name,val,old,new,effective);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_port_write(void *s, int port, const char *reg, int offset, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_port_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,b,i,K)" ,&s,port,&reg,offset,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_port_write_unimpl(void *s, int port, const char *reg, int offset, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_port_write_unimpl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,b,i,K)" ,&s,port,&reg,offset,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_mem_read_32(void *s, uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_mem_read_32");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K)" ,&s,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_mem_read_32_default(void *s, uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_mem_read_32_default");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K)" ,&s,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_mem_read_32_host(void *s, const char *reg, uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_mem_read_32_host");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,K,K)" ,&s,&reg,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_mem_read_32_host_default(void *s, const char *reg, uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_mem_read_32_host_default");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,K)" ,&s,&reg,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_mem_read(void *s, unsigned size, uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_mem_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I,K,K)" ,&s,size,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_mem_write(void *s, unsigned size, uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_mem_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I,K,K)" ,&s,size,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_mem_write_host_unimpl(void *s, unsigned size, const char *reg, uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_mem_write_host_unimpl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I,b,K)" ,&s,size,&reg,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_mem_write_host(void *s, unsigned size, const char *reg, uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_mem_write_host");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I,b,K,K)" ,&s,size,&reg,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_mem_write_unimpl(void *s, unsigned size, uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_mem_write_unimpl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I,K,K)" ,&s,size,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_set_signature(void *s, int port, uint8_t nsector, uint8_t sector, uint8_t lcyl, uint8_t hcyl, uint32_t sig){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_set_signature");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,B,B,B,B,K)" ,&s,port,nsector,sector,lcyl,hcyl,sig);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_reset_port(void *s, int port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_reset_port");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&s,port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_unmap_fis_address_null(void *s, int port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_unmap_fis_address_null");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&s,port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_unmap_clb_address_null(void *s, int port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_unmap_clb_address_null");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&s,port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_populate_sglist(void *s, int port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_populate_sglist");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&s,port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_populate_sglist_no_prdtl(void *s, int port, uint16_t opts){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_populate_sglist_no_prdtl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&s,port,opts);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_populate_sglist_no_map(void *s, int port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_populate_sglist_no_map");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&s,port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_populate_sglist_short_map(void *s, int port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_populate_sglist_short_map");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&s,port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_populate_sglist_bad_offset(void *s, int port, int off_idx, int64_t off_pos){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_populate_sglist_bad_offset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,L)" ,&s,port,off_idx,off_pos);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ncq_finish(void *s, int port, uint8_t tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ncq_finish");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,B)" ,&s,port,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_execute_ncq_command_read(void *s, int port, uint8_t tag, int count, int64_t lba){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"execute_ncq_command_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,B,i,L)" ,&s,port,tag,count,lba);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_execute_ncq_command_unsup(void *s, int port, uint8_t tag, uint8_t cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"execute_ncq_command_unsup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,B,B)" ,&s,port,tag,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_process_ncq_command_mismatch(void *s, int port, uint8_t tag, uint8_t slot){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"process_ncq_command_mismatch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,B,B)" ,&s,port,tag,slot);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_process_ncq_command_aux(void *s, int port, uint8_t tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"process_ncq_command_aux");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,B)" ,&s,port,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_process_ncq_command_prioicc(void *s, int port, uint8_t tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"process_ncq_command_prioicc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,B)" ,&s,port,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_process_ncq_command_fua(void *s, int port, uint8_t tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"process_ncq_command_fua");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,B)" ,&s,port,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_process_ncq_command_rarc(void *s, int port, uint8_t tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"process_ncq_command_rarc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,B)" ,&s,port,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_process_ncq_command_large(void *s, int port, uint8_t tag, size_t prdtl, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"process_ncq_command_large");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,B,i,i)" ,&s,port,tag,prdtl,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_process_ncq_command(void *s, int port, uint8_t tag, uint8_t cmd, uint64_t lba, uint64_t end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"process_ncq_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,B,B,K,K)" ,&s,port,tag,cmd,lba,end);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_handle_reg_h2d_fis_pmp(void *s, int port, char b0, char b1, char b2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"handle_reg_h2d_fis_pmp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,b,b,b)" ,&s,port,b0,b1,b2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_handle_reg_h2d_fis_res(void *s, int port, char b0, char b1, char b2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"handle_reg_h2d_fis_res");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,b,b,b)" ,&s,port,b0,b1,b2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_handle_cmd_busy(void *s, int port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"handle_cmd_busy");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&s,port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_handle_cmd_nolist(void *s, int port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"handle_cmd_nolist");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&s,port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_handle_cmd_badport(void *s, int port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"handle_cmd_badport");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&s,port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_handle_cmd_badfis(void *s, int port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"handle_cmd_badfis");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&s,port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_handle_cmd_badmap(void *s, int port, uint64_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"handle_cmd_badmap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,K)" ,&s,port,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_handle_cmd_unhandled_fis(void *s, int port, uint8_t b0, uint8_t b1, uint8_t b2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"handle_cmd_unhandled_fis");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,B,B,B)" ,&s,port,b0,b1,b2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_pio_transfer(void *s, int port, const char *rw, uint32_t size, const char *tgt, const char *sgl){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_pio_transfer");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,b,K,b,b)" ,&s,port,&rw,size,&tgt,&sgl);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_start_dma(void *s, int port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_start_dma");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&s,port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_dma_prepare_buf(void *s, int port, int32_t io_buffer_size, int32_t limit){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_dma_prepare_buf");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,l,l)" ,&s,port,io_buffer_size,limit);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_dma_prepare_buf_fail(void *s, int port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_dma_prepare_buf_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&s,port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_dma_rw_buf(void *s, int port, int l){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_dma_rw_buf");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&s,port,l);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_cmd_done(void *s, int port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_cmd_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&s,port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ahci_reset(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ahci_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_handle_reg_h2d_fis_dump(void *s, int port, const char *fis){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"handle_reg_h2d_fis_dump");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,b)" ,&s,port,&fis);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_handle_cmd_fis_dump(void *s, int port, const char *fis){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"handle_cmd_fis_dump");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,b)" ,&s,port,&fis);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_ahci_mem_read(void *s, void *a, uint64_t addr, uint64_t val, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_ahci_mem_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,K,K,I)" ,&s,&a,addr,val,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_ahci_mem_write(void *s, void *a, uint64_t addr, uint64_t val, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_ahci_mem_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,K,K,I)" ,&s,&a,addr,val,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

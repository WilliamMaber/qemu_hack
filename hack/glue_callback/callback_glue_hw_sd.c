
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_sd.h"

void glue_allwinner_sdhost_set_inserted(bool inserted){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_sdhost_set_inserted");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,inserted);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_sdhost_process_desc(uint64_t desc_addr, uint32_t desc_size, bool is_write, uint32_t max_bytes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_sdhost_process_desc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,p,K)" ,desc_addr,desc_size,is_write,max_bytes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_sdhost_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_sdhost_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_sdhost_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_sdhost_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_sdhost_update_irq(uint32_t irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_sdhost_update_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bcm2835_sdhost_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bcm2835_sdhost_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bcm2835_sdhost_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bcm2835_sdhost_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bcm2835_sdhost_edm_change(const char *why, uint32_t edm){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bcm2835_sdhost_edm_change");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&why,edm);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bcm2835_sdhost_update_irq(uint32_t irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bcm2835_sdhost_update_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdbus_command(const char *bus_name, uint8_t cmd, uint32_t arg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdbus_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B,K)" ,&bus_name,cmd,arg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdbus_read(const char *bus_name, uint8_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdbus_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B)" ,&bus_name,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdbus_write(const char *bus_name, uint8_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdbus_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B)" ,&bus_name,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdbus_set_voltage(const char *bus_name, uint16_t millivolts){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdbus_set_voltage");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&bus_name,millivolts);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdbus_get_dat_lines(const char *bus_name, uint8_t dat_lines){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdbus_get_dat_lines");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B)" ,&bus_name,dat_lines);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdbus_get_cmd_line(const char *bus_name, bool cmd_line){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdbus_get_cmd_line");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,p)" ,&bus_name,cmd_line);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdhci_set_inserted(const char *level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdhci_set_inserted");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdhci_send_command(uint8_t cmd, uint32_t arg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdhci_send_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K)" ,cmd,arg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdhci_error(const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdhci_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdhci_response4(uint32_t r0){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdhci_response4");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,r0);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdhci_response16(uint32_t r3, uint32_t r2, uint32_t r1, uint32_t r0){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdhci_response16");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,r3,r2,r1,r0);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdhci_end_transfer(uint8_t cmd, uint32_t arg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdhci_end_transfer");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K)" ,cmd,arg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdhci_adma(const char *desc, uint32_t sysad){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdhci_adma");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&desc,sysad);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdhci_adma_loop(uint64_t addr, uint16_t length, uint8_t attr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdhci_adma_loop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,B)" ,addr,length,attr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdhci_adma_transfer_completed(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdhci_adma_transfer_completed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdhci_access(const char *access, unsigned int size, uint64_t offset, const char *dir, uint64_t val, uint64_t val2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdhci_access");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,I,K,b,K,K)" ,&access,size,offset,&dir,val,val2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdhci_read_dataport(uint16_t data_count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdhci_read_dataport");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,data_count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdhci_write_dataport(uint16_t data_count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdhci_write_dataport");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,data_count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdhci_capareg(const char *desc, uint16_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdhci_capareg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&desc,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdcard_normal_command(const char *proto, const char *cmd_desc, uint8_t cmd, uint32_t arg, const char *state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdcard_normal_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,B,K,b)" ,&proto,&cmd_desc,cmd,arg,&state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdcard_app_command(const char *proto, const char *acmd_desc, uint8_t acmd, uint32_t arg, const char *state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdcard_app_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,B,K,b)" ,&proto,&acmd_desc,acmd,arg,&state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdcard_response(const char *rspdesc, int rsplen){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdcard_response");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&rspdesc,rsplen);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdcard_powerup(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdcard_powerup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdcard_inquiry_cmd41(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdcard_inquiry_cmd41");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdcard_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdcard_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdcard_set_blocklen(uint16_t length){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdcard_set_blocklen");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,length);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdcard_inserted(bool readonly){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdcard_inserted");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,readonly);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdcard_ejected(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdcard_ejected");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdcard_erase(uint32_t first, uint32_t last){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdcard_erase");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,first,last);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdcard_lock(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdcard_lock");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdcard_unlock(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdcard_unlock");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdcard_read_block(uint64_t addr, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdcard_read_block");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdcard_write_block(uint64_t addr, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdcard_write_block");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdcard_write_data(const char *proto, const char *cmd_desc, uint8_t cmd, uint8_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdcard_write_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,B,B)" ,&proto,&cmd_desc,cmd,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdcard_read_data(const char *proto, const char *cmd_desc, uint8_t cmd, uint32_t length){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdcard_read_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,B,K)" ,&proto,&cmd_desc,cmd,length);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdcard_set_voltage(uint16_t millivolts){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdcard_set_voltage");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,millivolts);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pxa2xx_mmci_read(uint8_t size, uint32_t addr, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pxa2xx_mmci_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,K)" ,size,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pxa2xx_mmci_write(uint8_t size, uint32_t addr, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pxa2xx_mmci_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,K)" ,size,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl181_command_send(uint8_t cmd, uint32_t arg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl181_command_send");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K)" ,cmd,arg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl181_command_sent(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl181_command_sent");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl181_command_response_pending(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl181_command_response_pending");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl181_command_timeout(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl181_command_timeout");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl181_fifo_push(uint32_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl181_fifo_push");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl181_fifo_pop(uint32_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl181_fifo_pop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl181_fifo_transfer_complete(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl181_fifo_transfer_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl181_data_engine_idle(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl181_data_engine_idle");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_sdhci_read(uint64_t addr, uint32_t size, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_sdhci_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,size,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_sdhci_write(uint64_t addr, uint32_t size, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_sdhci_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,size,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

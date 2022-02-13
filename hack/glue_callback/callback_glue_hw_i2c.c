
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_i2c.h"

void glue_i2c_event(const char *event, uint8_t address){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"i2c_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B)" ,&event,address);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_i2c_send(uint8_t address, uint8_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"i2c_send");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,address,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_i2c_recv(uint8_t address, uint8_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"i2c_recv");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,address,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_i2c_bus_cmd(uint32_t cmd, const char *cmd_flags, uint32_t count, uint32_t intr_status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_i2c_bus_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K,K)" ,cmd,&cmd_flags,count,intr_status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_i2c_bus_raise_interrupt(uint32_t intr_status, const char *str1, const char *str2, const char *str3, const char *str4, const char *str5){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_i2c_bus_raise_interrupt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,b,b,b,b)" ,intr_status,&str1,&str2,&str3,&str4,&str5);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_i2c_bus_read(uint32_t busid, uint64_t offset, unsigned size, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_i2c_bus_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I,K)" ,busid,offset,size,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_i2c_bus_write(uint32_t busid, uint64_t offset, unsigned size, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_i2c_bus_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I,K)" ,busid,offset,size,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_i2c_bus_send(const char *mode, int i, int count, uint8_t byte){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_i2c_bus_send");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i,B)" ,&mode,i,count,byte);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_i2c_bus_recv(const char *mode, int i, int count, uint8_t byte){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_i2c_bus_recv");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i,B)" ,&mode,i,count,byte);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_smbus_read(const char *id, uint64_t offset, uint64_t value, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_smbus_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,I)" ,&id,offset,value,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_smbus_write(const char *id, uint64_t offset, uint64_t value, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_smbus_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,I)" ,&id,offset,value,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_smbus_start(const char *id, int success){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_smbus_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&id,success);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_smbus_send_address(const char *id, uint8_t addr, int recv, int success){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_smbus_send_address");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B,i,i)" ,&id,addr,recv,success);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_smbus_send_byte(const char *id, uint8_t value, int success){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_smbus_send_byte");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B,i)" ,&id,value,success);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_smbus_recv_byte(const char *id, uint8_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_smbus_recv_byte");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B)" ,&id,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_smbus_stop(const char *id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_smbus_stop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_smbus_nack(const char *id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_smbus_nack");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_smbus_recv_fifo(const char *id, uint8_t received, uint8_t expected){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_smbus_recv_fifo");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B,B)" ,&id,received,expected);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pca954x_write_bytes(uint8_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pca954x_write_bytes");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pca954x_read_data(uint8_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pca954x_read_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

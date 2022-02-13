
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_ssi.h"

void glue_aspeed_smc_flash_set_segment(int cs, uint64_t reg, uint64_t start, uint64_t end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_smc_flash_set_segment");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K)" ,cs,reg,start,end);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_smc_flash_read(int cs, uint64_t addr,  uint32_t size, uint64_t data, int mode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_smc_flash_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K,i)" ,cs,addr,size,data,mode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_smc_do_snoop(int cs, int index, int dummies, int data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_smc_do_snoop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,cs,index,dummies,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_smc_flash_write(int cs, uint64_t addr,  uint32_t size, uint64_t data, int mode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_smc_flash_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K,i)" ,cs,addr,size,data,mode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_smc_read(uint64_t addr,  uint32_t size, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_smc_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,size,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_smc_dma_checksum(uint32_t addr, uint32_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_smc_dma_checksum");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_smc_dma_rw(const char *dir, uint32_t flash_addr, uint32_t dram_addr, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_smc_dma_rw");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K)" ,&dir,flash_addr,dram_addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_smc_write(uint64_t addr,  uint32_t size, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_smc_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,size,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_smc_flash_select(int cs, const char *prefix){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_smc_flash_select");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,cs,&prefix);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_fiu_enter_reset(const char *id, int reset_type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_fiu_enter_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&id,reset_type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_fiu_hold_reset(const char *id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_fiu_hold_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_fiu_select(const char *id, int cs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_fiu_select");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&id,cs);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_fiu_deselect(const char *id, int cs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_fiu_deselect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&id,cs);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_fiu_ctrl_read(const char *id, uint64_t addr, uint32_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_fiu_ctrl_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&id,addr,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_fiu_ctrl_write(const char *id, uint64_t addr, uint32_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_fiu_ctrl_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&id,addr,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_fiu_flash_read(const char *id, int cs, uint64_t addr, unsigned int size, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_fiu_flash_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,K,I,K)" ,&id,cs,addr,size,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_fiu_flash_write(const char *id, unsigned cs, uint64_t addr, unsigned int size, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_fiu_flash_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,I,K,I,K)" ,&id,cs,addr,size,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

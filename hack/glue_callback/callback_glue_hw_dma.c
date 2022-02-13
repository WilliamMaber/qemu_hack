
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_dma.h"

void glue_jazzio_read(uint64_t addr, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"jazzio_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_jazzio_write(uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"jazzio_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rc4030_read(uint64_t addr, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rc4030_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rc4030_write(uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rc4030_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ledma_memory_read(uint64_t addr, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ledma_memory_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,addr,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ledma_memory_write(uint64_t addr, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ledma_memory_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,addr,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc32_dma_set_irq_raise(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc32_dma_set_irq_raise");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc32_dma_set_irq_lower(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc32_dma_set_irq_lower");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_espdma_memory_read(uint32_t addr, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"espdma_memory_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,addr,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_espdma_memory_write(uint32_t addr, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"espdma_memory_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,addr,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc32_dma_mem_readl(uint64_t addr, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc32_dma_mem_readl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc32_dma_mem_writel(uint64_t addr, uint32_t old, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc32_dma_mem_writel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,old,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc32_dma_enable_raise(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc32_dma_enable_raise");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sparc32_dma_enable_lower(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sparc32_dma_enable_lower");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_i8257_unregistered_dma(int nchan, int dma_pos, int dma_len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"i8257_unregistered_dma");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,nchan,dma_pos,dma_len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_fault(void *ptr, uint32_t flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_fault");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K)" ,&ptr,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_fault_abort(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_fault_abort");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_dmaend(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_dmaend");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_dmago(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_dmago");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_dmald(uint8_t chan, uint32_t addr, uint32_t size, uint32_t num, char ch){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_dmald");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,K,K,b)" ,chan,addr,size,num,ch);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_dmakill(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_dmakill");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_dmalpend(uint8_t nf, uint8_t bs, uint8_t lc, uint8_t ch, uint8_t flag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_dmalpend");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B,B,B)" ,nf,bs,lc,ch,flag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_dmalpiter(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_dmalpiter");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_dmalpfallthrough(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_dmalpfallthrough");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_dmasev_evirq(uint8_t ev_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_dmasev_evirq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,ev_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_dmasev_event(uint8_t ev_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_dmasev_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,ev_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_dmast(uint8_t chan, uint32_t addr, uint32_t sz, uint32_t num, char ch){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_dmast");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,K,K,b)" ,chan,addr,sz,num,ch);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_dmawfe(uint8_t ev_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_dmawfe");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,ev_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_chan_exec_undef(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_chan_exec_undef");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_exec_cycle(uint32_t addr, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_exec_cycle");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_hexdump(uint32_t offset, char *str){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_hexdump");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b)" ,offset,&str);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_exec(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_exec");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_debug_exec(uint8_t ch){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_debug_exec");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,ch);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_debug_exec_stall(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_debug_exec_stall");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_iomem_write(uint32_t offset, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_iomem_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_iomem_write_clr(int i){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_iomem_write_clr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,i);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl330_iomem_read(uint32_t addr, uint32_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl330_iomem_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

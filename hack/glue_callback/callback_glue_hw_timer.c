
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_timer.h"

void glue_slavio_timer_get_out(uint64_t limit, uint32_t counthigh, uint32_t count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_timer_get_out");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,limit,counthigh,count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_timer_irq(uint32_t counthigh, uint32_t count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_timer_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,counthigh,count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_timer_mem_readl_invalid(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_timer_mem_readl_invalid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_timer_mem_readl(uint64_t addr, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_timer_mem_readl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_timer_mem_writel(uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_timer_mem_writel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_timer_mem_writel_limit(unsigned int timer_index, uint64_t count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_timer_mem_writel_limit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,K)" ,timer_index,count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_timer_mem_writel_counter_invalid(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_timer_mem_writel_counter_invalid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_timer_mem_writel_status_start(unsigned int timer_index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_timer_mem_writel_status_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,timer_index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_timer_mem_writel_status_stop(unsigned int timer_index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_timer_mem_writel_status_stop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,timer_index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_timer_mem_writel_mode_user(unsigned int timer_index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_timer_mem_writel_mode_user");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,timer_index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_timer_mem_writel_mode_counter(unsigned int timer_index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_timer_mem_writel_mode_counter");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,timer_index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_timer_mem_writel_mode_invalid(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_timer_mem_writel_mode_invalid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_timer_mem_writel_invalid(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_timer_mem_writel_invalid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_grlib_gptimer_enable(int id, uint32_t count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"grlib_gptimer_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,id,count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_grlib_gptimer_disabled(int id, uint32_t config){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"grlib_gptimer_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,id,config);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_grlib_gptimer_restart(int id, uint32_t reload){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"grlib_gptimer_restart");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,id,reload);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_grlib_gptimer_set_scaler(uint32_t scaler, uint32_t freq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"grlib_gptimer_set_scaler");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,scaler,freq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_grlib_gptimer_hit(int id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"grlib_gptimer_hit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_grlib_gptimer_readl(int id, uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"grlib_gptimer_readl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,id,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_grlib_gptimer_writel(int id, uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"grlib_gptimer_writel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,id,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_timer_ctrl_enable(uint8_t i, bool enable){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_timer_ctrl_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,p)" ,i,enable);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_timer_ctrl_external_clock(uint8_t i, bool enable){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_timer_ctrl_external_clock");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,p)" ,i,enable);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_timer_ctrl_overflow_interrupt(uint8_t i, bool enable){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_timer_ctrl_overflow_interrupt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,p)" ,i,enable);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_timer_ctrl_pulse_enable(uint8_t i, bool enable){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_timer_ctrl_pulse_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,p)" ,i,enable);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_timer_set_ctrl2(uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_timer_set_ctrl2");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_timer_set_value(int timer, int reg, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_timer_set_value");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K)" ,timer,reg,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_timer_read(uint64_t offset, unsigned size, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_timer_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,K)" ,offset,size,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_systick_reload(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"systick_reload");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_systick_timer_tick(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"systick_timer_tick");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_systick_read(uint64_t addr, uint32_t value, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"systick_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,addr,value,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_systick_write(uint64_t addr, uint32_t value, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"systick_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,addr,value,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cmsdk_apb_timer_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cmsdk_apb_timer_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cmsdk_apb_timer_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cmsdk_apb_timer_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cmsdk_apb_timer_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cmsdk_apb_timer_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cmsdk_apb_dualtimer_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cmsdk_apb_dualtimer_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cmsdk_apb_dualtimer_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cmsdk_apb_dualtimer_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cmsdk_apb_dualtimer_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cmsdk_apb_dualtimer_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_timer_read(const char *id, uint64_t offset, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_timer_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&id,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_timer_write(const char *id, uint64_t offset, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_timer_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&id,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_timer_irq(const char *id, int timer, int state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_timer_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&id,timer,state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nrf51_timer_read(uint8_t timer_id, uint64_t addr, uint32_t value, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nrf51_timer_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,K,I)" ,timer_id,addr,value,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nrf51_timer_write(uint8_t timer_id, uint64_t addr, uint32_t value, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nrf51_timer_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,K,I)" ,timer_id,addr,value,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nrf51_timer_set_count(uint8_t timer_id, uint8_t counter_id, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nrf51_timer_set_count");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,K)" ,timer_id,counter_id,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bcm2835_systmr_timer_expired(unsigned id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bcm2835_systmr_timer_expired");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bcm2835_systmr_irq_ack(unsigned id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bcm2835_systmr_irq_ack");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bcm2835_systmr_read(uint64_t offset, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bcm2835_systmr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bcm2835_systmr_write(uint64_t offset, uint32_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bcm2835_systmr_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bcm2835_systmr_run(unsigned id, uint64_t delay_us){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bcm2835_systmr_run");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,K)" ,id,delay_us);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_avr_timer16_read(uint8_t addr, uint8_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"avr_timer16_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_avr_timer16_read_ifr(uint8_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"avr_timer16_read_ifr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_avr_timer16_read_imsk(uint8_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"avr_timer16_read_imsk");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_avr_timer16_write(uint8_t addr, uint8_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"avr_timer16_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_avr_timer16_write_imsk(uint8_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"avr_timer16_write_imsk");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_avr_timer16_interrupt_count(uint8_t cnt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"avr_timer16_interrupt_count");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,cnt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_avr_timer16_interrupt_overflow(const char *reason){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"avr_timer16_interrupt_overflow");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&reason);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_avr_timer16_next_alarm(uint64_t delay_ns){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"avr_timer16_next_alarm");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,delay_ns);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_avr_timer16_clksrc_update(uint64_t freq_hz, uint64_t period_ns, uint64_t delay_s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"avr_timer16_clksrc_update");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,freq_hz,period_ns,delay_s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sse_counter_control_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sse_counter_control_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sse_counter_control_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sse_counter_control_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sse_counter_status_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sse_counter_status_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sse_counter_status_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sse_counter_status_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sse_counter_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sse_counter_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sse_timer_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sse_timer_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sse_timer_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sse_timer_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sse_timer_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sse_timer_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sifive_pwm_set_alarm(uint64_t alarm, uint64_t now){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sifive_pwm_set_alarm");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,alarm,now);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sifive_pwm_interrupt(int num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sifive_pwm_interrupt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,num);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sifive_pwm_read(uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sifive_pwm_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sifive_pwm_write(uint64_t data, uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sifive_pwm_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,data,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sh_timer_start_stop(int enable, int current){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sh_timer_start_stop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,enable,current);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sh_timer_read(uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sh_timer_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sh_timer_write(uint64_t offset, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sh_timer_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

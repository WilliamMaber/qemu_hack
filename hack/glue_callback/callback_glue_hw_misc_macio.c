
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_misc_macio.h"

void glue_cuda_delay_set_sr_int(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cuda_delay_set_sr_int");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cuda_data_send(uint8_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cuda_data_send");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cuda_data_recv(uint8_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cuda_data_recv");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cuda_receive_packet_cmd(const char *cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cuda_receive_packet_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cuda_packet_receive(int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cuda_packet_receive");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cuda_packet_receive_data(int i, const uint8_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cuda_packet_receive_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B)" ,i,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cuda_packet_send(int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cuda_packet_send");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cuda_packet_send_data(int i, const uint8_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cuda_packet_send_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B)" ,i,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_macio_timer_write(uint64_t addr, unsigned len, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"macio_timer_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,K)" ,addr,len,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_macio_timer_read(uint64_t addr, unsigned len, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"macio_timer_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,K)" ,addr,len,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_macio_set_gpio(int gpio, bool state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"macio_set_gpio");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,p)" ,gpio,state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_macio_gpio_irq_assert(int gpio){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"macio_gpio_irq_assert");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,gpio);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_macio_gpio_irq_deassert(int gpio){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"macio_gpio_irq_deassert");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,gpio);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_macio_gpio_write(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"macio_gpio_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmu_adb_poll(int olen){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmu_adb_poll");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,olen);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmu_one_sec_timer(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmu_one_sec_timer");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmu_cmd_set_int_mask(int intmask){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmu_cmd_set_int_mask");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,intmask);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmu_cmd_set_adb_autopoll(int mask){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmu_cmd_set_adb_autopoll");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,mask);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmu_cmd_adb_nobus(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmu_cmd_adb_nobus");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmu_cmd_adb_request(int inlen, int indata0, int indata1, int indata2, int indata3, int indata4){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmu_cmd_adb_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i,i,i)" ,inlen,indata0,indata1,indata2,indata3,indata4);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmu_cmd_adb_reply(int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmu_cmd_adb_reply");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmu_dispatch_cmd(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmu_dispatch_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmu_dispatch_unknown_cmd(int cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmu_dispatch_unknown_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmu_debug_protocol_string(const char *str){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmu_debug_protocol_string");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&str);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmu_debug_protocol_resp_size(int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmu_debug_protocol_resp_size");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmu_debug_protocol_error(int portB){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmu_debug_protocol_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,portB);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmu_debug_protocol_clear_treq(int state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmu_debug_protocol_clear_treq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmu_debug_protocol_cmd(int cmd, int cmdlen, int rsplen){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmu_debug_protocol_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,cmd,cmdlen,rsplen);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmu_debug_protocol_cmdlen(int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmu_debug_protocol_cmdlen");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmu_debug_protocol_cmd_toobig(int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmu_debug_protocol_cmd_toobig");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmu_debug_protocol_cmd_send_resp_size(int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmu_debug_protocol_cmd_send_resp_size");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmu_debug_protocol_cmd_send_resp(int pos, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmu_debug_protocol_cmd_send_resp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,pos,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pmu_debug_protocol_cmd_resp_complete(int ier){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pmu_debug_protocol_cmd_resp_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,ier);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

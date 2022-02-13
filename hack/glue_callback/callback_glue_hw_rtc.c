
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_rtc.h"

void glue_allwinner_rtc_read(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_rtc_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_rtc_write(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_rtc_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sun4v_rtc_read(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sun4v_rtc_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sun4v_rtc_write(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sun4v_rtc_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xlnx_zynqmp_rtc_gettime(int year, int month, int day, int hour, int min, int sec){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xlnx_zynqmp_rtc_gettime");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i,i,i)" ,year,month,day,hour,min,sec);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl031_irq_state(int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl031_irq_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl031_read(uint32_t addr, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl031_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl031_write(uint32_t addr, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl031_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl031_alarm_raised(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl031_alarm_raised");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl031_set_alarm(uint32_t ticks){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl031_set_alarm");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ticks);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_rtc_read(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_rtc_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_rtc_write(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_rtc_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_m48txx_nvram_io_read(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"m48txx_nvram_io_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_m48txx_nvram_io_write(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"m48txx_nvram_io_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_m48txx_nvram_mem_read(uint32_t addr, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"m48txx_nvram_mem_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_m48txx_nvram_mem_write(uint32_t addr, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"m48txx_nvram_mem_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_goldfish_rtc_read(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"goldfish_rtc_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_goldfish_rtc_write(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"goldfish_rtc_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

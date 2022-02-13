
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_gpio.h"

void glue_npcm7xx_gpio_read(const char *id, uint64_t offset, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_gpio_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&id,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_gpio_write(const char *id, uint64_t offset, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_gpio_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&id,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_gpio_set_input(const char *id, int32_t line, int32_t level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_gpio_set_input");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,l,l)" ,&id,line,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_gpio_set_output(const char *id, int32_t line, int32_t level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_gpio_set_output");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,l,l)" ,&id,line,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_gpio_update_events(const char *id, uint32_t evst, uint32_t even){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_gpio_update_events");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&id,evst,even);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nrf51_gpio_read(uint64_t offset, uint64_t r){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nrf51_gpio_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,r);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nrf51_gpio_write(uint64_t offset, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nrf51_gpio_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nrf51_gpio_set(int64_t line, int64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nrf51_gpio_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(L,L)" ,line,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nrf51_gpio_update_output_irq(int64_t line, int64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nrf51_gpio_update_output_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(L,L)" ,line,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl061_update(const char *id, uint32_t dir, uint32_t data, uint32_t pullups, uint32_t floating){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl061_update");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K,K)" ,&id,dir,data,pullups,floating);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl061_set_output(const char *id, int gpio, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl061_set_output");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&id,gpio,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl061_input_change(const char *id, int gpio, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl061_input_change");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&id,gpio,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl061_update_istate(const char *id, uint32_t istate, uint32_t im, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl061_update_istate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,i)" ,&id,istate,im,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl061_read(const char *id, uint64_t offset, uint64_t r){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl061_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&id,offset,r);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl061_write(const char *id, uint64_t offset, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl061_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&id,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pl061_reset(const char *id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pl061_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sifive_gpio_read(uint64_t offset, uint64_t r){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sifive_gpio_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,r);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sifive_gpio_write(uint64_t offset, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sifive_gpio_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sifive_gpio_set(int64_t line, int64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sifive_gpio_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(L,L)" ,line,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sifive_gpio_update_output_irq(int64_t line, int64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sifive_gpio_update_output_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(L,L)" ,line,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

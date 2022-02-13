
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_audio.h"

void glue_cs4231_mem_readl_dreg(uint32_t reg, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cs4231_mem_readl_dreg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,reg,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cs4231_mem_readl_reg(uint32_t reg, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cs4231_mem_readl_reg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,reg,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cs4231_mem_writel_reg(uint32_t reg, uint32_t old, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cs4231_mem_writel_reg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,reg,old,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cs4231_mem_writel_dreg(uint32_t reg, uint32_t old, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cs4231_mem_writel_dreg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,reg,old,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hda_audio_running(const char *stream, int nr, bool running){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hda_audio_running");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,p)" ,&stream,nr,running);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hda_audio_format(const char *stream, int chan, const char *fmt, int freq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hda_audio_format");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,b,i)" ,&stream,chan,&fmt,freq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hda_audio_adjust(const char *stream, int pos){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hda_audio_adjust");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&stream,pos);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hda_audio_overrun(const char *stream){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hda_audio_overrun");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&stream);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}


#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_audio.h"

void glue_alsa_revents(int revents){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"alsa_revents");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,revents);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_alsa_pollout(int i, int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"alsa_pollout");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,i,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_alsa_set_handler(int events, int index, int fd, int err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"alsa_set_handler");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,events,index,fd,err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_alsa_wrote_zero(int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"alsa_wrote_zero");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_alsa_read_zero(long len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"alsa_read_zero");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_alsa_xrun_out(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"alsa_xrun_out");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_alsa_xrun_in(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"alsa_xrun_in");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_alsa_resume_out(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"alsa_resume_out");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_oss_version(int version){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"oss_version");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,version);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dbus_audio_register(const char *s, const char *dir){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dbus_audio_register");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&s,&dir);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dbus_audio_put_buffer_out(size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dbus_audio_put_buffer_out");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dbus_audio_read(size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dbus_audio_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_audio_timer_start(int interval){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"audio_timer_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,interval);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_audio_timer_stop(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"audio_timer_stop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_audio_timer_delayed(int interval){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"audio_timer_delayed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,interval);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

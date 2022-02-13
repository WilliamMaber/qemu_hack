
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_net.h"

void glue_qemu_announce_self_iter(const char *id, const char *name, const char *mac, int skip){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_announce_self_iter");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,b,i)" ,&id,&name,&mac,skip);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_announce_timer_del(bool free_named, bool free_timer, char *id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_announce_timer_del");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,p,b)" ,free_named,free_timer,&id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vhost_user_event(const char *chr, int event){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vhost_user_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&chr,event);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_colo_proxy_main(const char *chr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"colo_proxy_main");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&chr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_colo_compare_main(const char *chr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"colo_compare_main");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&chr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_colo_compare_drop_packet(const char *queue, const char *chr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"colo_compare_drop_packet");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&queue,&chr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_colo_compare_udp_miscompare(const char *sta, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"colo_compare_udp_miscompare");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&sta,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_colo_compare_icmp_miscompare(const char *sta, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"colo_compare_icmp_miscompare");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&sta,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_colo_compare_ip_info(int psize, const char *sta, const char *stb, int ssize, const char *stc, const char *std){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"colo_compare_ip_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,b,i,b,b)" ,psize,&sta,&stb,ssize,&stc,&std);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_colo_old_packet_check_found(int64_t old_time){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"colo_old_packet_check_found");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(L)" ,old_time);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_colo_compare_tcp_info(const char *pkt, uint32_t seq, uint32_t ack, int hdlen, int pdlen, int offset, int flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"colo_compare_tcp_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,i,i,i,i)" ,&pkt,seq,ack,hdlen,pdlen,offset,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_colo_filter_rewriter_pkt_info(const char *func, const char *src, const char *dst, uint32_t seq, uint32_t ack, uint32_t flag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"colo_filter_rewriter_pkt_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,b,K,K,K)" ,&func,&src,&dst,seq,ack,flag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_colo_filter_rewriter_conn_offset(uint32_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"colo_filter_rewriter_conn_offset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

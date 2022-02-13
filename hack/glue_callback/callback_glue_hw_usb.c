
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_usb.h"

void glue_usb_packet_state_change(int bus, const char *port, int ep, void *p, const char *o, const char *n){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_packet_state_change");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,i,O&,b,b)" ,bus,&port,ep,&p,&o,&n);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_packet_state_fault(int bus, const char *port, int ep, void *p, const char *o, const char *n){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_packet_state_fault");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,i,O&,b,b)" ,bus,&port,ep,&p,&o,&n);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_port_claim(int bus, const char *port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_port_claim");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,bus,&port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_port_attach(int bus, const char *port, const char *devspeed, const char *portspeed){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_port_attach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,b,b)" ,bus,&port,&devspeed,&portspeed);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_port_detach(int bus, const char *port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_port_detach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,bus,&port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_port_release(int bus, const char *port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_port_release");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,bus,&port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_exit(const char *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_exit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_iso_td_read_failed(uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_iso_td_read_failed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_iso_td_head(uint32_t head, uint32_t tail, uint32_t flags, uint32_t bp, uint32_t next, uint32_t be, uint32_t framenum, uint32_t startframe, uint32_t framecount, int rel_frame_num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_iso_td_head");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K,K,K,K,K,i)" ,head,tail,flags,bp,next,be,framenum,startframe,framecount,rel_frame_num);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_iso_td_head_offset(uint32_t o0, uint32_t o1, uint32_t o2, uint32_t o3, uint32_t o4, uint32_t o5, uint32_t o6, uint32_t o7){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_iso_td_head_offset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K,K,K,K)" ,o0,o1,o2,o3,o4,o5,o6,o7);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_iso_td_relative_frame_number_neg(int rel){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_iso_td_relative_frame_number_neg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,rel);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_iso_td_relative_frame_number_big(int rel, int count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_iso_td_relative_frame_number_big");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,rel,count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_iso_td_bad_direction(int dir){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_iso_td_bad_direction");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,dir);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_iso_td_bad_bp_be(uint32_t bp, uint32_t be){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_iso_td_bad_bp_be");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,bp,be);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_iso_td_bad_cc_not_accessed(uint32_t start, uint32_t next){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_iso_td_bad_cc_not_accessed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,start,next);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_iso_td_bad_cc_overrun(uint32_t start, uint32_t next){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_iso_td_bad_cc_overrun");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,start,next);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_iso_td_so(uint32_t so, uint32_t eo, uint32_t s, uint32_t e, const char *str, ssize_t len, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_iso_td_so");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,b,i,i)" ,so,eo,s,e,&str,len,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_iso_td_data_overrun(int ret, ssize_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_iso_td_data_overrun");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,ret,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_iso_td_data_underrun(int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_iso_td_data_underrun");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_iso_td_nak(int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_iso_td_nak");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_iso_td_bad_response(int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_iso_td_bad_response");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_port_attach(int index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_port_attach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_port_detach(int index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_port_detach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_port_wakeup(int index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_port_wakeup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_port_suspend(int index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_port_suspend");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_port_reset(int index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_port_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_remote_wakeup(const char *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_remote_wakeup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_reset(const char *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_start(const char *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_resume(const char *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_resume");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_stop(const char *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_stop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_set_ctl(const char *s, uint32_t new_state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_set_ctl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&s,new_state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_td_underrun(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_td_underrun");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_td_dev_error(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_td_dev_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_td_nak(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_td_nak");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_td_stall(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_td_stall");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_td_babble(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_td_babble");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_td_bad_device_response(int rc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_td_bad_device_response");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,rc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_td_read_error(uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_td_read_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_td_bad_direction(int dir){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_td_bad_direction");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,dir);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_td_skip_async(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_td_skip_async");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_td_pkt_hdr(uint32_t addr, int64_t pktlen, int64_t len, const char *s, int flag_r, uint32_t cbp, uint32_t be){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_td_pkt_hdr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,L,L,b,i,K,K)" ,addr,pktlen,len,&s,flag_r,cbp,be);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_td_pkt_short(const char *dir, const char *buf){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_td_pkt_short");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&dir,&buf);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_td_pkt_full(const char *dir, const char *buf){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_td_pkt_full");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&dir,&buf);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_td_too_many_pending(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_td_too_many_pending");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_td_packet_status(int status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_td_packet_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_ed_read_error(uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_ed_read_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_ed_pkt(uint32_t cur, int h, int c, uint32_t head, uint32_t tail, uint32_t next){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_ed_pkt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i,K,K,K)" ,cur,h,c,head,tail,next);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_ed_pkt_flags(uint32_t fa, uint32_t en, uint32_t d, int s, int k, int f, uint32_t mps){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_ed_pkt_flags");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,i,i,i,K)" ,fa,en,d,s,k,f,mps);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_hcca_read_error(uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_hcca_read_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_mem_read_unaligned(uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_mem_read_unaligned");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_mem_read_bad_offset(uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_mem_read_bad_offset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_mem_write_unaligned(uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_mem_write_unaligned");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_mem_write_bad_offset(uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_mem_write_bad_offset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_process_lists(uint32_t head, uint32_t cur){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_process_lists");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,head,cur);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_set_frame_interval(const char *name, uint16_t fi_x, uint16_t fi_u){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_set_frame_interval");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&name,fi_x,fi_u);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_hub_power_up(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_hub_power_up");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_hub_power_down(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_hub_power_down");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_init_time(int64_t frametime, int64_t bittime){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_init_time");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(L,L)" ,frametime,bittime);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_die(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_die");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ohci_async_complete(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ohci_async_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_unrealize(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_unrealize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_opreg_read(uint32_t addr, const char *str, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_opreg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K)" ,addr,&str,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_opreg_write(uint32_t addr, const char *str, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_opreg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K)" ,addr,&str,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_opreg_change(uint32_t addr, const char *str, uint32_t new, uint32_t old){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_opreg_change");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K,K)" ,addr,&str,new,old);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_portsc_read(uint32_t addr, uint32_t port, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_portsc_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,port,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_portsc_write(uint32_t addr, uint32_t port, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_portsc_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,port,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_portsc_change(uint32_t addr, uint32_t port, uint32_t new, uint32_t old){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_portsc_change");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,addr,port,new,old);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_usbsts(const char *sts, int state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_usbsts");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&sts,state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_state(const char *schedule, const char *state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&schedule,&state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_qh_ptrs(void *q, uint32_t addr, uint32_t nxt, uint32_t c_qtd, uint32_t n_qtd, uint32_t a_qtd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_qh_ptrs");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K,K,K)" ,&q,addr,nxt,c_qtd,n_qtd,a_qtd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_qh_fields(uint32_t addr, int rl, int mplen, int eps, int ep, int devaddr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_qh_fields");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i,i,i,i)" ,addr,rl,mplen,eps,ep,devaddr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_qh_bits(uint32_t addr, int c, int h, int dtc, int i){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_qh_bits");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i,i,i)" ,addr,c,h,dtc,i);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_qtd_ptrs(void *q, uint32_t addr, uint32_t nxt, uint32_t altnext){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_qtd_ptrs");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K)" ,&q,addr,nxt,altnext);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_qtd_fields(uint32_t addr, int tbytes, int cpage, int cerr, int pid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_qtd_fields");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i,i,i)" ,addr,tbytes,cpage,cerr,pid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_qtd_bits(uint32_t addr, int ioc, int active, int halt, int babble, int xacterr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_qtd_bits");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i,i,i,i)" ,addr,ioc,active,halt,babble,xacterr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_itd(uint32_t addr, uint32_t nxt, uint32_t mplen, uint32_t mult, uint32_t ep, uint32_t devaddr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_itd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K,K)" ,addr,nxt,mplen,mult,ep,devaddr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_sitd(uint32_t addr, uint32_t nxt, uint32_t active){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_sitd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,nxt,active);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_port_attach(uint32_t port, const char *owner, const char *device){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_port_attach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,b)" ,port,&owner,&device);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_port_detach(uint32_t port, const char *owner){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_port_detach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b)" ,port,&owner);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_port_reset(uint32_t port, int enable){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_port_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,port,enable);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_port_suspend(uint32_t port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_port_suspend");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_port_wakeup(uint32_t port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_port_wakeup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_port_resume(uint32_t port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_port_resume");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_queue_action(void *q, const char *action){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_queue_action");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&q,&action);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_packet_action(void *q, void *p, const char *action){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_packet_action");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,b)" ,&q,&p,&action);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_irq(uint32_t level, uint32_t frindex, uint32_t sts, uint32_t mask){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,level,frindex,sts,mask);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_guest_bug(const char *reason){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_guest_bug");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&reason);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_doorbell_ring(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_doorbell_ring");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_doorbell_ack(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_doorbell_ack");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_ehci_dma_error(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_ehci_dma_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_exit(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_exit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_schedule_start(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_schedule_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_schedule_stop(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_schedule_stop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_frame_start(uint32_t num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_frame_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,num);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_frame_stop_bandwidth(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_frame_stop_bandwidth");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_frame_loop_stop_idle(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_frame_loop_stop_idle");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_frame_loop_continue(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_frame_loop_continue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_mmio_readw(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_mmio_readw");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_mmio_writew(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_mmio_writew");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_queue_add(uint32_t token){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_queue_add");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,token);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_queue_del(uint32_t token, const char *reason){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_queue_del");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b)" ,token,&reason);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_packet_add(uint32_t token, uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_packet_add");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,token,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_packet_link_async(uint32_t token, uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_packet_link_async");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,token,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_packet_unlink_async(uint32_t token, uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_packet_unlink_async");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,token,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_packet_cancel(uint32_t token, uint32_t addr, int done){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_packet_cancel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,token,addr,done);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_packet_complete_success(uint32_t token, uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_packet_complete_success");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,token,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_packet_complete_shortxfer(uint32_t token, uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_packet_complete_shortxfer");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,token,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_packet_complete_stall(uint32_t token, uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_packet_complete_stall");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,token,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_packet_complete_babble(uint32_t token, uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_packet_complete_babble");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,token,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_packet_complete_error(uint32_t token, uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_packet_complete_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,token,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_packet_del(uint32_t token, uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_packet_del");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,token,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_qh_load(uint32_t qh){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_qh_load");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,qh);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_td_load(uint32_t qh, uint32_t td, uint32_t ctrl, uint32_t token){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_td_load");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,qh,td,ctrl,token);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_td_queue(uint32_t td, uint32_t ctrl, uint32_t token){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_td_queue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,td,ctrl,token);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_td_nextqh(uint32_t qh, uint32_t td){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_td_nextqh");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,qh,td);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_td_async(uint32_t qh, uint32_t td){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_td_async");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,qh,td);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uhci_td_complete(uint32_t qh, uint32_t td){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uhci_td_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,qh,td);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_exit(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_exit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_run(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_run");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_stop(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_stop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_cap_read(uint32_t off, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_cap_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,off,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_oper_read(uint32_t off, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_oper_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,off,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_port_read(uint32_t port, uint32_t off, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_port_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,port,off,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_runtime_read(uint32_t off, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_runtime_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,off,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_doorbell_read(uint32_t off, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_doorbell_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,off,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_oper_write(uint32_t off, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_oper_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,off,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_port_write(uint32_t port, uint32_t off, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_port_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,port,off,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_runtime_write(uint32_t off, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_runtime_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,off,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_doorbell_write(uint32_t off, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_doorbell_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,off,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_irq_intx(uint32_t level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_irq_intx");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_irq_msi(uint32_t nr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_irq_msi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,nr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_irq_msix(uint32_t nr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_irq_msix");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,nr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_irq_msix_use(uint32_t nr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_irq_msix_use");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,nr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_irq_msix_unuse(uint32_t nr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_irq_msix_unuse");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,nr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_queue_event(uint32_t vector, uint32_t idx, const char *trb, const char *evt, uint64_t param, uint32_t status, uint32_t control){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_queue_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,b,b,K,K,K)" ,vector,idx,&trb,&evt,param,status,control);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_fetch_trb(uint64_t addr, const char *name, uint64_t param, uint32_t status, uint32_t control){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_fetch_trb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K,K,K)" ,addr,&name,param,status,control);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_port_reset(uint32_t port, bool warm){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_port_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,p)" ,port,warm);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_port_link(uint32_t port, uint32_t pls){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_port_link");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,port,pls);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_port_notify(uint32_t port, uint32_t pls){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_port_notify");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,port,pls);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_slot_enable(uint32_t slotid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_slot_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,slotid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_slot_disable(uint32_t slotid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_slot_disable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,slotid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_slot_address(uint32_t slotid, const char *port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_slot_address");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b)" ,slotid,&port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_slot_configure(uint32_t slotid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_slot_configure");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,slotid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_slot_evaluate(uint32_t slotid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_slot_evaluate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,slotid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_slot_reset(uint32_t slotid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_slot_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,slotid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_ep_enable(uint32_t slotid, uint32_t epid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_ep_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,slotid,epid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_ep_disable(uint32_t slotid, uint32_t epid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_ep_disable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,slotid,epid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_ep_set_dequeue(uint32_t slotid, uint32_t epid, uint32_t streamid, uint64_t param){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_ep_set_dequeue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,slotid,epid,streamid,param);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_ep_kick(uint32_t slotid, uint32_t epid, uint32_t streamid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_ep_kick");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,slotid,epid,streamid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_ep_stop(uint32_t slotid, uint32_t epid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_ep_stop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,slotid,epid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_ep_reset(uint32_t slotid, uint32_t epid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_ep_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,slotid,epid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_ep_state(uint32_t slotid, uint32_t epid, const char *os, const char *ns){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_ep_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,b,b)" ,slotid,epid,&os,&ns);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_xfer_start(void *xfer, uint32_t slotid, uint32_t epid, uint32_t streamid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_xfer_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K)" ,&xfer,slotid,epid,streamid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_xfer_async(void *xfer){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_xfer_async");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&xfer);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_xfer_nak(void *xfer){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_xfer_nak");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&xfer);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_xfer_retry(void *xfer){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_xfer_retry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&xfer);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_xfer_success(void *xfer, uint32_t bytes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_xfer_success");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K)" ,&xfer,bytes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_xfer_error(void *xfer, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_xfer_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K)" ,&xfer,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_unimplemented(const char *item, int nr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_unimplemented");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&item,nr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_xhci_enforced_limit(const char *item){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_xhci_enforced_limit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&item);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_update_irq(uint32_t level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_update_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_raise_global_irq(uint32_t intr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_raise_global_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,intr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_lower_global_irq(uint32_t intr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_lower_global_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,intr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_raise_host_irq(uint32_t intr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_raise_host_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,intr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_lower_host_irq(uint32_t intr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_lower_host_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,intr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_sof(int64_t next){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_sof");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(L)" ,next);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_bus_start(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_bus_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_bus_stop(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_bus_stop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_find_device(uint8_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_find_device");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_port_disabled(uint32_t pnum){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_port_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,pnum);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_device_found(uint32_t pnum){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_device_found");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,pnum);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_device_not_found(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_device_not_found");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_handle_packet(uint32_t chan, void *dev, void *pkt, uint32_t ep, const char *type, const char *dir, uint32_t mps, uint32_t len, uint32_t pcnt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_handle_packet");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,O&,O&,K,b,b,K,K,K)" ,chan,&dev,&pkt,ep,&type,&dir,mps,len,pcnt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_memory_read(uint32_t addr, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_memory_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_packet_status(const char *status, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_packet_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&status,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_packet_error(const char *status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_packet_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_async_packet(void *pkt, uint32_t chan, void *dev, uint32_t ep, const char *dir, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_async_packet");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,O&,K,b,K)" ,&pkt,chan,&dev,ep,&dir,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_memory_write(uint32_t addr, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_memory_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_packet_done(const char *status, uint32_t actual, uint32_t len, uint32_t pcnt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_packet_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K)" ,&status,actual,len,pcnt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_packet_next(const char *status, uint32_t len, uint32_t pcnt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_packet_next");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&status,len,pcnt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_attach(void *port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_attach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_attach_speed(const char *speed){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_attach_speed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&speed);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_detach(void *port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_detach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_child_detach(void *port, void *child){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_child_detach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&port,&child);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_wakeup(void *port){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_wakeup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&port);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_async_packet_complete(void *port, void *pkt, uint32_t chan, void *dev, uint32_t ep, const char *dir, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_async_packet_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,K,O&,K,b,K)" ,&port,&pkt,chan,&dev,ep,&dir,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_work_bh(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_work_bh");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_work_bh_service(uint32_t first, uint32_t current, void *dev, uint32_t ep){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_work_bh_service");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,O&,K)" ,first,current,&dev,ep);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_work_bh_next(uint32_t chan){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_work_bh_next");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,chan);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_enable_chan(uint32_t chan, void *dev, void *pkt, uint32_t ep){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_enable_chan");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,O&,O&,K)" ,chan,&dev,&pkt,ep);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_glbreg_read(uint64_t addr, const char *reg, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_glbreg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K)" ,addr,&reg,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_glbreg_write(uint64_t addr, const char *reg, uint64_t val, uint32_t old, uint64_t result){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_glbreg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K,K,K)" ,addr,&reg,val,old,result);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_fszreg_read(uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_fszreg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_fszreg_write(uint64_t addr, uint64_t val, uint32_t old, uint64_t result){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_fszreg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,addr,val,old,result);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_hreg0_read(uint64_t addr, const char *reg, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_hreg0_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K)" ,addr,&reg,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_hreg0_write(uint64_t addr, const char *reg, uint64_t val, uint32_t old, uint64_t result){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_hreg0_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K,K,K)" ,addr,&reg,val,old,result);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_hreg1_read(uint64_t addr, const char *reg, uint64_t chan, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_hreg1_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K,K)" ,addr,&reg,chan,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_hreg1_write(uint64_t addr, const char *reg, uint64_t chan, uint64_t val, uint32_t old, uint64_t result){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_hreg1_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K,K,K,K)" ,addr,&reg,chan,val,old,result);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_pcgreg_read(uint64_t addr, const char *reg, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_pcgreg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K)" ,addr,&reg,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_pcgreg_write(uint64_t addr, const char *reg, uint64_t val, uint32_t old, uint64_t result){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_pcgreg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K,K,K)" ,addr,&reg,val,old,result);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_hreg2_read(uint64_t addr, uint64_t fifo, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_hreg2_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,addr,fifo,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_hreg2_write(uint64_t addr, uint64_t fifo, uint64_t val, uint32_t old, uint64_t result){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_hreg2_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K)" ,addr,fifo,val,old,result);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_hreg0_action(const char *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_hreg0_action");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_wakeup_endpoint(void *ep, uint32_t stream){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_wakeup_endpoint");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K)" ,&ep,stream);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_work_timer(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_work_timer");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_reset_enter(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_reset_enter");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_reset_hold(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_reset_hold");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_dwc2_reset_exit(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_dwc2_reset_exit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_desc_device(int addr, int len, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_desc_device");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,addr,len,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_desc_device_qualifier(int addr, int len, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_desc_device_qualifier");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,addr,len,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_desc_config(int addr, int index, int len, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_desc_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,addr,index,len,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_desc_other_speed_config(int addr, int index, int len, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_desc_other_speed_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,addr,index,len,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_desc_string(int addr, int index, int len, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_desc_string");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,addr,index,len,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_desc_bos(int addr, int len, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_desc_bos");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,addr,len,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_desc_msos(int addr, int index, int len, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_desc_msos");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,addr,index,len,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_set_addr(int addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_set_addr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_set_config(int addr, int config, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_set_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,addr,config,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_set_interface(int addr, int iface, int alt, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_set_interface");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,addr,iface,alt,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_clear_device_feature(int addr, int feature, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_clear_device_feature");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,addr,feature,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_set_device_feature(int addr, int feature, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_set_device_feature");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,addr,feature,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_hub_reset(int addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_hub_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_hub_control(int addr, int request, int value, int index, int length){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_hub_control");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i,i)" ,addr,request,value,index,length);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_hub_get_port_status(int addr, int nr, int status, int changed){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_hub_get_port_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,addr,nr,status,changed);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_hub_set_port_feature(int addr, int nr, const char *f){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_hub_set_port_feature");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,b)" ,addr,nr,&f);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_hub_clear_port_feature(int addr, int nr, const char *f){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_hub_clear_port_feature");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,b)" ,addr,nr,&f);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_hub_attach(int addr, int nr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_hub_attach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,addr,nr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_hub_detach(int addr, int nr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_hub_detach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,addr,nr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_hub_status_report(int addr, int status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_hub_status_report");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,addr,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_msd_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_msd_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_msd_maxlun(unsigned maxlun){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_msd_maxlun");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,maxlun);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_msd_send_status(unsigned status, unsigned tag, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_msd_send_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I,i)" ,status,tag,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_msd_data_in(unsigned packet, unsigned remaining, unsigned total){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_msd_data_in");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I,I)" ,packet,remaining,total);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_msd_data_out(unsigned packet, unsigned remaining){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_msd_data_out");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I)" ,packet,remaining);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_msd_packet_async(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_msd_packet_async");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_msd_packet_complete(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_msd_packet_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_msd_cmd_submit(unsigned lun, unsigned tag, unsigned flags, unsigned len, unsigned data_len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_msd_cmd_submit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I,I,I,I)" ,lun,tag,flags,len,data_len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_msd_cmd_complete(unsigned status, unsigned tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_msd_cmd_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I)" ,status,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_msd_cmd_cancel(unsigned tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_msd_cmd_cancel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uas_reset(int addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uas_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uas_command(int addr, uint16_t tag, int lun, uint32_t lun64_1, uint32_t lun64_2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uas_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,K,K)" ,addr,tag,lun,lun64_1,lun64_2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uas_response(int addr, uint16_t tag, uint8_t code){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uas_response");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,B)" ,addr,tag,code);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uas_sense(int addr, uint16_t tag, uint8_t status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uas_sense");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,B)" ,addr,tag,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uas_read_ready(int addr, uint16_t tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uas_read_ready");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,addr,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uas_write_ready(int addr, uint16_t tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uas_write_ready");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,addr,tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uas_xfer_data(int addr, uint16_t tag, uint32_t copy, uint32_t uoff, uint32_t usize, uint32_t soff, uint32_t ssize){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uas_xfer_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,K,K,K,K)" ,addr,tag,copy,uoff,usize,soff,ssize);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uas_scsi_data(int addr, uint16_t tag, uint32_t bytes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uas_scsi_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K)" ,addr,tag,bytes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uas_scsi_complete(int addr, uint16_t tag, uint32_t status, uint32_t resid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uas_scsi_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,K)" ,addr,tag,status,resid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uas_tmf_abort_task(int addr, uint16_t tag, uint16_t task_tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uas_tmf_abort_task");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,addr,tag,task_tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uas_tmf_logical_unit_reset(int addr, uint16_t tag, int lun){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uas_tmf_logical_unit_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,addr,tag,lun);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_uas_tmf_unsupported(int addr, uint16_t tag, uint32_t function){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_uas_tmf_unsupported");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K)" ,addr,tag,function);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_reset(int addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_command(int dev, uint16_t code, uint32_t trans, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,K,K,K,K,K)" ,dev,code,trans,arg0,arg1,arg2,arg3,arg4);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_success(int dev, uint32_t trans, uint32_t arg0, uint32_t arg1){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_success");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K)" ,dev,trans,arg0,arg1);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_error(int dev, uint16_t code, uint32_t trans, uint32_t arg0, uint32_t arg1){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,K,K)" ,dev,code,trans,arg0,arg1);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_data_in(int dev, uint32_t trans, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_data_in");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,dev,trans,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_xfer(int dev, uint32_t ep, uint32_t dlen, uint32_t plen){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_xfer");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K)" ,dev,ep,dlen,plen);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_nak(int dev, uint32_t ep){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_nak");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,dev,ep);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_stall(int dev, const char *reason){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_stall");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,dev,&reason);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_op_get_device_info(int dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_op_get_device_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,dev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_op_open_session(int dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_op_open_session");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,dev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_op_close_session(int dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_op_close_session");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,dev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_op_get_storage_ids(int dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_op_get_storage_ids");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,dev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_op_get_storage_info(int dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_op_get_storage_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,dev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_op_get_num_objects(int dev, uint32_t handle, const char *path){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_op_get_num_objects");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,b)" ,dev,handle,&path);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_op_get_object_handles(int dev, uint32_t handle, const char *path){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_op_get_object_handles");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,b)" ,dev,handle,&path);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_op_get_object_info(int dev, uint32_t handle, const char *path){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_op_get_object_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,b)" ,dev,handle,&path);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_op_get_object(int dev, uint32_t handle, const char *path){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_op_get_object");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,b)" ,dev,handle,&path);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_op_get_partial_object(int dev, uint32_t handle, const char *path, uint32_t offset, uint32_t length){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_op_get_partial_object");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,b,K,K)" ,dev,handle,&path,offset,length);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_op_unknown(int dev, uint32_t code){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_op_unknown");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,dev,code);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_object_alloc(int dev, uint32_t handle, const char *path){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_object_alloc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,b)" ,dev,handle,&path);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_object_free(int dev, uint32_t handle, const char *path){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_object_free");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,b)" ,dev,handle,&path);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_add_child(int dev, uint32_t handle, const char *path){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_add_child");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,b)" ,dev,handle,&path);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_mtp_file_monitor_event(int dev, const char *path, const char *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_mtp_file_monitor_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,b)" ,dev,&path,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_open_started(int bus, int addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_open_started");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,bus,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_open_hostfd(int hostfd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_open_hostfd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,hostfd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_open_success(int bus, int addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_open_success");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,bus,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_open_failure(int bus, int addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_open_failure");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,bus,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_close(int bus, int addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_close");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,bus,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_attach_kernel(int bus, int addr, int interface){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_attach_kernel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,bus,addr,interface);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_detach_kernel(int bus, int addr, int interface){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_detach_kernel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,bus,addr,interface);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_set_address(int bus, int addr, int config){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_set_address");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,bus,addr,config);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_set_config(int bus, int addr, int config){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_set_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,bus,addr,config);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_set_interface(int bus, int addr, int interface, int alt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_set_interface");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,bus,addr,interface,alt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_claim_interface(int bus, int addr, int config, int interface){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_claim_interface");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,bus,addr,config,interface);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_release_interface(int bus, int addr, int interface){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_release_interface");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,bus,addr,interface);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_req_control(int bus, int addr, void *p, int req, int value, int index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_req_control");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,O&,i,i,i)" ,bus,addr,&p,req,value,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_req_data(int bus, int addr, void *p, int in, int ep, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_req_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,O&,i,i,i)" ,bus,addr,&p,in,ep,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_req_complete(int bus, int addr, void *p, int status, int length){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_req_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,O&,i,i)" ,bus,addr,&p,status,length);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_req_emulated(int bus, int addr, void *p, int status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_req_emulated");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,O&,i)" ,bus,addr,&p,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_req_canceled(int bus, int addr, void *p){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_req_canceled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,O&)" ,bus,addr,&p);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_iso_start(int bus, int addr, int ep){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_iso_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,bus,addr,ep);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_iso_stop(int bus, int addr, int ep){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_iso_stop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,bus,addr,ep);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_iso_out_of_bufs(int bus, int addr, int ep){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_iso_out_of_bufs");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,bus,addr,ep);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_reset(int bus, int addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,bus,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_auto_scan_enabled(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_auto_scan_enabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_auto_scan_disabled(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_auto_scan_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_parse_config(int bus, int addr, int value, int active){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_parse_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,bus,addr,value,active);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_parse_interface(int bus, int addr, int num, int alt, int active){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_parse_interface");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i,i)" ,bus,addr,num,alt,active);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_parse_endpoint(int bus, int addr, int ep, const char *dir, const char *type, int active){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_parse_endpoint");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,b,b,i)" ,bus,addr,ep,&dir,&type,active);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_parse_error(int bus, int addr, const char *errmsg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_parse_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,b)" ,bus,addr,&errmsg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_host_remote_wakeup_removed(int bus, int addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_host_remote_wakeup_removed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,bus,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_serial_reset(int bus, int addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_serial_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,bus,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_serial_handle_control(int bus, int addr, int request, int value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_serial_handle_control");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,bus,addr,request,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_serial_unsupported_parity(int bus, int addr, int value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_serial_unsupported_parity");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,bus,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_serial_unsupported_stopbits(int bus, int addr, int value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_serial_unsupported_stopbits");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,bus,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_serial_unsupported_control(int bus, int addr, int request, int value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_serial_unsupported_control");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,bus,addr,request,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_serial_unsupported_data_bits(int bus, int addr, int value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_serial_unsupported_data_bits");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,bus,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_serial_bad_token(int bus, int addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_serial_bad_token");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,bus,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_serial_set_baud(int bus, int addr, int baud){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_serial_set_baud");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,bus,addr,baud);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_serial_set_data(int bus, int addr, int parity, int data, int stop){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_serial_set_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i,i)" ,bus,addr,parity,data,stop);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_serial_set_flow_control(int bus, int addr, int index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_serial_set_flow_control");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,bus,addr,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_usb_serial_set_xonxoff(int bus, int addr, uint8_t xon, uint8_t xoff){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"usb_serial_set_xonxoff");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,B,B)" ,bus,addr,xon,xoff);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

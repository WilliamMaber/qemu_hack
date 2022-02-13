
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_input.h"

void glue_adb_device_kbd_no_key(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"adb_device_kbd_no_key");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_adb_device_kbd_writereg(int reg, uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"adb_device_kbd_writereg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B)" ,reg,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_adb_device_kbd_readreg(int reg, uint8_t val0, uint8_t val1){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"adb_device_kbd_readreg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,B)" ,reg,val0,val1);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_adb_device_kbd_request_change_addr(int devaddr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"adb_device_kbd_request_change_addr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,devaddr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_adb_device_kbd_request_change_addr_and_handler(int devaddr, int handler){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"adb_device_kbd_request_change_addr_and_handler");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,devaddr,handler);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_adb_device_mouse_flush(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"adb_device_mouse_flush");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_adb_device_mouse_writereg(int reg, uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"adb_device_mouse_writereg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B)" ,reg,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_adb_device_mouse_readreg(int reg, uint8_t val0, uint8_t val1){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"adb_device_mouse_readreg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,B)" ,reg,val0,val1);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_adb_device_mouse_request_change_addr(int devaddr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"adb_device_mouse_request_change_addr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,devaddr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_adb_device_mouse_request_change_addr_and_handler(int devaddr, int handler){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"adb_device_mouse_request_change_addr_and_handler");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,devaddr,handler);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_adb_bus_request(uint8_t addr, const char *cmd, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"adb_bus_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,b,i)" ,addr,&cmd,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_adb_bus_request_done(uint8_t addr, const char *cmd, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"adb_bus_request_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,b,i)" ,addr,&cmd,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_adb_bus_autopoll_block(bool blocked){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"adb_bus_autopoll_block");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,blocked);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_adb_bus_autopoll_cb(uint16_t mask){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"adb_bus_autopoll_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,mask);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_adb_bus_autopoll_cb_done(uint16_t mask){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"adb_bus_autopoll_cb_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,mask);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pckbd_kbd_read_data(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pckbd_kbd_read_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pckbd_kbd_read_status(int status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pckbd_kbd_read_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pckbd_outport_write(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pckbd_outport_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pckbd_kbd_write_command(uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pckbd_kbd_write_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pckbd_kbd_write_data(uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pckbd_kbd_write_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ps2_put_keycode(void *opaque, int keycode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ps2_put_keycode");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&opaque,keycode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ps2_keyboard_event(void *opaque, int qcode, int down, unsigned int modifier, unsigned int modifiers, int set, int xlate){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ps2_keyboard_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,I,I,i,i)" ,&opaque,qcode,down,modifier,modifiers,set,xlate);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ps2_read_data(void *opaque){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ps2_read_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&opaque);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ps2_set_ledstate(void *s, int ledstate){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ps2_set_ledstate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&s,ledstate);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ps2_reset_keyboard(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ps2_reset_keyboard");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ps2_write_keyboard(void *opaque, int val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ps2_write_keyboard");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&opaque,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ps2_keyboard_set_translation(void *opaque, int mode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ps2_keyboard_set_translation");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&opaque,mode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ps2_mouse_send_packet(void *s, int dx1, int dy1, int dz1, int b){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ps2_mouse_send_packet");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,i,i)" ,&s,dx1,dy1,dz1,b);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ps2_mouse_fake_event(void *opaque){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ps2_mouse_fake_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&opaque);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ps2_write_mouse(void *opaque, int val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ps2_write_mouse");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&opaque,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ps2_kbd_reset(void *opaque){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ps2_kbd_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&opaque);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ps2_mouse_reset(void *opaque){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ps2_mouse_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&opaque);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ps2_kbd_init(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ps2_kbd_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ps2_mouse_init(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ps2_mouse_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hid_kbd_queue_full(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hid_kbd_queue_full");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hid_kbd_queue_empty(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hid_kbd_queue_empty");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tsc2005_sense(const char *state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tsc2005_sense");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_input_queue_full(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_input_queue_full");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lasips2_reg_read(unsigned int size, int id, uint64_t addr, const char *name, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lasips2_reg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,i,K,b,K)" ,size,id,addr,&name,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lasips2_reg_write(unsigned int size, int id, uint64_t addr, const char *name, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lasips2_reg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,i,K,b,K)" ,size,id,addr,&name,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lasips2_intr(unsigned int val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lasips2_intr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

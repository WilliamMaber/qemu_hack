
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_ui.h"

void glue_console_gfx_new(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"console_gfx_new");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_console_gfx_reuse(int index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"console_gfx_reuse");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_console_gfx_close(int index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"console_gfx_close");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_console_putchar_csi(int esc_param0, int esc_param1, int ch, int nb_esc_params){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"console_putchar_csi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,esc_param0,esc_param1,ch,nb_esc_params);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_console_putchar_unhandled(int ch){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"console_putchar_unhandled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,ch);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_console_txt_new(int w, int h){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"console_txt_new");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,w,h);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_console_select(int nr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"console_select");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,nr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_console_refresh(int interval){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"console_refresh");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,interval);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_displaysurface_create(void *display_surface, int w, int h){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"displaysurface_create");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&display_surface,w,h);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_displaysurface_create_from(void *display_surface, int w, int h, uint32_t format){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"displaysurface_create_from");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,K)" ,&display_surface,w,h,format);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_displaysurface_create_pixman(void *display_surface){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"displaysurface_create_pixman");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&display_surface);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_displaysurface_free(void *display_surface){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"displaysurface_free");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&display_surface);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_displaychangelistener_register(void *dcl, const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"displaychangelistener_register");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&dcl,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_displaychangelistener_unregister(void *dcl, const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"displaychangelistener_unregister");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&dcl,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ppm_save(int fd, void *image){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ppm_save");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,O&)" ,fd,&image);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gd_switch(const char *tab, int width, int height){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gd_switch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&tab,width,height);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gd_update(const char *tab, int x, int y, int w, int h){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gd_update");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i,i,i)" ,&tab,x,y,w,h);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gd_key_event(const char *tab, int gdk_keycode, int qkeycode, const char *action){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gd_key_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i,b)" ,&tab,gdk_keycode,qkeycode,&action);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gd_grab(const char *tab, const char *device, const char *reason){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gd_grab");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,b)" ,&tab,&device,&reason);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gd_ungrab(const char *tab, const char *device){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gd_ungrab");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&tab,&device);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gd_keymap_windowing(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gd_keymap_windowing");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_key_guest_leds(bool caps, bool num, bool scroll){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_key_guest_leds");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,p,p)" ,caps,num,scroll);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_key_map_init(const char *layout){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_key_map_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&layout);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_key_event_ext(bool down, int sym, int keycode, const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_key_event_ext");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,i,i,b)" ,down,sym,keycode,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_key_event_map(bool down, int sym, int keycode, const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_key_event_map");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p,i,i,b)" ,down,sym,keycode,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_key_sync_numlock(bool on){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_key_sync_numlock");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,on);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_key_sync_capslock(bool on){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_key_sync_capslock");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,on);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_msg_server_audio_begin(void *state, void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_msg_server_audio_begin");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&state,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_msg_server_audio_end(void *state, void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_msg_server_audio_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&state,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_msg_server_audio_data(void *state, void *ioc, const void *buf, size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_msg_server_audio_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,O&,i)" ,&state,&ioc,&buf,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_msg_server_desktop_resize(void *state, void *ioc, int width, int height){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_msg_server_desktop_resize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,i)" ,&state,&ioc,width,height);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_msg_server_ext_desktop_resize(void *state, void *ioc, int width, int height, int reason){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_msg_server_ext_desktop_resize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,i,i)" ,&state,&ioc,width,height,reason);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_msg_client_audio_enable(void *state, void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_msg_client_audio_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&state,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_msg_client_audio_disable(void *state, void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_msg_client_audio_disable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&state,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_msg_client_audio_format(void *state, void *ioc, int fmt, int channels, int freq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_msg_client_audio_format");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,i,i)" ,&state,&ioc,fmt,channels,freq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_msg_client_set_desktop_size(void *state, void *ioc, int width, int height, int screens){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_msg_client_set_desktop_size");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,i,i)" ,&state,&ioc,width,height,screens);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_client_eof(void *state, void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_client_eof");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&state,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_client_io_error(void *state, void *ioc, const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_client_io_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,b)" ,&state,&ioc,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_client_connect(void *state, void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_client_connect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&state,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_client_disconnect_start(void *state, void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_client_disconnect_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&state,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_client_disconnect_finish(void *state, void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_client_disconnect_finish");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&state,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_client_io_wrap(void *state, void *ioc, const char *type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_client_io_wrap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,b)" ,&state,&ioc,&type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_client_throttle_threshold(void *state, void *ioc, size_t oldoffset, size_t offset, int client_width, int client_height, int bytes_per_pixel, void *audio_cap){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_client_throttle_threshold");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,i,i,i,i,O&)" ,&state,&ioc,oldoffset,offset,client_width,client_height,bytes_per_pixel,&audio_cap);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_client_throttle_incremental(void *state, void *ioc, int job_update, size_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_client_throttle_incremental");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,i)" ,&state,&ioc,job_update,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_client_throttle_forced(void *state, void *ioc, int job_update, size_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_client_throttle_forced");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,i)" ,&state,&ioc,job_update,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_client_throttle_audio(void *state, void *ioc, size_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_client_throttle_audio");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i)" ,&state,&ioc,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_client_unthrottle_forced(void *state, void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_client_unthrottle_forced");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&state,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_client_unthrottle_incremental(void *state, void *ioc, size_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_client_unthrottle_incremental");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i)" ,&state,&ioc,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_client_output_limit(void *state, void *ioc, size_t offset, size_t threshold){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_client_output_limit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,i)" ,&state,&ioc,offset,threshold);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_server_dpy_pageflip(void *dpy, int w, int h, int fmt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_server_dpy_pageflip");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,i)" ,&dpy,w,h,fmt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_server_dpy_recreate(void *dpy, int w, int h, int fmt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_server_dpy_recreate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,i)" ,&dpy,w,h,fmt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_job_add_rect(void *state, void *job, int x, int y, int w, int h){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_job_add_rect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,i,i,i)" ,&state,&job,x,y,w,h);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_job_discard_rect(void *state, void *job, int x, int y, int w, int h){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_job_discard_rect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,i,i,i)" ,&state,&job,x,y,w,h);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_job_clamp_rect(void *state, void *job, int x, int y, int w, int h){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_job_clamp_rect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,i,i,i)" ,&state,&job,x,y,w,h);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_job_clamped_rect(void *state, void *job, int x, int y, int w, int h){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_job_clamped_rect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,i,i,i)" ,&state,&job,x,y,w,h);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_job_nrects(void *state, void *job, int nrects){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_job_nrects");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i)" ,&state,&job,nrects);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_auth_init(void *display, int websock, int auth, int subauth){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_auth_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,i)" ,&display,websock,auth,subauth);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_auth_start(void *state, int method){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_auth_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&state,method);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_auth_pass(void *state, int method){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_auth_pass");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&state,method);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_auth_fail(void *state, int method, const char *message, const char *reason){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_auth_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,b,b)" ,&state,method,&message,&reason);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_auth_reject(void *state, int expect, int got){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_auth_reject");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&state,expect,got);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_auth_vencrypt_version(void *state, int major, int minor){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_auth_vencrypt_version");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&state,major,minor);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_auth_vencrypt_subauth(void *state, int auth){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_auth_vencrypt_subauth");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&state,auth);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_auth_sasl_mech_list(void *state, const char *mechs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_auth_sasl_mech_list");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&state,&mechs);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_auth_sasl_mech_choose(void *state, const char *mech){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_auth_sasl_mech_choose");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&state,&mech);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_auth_sasl_start(void *state, const void *clientdata, size_t clientlen, const void *serverdata, size_t severlen, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_auth_sasl_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,O&,i,i)" ,&state,&clientdata,clientlen,&serverdata,severlen,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_auth_sasl_step(void *state, const void *clientdata, size_t clientlen, const void *serverdata, size_t severlen, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_auth_sasl_step");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,O&,i,i)" ,&state,&clientdata,clientlen,&serverdata,severlen,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_auth_sasl_ssf(void *state, int ssf){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_auth_sasl_ssf");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&state,ssf);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vnc_auth_sasl_username(void *state, const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vnc_auth_sasl_username");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&state,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_input_event_key_number(int conidx, int number, const char *qcode, bool down){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"input_event_key_number");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,b,p)" ,conidx,number,&qcode,down);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_input_event_key_qcode(int conidx, const char *qcode, bool down){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"input_event_key_qcode");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,p)" ,conidx,&qcode,down);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_input_event_btn(int conidx, const char *btn, bool down){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"input_event_btn");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,p)" ,conidx,&btn,down);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_input_event_rel(int conidx, const char *axis, int value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"input_event_rel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,i)" ,conidx,&axis,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_input_event_abs(int conidx, const char *axis, int value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"input_event_abs");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,i)" ,conidx,&axis,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_input_event_sync(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"input_event_sync");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_input_mouse_mode(int absolute){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"input_mouse_mode");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,absolute);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sdl2_process_key(int sdl_scancode, int qcode, const char *action){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sdl2_process_key");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,b)" ,sdl_scancode,qcode,&action);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_spice_add_memslot(int qid, uint32_t slot_id, unsigned long virt_start, unsigned long virt_end, int async){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_spice_add_memslot");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,i)" ,qid,slot_id,async);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_spice_del_memslot(int qid, uint32_t gid, uint32_t slot_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_spice_del_memslot");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,qid,gid,slot_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_spice_create_primary_surface(int qid, uint32_t sid, void *surface, int async){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_spice_create_primary_surface");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,O&,i)" ,qid,sid,&surface,async);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_spice_destroy_primary_surface(int qid, uint32_t sid, int async){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_spice_destroy_primary_surface");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,i)" ,qid,sid,async);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_spice_wakeup(uint32_t qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_spice_wakeup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_spice_create_update(uint32_t left, uint32_t right, uint32_t top, uint32_t bottom){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_spice_create_update");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,left,right,top,bottom);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_spice_display_update(int qid, uint32_t x, uint32_t y, uint32_t w, uint32_t h){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_spice_display_update");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K,K)" ,qid,x,y,w,h);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_spice_display_surface(int qid, uint32_t w, uint32_t h, int fast){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_spice_display_surface");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,i)" ,qid,w,h,fast);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_spice_display_refresh(int qid, int notify){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_spice_display_refresh");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,qid,notify);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_spice_ui_info(int qid, uint32_t width, uint32_t height){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_spice_ui_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,qid,width,height);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_spice_gl_surface(int qid, uint32_t w, uint32_t h, uint32_t fourcc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_spice_gl_surface");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K)" ,qid,w,h,fourcc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_spice_gl_scanout_disable(int qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_spice_gl_scanout_disable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_spice_gl_scanout_texture(int qid, uint32_t w, uint32_t h, uint32_t fourcc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_spice_gl_scanout_texture");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K)" ,qid,w,h,fourcc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_spice_gl_cursor(int qid, bool enabled, bool hotspot){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_spice_gl_cursor");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,p,p)" ,qid,enabled,hotspot);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_spice_gl_forward_dmabuf(int qid, uint32_t width, uint32_t height){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_spice_gl_forward_dmabuf");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,qid,width,height);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_spice_gl_render_dmabuf(int qid, uint32_t width, uint32_t height){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_spice_gl_render_dmabuf");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,qid,width,height);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_spice_gl_update(int qid, uint32_t x, uint32_t y, uint32_t w, uint32_t h){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_spice_gl_update");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K,K)" ,qid,x,y,w,h);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_keymap_parse(const char *file){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"keymap_parse");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&file);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_keymap_add(int sym, int code, const char *line){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"keymap_add");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,b)" ,sym,code,&line);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_keymap_unmapped(int sym){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"keymap_unmapped");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,sym);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xkeymap_extension(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xkeymap_extension");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xkeymap_vendor(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xkeymap_vendor");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xkeymap_keycodes(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xkeymap_keycodes");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xkeymap_keymap(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xkeymap_keymap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vdagent_open(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vdagent_open");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vdagent_close(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vdagent_close");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vdagent_send(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vdagent_send");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vdagent_send_empty_clipboard(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vdagent_send_empty_clipboard");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vdagent_recv_chunk(uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vdagent_recv_chunk");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vdagent_recv_msg(const char *name, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vdagent_recv_msg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&name,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vdagent_peer_cap(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vdagent_peer_cap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vdagent_cb_grab_selection(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vdagent_cb_grab_selection");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vdagent_cb_grab_type(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vdagent_cb_grab_type");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vdagent_cb_serial_discard(uint32_t current, uint32_t received){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vdagent_cb_serial_discard");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,current,received);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dbus_registered_listener(const char *bus_name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dbus_registered_listener");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&bus_name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dbus_listener_vanished(const char *bus_name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dbus_listener_vanished");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&bus_name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dbus_kbd_press(unsigned int keycode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dbus_kbd_press");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,keycode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dbus_kbd_release(unsigned int keycode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dbus_kbd_release");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,keycode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dbus_mouse_press(unsigned int button){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dbus_mouse_press");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,button);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dbus_mouse_release(unsigned int button){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dbus_mouse_release");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,button);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dbus_mouse_set_pos(unsigned int x, unsigned int y){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dbus_mouse_set_pos");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I)" ,x,y);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dbus_mouse_rel_motion(int dx, int dy){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dbus_mouse_rel_motion");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,dx,dy);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dbus_update(int x, int y, int w, int h){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dbus_update");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,x,y,w,h);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dbus_clipboard_grab_failed(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dbus_clipboard_grab_failed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dbus_clipboard_register(const char *bus_name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dbus_clipboard_register");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&bus_name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dbus_clipboard_unregister(const char *bus_name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dbus_clipboard_unregister");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&bus_name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

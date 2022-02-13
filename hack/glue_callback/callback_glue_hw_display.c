
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_display.h"

void glue_jazz_led_read(uint64_t addr, uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"jazz_led_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_jazz_led_write(uint64_t addr, uint8_t new){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"jazz_led_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B)" ,addr,new);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xenfb_mouse_event(void *opaque, int dx, int dy, int dz, int button_state, int abs_pointer_wanted){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xenfb_mouse_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,i,i,i)" ,&opaque,dx,dy,dz,button_state,abs_pointer_wanted);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xenfb_key_event(void *opaque, int scancode, int button_state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xenfb_key_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&opaque,scancode,button_state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_xenfb_input_connected(void *xendev, int abs_pointer_wanted){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"xenfb_input_connected");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&xendev,abs_pointer_wanted);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_g364fb_read(uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"g364fb_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_g364fb_write(uint64_t addr, uint32_t new){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"g364fb_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,new);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmware_value_read(uint32_t index, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmware_value_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,index,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmware_value_write(uint32_t index, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmware_value_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,index,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmware_palette_read(uint32_t index, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmware_palette_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,index,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmware_palette_write(uint32_t index, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmware_palette_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,index,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmware_scratch_read(uint32_t index, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmware_scratch_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,index,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmware_scratch_write(uint32_t index, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmware_scratch_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,index,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmware_setmode(uint32_t w, uint32_t h, uint32_t bpp){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmware_setmode");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,w,h,bpp);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_features(bool virgl){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_features");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,virgl);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_cmd_get_display_info(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_cmd_get_display_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_cmd_get_edid(uint32_t scanout){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_cmd_get_edid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,scanout);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_cmd_set_scanout(uint32_t id, uint32_t res, uint32_t w, uint32_t h, uint32_t x, uint32_t y){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_cmd_set_scanout");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K,K)" ,id,res,w,h,x,y);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_cmd_set_scanout_blob(uint32_t id, uint32_t res, uint32_t w, uint32_t h, uint32_t x, uint32_t y){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_cmd_set_scanout_blob");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K,K)" ,id,res,w,h,x,y);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_cmd_res_create_2d(uint32_t res, uint32_t fmt, uint32_t w, uint32_t h){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_cmd_res_create_2d");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,res,fmt,w,h);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_cmd_res_create_3d(uint32_t res, uint32_t fmt, uint32_t w, uint32_t h, uint32_t d){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_cmd_res_create_3d");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K)" ,res,fmt,w,h,d);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_cmd_res_create_blob(uint32_t res, uint64_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_cmd_res_create_blob");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,res,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_cmd_res_unref(uint32_t res){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_cmd_res_unref");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,res);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_cmd_res_back_attach(uint32_t res){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_cmd_res_back_attach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,res);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_cmd_res_back_detach(uint32_t res){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_cmd_res_back_detach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,res);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_cmd_res_xfer_toh_2d(uint32_t res){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_cmd_res_xfer_toh_2d");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,res);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_cmd_res_xfer_toh_3d(uint32_t res){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_cmd_res_xfer_toh_3d");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,res);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_cmd_res_xfer_fromh_3d(uint32_t res){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_cmd_res_xfer_fromh_3d");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,res);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_cmd_res_flush(uint32_t res, uint32_t w, uint32_t h, uint32_t x, uint32_t y){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_cmd_res_flush");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K)" ,res,w,h,x,y);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_cmd_ctx_create(uint32_t ctx, const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_cmd_ctx_create");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b)" ,ctx,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_cmd_ctx_destroy(uint32_t ctx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_cmd_ctx_destroy");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ctx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_cmd_ctx_res_attach(uint32_t ctx, uint32_t res){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_cmd_ctx_res_attach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,ctx,res);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_cmd_ctx_res_detach(uint32_t ctx, uint32_t res){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_cmd_ctx_res_detach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,ctx,res);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_cmd_ctx_submit(uint32_t ctx, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_cmd_ctx_submit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,ctx,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_update_cursor(uint32_t scanout, uint32_t x, uint32_t y, const char *type, uint32_t res){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_update_cursor");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,b,K)" ,scanout,x,y,&type,res);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_fence_ctrl(uint64_t fence, uint32_t type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_fence_ctrl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,fence,type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virtio_gpu_fence_resp(uint64_t fence){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virtio_gpu_fence_resp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,fence);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_interface_set_mm_time(int qid, uint32_t mm_time){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_interface_set_mm_time");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,qid,mm_time);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_io_write_vga(int qid, const char *mode, uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_io_write_vga");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,K,K)" ,qid,&mode,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_create_guest_primary(int qid, uint32_t width, uint32_t height, uint64_t mem, uint32_t format, uint32_t position){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_create_guest_primary");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K,K,K)" ,qid,width,height,mem,format,position);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_create_guest_primary_rest(int qid, int32_t stride, uint32_t type, uint32_t flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_create_guest_primary_rest");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,l,K,K)" ,qid,stride,type,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_destroy_primary(int qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_destroy_primary");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_enter_vga_mode(int qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_enter_vga_mode");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_exit_vga_mode(int qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_exit_vga_mode");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_hard_reset(int qid, int64_t loadvm){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_hard_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,L)" ,qid,loadvm);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_interface_async_complete_io(int qid, uint32_t current_async, void *cookie){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_interface_async_complete_io");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,O&)" ,qid,current_async,&cookie);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_interface_attach_worker(int qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_interface_attach_worker");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_interface_get_init_info(int qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_interface_get_init_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_interface_set_compression_level(int qid, int64_t level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_interface_set_compression_level");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,L)" ,qid,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_interface_update_area_complete(int qid, uint32_t surface_id, uint32_t dirty_left, uint32_t dirty_right, uint32_t dirty_top, uint32_t dirty_bottom){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_interface_update_area_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K,K,K)" ,qid,surface_id,dirty_left,dirty_right,dirty_top,dirty_bottom);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_interface_update_area_complete_rest(int qid, uint32_t num_updated_rects){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_interface_update_area_complete_rest");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,qid,num_updated_rects);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_interface_update_area_complete_overflow(int qid, int max){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_interface_update_area_complete_overflow");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,qid,max);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_interface_update_area_complete_schedule_bh(int qid, uint32_t num_dirty){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_interface_update_area_complete_schedule_bh");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,qid,num_dirty);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_io_destroy_primary_ignored(int qid, const char *mode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_io_destroy_primary_ignored");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,qid,&mode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_io_log(int qid, const char *log_buf){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_io_log");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,qid,&log_buf);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_io_read_unexpected(int qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_io_read_unexpected");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_io_unexpected_vga_mode(int qid, uint64_t addr, uint64_t val, const char *desc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_io_unexpected_vga_mode");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,b)" ,qid,addr,val,&desc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_io_write(int qid, const char *mode, uint64_t addr, const char *aname, uint64_t val, unsigned size, int async){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_io_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,K,b,K,I,i)" ,qid,&mode,addr,&aname,val,size,async);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_memslot_add_guest(int qid, uint32_t slot_id, uint64_t guest_start, uint64_t guest_end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_memslot_add_guest");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K)" ,qid,slot_id,guest_start,guest_end);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_post_load(int qid, const char *mode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_post_load");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,qid,&mode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_pre_load(int qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_pre_load");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_pre_save(int qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_pre_save");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_reset_surfaces(int qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_reset_surfaces");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_ring_command_check(int qid, const char *mode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_ring_command_check");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,qid,&mode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_ring_command_get(int qid, const char *mode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_ring_command_get");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,qid,&mode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_ring_command_req_notification(int qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_ring_command_req_notification");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_ring_cursor_check(int qid, const char *mode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_ring_cursor_check");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,qid,&mode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_ring_cursor_get(int qid, const char *mode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_ring_cursor_get");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,qid,&mode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_ring_cursor_req_notification(int qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_ring_cursor_req_notification");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_ring_res_push(int qid, const char *mode, uint32_t surface_count, uint32_t free_res, void *last_release, const char *notify){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_ring_res_push");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,K,K,O&,b)" ,qid,&mode,surface_count,free_res,&last_release,&notify);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_ring_res_push_rest(int qid, uint32_t ring_has, uint32_t ring_size, uint32_t prod, uint32_t cons){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_ring_res_push_rest");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K,K)" ,qid,ring_has,ring_size,prod,cons);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_ring_res_put(int qid, uint32_t free_res){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_ring_res_put");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,qid,free_res);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_set_mode(int qid, int modenr, uint32_t x_res, uint32_t y_res, uint32_t bits, uint64_t devmem){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_set_mode");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,K,K,K)" ,qid,modenr,x_res,y_res,bits,devmem);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_soft_reset(int qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_soft_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_spice_destroy_surfaces_complete(int qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_spice_destroy_surfaces_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_spice_destroy_surfaces(int qid, int async){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_spice_destroy_surfaces");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,qid,async);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_spice_destroy_surface_wait_complete(int qid, uint32_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_spice_destroy_surface_wait_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,qid,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_spice_destroy_surface_wait(int qid, uint32_t id, int async){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_spice_destroy_surface_wait");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,i)" ,qid,id,async);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_spice_flush_surfaces_async(int qid, uint32_t surface_count, uint32_t num_free_res){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_spice_flush_surfaces_async");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,qid,surface_count,num_free_res);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_spice_monitors_config(int qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_spice_monitors_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_spice_loadvm_commands(int qid, void *ext, uint32_t count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_spice_loadvm_commands");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,O&,K)" ,qid,&ext,count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_spice_oom(int qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_spice_oom");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_spice_reset_cursor(int qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_spice_reset_cursor");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_spice_reset_image_cache(int qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_spice_reset_image_cache");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_spice_reset_memslots(int qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_spice_reset_memslots");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_spice_update_area(int qid, uint32_t surface_id, uint32_t left, uint32_t right, uint32_t top, uint32_t bottom){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_spice_update_area");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K,K,K)" ,qid,surface_id,left,right,top,bottom);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_spice_update_area_rest(int qid, uint32_t num_dirty_rects, uint32_t clear_dirty_region){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_spice_update_area_rest");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,qid,num_dirty_rects,clear_dirty_region);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_surfaces_dirty(int qid, uint64_t offset, uint64_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_surfaces_dirty");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K)" ,qid,offset,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_send_events(int qid, uint32_t events){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_send_events");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,qid,events);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_send_events_vm_stopped(int qid, uint32_t events){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_send_events_vm_stopped");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,qid,events);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_set_guest_bug(int qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_set_guest_bug");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_interrupt_client_monitors_config(int qid, int num_heads, void *heads){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_interrupt_client_monitors_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,O&)" ,qid,num_heads,&heads);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_client_monitors_config_unsupported_by_guest(int qid, uint32_t int_mask, void *client_monitors_config){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_client_monitors_config_unsupported_by_guest");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,O&)" ,qid,int_mask,&client_monitors_config);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_client_monitors_config_unsupported_by_device(int qid, int revision){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_client_monitors_config_unsupported_by_device");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,qid,revision);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_client_monitors_config_capped(int qid, int requested, int limit){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_client_monitors_config_capped");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,qid,requested,limit);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_client_monitors_config_crc(int qid, unsigned size, uint32_t crc32){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_client_monitors_config_crc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,I,K)" ,qid,size,crc32);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_set_client_capabilities_unsupported_by_revision(int qid, int revision){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_set_client_capabilities_unsupported_by_revision");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,qid,revision);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_render_blit(int32_t stride, int32_t left, int32_t right, int32_t top, int32_t bottom){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_render_blit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(l,l,l,l,l)" ,stride,left,right,top,bottom);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_render_guest_primary_resized(int32_t width, int32_t height, int32_t stride, int32_t bytes_pp, int32_t bits_pp){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_render_guest_primary_resized");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(l,l,l,l,l)" ,width,height,stride,bytes_pp,bits_pp);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qxl_render_update_area_done(void *cookie){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qxl_render_update_area_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&cookie);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vga_std_read_io(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vga_std_read_io");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vga_std_write_io(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vga_std_write_io");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vga_vbe_read(uint32_t index, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vga_vbe_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,index,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vga_vbe_write(uint32_t index, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vga_vbe_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,index,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vga_cirrus_read_io(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vga_cirrus_read_io");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vga_cirrus_write_io(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vga_cirrus_write_io");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vga_cirrus_write_blt(uint32_t offset, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vga_cirrus_write_blt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vga_cirrus_write_gr(uint8_t index, uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vga_cirrus_write_gr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,index,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vga_cirrus_bitblt_start(uint8_t blt_rop, uint8_t blt_mode, uint8_t blt_modeext, int blt_width, int blt_height, int blt_dstpitch, int blt_srcpitch, uint32_t blt_dstaddr, uint32_t blt_srcaddr, uint8_t gr_val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vga_cirrus_bitblt_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B,i,i,i,i,K,K,B)" ,blt_rop,blt_mode,blt_modeext,blt_width,blt_height,blt_dstpitch,blt_srcpitch,blt_dstaddr,blt_srcaddr,gr_val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sii9022_read_reg(uint8_t addr, uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sii9022_read_reg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sii9022_write_reg(uint8_t addr, uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sii9022_write_reg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sii9022_switch_mode(const char *mode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sii9022_switch_mode");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&mode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ati_mm_read(unsigned int size, uint64_t addr, const char *name, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ati_mm_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,K,b,K)" ,size,addr,&name,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ati_mm_write(unsigned int size, uint64_t addr, const char *name, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ati_mm_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,K,b,K)" ,size,addr,&name,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_artist_reg_read(unsigned int size, uint64_t addr, const char *name, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"artist_reg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,K,b,K)" ,size,addr,&name,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_artist_reg_write(unsigned int size, uint64_t addr, const char *name, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"artist_reg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,K,b,K)" ,size,addr,&name,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_artist_vram_read(unsigned int size, uint64_t addr, int posx, int posy, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"artist_vram_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,K,i,i,K)" ,size,addr,posx,posy,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_artist_vram_write(unsigned int size, uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"artist_vram_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,K,K)" ,size,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_artist_fill_window(unsigned int start_x, unsigned int start_y, unsigned int width, unsigned int height, uint32_t op, uint32_t ctlpln){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"artist_fill_window");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I,I,I,K,K)" ,start_x,start_y,width,height,op,ctlpln);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_artist_block_move(unsigned int start_x, unsigned int start_y, unsigned int dest_x, unsigned int dest_y, unsigned int width, unsigned int height){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"artist_block_move");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I,I,I,I,I)" ,start_x,start_y,dest_x,dest_y,width,height);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_artist_draw_line(unsigned int start_x, unsigned int start_y, unsigned int end_x, unsigned int end_y){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"artist_draw_line");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I,I,I)" ,start_x,start_y,end_x,end_y);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cg3_read(uint32_t addr, uint32_t val, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cg3_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,addr,val,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cg3_write(uint32_t addr, uint32_t val, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cg3_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,addr,val,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dpcd_read(uint32_t addr, uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dpcd_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dpcd_write(uint32_t addr, uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dpcd_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sm501_system_config_read(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sm501_system_config_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sm501_system_config_write(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sm501_system_config_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sm501_i2c_read(uint32_t addr, uint8_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sm501_i2c_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sm501_i2c_write(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sm501_i2c_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sm501_palette_read(uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sm501_palette_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sm501_palette_write(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sm501_palette_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sm501_disp_ctrl_read(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sm501_disp_ctrl_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sm501_disp_ctrl_write(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sm501_disp_ctrl_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sm501_2d_engine_read(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sm501_2d_engine_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sm501_2d_engine_write(uint32_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sm501_2d_engine_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_macfb_ctrl_read(uint64_t addr, uint64_t value, unsigned int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"macfb_ctrl_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,addr,value,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_macfb_ctrl_write(uint64_t addr, uint64_t value, unsigned int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"macfb_ctrl_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,addr,value,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_macfb_sense_read(uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"macfb_sense_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_macfb_sense_write(uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"macfb_sense_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_macfb_update_mode(uint32_t width, uint32_t height, uint8_t depth){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"macfb_update_mode");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,B)" ,width,height,depth);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

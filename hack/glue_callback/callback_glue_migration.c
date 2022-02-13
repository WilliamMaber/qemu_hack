
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_migration.h"

void glue_qemu_loadvm_state_section(unsigned int section_type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_loadvm_state_section");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,section_type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_loadvm_state_section_command(int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_loadvm_state_section_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_loadvm_state_section_partend(uint32_t section_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_loadvm_state_section_partend");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,section_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_loadvm_state_post_main(int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_loadvm_state_post_main");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_loadvm_state_section_startfull(uint32_t section_id, const char *idstr, uint32_t instance_id, uint32_t version_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_loadvm_state_section_startfull");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K,K)" ,section_id,&idstr,instance_id,version_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_savevm_send_packaged(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_savevm_send_packaged");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_loadvm_state_setup(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"loadvm_state_setup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_loadvm_state_cleanup(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"loadvm_state_cleanup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_loadvm_handle_cmd_packaged(unsigned int length){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"loadvm_handle_cmd_packaged");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,length);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_loadvm_handle_cmd_packaged_main(int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"loadvm_handle_cmd_packaged_main");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_loadvm_handle_cmd_packaged_received(int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"loadvm_handle_cmd_packaged_received");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_loadvm_handle_recv_bitmap(char *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"loadvm_handle_recv_bitmap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_loadvm_postcopy_handle_advise(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"loadvm_postcopy_handle_advise");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_loadvm_postcopy_handle_listen(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"loadvm_postcopy_handle_listen");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_loadvm_postcopy_handle_run(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"loadvm_postcopy_handle_run");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_loadvm_postcopy_handle_run_cpu_sync(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"loadvm_postcopy_handle_run_cpu_sync");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_loadvm_postcopy_handle_run_vmstart(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"loadvm_postcopy_handle_run_vmstart");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_loadvm_postcopy_handle_resume(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"loadvm_postcopy_handle_resume");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_loadvm_postcopy_ram_handle_discard(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"loadvm_postcopy_ram_handle_discard");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_loadvm_postcopy_ram_handle_discard_end(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"loadvm_postcopy_ram_handle_discard_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_loadvm_postcopy_ram_handle_discard_header(const char *ramid, uint16_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"loadvm_postcopy_ram_handle_discard_header");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&ramid,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_loadvm_process_command(uint16_t com, uint16_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"loadvm_process_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,com,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_loadvm_process_command_ping(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"loadvm_process_command_ping");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_ram_listen_thread_exit(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_ram_listen_thread_exit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_ram_listen_thread_start(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_ram_listen_thread_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_savevm_send_postcopy_advise(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_savevm_send_postcopy_advise");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_savevm_send_postcopy_ram_discard(const char *id, uint16_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_savevm_send_postcopy_ram_discard");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&id,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_savevm_command_send(uint16_t command, uint16_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"savevm_command_send");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,command,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_savevm_section_start(const char *id, unsigned int section_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"savevm_section_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,I)" ,&id,section_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_savevm_section_end(const char *id, unsigned int section_id, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"savevm_section_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,I,i)" ,&id,section_id,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_savevm_section_skip(const char *id, unsigned int section_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"savevm_section_skip");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,I)" ,&id,section_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_savevm_send_open_return_path(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"savevm_send_open_return_path");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_savevm_send_ping(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"savevm_send_ping");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_savevm_send_postcopy_listen(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"savevm_send_postcopy_listen");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_savevm_send_postcopy_run(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"savevm_send_postcopy_run");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_savevm_send_postcopy_resume(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"savevm_send_postcopy_resume");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_savevm_send_colo_enable(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"savevm_send_colo_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_savevm_send_recv_bitmap(char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"savevm_send_recv_bitmap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_savevm_state_setup(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"savevm_state_setup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_savevm_state_resume_prepare(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"savevm_state_resume_prepare");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_savevm_state_header(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"savevm_state_header");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_savevm_state_iterate(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"savevm_state_iterate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_savevm_state_cleanup(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"savevm_state_cleanup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_savevm_state_complete_precopy(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"savevm_state_complete_precopy");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmstate_save(const char *idstr, const char *vmsd_name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmstate_save");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&idstr,&vmsd_name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmstate_load(const char *idstr, const char *vmsd_name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmstate_load");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&idstr,&vmsd_name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_pause_incoming(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_pause_incoming");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_pause_incoming_continued(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_pause_incoming_continued");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_page_req_sync(void *host_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_page_req_sync");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&host_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmstate_load_field_error(const char *field, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmstate_load_field_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&field,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmstate_load_state(const char *name, int version_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmstate_load_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,version_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmstate_load_state_end(const char *name, const char *reason, int val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmstate_load_state_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,i)" ,&name,&reason,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmstate_load_state_field(const char *name, const char *field){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmstate_load_state_field");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&name,&field);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmstate_n_elems(const char *name, int n_elems){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmstate_n_elems");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,n_elems);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmstate_subsection_load(const char *parent){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmstate_subsection_load");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&parent);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmstate_subsection_load_bad(const char *parent,  const char *sub, const char *sub2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmstate_subsection_load_bad");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,b)" ,&parent,&sub,&sub2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmstate_subsection_load_good(const char *parent){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmstate_subsection_load_good");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&parent);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmstate_save_state_pre_save_res(const char *name, int res){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmstate_save_state_pre_save_res");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,res);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmstate_save_state_loop(const char *name, const char *field, int n_elems){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmstate_save_state_loop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,i)" ,&name,&field,n_elems);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmstate_save_state_top(const char *idstr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmstate_save_state_top");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&idstr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmstate_subsection_save_loop(const char *name, const char *sub){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmstate_subsection_save_loop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&name,&sub);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vmstate_subsection_save_top(const char *idstr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vmstate_subsection_save_top");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&idstr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_get_qtailq(const char *name, int version_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"get_qtailq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,version_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_get_qtailq_end(const char *name, const char *reason, int val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"get_qtailq_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,i)" ,&name,&reason,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_put_qtailq(const char *name, int version_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"put_qtailq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,version_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_put_qtailq_end(const char *name, const char *reason){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"put_qtailq_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&name,&reason);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_get_gtree(const char *field_name, const char *key_vmsd_name, const char *val_vmsd_name, uint32_t nnodes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"get_gtree");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,b,K)" ,&field_name,&key_vmsd_name,&val_vmsd_name,nnodes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_get_gtree_end(const char *field_name, const char *key_vmsd_name, const char *val_vmsd_name, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"get_gtree_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,b,i)" ,&field_name,&key_vmsd_name,&val_vmsd_name,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_put_gtree(const char *field_name, const char *key_vmsd_name, const char *val_vmsd_name, uint32_t nnodes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"put_gtree");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,b,K)" ,&field_name,&key_vmsd_name,&val_vmsd_name,nnodes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_put_gtree_end(const char *field_name, const char *key_vmsd_name, const char *val_vmsd_name, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"put_gtree_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,b,i)" ,&field_name,&key_vmsd_name,&val_vmsd_name,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_get_qlist(const char *field_name, const char *vmsd_name, int version_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"get_qlist");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,i)" ,&field_name,&vmsd_name,version_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_get_qlist_end(const char *field_name, const char *vmsd_name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"get_qlist_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&field_name,&vmsd_name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_put_qlist(const char *field_name, const char *vmsd_name, int version_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"put_qlist");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,i)" ,&field_name,&vmsd_name,version_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_put_qlist_end(const char *field_name, const char *vmsd_name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"put_qlist_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&field_name,&vmsd_name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_file_fclose(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_file_fclose");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_get_queued_page(const char *block_name, uint64_t tmp_offset, unsigned long page_abs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"get_queued_page");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&block_name,tmp_offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_get_queued_page_not_dirty(const char *block_name, uint64_t tmp_offset, unsigned long page_abs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"get_queued_page_not_dirty");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&block_name,tmp_offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_bitmap_sync_start(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_bitmap_sync_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_bitmap_sync_end(uint64_t dirty_pages){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_bitmap_sync_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,dirty_pages);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_bitmap_clear_dirty(char *str, uint64_t start, uint64_t size, unsigned long page){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_bitmap_clear_dirty");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&str,start,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_throttle(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_throttle");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ram_discard_range(const char *rbname, uint64_t start, size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ram_discard_range");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,i)" ,&rbname,start,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ram_load_loop(const char *rbname, uint64_t addr, int flags, void *host){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ram_load_loop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,i,O&)" ,&rbname,addr,flags,&host);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ram_load_postcopy_loop(uint64_t addr, int flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ram_load_postcopy_loop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,addr,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ram_postcopy_send_discard_bitmap(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ram_postcopy_send_discard_bitmap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ram_save_page(const char *rbname, uint64_t offset, void *host){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ram_save_page");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,O&)" ,&rbname,offset,&host);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ram_save_queue_pages(const char *rbname, size_t start, size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ram_save_queue_pages");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&rbname,start,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ram_dirty_bitmap_request(char *str){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ram_dirty_bitmap_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&str);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ram_dirty_bitmap_reload_begin(char *str){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ram_dirty_bitmap_reload_begin");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&str);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ram_dirty_bitmap_reload_complete(char *str){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ram_dirty_bitmap_reload_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&str);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ram_dirty_bitmap_sync_start(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ram_dirty_bitmap_sync_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ram_dirty_bitmap_sync_wait(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ram_dirty_bitmap_sync_wait");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ram_dirty_bitmap_sync_complete(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ram_dirty_bitmap_sync_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ram_state_resume_prepare(uint64_t v){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ram_state_resume_prepare");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,v);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_colo_flush_ram_cache_begin(uint64_t dirty_pages){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"colo_flush_ram_cache_begin");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,dirty_pages);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_colo_flush_ram_cache_end(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"colo_flush_ram_cache_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_save_xbzrle_page_skipping(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"save_xbzrle_page_skipping");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_save_xbzrle_page_overflow(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"save_xbzrle_page_overflow");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ram_save_iterate_big_wait(uint64_t milliconds, int iterations){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ram_save_iterate_big_wait");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,milliconds,iterations);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ram_load_complete(int ret, uint64_t seq_iter){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ram_load_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,ret,seq_iter);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ram_write_tracking_ramblock_start(const char *block_id, size_t page_size, void *addr, size_t length){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ram_write_tracking_ramblock_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,O&,i)" ,&block_id,page_size,&addr,length);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ram_write_tracking_ramblock_stop(const char *block_id, size_t page_size, void *addr, size_t length){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ram_write_tracking_ramblock_stop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,O&,i)" ,&block_id,page_size,&addr,length);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_new_send_channel_async(uint8_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_new_send_channel_async");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_recv(uint8_t id, uint64_t packet_num, uint32_t used, uint32_t flags, uint32_t next_packet_size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_recv");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,K,K,K)" ,id,packet_num,used,flags,next_packet_size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_recv_new_channel(uint8_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_recv_new_channel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_recv_sync_main(long packet_num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_recv_sync_main");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_recv_sync_main_signal(uint8_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_recv_sync_main_signal");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_recv_sync_main_wait(uint8_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_recv_sync_main_wait");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_recv_terminate_threads(bool error){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_recv_terminate_threads");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,error);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_recv_thread_end(uint8_t id, uint64_t packets, uint64_t pages){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_recv_thread_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,K)" ,id,packets,pages);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_recv_thread_start(uint8_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_recv_thread_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_send(uint8_t id, uint64_t packet_num, uint32_t used, uint32_t flags, uint32_t next_packet_size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_send");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,K,K,K)" ,id,packet_num,used,flags,next_packet_size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_send_error(uint8_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_send_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_send_sync_main(long packet_num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_send_sync_main");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_send_sync_main_signal(uint8_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_send_sync_main_signal");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_send_sync_main_wait(uint8_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_send_sync_main_wait");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_send_terminate_threads(bool error){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_send_terminate_threads");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,error);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_send_thread_end(uint8_t id, uint64_t packets, uint64_t pages){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_send_thread_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,K)" ,id,packets,pages);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_send_thread_start(uint8_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_send_thread_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_tls_outgoing_handshake_start(void *ioc, void *tioc, const char *hostname){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_tls_outgoing_handshake_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,b)" ,&ioc,&tioc,&hostname);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_tls_outgoing_handshake_error(void *ioc, const char *err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_tls_outgoing_handshake_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&ioc,&err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_tls_outgoing_handshake_complete(void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_tls_outgoing_handshake_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_multifd_set_outgoing_channel(void *ioc, const char *ioctype, const char *hostname, void *err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multifd_set_outgoing_channel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,b,O&)" ,&ioc,&ioctype,&hostname,&err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_await_return_path_close_on_source_close(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"await_return_path_close_on_source_close");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_await_return_path_close_on_source_joining(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"await_return_path_close_on_source_joining");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migrate_set_state(const char *new_state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migrate_set_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&new_state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migrate_fd_cleanup(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migrate_fd_cleanup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migrate_fd_error(const char *error_desc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migrate_fd_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&error_desc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migrate_fd_cancel(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migrate_fd_cancel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migrate_handle_rp_req_pages(const char *rbname, size_t start, size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migrate_handle_rp_req_pages");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&rbname,start,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migrate_pending(uint64_t size, uint64_t max, uint64_t pre, uint64_t compat, uint64_t post){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migrate_pending");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K)" ,size,max,pre,compat,post);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migrate_send_rp_message(int msg_type, uint16_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migrate_send_rp_message");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,msg_type,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migrate_send_rp_recv_bitmap(char *name, int64_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migrate_send_rp_recv_bitmap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,L)" ,&name,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_completion_file_err(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_completion_file_err");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_completion_vm_stop(int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_completion_vm_stop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_completion_postcopy_end(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_completion_postcopy_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_completion_postcopy_end_after_complete(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_completion_postcopy_end_after_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_rate_limit_pre(int ms){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_rate_limit_pre");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,ms);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_rate_limit_post(int urgent){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_rate_limit_post");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,urgent);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_return_path_end_before(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_return_path_end_before");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_return_path_end_after(int rp_error){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_return_path_end_after");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,rp_error);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_thread_after_loop(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_thread_after_loop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_thread_file_err(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_thread_file_err");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_thread_setup_complete(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_thread_setup_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_open_return_path_on_source(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"open_return_path_on_source");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_open_return_path_on_source_continue(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"open_return_path_on_source_continue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_start(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_pause_return_path(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_pause_return_path");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_pause_return_path_continued(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_pause_return_path_continued");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_pause_continued(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_pause_continued");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_start_set_run(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_start_set_run");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_page_req_add(void *addr, int count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_page_req_add");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&addr,count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_source_return_path_thread_bad_end(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"source_return_path_thread_bad_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_source_return_path_thread_end(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"source_return_path_thread_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_source_return_path_thread_entry(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"source_return_path_thread_entry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_source_return_path_thread_loop_top(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"source_return_path_thread_loop_top");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_source_return_path_thread_pong(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"source_return_path_thread_pong");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_source_return_path_thread_shut(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"source_return_path_thread_shut");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_source_return_path_thread_resume_ack(uint32_t v){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"source_return_path_thread_resume_ack");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,v);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_thread_low_pending(uint64_t pending){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_thread_low_pending");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,pending);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migrate_transferred(uint64_t tranferred, uint64_t time_spent, uint64_t bandwidth, uint64_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migrate_transferred");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,tranferred,time_spent,bandwidth,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_process_incoming_migration_co_end(int ret, int ps){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"process_incoming_migration_co_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,ret,ps);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_process_incoming_migration_co_postcopy_end_main(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"process_incoming_migration_co_postcopy_end_main");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_set_incoming_channel(void *ioc, const char *ioctype){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_set_incoming_channel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&ioc,&ioctype);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_set_outgoing_channel(void *ioc, const char *ioctype, const char *hostname, void *err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_set_outgoing_channel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,b,O&)" ,&ioc,&ioctype,&hostname,&err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migrate_state_too_big(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migrate_state_too_big");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migrate_global_state_post_load(const char *state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migrate_global_state_post_load");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migrate_global_state_pre_save(const char *state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migrate_global_state_pre_save");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_accept_incoming_migration(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_accept_incoming_migration");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_accept_incoming_migration_accepted(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_accept_incoming_migration_accepted");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_accept_pin_state(bool pin){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_accept_pin_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,pin);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_accept_pin_verbsc(void *verbs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_accept_pin_verbsc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&verbs);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_block_for_wrid_miss(const char *wcompstr, int wcomp, const char *gcompstr, uint64_t req){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_block_for_wrid_miss");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,b,K)" ,&wcompstr,wcomp,&gcompstr,req);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_cleanup_disconnect(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_cleanup_disconnect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_close(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_close");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_connect_pin_all_requested(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_connect_pin_all_requested");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_connect_pin_all_outcome(bool pin){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_connect_pin_all_outcome");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(p)" ,pin);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_dest_init_trying(const char *host, const char *ip){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_dest_init_trying");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&host,&ip);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_dump_gid(const char *who, const char *src, const char *dst){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_dump_gid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,b)" ,&who,&src,&dst);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_exchange_get_response_start(const char *desc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_exchange_get_response_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&desc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_exchange_get_response_none(const char *desc, int type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_exchange_get_response_none");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&desc,type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_exchange_send_issue_callback(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_exchange_send_issue_callback");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_exchange_send_waiting(const char *desc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_exchange_send_waiting");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&desc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_exchange_send_received(const char *desc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_exchange_send_received");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&desc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_fill(size_t control_len, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_fill");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,control_len,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_init_ram_blocks(int blocks){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_init_ram_blocks");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,blocks);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_poll_recv(const char *compstr, int64_t comp, int64_t id, int sent){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_poll_recv");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,L,L,i)" ,&compstr,comp,id,sent);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_poll_write(const char *compstr, int64_t comp, int left, uint64_t block, uint64_t chunk, void *local, void *remote){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_poll_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,L,i,K,K,O&,O&)" ,&compstr,comp,left,block,chunk,&local,&remote);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_poll_other(const char *compstr, int64_t comp, int left){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_poll_other");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,L,i)" ,&compstr,comp,left);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_post_send_control(const char *desc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_post_send_control");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&desc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_register_and_get_keys(uint64_t len, void *start){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_register_and_get_keys");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,O&)" ,len,&start);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_register_odp_mr(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_register_odp_mr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_advise_mr(const char *name, uint32_t len, uint64_t addr, const char *res){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_advise_mr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,b)" ,&name,len,addr,&res);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_registration_handle_compress(int64_t length, int index, int64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_registration_handle_compress");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(L,i,L)" ,length,index,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_registration_handle_finished(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_registration_handle_finished");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_registration_handle_ram_blocks(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_registration_handle_ram_blocks");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_registration_handle_ram_blocks_loop(const char *name, uint64_t offset, uint64_t length, void *local_host_addr, unsigned int src_index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_registration_handle_ram_blocks_loop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,O&,I)" ,&name,offset,length,&local_host_addr,src_index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_registration_handle_register(int requests){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_registration_handle_register");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,requests);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_registration_handle_register_loop(int req, int index, uint64_t addr, uint64_t chunks){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_registration_handle_register_loop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,K)" ,req,index,addr,chunks);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_registration_handle_register_rkey(int rkey){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_registration_handle_register_rkey");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,rkey);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_registration_handle_unregister(int requests){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_registration_handle_unregister");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,requests);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_registration_handle_unregister_loop(int count, int index, uint64_t chunk){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_registration_handle_unregister_loop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K)" ,count,index,chunk);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_registration_handle_unregister_success(uint64_t chunk){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_registration_handle_unregister_success");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,chunk);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_registration_handle_wait(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_registration_handle_wait");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_registration_start(uint64_t flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_registration_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_registration_stop(uint64_t flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_registration_stop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_registration_stop_ram(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_registration_stop_ram");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_resolve_host_trying(const char *host, const char *ip){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_resolve_host_trying");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&host,&ip);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_signal_unregister_append(uint64_t chunk, int pos){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_signal_unregister_append");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,chunk,pos);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_signal_unregister_already(uint64_t chunk){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_signal_unregister_already");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,chunk);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_unregister_waiting_inflight(uint64_t chunk){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_unregister_waiting_inflight");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,chunk);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_unregister_waiting_proc(uint64_t chunk, int pos){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_unregister_waiting_proc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,chunk,pos);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_unregister_waiting_send(uint64_t chunk){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_unregister_waiting_send");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,chunk);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_unregister_waiting_complete(uint64_t chunk){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_unregister_waiting_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,chunk);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_write_flush(int sent){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_write_flush");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,sent);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_write_one_block(int count, int block, uint64_t chunk, uint64_t current, uint64_t len, int nb_sent, int nb_chunks){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_write_one_block");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,K,K,i,i)" ,count,block,chunk,current,len,nb_sent,nb_chunks);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_write_one_post(uint64_t chunk, long addr, long remote, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_write_one_post");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,chunk,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_write_one_queue_full(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_write_one_queue_full");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_write_one_recvregres(int mykey, int theirkey, uint64_t chunk){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_write_one_recvregres");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K)" ,mykey,theirkey,chunk);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_write_one_sendreg(uint64_t chunk, int len, int index, int64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_write_one_sendreg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i,L)" ,chunk,len,index,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_write_one_top(uint64_t chunks, uint64_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_write_one_top");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,chunks,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_rdma_write_one_zero(uint64_t chunk, int len, int index, int64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_rdma_write_one_zero");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i,L)" ,chunk,len,index,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_add_block(const char *block_name, int block, uint64_t addr, uint64_t offset, uint64_t len, uint64_t end, uint64_t bits, int chunks){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_add_block");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,K,K,K,K,K,i)" ,&block_name,block,addr,offset,len,end,bits,chunks);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_block_notification_handle(const char *name, int index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_block_notification_handle");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_delete_block(void *block, uint64_t addr, uint64_t offset, uint64_t len, uint64_t end, uint64_t bits, int chunks){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_delete_block");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K,K,K,i)" ,&block,addr,offset,len,end,bits,chunks);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_start_incoming_migration(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_start_incoming_migration");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_start_incoming_migration_after_dest_init(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_start_incoming_migration_after_dest_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_start_incoming_migration_after_rdma_listen(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_start_incoming_migration_after_rdma_listen");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_start_outgoing_migration_after_rdma_connect(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_start_outgoing_migration_after_rdma_connect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_rdma_start_outgoing_migration_after_rdma_source_init(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"rdma_start_outgoing_migration_after_rdma_source_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_discard_send_finish(const char *ramblock, int nwords, int ncmds){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_discard_send_finish");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&ramblock,nwords,ncmds);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_discard_send_range(const char *ramblock, unsigned long start, unsigned long length){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_discard_send_range");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&ramblock);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_cleanup_range(const char *ramblock, void *host_addr, size_t offset, size_t length){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_cleanup_range");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,O&,i,i)" ,&ramblock,&host_addr,offset,length);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_init_range(const char *ramblock, void *host_addr, size_t offset, size_t length){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_init_range");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,O&,i,i)" ,&ramblock,&host_addr,offset,length);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_nhp_range(const char *ramblock, void *host_addr, size_t offset, size_t length){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_nhp_range");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,O&,i,i)" ,&ramblock,&host_addr,offset,length);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_place_page(void *host_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_place_page");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&host_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_place_page_zero(void *host_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_place_page_zero");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&host_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_ram_enable_notify(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_ram_enable_notify");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mark_postcopy_blocktime_begin(uint64_t addr, void *dd, uint32_t time, int cpu, int received){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mark_postcopy_blocktime_begin");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,O&,K,i,i)" ,addr,&dd,time,cpu,received);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mark_postcopy_blocktime_end(uint64_t addr, void *dd, uint32_t time, int affected_cpu){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mark_postcopy_blocktime_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,O&,K,i)" ,addr,&dd,time,affected_cpu);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_pause_fault_thread(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_pause_fault_thread");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_pause_fault_thread_continued(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_pause_fault_thread_continued");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_ram_fault_thread_entry(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_ram_fault_thread_entry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_ram_fault_thread_exit(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_ram_fault_thread_exit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_ram_fault_thread_fds_core(int baseufd, int quitfd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_ram_fault_thread_fds_core");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,baseufd,quitfd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_ram_fault_thread_fds_extra(size_t index, const char *name, int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_ram_fault_thread_fds_extra");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,i)" ,index,&name,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_ram_fault_thread_quit(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_ram_fault_thread_quit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_ram_fault_thread_request(uint64_t hostaddr, const char *ramblock, size_t offset, uint32_t pid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_ram_fault_thread_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,i,K)" ,hostaddr,&ramblock,offset,pid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_ram_incoming_cleanup_closeuf(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_ram_incoming_cleanup_closeuf");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_ram_incoming_cleanup_entry(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_ram_incoming_cleanup_entry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_ram_incoming_cleanup_exit(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_ram_incoming_cleanup_exit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_ram_incoming_cleanup_join(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_ram_incoming_cleanup_join");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_ram_incoming_cleanup_blocktime(uint64_t total){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_ram_incoming_cleanup_blocktime");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,total);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_request_shared_page(const char *sharer, const char *rb, uint64_t rb_offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_request_shared_page");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,K)" ,&sharer,&rb,rb_offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_request_shared_page_present(const char *sharer, const char *rb, uint64_t rb_offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_request_shared_page_present");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,K)" ,&sharer,&rb,rb_offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_wake_shared(uint64_t client_addr, const char *rb){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_wake_shared");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b)" ,client_addr,&rb);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_postcopy_page_req_del(void *addr, int count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"postcopy_page_req_del");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&addr,count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_get_mem_fault_cpu_index(int cpu, uint32_t pid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"get_mem_fault_cpu_index");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,cpu,pid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_exec_outgoing(const char *cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_exec_outgoing");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_exec_incoming(const char *cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_exec_incoming");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_fd_outgoing(int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_fd_outgoing");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_fd_incoming(int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_fd_incoming");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_socket_incoming_accepted(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_socket_incoming_accepted");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_socket_outgoing_connected(const char *hostname){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_socket_outgoing_connected");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&hostname);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_socket_outgoing_error(const char *err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_socket_outgoing_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_tls_outgoing_handshake_start(const char *hostname){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_tls_outgoing_handshake_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&hostname);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_tls_outgoing_handshake_error(const char *err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_tls_outgoing_handshake_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_tls_outgoing_handshake_complete(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_tls_outgoing_handshake_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_tls_incoming_handshake_start(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_tls_incoming_handshake_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_tls_incoming_handshake_error(const char *err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_tls_incoming_handshake_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_tls_incoming_handshake_complete(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_tls_incoming_handshake_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_colo_vm_state_change(const char *old, const char *new){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"colo_vm_state_change");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&old,&new);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_colo_send_message(const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"colo_send_message");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_colo_receive_message(const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"colo_receive_message");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_colo_failover_set_state(const char *new_state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"colo_failover_set_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&new_state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_send_bitmap_header_enter(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"send_bitmap_header_enter");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_send_bitmap_bits(uint32_t flags, uint64_t start_sector, uint32_t nr_sectors, uint64_t data_size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"send_bitmap_bits");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K)" ,flags,start_sector,nr_sectors,data_size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dirty_bitmap_save_iterate(int in_postcopy){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dirty_bitmap_save_iterate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,in_postcopy);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dirty_bitmap_save_complete_enter(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dirty_bitmap_save_complete_enter");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dirty_bitmap_save_complete_finish(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dirty_bitmap_save_complete_finish");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dirty_bitmap_save_pending(uint64_t pending, uint64_t max_size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dirty_bitmap_save_pending");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,pending,max_size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dirty_bitmap_load_complete(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dirty_bitmap_load_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dirty_bitmap_load_bits_enter(uint64_t first_sector, uint32_t nr_sectors){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dirty_bitmap_load_bits_enter");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,first_sector,nr_sectors);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dirty_bitmap_load_bits_zeroes(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dirty_bitmap_load_bits_zeroes");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dirty_bitmap_load_header(uint32_t flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dirty_bitmap_load_header");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dirty_bitmap_load_enter(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dirty_bitmap_load_enter");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dirty_bitmap_load_success(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dirty_bitmap_load_success");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dirtyrate_set_state(const char *new_state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dirtyrate_set_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&new_state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_query_dirty_rate_info(const char *new_state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"query_dirty_rate_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&new_state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_get_ramblock_vfn_hash(const char *idstr, uint64_t vfn, uint32_t crc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"get_ramblock_vfn_hash");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&idstr,vfn,crc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_calc_page_dirty_rate(const char *idstr, uint32_t new_crc, uint32_t old_crc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"calc_page_dirty_rate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&idstr,new_crc,old_crc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_skip_sample_ramblock(const char *idstr, uint64_t ramblock_size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"skip_sample_ramblock");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&idstr,ramblock_size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_find_page_matched(const char *idstr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"find_page_matched");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&idstr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dirtyrate_calculate(int64_t dirtyrate){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dirtyrate_calculate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(L)" ,dirtyrate);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dirtyrate_do_calculate_vcpu(int idx, uint64_t rate){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dirtyrate_do_calculate_vcpu");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,idx,rate);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_block_init_shared(const char *blk_device_name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_block_init_shared");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&blk_device_name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_block_init_full(const char *blk_device_name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_block_init_full");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&blk_device_name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_block_save_device_dirty(int64_t sector){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_block_save_device_dirty");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(L)" ,sector);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_block_flush_blks(const char *action, int submitted, int read_done, int transferred){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_block_flush_blks");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i,i)" ,&action,submitted,read_done,transferred);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_block_save(const char *mig_stage, int submitted, int transferred){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_block_save");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&mig_stage,submitted,transferred);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_block_save_complete(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_block_save_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_block_save_pending(uint64_t pending){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_block_save_pending");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,pending);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_pagecache_init(int64_t max_num_items){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_pagecache_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(L)" ,max_num_items);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_migration_pagecache_insert(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"migration_pagecache_insert");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

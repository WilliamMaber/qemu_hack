
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_nbd.h"

void glue_nbd_send_option_request(uint32_t opt, const char *name, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_send_option_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K)" ,opt,&name,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_receive_option_reply(uint32_t option, const char *optname, uint32_t type, const char *typename, uint32_t length){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_receive_option_reply");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K,b,K)" ,option,&optname,type,&typename,length);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_server_error_msg(uint32_t err, const char *type, const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_server_error_msg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,b)" ,err,&type,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_reply_err_ignored(uint32_t option, const char *name, uint32_t reply, const char *reply_name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_reply_err_ignored");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K,b)" ,option,&name,reply,&reply_name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_receive_list(const char *name, const char *desc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_receive_list");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&name,&desc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_opt_info_go_start(const char *opt, const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_opt_info_go_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&opt,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_opt_info_go_success(const char *opt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_opt_info_go_success");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&opt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_opt_info_unknown(int info, const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_opt_info_unknown");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,info,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_opt_info_block_size(uint32_t minimum, uint32_t preferred, uint32_t maximum){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_opt_info_block_size");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,minimum,preferred,maximum);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_receive_query_exports_start(const char *wantname){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_receive_query_exports_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&wantname);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_receive_query_exports_success(const char *wantname){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_receive_query_exports_success");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&wantname);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_receive_starttls_new_client(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_receive_starttls_new_client");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_receive_starttls_tls_handshake(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_receive_starttls_tls_handshake");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_opt_meta_request(const char *optname, const char *context, const char *export){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_opt_meta_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,b)" ,&optname,&context,&export);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_opt_meta_reply(const char *optname, const char *context, uint32_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_opt_meta_reply");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,K)" ,&optname,&context,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_start_negotiate(void *tlscreds, const char *hostname){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_start_negotiate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&tlscreds,&hostname);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_receive_negotiate_magic(uint64_t magic){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_receive_negotiate_magic");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,magic);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_receive_negotiate_server_flags(uint32_t globalflags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_receive_negotiate_server_flags");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,globalflags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_receive_negotiate_name(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_receive_negotiate_name");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_receive_negotiate_size_flags(uint64_t size, uint16_t flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_receive_negotiate_size_flags");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,size,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_init_set_socket(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_init_set_socket");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_init_set_block_size(unsigned long block_size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_init_set_block_size");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_init_set_size(unsigned long sectors){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_init_set_size");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_init_trailing_bytes(int ignored_bytes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_init_trailing_bytes");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,ignored_bytes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_init_set_readonly(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_init_set_readonly");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_init_finish(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_init_finish");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_client_loop(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_client_loop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_client_loop_ret(int ret, const char *error){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_client_loop_ret");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,ret,&error);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_client_clear_queue(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_client_clear_queue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_client_clear_socket(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_client_clear_socket");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_send_request(uint64_t from, uint32_t len, uint64_t handle, uint16_t flags, uint16_t type, const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_send_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,i,i,b)" ,from,len,handle,flags,type,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_receive_simple_reply(int32_t error, const char *errname, uint64_t handle){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_receive_simple_reply");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(l,b,K)" ,error,&errname,handle);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_receive_structured_reply_chunk(uint16_t flags, uint16_t type, const char *name, uint64_t handle, uint32_t length){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_receive_structured_reply_chunk");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,b,K,K)" ,flags,type,&name,handle,length);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_unknown_error(int err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_unknown_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_send_rep_len(uint32_t opt, const char *optname, uint32_t type, const char *typename, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_send_rep_len");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b,K,b,K)" ,opt,&optname,type,&typename,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_send_rep_err(const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_send_rep_err");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_send_rep_list(const char *name, const char *desc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_send_rep_list");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&name,&desc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_handle_export_name(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_handle_export_name");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_handle_export_name_request(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_handle_export_name_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_send_info(int info, const char *name, uint32_t length){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_send_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,K)" ,info,&name,length);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_handle_info_requests(int requests){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_handle_info_requests");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,requests);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_handle_info_request(int request, const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_handle_info_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,request,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_handle_info_block_size(uint32_t minimum, uint32_t preferred, uint32_t maximum){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_handle_info_block_size");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,minimum,preferred,maximum);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_handle_starttls(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_handle_starttls");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_handle_starttls_handshake(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_handle_starttls_handshake");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_meta_context(const char *optname, const char *export, uint32_t queries){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_meta_context");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,K)" ,&optname,&export,queries);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_meta_query_skip(const char *reason){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_meta_query_skip");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&reason);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_meta_query_parse(const char *query){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_meta_query_parse");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&query);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_meta_query_reply(const char *context, uint32_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_meta_query_reply");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&context,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_options_flags(uint32_t flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_options_flags");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_options_check_magic(uint64_t magic){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_options_check_magic");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,magic);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_options_check_option(uint32_t option, const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_options_check_option");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,b)" ,option,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_begin(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_begin");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_new_style_size_flags(uint64_t size, unsigned flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_new_style_size_flags");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I)" ,size,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_negotiate_success(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_negotiate_success");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_receive_request(uint32_t magic, uint16_t flags, uint16_t type, uint64_t from, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_receive_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i,K,K)" ,magic,flags,type,from,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_blk_aio_attached(const char *name, void *ctx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_blk_aio_attached");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,O&)" ,&name,&ctx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_blk_aio_detach(const char *name, void *ctx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_blk_aio_detach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,O&)" ,&name,&ctx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_co_send_simple_reply(uint64_t handle, uint32_t error, const char *errname, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_co_send_simple_reply");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,b,i)" ,handle,error,&errname,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_co_send_structured_done(uint64_t handle){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_co_send_structured_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,handle);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_co_send_structured_read(uint64_t handle, uint64_t offset, void *data, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_co_send_structured_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,O&,i)" ,handle,offset,&data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_co_send_structured_read_hole(uint64_t handle, uint64_t offset, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_co_send_structured_read_hole");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,handle,offset,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_co_send_extents(uint64_t handle, unsigned int extents, uint32_t id, uint64_t length, int last){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_co_send_extents");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,K,K,i)" ,handle,extents,id,length,last);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_co_send_structured_error(uint64_t handle, int err, const char *errname, const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_co_send_structured_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,b,b)" ,handle,err,&errname,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_co_receive_request_decode_type(uint64_t handle, uint16_t type, const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_co_receive_request_decode_type");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,b)" ,handle,type,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_co_receive_request_payload_received(uint64_t handle, uint32_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_co_receive_request_payload_received");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,handle,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_co_receive_align_compliance(const char *op, uint64_t from, uint32_t len, uint32_t align){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_co_receive_align_compliance");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K)" ,&op,from,len,align);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_trip(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_trip");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

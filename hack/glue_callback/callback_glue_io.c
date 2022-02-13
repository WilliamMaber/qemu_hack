
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_io.h"

void glue_qio_task_new(void *task, void *source, void *func, void *opaque){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_task_new");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,O&,O&)" ,&task,&source,&func,&opaque);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_task_complete(void *task){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_task_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&task);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_task_thread_start(void *task, void *worker, void *opaque){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_task_thread_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,O&)" ,&task,&worker,&opaque);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_task_thread_run(void *task){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_task_thread_run");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&task);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_task_thread_exit(void *task){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_task_thread_exit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&task);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_task_thread_result(void *task){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_task_thread_result");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&task);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_task_thread_source_attach(void *task, void *source){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_task_thread_source_attach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&task,&source);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_task_thread_source_cancel(void *task, void *source){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_task_thread_source_cancel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&task,&source);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_socket_new(void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_socket_new");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_socket_new_fd(void *ioc, int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_socket_new_fd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&ioc,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_socket_connect_sync(void *ioc, void *addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_socket_connect_sync");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&ioc,&addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_socket_connect_async(void *ioc, void *addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_socket_connect_async");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&ioc,&addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_socket_connect_fail(void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_socket_connect_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_socket_connect_complete(void *ioc, int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_socket_connect_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&ioc,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_socket_listen_sync(void *ioc, void *addr, int num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_socket_listen_sync");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i)" ,&ioc,&addr,num);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_socket_listen_async(void *ioc, void *addr, int num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_socket_listen_async");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i)" ,&ioc,&addr,num);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_socket_listen_fail(void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_socket_listen_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_socket_listen_complete(void *ioc, int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_socket_listen_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&ioc,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_socket_dgram_sync(void *ioc, void *localAddr, void *remoteAddr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_socket_dgram_sync");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,O&)" ,&ioc,&localAddr,&remoteAddr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_socket_dgram_async(void *ioc, void *localAddr, void *remoteAddr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_socket_dgram_async");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,O&)" ,&ioc,&localAddr,&remoteAddr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_socket_dgram_fail(void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_socket_dgram_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_socket_dgram_complete(void *ioc, int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_socket_dgram_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&ioc,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_socket_accept(void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_socket_accept");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_socket_accept_fail(void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_socket_accept_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_socket_accept_complete(void *ioc, void *cioc, int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_socket_accept_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i)" ,&ioc,&cioc,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_file_new_fd(void *ioc, int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_file_new_fd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&ioc,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_file_new_path(void *ioc, const char *path, int flags, int mode, int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_file_new_path");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,i,i,i)" ,&ioc,&path,flags,mode,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_tls_new_client(void *ioc, void *master, void *creds, const char *hostname){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_tls_new_client");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,O&,b)" ,&ioc,&master,&creds,&hostname);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_tls_new_server(void *ioc, void *master, void *creds, const char *aclname){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_tls_new_server");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,O&,b)" ,&ioc,&master,&creds,&aclname);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_tls_handshake_start(void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_tls_handshake_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_tls_handshake_pending(void *ioc, int status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_tls_handshake_pending");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&ioc,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_tls_handshake_fail(void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_tls_handshake_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_tls_handshake_complete(void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_tls_handshake_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_tls_credentials_allow(void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_tls_credentials_allow");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_tls_credentials_deny(void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_tls_credentials_deny");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_websock_new_server(void *ioc, void *master){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_websock_new_server");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&ioc,&master);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_websock_handshake_start(void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_websock_handshake_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_websock_handshake_pending(void *ioc, int status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_websock_handshake_pending");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&ioc,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_websock_handshake_reply(void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_websock_handshake_reply");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_websock_handshake_fail(void *ioc, const char *msg){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_websock_handshake_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&ioc,&msg);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_websock_handshake_complete(void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_websock_handshake_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_websock_http_greeting(void *ioc, const char *greeting){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_websock_http_greeting");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&ioc,&greeting);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_websock_http_request(void *ioc, const char *protocols, const char *version, const char *host, const char *connection, const char *upgrade, const char *key){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_websock_http_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,b,b,b,b,b)" ,&ioc,&protocols,&version,&host,&connection,&upgrade,&key);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_websock_header_partial_decode(void *ioc, size_t payloadlen, unsigned char fin, unsigned char opcode, unsigned char has_mask){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_websock_header_partial_decode");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,O&,O&,O&)" ,&ioc,payloadlen,&fin,&opcode,&has_mask);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_websock_header_full_decode(void *ioc, size_t headerlen, size_t payloadlen, uint32_t mask){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_websock_header_full_decode");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,K)" ,&ioc,headerlen,payloadlen,mask);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_websock_payload_decode(void *ioc, uint8_t opcode, size_t payload_remain){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_websock_payload_decode");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,B,i)" ,&ioc,opcode,payload_remain);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_websock_encode(void *ioc, uint8_t opcode, size_t payloadlen, size_t headerlen){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_websock_encode");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,B,i,i)" ,&ioc,opcode,payloadlen,headerlen);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_websock_close(void *ioc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_websock_close");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&ioc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_command_new_pid(void *ioc, int writefd, int readfd, int pid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_command_new_pid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,i)" ,&ioc,writefd,readfd,pid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_command_new_spawn(void *ioc, const char *binary, int flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_command_new_spawn");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,i)" ,&ioc,&binary,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_command_abort(void *ioc, int pid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_command_abort");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&ioc,pid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qio_channel_command_wait(void *ioc, int pid, int ret, int status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qio_channel_command_wait");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,i)" ,&ioc,pid,ret,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

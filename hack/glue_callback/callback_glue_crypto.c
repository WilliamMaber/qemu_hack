
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_crypto.h"

void glue_qcrypto_tls_creds_load_dh(void *creds, const char *filename){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcrypto_tls_creds_load_dh");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&creds,&filename);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcrypto_tls_creds_get_path(void *creds, const char *filename, const char *path){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcrypto_tls_creds_get_path");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,b)" ,&creds,&filename,&path);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcrypto_tls_creds_anon_load(void *creds, const char *dir){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcrypto_tls_creds_anon_load");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&creds,&dir);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcrypto_tls_creds_psk_load(void *creds, const char *dir){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcrypto_tls_creds_psk_load");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&creds,&dir);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcrypto_tls_creds_x509_load(void *creds, const char *dir){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcrypto_tls_creds_x509_load");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&creds,&dir);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcrypto_tls_creds_x509_check_basic_constraints(void *creds, const char *file, int status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcrypto_tls_creds_x509_check_basic_constraints");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,i)" ,&creds,&file,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcrypto_tls_creds_x509_check_key_usage(void *creds, const char *file, int status, int usage, int critical){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcrypto_tls_creds_x509_check_key_usage");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,i,i,i)" ,&creds,&file,status,usage,critical);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcrypto_tls_creds_x509_check_key_purpose(void *creds, const char *file, int status, const char *usage, int critical){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcrypto_tls_creds_x509_check_key_purpose");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,i,b,i)" ,&creds,&file,status,&usage,critical);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcrypto_tls_creds_x509_load_cert(void *creds, int isServer, const char *file){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcrypto_tls_creds_x509_load_cert");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,b)" ,&creds,isServer,&file);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcrypto_tls_creds_x509_load_cert_list(void *creds, const char *file){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcrypto_tls_creds_x509_load_cert_list");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&creds,&file);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcrypto_tls_session_new(void *session, void *creds, const char *hostname, const char *authzid, int endpoint){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcrypto_tls_session_new");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,b,b,i)" ,&session,&creds,&hostname,&authzid,endpoint);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcrypto_tls_session_check_creds(void *session, const char *status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcrypto_tls_session_check_creds");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&session,&status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcrypto_tls_cipher_suite_priority(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcrypto_tls_cipher_suite_priority");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcrypto_tls_cipher_suite_info(uint8_t data0, uint8_t data1, const char *version, const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcrypto_tls_cipher_suite_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,b,b)" ,data0,data1,&version,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcrypto_tls_cipher_suite_count(unsigned count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcrypto_tls_cipher_suite_count");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

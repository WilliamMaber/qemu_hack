
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_authz.h"

void glue_qauthz_simple_is_allowed(void *authz, const char *wantidentity, const char *gotidentity){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qauthz_simple_is_allowed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,b)" ,&authz,&wantidentity,&gotidentity);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qauthz_list_check_rule(void *authz, const char *identity, const char *rule, int format, int policy){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qauthz_list_check_rule");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,b,i,i)" ,&authz,&identity,&rule,format,policy);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qauthz_list_default_policy(void *authz, const char *identity, int policy){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qauthz_list_default_policy");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,i)" ,&authz,&identity,policy);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qauthz_list_file_load(void *authz, const char *filename){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qauthz_list_file_load");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&authz,&filename);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qauthz_list_file_refresh(void *authz, const char *filename, int success){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qauthz_list_file_refresh");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,i)" ,&authz,&filename,success);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qauthz_pam_check(void *authz, const char *identity, const char *service){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qauthz_pam_check");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,b)" ,&authz,&identity,&service);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

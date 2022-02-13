
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_qapi.h"

void glue_visit_free(void *v){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_free");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&v);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_complete(void *v, void *opaque){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&v,&opaque);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_start_struct(void *v, const char *name, void *obj, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_start_struct");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,O&,i)" ,&v,&name,&obj,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_check_struct(void *v){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_check_struct");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&v);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_end_struct(void *v, void *obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_end_struct");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&v,&obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_start_list(void *v, const char *name, void *obj, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_start_list");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,O&,i)" ,&v,&name,&obj,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_next_list(void *v, void *tail, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_next_list");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i)" ,&v,&tail,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_check_list(void *v){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_check_list");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&v);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_end_list(void *v, void *obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_end_list");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&v,&obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_start_alternate(void *v, const char *name, void *obj, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_start_alternate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,O&,i)" ,&v,&name,&obj,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_end_alternate(void *v, void *obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_end_alternate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&v,&obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_optional(void *v, const char *name, bool *present){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_optional");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,p)" ,&v,&name,present);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_policy_reject(void *v, const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_policy_reject");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&v,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_policy_skip(void *v, const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_policy_skip");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&v,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_type_enum(void *v, const char *name, int *obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_type_enum");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,i)" ,&v,&name,obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_type_int(void *v, const char *name, int64_t *obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_type_int");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,O&)" ,&v,&name,obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_type_uint8(void *v, const char *name, uint8_t *obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_type_uint8");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,B)" ,&v,&name,&obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_type_uint16(void *v, const char *name, uint16_t *obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_type_uint16");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,i)" ,&v,&name,obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_type_uint32(void *v, const char *name, uint32_t *obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_type_uint32");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,O&)" ,&v,&name,&obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_type_uint64(void *v, const char *name, uint64_t *obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_type_uint64");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,K)" ,&v,&name,obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_type_int8(void *v, const char *name, int8_t *obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_type_int8");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,O&)" ,&v,&name,&obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_type_int16(void *v, const char *name, int16_t *obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_type_int16");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,O&)" ,&v,&name,&obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_type_int32(void *v, const char *name, int32_t *obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_type_int32");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,O&)" ,&v,&name,&obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_type_int64(void *v, const char *name, int64_t *obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_type_int64");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,O&)" ,&v,&name,obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_type_size(void *v, const char *name, uint64_t *obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_type_size");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,K)" ,&v,&name,obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_type_bool(void *v, const char *name, bool *obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_type_bool");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,p)" ,&v,&name,obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_type_str(void *v, const char *name, char **obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_type_str");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,O&)" ,&v,&name,&obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_type_number(void *v, const char *name, void *obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_type_number");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,O&)" ,&v,&name,&obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_type_any(void *v, const char *name, void *obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_type_any");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,O&)" ,&v,&name,&obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_visit_type_null(void *v, const char *name, void *obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"visit_type_null");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,O&)" ,&v,&name,&obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

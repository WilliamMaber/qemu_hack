
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_core.h"

void glue_loader_write_rom(const char *name, uint64_t gpa, uint64_t size, bool isrom){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"loader_write_rom");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,p)" ,&name,gpa,size,isrom);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qdev_reset(void *obj, const char *objtype){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qdev_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&obj,&objtype);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qdev_reset_all(void *obj, const char *objtype){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qdev_reset_all");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&obj,&objtype);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qdev_reset_tree(void *obj, const char *objtype){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qdev_reset_tree");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&obj,&objtype);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qbus_reset(void *obj, const char *objtype){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qbus_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&obj,&objtype);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qbus_reset_all(void *obj, const char *objtype){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qbus_reset_all");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&obj,&objtype);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qbus_reset_tree(void *obj, const char *objtype){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qbus_reset_tree");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&obj,&objtype);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qdev_update_parent_bus(void *obj, const char *objtype, void *oldp, const char *oldptype, void *newp, const char *newptype){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qdev_update_parent_bus");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,O&,b,O&,b)" ,&obj,&objtype,&oldp,&oldptype,&newp,&newptype);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_resettable_reset(void *obj, int cold){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"resettable_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&obj,cold);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_resettable_reset_assert_begin(void *obj, int cold){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"resettable_reset_assert_begin");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&obj,cold);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_resettable_reset_assert_end(void *obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"resettable_reset_assert_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_resettable_reset_release_begin(void *obj, int cold){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"resettable_reset_release_begin");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&obj,cold);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_resettable_reset_release_end(void *obj){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"resettable_reset_release_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&obj);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_resettable_change_parent(void *obj, void *o, unsigned oc, void *n, unsigned nc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"resettable_change_parent");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,I,O&,I)" ,&obj,&o,oc,&n,nc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_resettable_phase_enter_begin(void *obj, const char *objtype, unsigned count, int type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"resettable_phase_enter_begin");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,I,i)" ,&obj,&objtype,count,type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_resettable_phase_enter_exec(void *obj, const char *objtype, int type, int has_method){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"resettable_phase_enter_exec");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,i,i)" ,&obj,&objtype,type,has_method);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_resettable_phase_enter_end(void *obj, const char *objtype, unsigned count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"resettable_phase_enter_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,I)" ,&obj,&objtype,count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_resettable_phase_hold_begin(void *obj, const char *objtype, unsigned count, int type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"resettable_phase_hold_begin");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,I,i)" ,&obj,&objtype,count,type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_resettable_phase_hold_exec(void *obj, const char *objtype, int has_method){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"resettable_phase_hold_exec");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,i)" ,&obj,&objtype,has_method);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_resettable_phase_hold_end(void *obj, const char *objtype, unsigned count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"resettable_phase_hold_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,I)" ,&obj,&objtype,count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_resettable_phase_exit_begin(void *obj, const char *objtype, unsigned count, int type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"resettable_phase_exit_begin");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,I,i)" ,&obj,&objtype,count,type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_resettable_phase_exit_exec(void *obj, const char *objtype, int has_method){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"resettable_phase_exit_exec");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,i)" ,&obj,&objtype,has_method);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_resettable_phase_exit_end(void *obj, const char *objtype, unsigned count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"resettable_phase_exit_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,I)" ,&obj,&objtype,count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_resettable_transitional_function(void *obj, const char *objtype){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"resettable_transitional_function");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b)" ,&obj,&objtype);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_clock_set_source(const char *clk, const char *src){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"clock_set_source");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&clk,&src);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_clock_disconnect(const char *clk){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"clock_disconnect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&clk);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_clock_set(const char *clk, uint64_t old, uint64_t new){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"clock_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&clk,old,new);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_clock_propagate(const char *clk){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"clock_propagate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&clk);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_clock_update(const char *clk, const char *src, uint64_t hz, int cb){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"clock_update");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,K,i)" ,&clk,&src,hz,cb);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_clock_set_mul_div(const char *clk, uint32_t oldmul, uint32_t mul, uint32_t olddiv, uint32_t div){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"clock_set_mul_div");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K,K)" ,&clk,oldmul,mul,olddiv,div);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

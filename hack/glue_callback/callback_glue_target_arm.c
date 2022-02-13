
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_target_arm.h"

void glue_arm_gt_recalc(int timer, int irqstate, uint64_t nexttick){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"arm_gt_recalc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K)" ,timer,irqstate,nexttick);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_arm_gt_recalc_disabled(int timer){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"arm_gt_recalc_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,timer);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_arm_gt_cval_write(int timer, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"arm_gt_cval_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,timer,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_arm_gt_tval_write(int timer, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"arm_gt_tval_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,timer,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_arm_gt_ctl_write(int timer, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"arm_gt_ctl_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,timer,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_arm_gt_imask_toggle(int timer, int irqstate){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"arm_gt_imask_toggle");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,timer,irqstate);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_arm_gt_cntvoff_write(uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"arm_gt_cntvoff_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_kvm_arm_fixup_msi_route(uint64_t iova, uint64_t gpa){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"kvm_arm_fixup_msi_route");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,iova,gpa);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

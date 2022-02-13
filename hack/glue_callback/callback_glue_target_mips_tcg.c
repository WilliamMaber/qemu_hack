
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_target_mips_tcg.h"

void glue_mips_translate_c0(const char *instr, const char *rn, int reg, int sel){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mips_translate_c0");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,i,i)" ,&instr,&rn,reg,sel);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mips_translate_tr(const char *instr, int rt, int u, int sel, int h){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mips_translate_tr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i,i,i)" ,&instr,rt,u,sel,h);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

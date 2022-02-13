
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_pci-host.h"

void glue_bonito_spciconf_small_access(uint64_t addr, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bonito_spciconf_small_access");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I)" ,addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_grackle_set_irq(int irq_num, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"grackle_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,irq_num,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mv64361_region_map(const char *name, uint64_t poffs, uint64_t size, uint64_t moffs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mv64361_region_map");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K)" ,&name,poffs,size,moffs);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mv64361_region_enable(const char *op, int num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mv64361_region_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&op,num);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mv64361_reg_read(uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mv64361_reg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mv64361_reg_write(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mv64361_reg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sabre_set_request(int irq_num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sabre_set_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,irq_num);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sabre_clear_request(int irq_num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sabre_clear_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,irq_num);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sabre_config_write(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sabre_config_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sabre_config_read(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sabre_config_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sabre_pci_config_write(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sabre_pci_config_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sabre_pci_config_read(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sabre_pci_config_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sabre_pci_set_irq(int irq_num, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sabre_pci_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,irq_num,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sabre_pci_set_obio_irq(int irq_num, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sabre_pci_set_obio_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,irq_num,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_unin_set_irq(int irq_num, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"unin_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,irq_num,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_unin_get_config_reg(uint32_t reg, uint32_t addr, uint32_t retval){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"unin_get_config_reg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,reg,addr,retval);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_unin_data_write(uint64_t addr, unsigned len, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"unin_data_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,K)" ,addr,len,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_unin_data_read(uint64_t addr, unsigned len, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"unin_data_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,K)" ,addr,len,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_unin_write(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"unin_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_unin_read(uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"unin_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pnv_phb4_xive_notify(uint64_t notif_port, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pnv_phb4_xive_notify");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,notif_port,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

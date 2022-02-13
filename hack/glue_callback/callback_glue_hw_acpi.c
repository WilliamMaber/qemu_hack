
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_acpi.h"

void glue_mhp_acpi_invalid_slot_selected(uint32_t slot){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mhp_acpi_invalid_slot_selected");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,slot);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mhp_acpi_ejecting_invalid_slot(uint32_t slot){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mhp_acpi_ejecting_invalid_slot");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,slot);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mhp_acpi_read_addr_lo(uint32_t slot, uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mhp_acpi_read_addr_lo");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,slot,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mhp_acpi_read_addr_hi(uint32_t slot, uint32_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mhp_acpi_read_addr_hi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,slot,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mhp_acpi_read_size_lo(uint32_t slot, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mhp_acpi_read_size_lo");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,slot,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mhp_acpi_read_size_hi(uint32_t slot, uint32_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mhp_acpi_read_size_hi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,slot,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mhp_acpi_read_pxm(uint32_t slot, uint32_t pxm){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mhp_acpi_read_pxm");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,slot,pxm);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mhp_acpi_read_flags(uint32_t slot, uint32_t flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mhp_acpi_read_flags");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,slot,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mhp_acpi_write_slot(uint32_t slot){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mhp_acpi_write_slot");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,slot);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mhp_acpi_write_ost_ev(uint32_t slot, uint32_t ev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mhp_acpi_write_ost_ev");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,slot,ev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mhp_acpi_write_ost_status(uint32_t slot, uint32_t st){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mhp_acpi_write_ost_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,slot,st);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mhp_acpi_clear_insert_evt(uint32_t slot){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mhp_acpi_clear_insert_evt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,slot);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mhp_acpi_clear_remove_evt(uint32_t slot){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mhp_acpi_clear_remove_evt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,slot);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mhp_acpi_pc_dimm_deleted(uint32_t slot){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mhp_acpi_pc_dimm_deleted");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,slot);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mhp_acpi_pc_dimm_delete_failed(uint32_t slot){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mhp_acpi_pc_dimm_delete_failed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,slot);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpuhp_acpi_invalid_idx_selected(uint32_t idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpuhp_acpi_invalid_idx_selected");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpuhp_acpi_read_flags(uint32_t idx, uint8_t flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpuhp_acpi_read_flags");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B)" ,idx,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpuhp_acpi_write_idx(uint32_t idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpuhp_acpi_write_idx");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpuhp_acpi_write_cmd(uint32_t idx, uint8_t cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpuhp_acpi_write_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B)" ,idx,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpuhp_acpi_read_cmd_data(uint32_t idx, uint32_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpuhp_acpi_read_cmd_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,idx,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpuhp_acpi_read_cmd_data2(uint32_t idx, uint32_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpuhp_acpi_read_cmd_data2");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,idx,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpuhp_acpi_cpu_has_events(uint32_t idx, bool ins, bool rm){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpuhp_acpi_cpu_has_events");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,p,p)" ,idx,ins,rm);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpuhp_acpi_clear_inserting_evt(uint32_t idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpuhp_acpi_clear_inserting_evt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpuhp_acpi_clear_remove_evt(uint32_t idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpuhp_acpi_clear_remove_evt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpuhp_acpi_ejecting_invalid_cpu(uint32_t idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpuhp_acpi_ejecting_invalid_cpu");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpuhp_acpi_ejecting_cpu(uint32_t idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpuhp_acpi_ejecting_cpu");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpuhp_acpi_fw_remove_invalid_cpu(uint32_t idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpuhp_acpi_fw_remove_invalid_cpu");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpuhp_acpi_fw_remove_cpu(uint32_t idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpuhp_acpi_fw_remove_cpu");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpuhp_acpi_write_ost_ev(uint32_t slot, uint32_t ev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpuhp_acpi_write_ost_ev");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,slot,ev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_cpuhp_acpi_write_ost_status(uint32_t slot, uint32_t st){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"cpuhp_acpi_write_ost_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,slot,st);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_acpi_pci_eject_slot(unsigned bsel, unsigned slot){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"acpi_pci_eject_slot");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I)" ,bsel,slot);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_acpi_pci_unplug(int bsel, int slot){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"acpi_pci_unplug");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,bsel,slot);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_acpi_pci_unplug_request(int bsel, int slot){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"acpi_pci_unplug_request");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,bsel,slot);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_acpi_pci_up_read(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"acpi_pci_up_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_acpi_pci_down_read(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"acpi_pci_down_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_acpi_pci_features_read(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"acpi_pci_features_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_acpi_pci_acpi_index_read(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"acpi_pci_acpi_index_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_acpi_pci_acpi_index_write(unsigned bsel, unsigned slot, uint32_t aidx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"acpi_pci_acpi_index_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I,K)" ,bsel,slot,aidx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_acpi_pci_rmv_read(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"acpi_pci_rmv_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_acpi_pci_sel_read(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"acpi_pci_sel_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_acpi_pci_ej_write(uint64_t addr, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"acpi_pci_ej_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_acpi_pci_sel_write(uint64_t addr, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"acpi_pci_sel_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_piix4_gpe_readb(uint64_t addr, unsigned width, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"piix4_gpe_readb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,K)" ,addr,width,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_piix4_gpe_writeb(uint64_t addr, unsigned width, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"piix4_gpe_writeb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,K)" ,addr,width,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tco_timer_reload(int ticks, int msec){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tco_timer_reload");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,ticks,msec);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tco_timer_expired(int timeouts_no, bool strap, bool no_reboot){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tco_timer_expired");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,p,p)" ,timeouts_no,strap,no_reboot);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

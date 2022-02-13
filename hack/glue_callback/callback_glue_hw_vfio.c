
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_vfio.h"

void glue_vfio_intx_interrupt(const char *name, char line){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_intx_interrupt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&name,line);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_intx_eoi(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_intx_eoi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_intx_enable_kvm(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_intx_enable_kvm");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_intx_disable_kvm(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_intx_disable_kvm");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_intx_update(const char *name, int new_irq, int target_irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_intx_update");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&name,new_irq,target_irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_intx_enable(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_intx_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_intx_disable(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_intx_disable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_msi_interrupt(const char *name, int index, uint64_t addr, int data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_msi_interrupt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,K,i)" ,&name,index,addr,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_msix_vector_do_use(const char *name, int index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_msix_vector_do_use");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_msix_vector_release(const char *name, int index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_msix_vector_release");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_msix_enable(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_msix_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_msix_pba_disable(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_msix_pba_disable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_msix_pba_enable(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_msix_pba_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_msix_disable(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_msix_disable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_msix_fixup(const char *name, int bar, uint64_t start, uint64_t end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_msix_fixup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,K,K)" ,&name,bar,start,end);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_msix_relo(const char *name, int bar, uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_msix_relo");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,K)" ,&name,bar,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_msi_enable(const char *name, int nr_vectors){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_msi_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,nr_vectors);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_msi_disable(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_msi_disable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_load_rom(const char *name, unsigned long size, unsigned long offset, unsigned long flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_load_rom");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_rom_read(const char *name, uint64_t addr, int size, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_rom_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,i,K)" ,&name,addr,size,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_size_rom(const char *name, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_size_rom");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_vga_write(uint64_t addr, uint64_t data, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_vga_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,addr,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_vga_read(uint64_t addr, int size, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_vga_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,K)" ,addr,size,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_read_config(const char *name, int addr, int len, int val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_read_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i,i)" ,&name,addr,len,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_write_config(const char *name, int addr, int val, int len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_write_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i,i)" ,&name,addr,val,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_msi_setup(const char *name, int pos){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_msi_setup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,pos);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_msix_early_setup(const char *name, int pos, int table_bar, int offset, int entries){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_msix_early_setup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i,i,i)" ,&name,pos,table_bar,offset,entries);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_check_pcie_flr(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_check_pcie_flr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_check_pm_reset(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_check_pm_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_check_af_flr(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_check_af_flr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_hot_reset(const char *name, const char *type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_hot_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&name,&type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_hot_reset_has_dep_devices(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_hot_reset_has_dep_devices");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_hot_reset_dep_devices(int domain, int bus, int slot, int function, int group_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_hot_reset_dep_devices");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i,i)" ,domain,bus,slot,function,group_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_hot_reset_result(const char *name, const char *result){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_hot_reset_result");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&name,&result);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_populate_device_config(const char *name, unsigned long size, unsigned long offset, unsigned long flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_populate_device_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_populate_device_get_irq_info_failure(const char *errstr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_populate_device_get_irq_info_failure");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&errstr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_realize(const char *name, int group_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_realize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,group_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_mdev(const char *name, bool is_mdev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_mdev");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,p)" ,&name,is_mdev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_add_ext_cap_dropped(const char *name, uint16_t cap, uint16_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_add_ext_cap_dropped");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&name,cap,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_reset(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_reset_flr(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_reset_flr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_reset_pm(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_reset_pm");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_emulated_vendor_id(const char *name, uint16_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_emulated_vendor_id");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_emulated_device_id(const char *name, uint16_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_emulated_device_id");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_emulated_sub_vendor_id(const char *name, uint16_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_emulated_sub_vendor_id");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_emulated_sub_device_id(const char *name, uint16_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_emulated_sub_device_id");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_rom_in_denylist(const char *name, uint16_t vid, uint16_t did){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_rom_in_denylist");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&name,vid,did);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_generic_window_address_write(const char *name, const char * region_name, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_generic_window_address_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,K)" ,&name,&region_name,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_generic_window_data_read(const char *name, const char * region_name, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_generic_window_data_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,K)" ,&name,&region_name,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_generic_window_data_write(const char *name, const char * region_name, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_generic_window_data_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,K)" ,&name,&region_name,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_generic_mirror_read(const char *name, const char * region_name, uint64_t addr, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_generic_mirror_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,K,K)" ,&name,&region_name,addr,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_generic_mirror_write(const char *name, const char * region_name, uint64_t addr, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_generic_mirror_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,K,K)" ,&name,&region_name,addr,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_ati_3c3_read(const char *name, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_ati_3c3_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&name,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_ati_3c3_probe(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_ati_3c3_probe");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_ati_bar4_probe(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_ati_bar4_probe");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_ati_bar2_probe(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_ati_bar2_probe");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_nvidia_3d0_state(const char *name, const char *state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_nvidia_3d0_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&name,&state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_nvidia_3d0_read(const char *name, uint8_t offset, unsigned size, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_nvidia_3d0_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B,I,K)" ,&name,offset,size,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_nvidia_3d0_write(const char *name, uint8_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_nvidia_3d0_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B,K,I)" ,&name,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_nvidia_3d0_probe(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_nvidia_3d0_probe");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_nvidia_bar5_state(const char *name, const char *state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_nvidia_bar5_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&name,&state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_nvidia_bar5_probe(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_nvidia_bar5_probe");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_nvidia_bar0_msi_ack(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_nvidia_bar0_msi_ack");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_nvidia_bar0_probe(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_nvidia_bar0_probe");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_rtl8168_fake_latch(const char *name, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_rtl8168_fake_latch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&name,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_rtl8168_msix_write(const char *name, uint16_t offset, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_rtl8168_msix_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,K)" ,&name,offset,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_rtl8168_msix_read(const char *name, uint16_t offset, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_rtl8168_msix_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,K)" ,&name,offset,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_rtl8168_probe(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_rtl8168_probe");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_ati_bonaire_reset_skipped(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_ati_bonaire_reset_skipped");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_ati_bonaire_reset_no_smc(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_ati_bonaire_reset_no_smc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_ati_bonaire_reset_timeout(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_ati_bonaire_reset_timeout");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_ati_bonaire_reset_done(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_ati_bonaire_reset_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_quirk_ati_bonaire_reset(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_quirk_ati_bonaire_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_ioeventfd_exit(const char *name, uint64_t addr, unsigned size, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_ioeventfd_exit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,I,K)" ,&name,addr,size,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_ioeventfd_handler(const char *name, uint64_t addr, unsigned size, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_ioeventfd_handler");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,I,K)" ,&name,addr,size,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_ioeventfd_init(const char *name, uint64_t addr, unsigned size, uint64_t data, bool vfio){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_ioeventfd_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,I,K,p)" ,&name,addr,size,data,vfio);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_igd_opregion_enabled(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_igd_opregion_enabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_nvidia_gpu_setup_quirk(const char *name, uint64_t tgt, uint64_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_nvidia_gpu_setup_quirk");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&name,tgt,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_nvlink2_setup_quirk_ssatgt(const char *name, uint64_t tgt, uint64_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_nvlink2_setup_quirk_ssatgt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&name,tgt,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_nvlink2_setup_quirk_lnkspd(const char *name, uint32_t link_speed){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_nvlink2_setup_quirk_lnkspd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&name,link_speed);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_igd_bar4_write(const char *name, uint32_t index, uint32_t data, uint32_t base){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_igd_bar4_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K)" ,&name,index,data,base);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_igd_bdsm_enabled(const char *name, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_igd_bdsm_enabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_igd_host_bridge_enabled(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_igd_host_bridge_enabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_pci_igd_lpc_bridge_enabled(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_pci_igd_lpc_bridge_enabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_region_write(const char *name, int index, uint64_t addr, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_region_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,K,K,I)" ,&name,index,addr,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_region_read(char *name, int index, uint64_t addr, unsigned size, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_region_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,K,I,K)" ,&name,index,addr,size,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_iommu_map_notify(const char *op, uint64_t iova_start, uint64_t iova_end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_iommu_map_notify");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&op,iova_start,iova_end);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_listener_region_add_skip(uint64_t start, uint64_t end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_listener_region_add_skip");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,start,end);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_spapr_group_attach(int groupfd, int tablefd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_spapr_group_attach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,groupfd,tablefd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_listener_region_add_iommu(uint64_t start, uint64_t end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_listener_region_add_iommu");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,start,end);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_listener_region_add_ram(uint64_t iova_start, uint64_t iova_end, void *vaddr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_listener_region_add_ram");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,O&)" ,iova_start,iova_end,&vaddr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_listener_region_add_no_dma_map(const char *name, uint64_t iova, uint64_t size, uint64_t page_size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_listener_region_add_no_dma_map");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K)" ,&name,iova,size,page_size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_listener_region_del_skip(uint64_t start, uint64_t end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_listener_region_del_skip");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,start,end);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_listener_region_del(uint64_t start, uint64_t end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_listener_region_del");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,start,end);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_disconnect_container(int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_disconnect_container");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_put_group(int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_put_group");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_get_device(const char * name, unsigned int flags, unsigned int num_regions, unsigned int num_irqs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_get_device");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,I,I,I)" ,&name,flags,num_regions,num_irqs);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_put_base_device(int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_put_base_device");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_region_setup(const char *dev, int index, const char *name, unsigned long flags, unsigned long offset, unsigned long size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_region_setup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,b)" ,&dev,index,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_region_mmap_fault(const char *name, int index, unsigned long offset, unsigned long size, int fault){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_region_mmap_fault");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&name,index,fault);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_region_mmap(const char *name, unsigned long offset, unsigned long end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_region_mmap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_region_exit(const char *name, int index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_region_exit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_region_finalize(const char *name, int index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_region_finalize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_region_mmaps_set_enabled(const char *name, bool enabled){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_region_mmaps_set_enabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,p)" ,&name,enabled);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_region_unmap(const char *name, unsigned long offset, unsigned long end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_region_unmap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_region_sparse_mmap_header(const char *name, int index, int nr_areas){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_region_sparse_mmap_header");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&name,index,nr_areas);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_region_sparse_mmap_entry(int i, unsigned long start, unsigned long end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_region_sparse_mmap_entry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,i);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_get_dev_region(const char *name, int index, uint32_t type, uint32_t subtype){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_get_dev_region");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,K,K)" ,&name,index,type,subtype);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_dma_unmap_overflow_workaround(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_dma_unmap_overflow_workaround");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_platform_base_device_init(char *name, int groupid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_platform_base_device_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,groupid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_platform_realize(char *name, char *compat){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_platform_realize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&name,&compat);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_platform_eoi(int pin, int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_platform_eoi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,pin,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_platform_intp_mmap_enable(int pin){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_platform_intp_mmap_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,pin);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_platform_intp_interrupt(int pin, int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_platform_intp_interrupt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,pin,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_platform_intp_inject_pending_lockheld(int pin, int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_platform_intp_inject_pending_lockheld");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,pin,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_platform_populate_interrupts(int pin, int count, int flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_platform_populate_interrupts");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,pin,count,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_intp_interrupt_set_pending(int index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_intp_interrupt_set_pending");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_platform_start_level_irqfd_injection(int index, int fd, int resamplefd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_platform_start_level_irqfd_injection");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,index,fd,resamplefd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_platform_start_edge_irqfd_injection(int index, int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_platform_start_edge_irqfd_injection");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,index,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_prereg_listener_region_add_skip(uint64_t start, uint64_t end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_prereg_listener_region_add_skip");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,start,end);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_prereg_listener_region_del_skip(uint64_t start, uint64_t end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_prereg_listener_region_del_skip");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,start,end);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_prereg_register(uint64_t va, uint64_t size, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_prereg_register");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,va,size,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_prereg_unregister(uint64_t va, uint64_t size, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_prereg_unregister");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,va,size,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_spapr_create_window(int ps, unsigned int levels, uint64_t ws, uint64_t off){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_spapr_create_window");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,I,K,K)" ,ps,levels,ws,off);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_spapr_remove_window(uint64_t off){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_spapr_remove_window");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,off);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_display_edid_available(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_display_edid_available");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_display_edid_link_up(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_display_edid_link_up");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_display_edid_link_down(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_display_edid_link_down");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_display_edid_update(uint32_t prefx, uint32_t prefy){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_display_edid_update");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,prefx,prefy);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_display_edid_write_error(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_display_edid_write_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_migration_probe(const char *name, uint32_t index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_migration_probe");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&name,index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_migration_set_state(const char *name, uint32_t state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_migration_set_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&name,state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_vmstate_change(const char *name, int running, const char *reason, uint32_t dev_state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_vmstate_change");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,b,K)" ,&name,running,&reason,dev_state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_migration_state_notifier(const char *name, const char *state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_migration_state_notifier");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&name,&state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_save_setup(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_save_setup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_save_cleanup(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_save_cleanup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_save_buffer(const char *name, uint64_t data_offset, uint64_t data_size, uint64_t pending){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_save_buffer");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K)" ,&name,data_offset,data_size,pending);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_update_pending(const char *name, uint64_t pending){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_update_pending");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&name,pending);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_save_device_config_state(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_save_device_config_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_save_pending(const char *name, uint64_t precopy, uint64_t postcopy, uint64_t compatible){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_save_pending");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K)" ,&name,precopy,postcopy,compatible);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_save_iterate(const char *name, int data_size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_save_iterate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,data_size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_save_complete_precopy(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_save_complete_precopy");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_load_device_config_state(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_load_device_config_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_load_state(const char *name, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_load_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&name,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_load_state_device_data(const char *name, uint64_t data_offset, uint64_t data_size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_load_state_device_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&name,data_offset,data_size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_load_cleanup(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_load_cleanup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_get_dirty_bitmap(int fd, uint64_t iova, uint64_t size, uint64_t bitmap_size, uint64_t start){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_get_dirty_bitmap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K,K)" ,fd,iova,size,bitmap_size,start);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_vfio_iommu_map_dirty_notify(uint64_t iova_start, uint64_t iova_end){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"vfio_iommu_map_dirty_notify");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,iova_start,iova_end);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

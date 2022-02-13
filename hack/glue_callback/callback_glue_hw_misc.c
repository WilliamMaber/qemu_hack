
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_misc.h"

void glue_allwinner_cpucfg_cpu_reset(uint8_t cpu_id, uint32_t reset_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_cpucfg_cpu_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K)" ,cpu_id,reset_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_cpucfg_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_cpucfg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_cpucfg_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_cpucfg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_h3_dramc_rowmirror_disable(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_h3_dramc_rowmirror_disable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_h3_dramc_rowmirror_enable(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_h3_dramc_rowmirror_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_h3_dramcom_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_h3_dramcom_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_h3_dramcom_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_h3_dramcom_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_h3_dramctl_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_h3_dramctl_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_h3_dramctl_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_h3_dramctl_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_h3_dramphy_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_h3_dramphy_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_h3_dramphy_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_h3_dramphy_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_sid_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_sid_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_allwinner_sid_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"allwinner_sid_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_avr_power_read(uint8_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"avr_power_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_avr_power_write(uint8_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"avr_power_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ecc_mem_writel_mer(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ecc_mem_writel_mer");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ecc_mem_writel_mdr(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ecc_mem_writel_mdr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ecc_mem_writel_mfsr(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ecc_mem_writel_mfsr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ecc_mem_writel_vcr(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ecc_mem_writel_vcr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ecc_mem_writel_dr(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ecc_mem_writel_dr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ecc_mem_writel_ecr0(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ecc_mem_writel_ecr0");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ecc_mem_writel_ecr1(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ecc_mem_writel_ecr1");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ecc_mem_readl_mer(uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ecc_mem_readl_mer");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ecc_mem_readl_mdr(uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ecc_mem_readl_mdr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ecc_mem_readl_mfsr(uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ecc_mem_readl_mfsr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ecc_mem_readl_vcr(uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ecc_mem_readl_vcr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ecc_mem_readl_mfar0(uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ecc_mem_readl_mfar0");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ecc_mem_readl_mfar1(uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ecc_mem_readl_mfar1");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ecc_mem_readl_dr(uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ecc_mem_readl_dr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ecc_mem_readl_ecr0(uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ecc_mem_readl_ecr0");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ecc_mem_readl_ecr1(uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ecc_mem_readl_ecr1");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ecc_diag_mem_writeb(uint64_t addr, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ecc_diag_mem_writeb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ecc_diag_mem_readb(uint64_t addr, uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ecc_diag_mem_readb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_empty_slot_write(uint64_t addr, unsigned width, uint64_t value, unsigned size, const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"empty_slot_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,K,I,b)" ,addr,width,value,size,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_misc_update_irq_raise(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_misc_update_irq_raise");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_misc_update_irq_lower(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_misc_update_irq_lower");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_set_power_fail(int power_failing, uint8_t config){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_set_power_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B)" ,power_failing,config);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_cfg_mem_writeb(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_cfg_mem_writeb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_cfg_mem_readb(uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_cfg_mem_readb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_diag_mem_writeb(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_diag_mem_writeb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_diag_mem_readb(uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_diag_mem_readb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_mdm_mem_writeb(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_mdm_mem_writeb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_mdm_mem_readb(uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_mdm_mem_readb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_aux1_mem_writeb(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_aux1_mem_writeb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_aux1_mem_readb(uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_aux1_mem_readb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_aux2_mem_writeb(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_aux2_mem_writeb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_aux2_mem_readb(uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_aux2_mem_readb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_apc_mem_writeb(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"apc_mem_writeb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_apc_mem_readb(uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"apc_mem_readb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_sysctrl_mem_writel(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_sysctrl_mem_writel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_sysctrl_mem_readl(uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_sysctrl_mem_readl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_led_mem_writew(uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_led_mem_writew");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_slavio_led_mem_readw(uint32_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"slavio_led_mem_readw");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_scu_write(uint64_t offset, unsigned size, uint32_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_scu_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,K)" ,offset,size,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mps2_scc_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mps2_scc_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mps2_scc_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mps2_scc_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mps2_scc_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mps2_scc_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mps2_scc_cfg_write(unsigned function, unsigned device, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mps2_scc_cfg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I,K)" ,function,device,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mps2_scc_cfg_read(unsigned function, unsigned device, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mps2_scc_cfg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,I,K)" ,function,device,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mps2_fpgaio_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mps2_fpgaio_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mps2_fpgaio_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mps2_fpgaio_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mps2_fpgaio_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mps2_fpgaio_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_msf2_sysreg_write(uint64_t offset, uint32_t val, uint32_t prev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"msf2_sysreg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,offset,val,prev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_msf2_sysreg_read(uint64_t offset, uint32_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"msf2_sysreg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_msf2_sysreg_write_pll_status(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"msf2_sysreg_write_pll_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_imx7_gpr_read(uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"imx7_gpr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_imx7_gpr_write(uint64_t offset, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"imx7_gpr_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mos6522_set_counter(int index, unsigned int val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mos6522_set_counter");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,I)" ,index,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mos6522_get_next_irq_time(uint16_t latch, int64_t d, int64_t delta){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mos6522_get_next_irq_time");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,L,L)" ,latch,d,delta);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mos6522_set_sr_int(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mos6522_set_sr_int");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mos6522_write(uint64_t addr, uint64_t val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mos6522_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mos6522_read(uint64_t addr, unsigned val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mos6522_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I)" ,addr,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_clk_read(uint64_t offset, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_clk_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_clk_write(uint64_t offset, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_clk_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_gcr_read(uint64_t offset, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_gcr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_gcr_write(uint64_t offset, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_gcr_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_mft_read(const char *name, uint64_t offset, uint16_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_mft_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,i)" ,&name,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_mft_write(const char *name, uint64_t offset, uint16_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_mft_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,i)" ,&name,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_mft_rpm(const char *clock, uint32_t clock_hz, int state, int32_t cnt, uint32_t rpm, uint32_t duty){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_mft_rpm");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,i,l,K,K)" ,&clock,clock_hz,state,cnt,rpm,duty);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_mft_capture(const char *name, int irq_level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_mft_capture");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&name,irq_level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_mft_update_clock(const char *name, uint16_t sel, uint64_t clock_period, uint64_t prescaled_clock_period){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_mft_update_clock");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,K,K)" ,&name,sel,clock_period,prescaled_clock_period);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_mft_set_duty(const char *name, int n, int value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_mft_set_duty");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&name,n,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_rng_read(uint64_t offset, uint64_t value, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_rng_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,value,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_rng_write(uint64_t offset, uint64_t value, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_rng_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,value,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_pwm_read(const char *id, uint64_t offset, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_pwm_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&id,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_pwm_write(const char *id, uint64_t offset, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_pwm_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K)" ,&id,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_pwm_update_freq(const char *id, uint8_t index, uint32_t old_value, uint32_t new_value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_pwm_update_freq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B,K,K)" ,&id,index,old_value,new_value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_npcm7xx_pwm_update_duty(const char *id, uint8_t index, uint32_t old_value, uint32_t new_value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"npcm7xx_pwm_update_duty");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B,K,K)" ,&id,index,old_value,new_value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_stm32f4xx_syscfg_set_irq(int gpio, int line, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"stm32f4xx_syscfg_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,gpio,line,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_stm32f4xx_pulse_exti(int irq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"stm32f4xx_pulse_exti");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,irq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_stm32f4xx_syscfg_read(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"stm32f4xx_syscfg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_stm32f4xx_syscfg_write(uint64_t addr, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"stm32f4xx_syscfg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_stm32f4xx_exti_set_irq(int irq, int leve){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"stm32f4xx_exti_set_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,irq,leve);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_stm32f4xx_exti_read(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"stm32f4xx_exti_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_stm32f4xx_exti_write(uint64_t addr, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"stm32f4xx_exti_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_mpc_reg_read(uint32_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_mpc_reg_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_mpc_reg_write(uint32_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_mpc_reg_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_mpc_mem_blocked_read(uint64_t addr, unsigned size, bool secure){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_mpc_mem_blocked_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I,p)" ,addr,size,secure);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_mpc_mem_blocked_write(uint64_t addr, uint64_t data, unsigned size, bool secure){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_mpc_mem_blocked_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I,p)" ,addr,data,size,secure);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_mpc_translate(uint64_t addr, int flags, const char *idx, const char *res){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_mpc_translate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,b,b)" ,addr,flags,&idx,&res);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_mpc_iommu_notify(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_mpc_iommu_notify");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_msc_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_msc_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_msc_cfg_nonsec(int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_msc_cfg_nonsec");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_msc_cfg_sec_resp(int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_msc_cfg_sec_resp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_msc_irq_clear(int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_msc_irq_clear");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_msc_update_irq(int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_msc_update_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_msc_access_blocked(uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_msc_access_blocked");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_ppc_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_ppc_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_ppc_cfg_nonsec(int n, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_ppc_cfg_nonsec");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,n,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_ppc_cfg_ap(int n, int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_ppc_cfg_ap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,n,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_ppc_cfg_sec_resp(int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_ppc_cfg_sec_resp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_ppc_irq_enable(int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_ppc_irq_enable");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_ppc_irq_clear(int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_ppc_irq_clear");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_ppc_update_irq(int level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_ppc_update_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_ppc_read_blocked(int n, uint64_t offset, bool secure, bool user){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_ppc_read_blocked");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,p,p)" ,n,offset,secure,user);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_tz_ppc_write_blocked(int n, uint64_t offset, bool secure, bool user){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"tz_ppc_write_blocked");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,p,p)" ,n,offset,secure,user);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_iotkit_secctl_s_read(uint32_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"iotkit_secctl_s_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_iotkit_secctl_s_write(uint32_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"iotkit_secctl_s_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_iotkit_secctl_ns_read(uint32_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"iotkit_secctl_ns_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_iotkit_secctl_ns_write(uint32_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"iotkit_secctl_ns_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ccm_entry(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ccm_entry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ccm_freq(uint32_t freq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ccm_freq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,freq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ccm_clock_freq(uint32_t clock, uint32_t freq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ccm_clock_freq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,clock,freq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ccm_read_reg(const char *reg_name, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ccm_read_reg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&reg_name,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ccm_write_reg(const char *reg_name, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ccm_write_reg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&reg_name,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_iotkit_sysinfo_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"iotkit_sysinfo_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_iotkit_sysinfo_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"iotkit_sysinfo_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_iotkit_sysctl_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"iotkit_sysctl_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_iotkit_sysctl_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"iotkit_sysctl_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_iotkit_sysctl_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"iotkit_sysctl_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_armsse_cpu_pwrctrl_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"armsse_cpu_pwrctrl_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_armsse_cpu_pwrctrl_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"armsse_cpu_pwrctrl_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_armsse_cpuid_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"armsse_cpuid_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_armsse_cpuid_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"armsse_cpuid_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_armsse_mhu_read(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"armsse_mhu_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_armsse_mhu_write(uint64_t offset, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"armsse_mhu_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,offset,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aspeed_xdma_write(uint64_t offset, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aspeed_xdma_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bcm2835_mbox_property(uint32_t tag, uint32_t bufsize, size_t resplen){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bcm2835_mbox_property");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,tag,bufsize,resplen);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bcm2835_mbox_write(unsigned int size, uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bcm2835_mbox_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,K,K)" ,size,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bcm2835_mbox_read(unsigned int size, uint64_t addr, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bcm2835_mbox_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,K,K)" ,size,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bcm2835_mbox_irq(unsigned level){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bcm2835_mbox_irq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I)" ,level);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_rtc_update_data_out(int count, int value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_rtc_update_data_out");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,count,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_rtc_update_data_in(int count, int value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_rtc_update_data_in");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,count,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_rtc_internal_status(int cmd, int alt, int value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_rtc_internal_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,cmd,alt,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_rtc_internal_cmd(int cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_rtc_internal_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_rtc_cmd_invalid(int value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_rtc_cmd_invalid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_rtc_internal_time(uint32_t time){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_rtc_internal_time");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,time);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_rtc_internal_set_cmd(int cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_rtc_internal_set_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_rtc_internal_ignore_cmd(int cmd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_rtc_internal_ignore_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cmd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_rtc_internal_set_alt(int alt, int sector, int offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_rtc_internal_set_alt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,alt,sector,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_rtc_cmd_seconds_read(int reg, int value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_rtc_cmd_seconds_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,reg,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_rtc_cmd_seconds_write(int reg, int value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_rtc_cmd_seconds_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,reg,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_rtc_cmd_test_write(int value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_rtc_cmd_test_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_rtc_cmd_wprotect_write(int value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_rtc_cmd_wprotect_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_rtc_cmd_pram_read(int addr, int value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_rtc_cmd_pram_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_rtc_cmd_pram_write(int addr, int value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_rtc_cmd_pram_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_rtc_cmd_pram_sect_read(int sector, int offset, int addr, int value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_rtc_cmd_pram_sect_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,sector,offset,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_rtc_cmd_pram_sect_write(int sector, int offset, int addr, int value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_rtc_cmd_pram_sect_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,sector,offset,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_adb_send(const char *state, uint8_t data, const char *vadbint){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_adb_send");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B,b)" ,&state,data,&vadbint);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_adb_receive(const char *state, uint8_t data, const char *vadbint, int status, int index, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_adb_receive");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,B,b,i,i,i)" ,&state,data,&vadbint,status,index,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_adb_poll(uint8_t data, const char *vadbint, int status, int index, int size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_adb_poll");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,b,i,i,i)" ,data,&vadbint,status,index,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_via1_auxmode(int mode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"via1_auxmode");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,mode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_grlib_ahb_pnp_read(uint64_t addr, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"grlib_ahb_pnp_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_grlib_apb_pnp_read(uint64_t addr, uint32_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"grlib_apb_pnp_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_led_set_intensity(const char *color, const char *desc, uint8_t intensity_percent){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"led_set_intensity");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,B)" ,&color,&desc,intensity_percent);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_led_change_intensity(const char *color, const char *desc, uint8_t old_intensity_percent, uint8_t new_intensity_percent){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"led_change_intensity");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,B,B)" ,&color,&desc,old_intensity_percent,new_intensity_percent);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pca955x_gpio_status(const char *description, const char *buf){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pca955x_gpio_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b)" ,&description,&buf);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pca955x_gpio_change(const char *description, unsigned id, unsigned prev_state, unsigned current_state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pca955x_gpio_change");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,I,I,I)" ,&description,id,prev_state,current_state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bcm2835_cprman_read(uint64_t offset, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bcm2835_cprman_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bcm2835_cprman_write(uint64_t offset, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bcm2835_cprman_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bcm2835_cprman_write_invalid_magic(uint64_t offset, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bcm2835_cprman_write_invalid_magic");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virt_ctrl_read(void *dev, unsigned int addr, unsigned int size, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virt_ctrl_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I,I,K)" ,&dev,addr,size,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virt_ctrl_write(void *dev, unsigned int addr, unsigned int size, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virt_ctrl_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I,I,K)" ,&dev,addr,size,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virt_ctrl_reset(void *dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virt_ctrl_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&dev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virt_ctrl_realize(void *dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virt_ctrl_realize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&dev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_virt_ctrl_instance_init(void *dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"virt_ctrl_instance_init");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&dev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

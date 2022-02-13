
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_nvme.h"

void glue_pci_nvme_irq_msix(uint32_t vector){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_irq_msix");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,vector);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_irq_pin(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_irq_pin");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_irq_masked(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_irq_masked");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_dma_read(uint64_t prp1, uint64_t prp2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_dma_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,prp1,prp2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_map_addr(uint64_t addr, uint64_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_map_addr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_map_addr_cmb(uint64_t addr, uint64_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_map_addr_cmb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,addr,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_map_prp(uint64_t trans_len, uint32_t len, uint64_t prp1, uint64_t prp2, int num_prps){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_map_prp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,i)" ,trans_len,len,prp1,prp2,num_prps);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_map_sgl(uint8_t typ, uint64_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_map_sgl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K)" ,typ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_io_cmd(uint16_t cid, uint32_t nsid, uint16_t sqid, uint8_t opcode, const char *opname){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_io_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,i,B,b)" ,cid,nsid,sqid,opcode,&opname);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_admin_cmd(uint16_t cid, uint16_t sqid, uint8_t opcode, const char *opname){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_admin_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,B,b)" ,cid,sqid,opcode,&opname);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_flush_ns(uint32_t nsid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_flush_ns");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,nsid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_format_set(uint32_t nsid, uint8_t lbaf, uint8_t mset, uint8_t pi, uint8_t pil){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_format_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B,B,B,B)" ,nsid,lbaf,mset,pi,pil);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_read(uint16_t cid, uint32_t nsid, uint32_t nlb, uint64_t count, uint64_t lba){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K,K)" ,cid,nsid,nlb,count,lba);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_write(uint16_t cid, const char *verb, uint32_t nsid, uint32_t nlb, uint64_t count, uint64_t lba){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,K,K,K,K)" ,cid,&verb,nsid,nlb,count,lba);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_rw_cb(uint16_t cid, const char *blkname){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_rw_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,cid,&blkname);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_misc_cb(uint16_t cid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_misc_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_dif_rw(uint8_t pract, uint8_t prinfo){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_dif_rw");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,pract,prinfo);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_dif_rw_cb(uint16_t cid, const char *blkname){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_dif_rw_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,cid,&blkname);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_dif_rw_mdata_in_cb(uint16_t cid, const char *blkname){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_dif_rw_mdata_in_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,cid,&blkname);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_dif_rw_mdata_out_cb(uint16_t cid, const char *blkname){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_dif_rw_mdata_out_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,cid,&blkname);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_dif_rw_check_cb(uint16_t cid, uint8_t prinfo, uint16_t apptag, uint16_t appmask, uint32_t reftag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_dif_rw_check_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,i,i,K)" ,cid,prinfo,apptag,appmask,reftag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_dif_pract_generate_dif(size_t len, size_t lba_size, size_t chksum_len, uint16_t apptag, uint32_t reftag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_dif_pract_generate_dif");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i,K)" ,len,lba_size,chksum_len,apptag,reftag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_dif_check(uint8_t prinfo, uint16_t chksum_len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_dif_check");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,i)" ,prinfo,chksum_len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_dif_prchk_disabled(uint16_t apptag, uint32_t reftag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_dif_prchk_disabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,apptag,reftag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_dif_prchk_guard(uint16_t guard, uint16_t crc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_dif_prchk_guard");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,guard,crc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_dif_prchk_apptag(uint16_t apptag, uint16_t elbat, uint16_t elbatm){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_dif_prchk_apptag");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i)" ,apptag,elbat,elbatm);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_dif_prchk_reftag(uint32_t reftag, uint32_t elbrt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_dif_prchk_reftag");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,reftag,elbrt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_copy(uint16_t cid, uint32_t nsid, uint16_t nr, uint8_t format){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_copy");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,i,B)" ,cid,nsid,nr,format);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_copy_source_range(uint64_t slba, uint32_t nlb){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_copy_source_range");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,slba,nlb);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_copy_out(uint64_t slba, uint32_t nlb){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_copy_out");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,slba,nlb);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_verify(uint16_t cid, uint32_t nsid, uint64_t slba, uint32_t nlb){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_verify");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K)" ,cid,nsid,slba,nlb);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_verify_mdata_in_cb(uint16_t cid, const char *blkname){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_verify_mdata_in_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,cid,&blkname);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_verify_cb(uint16_t cid, uint8_t prinfo, uint16_t apptag, uint16_t appmask, uint32_t reftag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_verify_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,i,i,K)" ,cid,prinfo,apptag,appmask,reftag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_rw_complete_cb(uint16_t cid, const char *blkname){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_rw_complete_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,cid,&blkname);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_block_status(int64_t offset, int64_t bytes, int64_t pnum, int ret, bool zeroed){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_block_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(L,L,L,i,p)" ,offset,bytes,pnum,ret,zeroed);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_dsm(uint32_t nr, uint32_t attr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_dsm");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,nr,attr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_dsm_deallocate(uint64_t slba, uint32_t nlb){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_dsm_deallocate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,slba,nlb);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_dsm_single_range_limit_exceeded(uint32_t nlb, uint32_t dmrsl){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_dsm_single_range_limit_exceeded");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,nlb,dmrsl);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_compare(uint16_t cid, uint32_t nsid, uint64_t slba, uint32_t nlb){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_compare");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,K)" ,cid,nsid,slba,nlb);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_compare_data_cb(uint16_t cid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_compare_data_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_compare_mdata_cb(uint16_t cid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_compare_mdata_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_aio_discard_cb(uint16_t cid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_aio_discard_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_aio_copy_in_cb(uint16_t cid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_aio_copy_in_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_aio_flush_cb(uint16_t cid, const char *blkname){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_aio_flush_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,cid,&blkname);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_create_sq(uint64_t addr, uint16_t sqid, uint16_t cqid, uint16_t qsize, uint16_t qflags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_create_sq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i,i,i)" ,addr,sqid,cqid,qsize,qflags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_create_cq(uint64_t addr, uint16_t cqid, uint16_t vector, uint16_t size, uint16_t qflags, int ien){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_create_cq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i,i,i,i,i)" ,addr,cqid,vector,size,qflags,ien);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_del_sq(uint16_t qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_del_sq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_del_cq(uint16_t cqid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_del_cq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cqid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_identify(uint16_t cid, uint8_t cns, uint16_t ctrlid, uint8_t csi){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_identify");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,i,B)" ,cid,cns,ctrlid,csi);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_identify_ctrl(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_identify_ctrl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_identify_ctrl_csi(uint8_t csi){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_identify_ctrl_csi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,csi);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_identify_ns(uint32_t ns){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_identify_ns");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ns);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_identify_ctrl_list(uint8_t cns, uint16_t cntid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_identify_ctrl_list");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,i)" ,cns,cntid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_identify_ns_csi(uint32_t ns, uint8_t csi){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_identify_ns_csi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,B)" ,ns,csi);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_identify_nslist(uint32_t ns){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_identify_nslist");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ns);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_identify_nslist_csi(uint16_t ns, uint8_t csi){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_identify_nslist_csi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B)" ,ns,csi);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_identify_cmd_set(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_identify_cmd_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_identify_ns_descr_list(uint32_t ns){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_identify_ns_descr_list");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ns);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_get_log(uint16_t cid, uint8_t lid, uint8_t lsp, uint8_t rae, uint32_t len, uint64_t off){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_get_log");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,B,B,K,K)" ,cid,lid,lsp,rae,len,off);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_getfeat(uint16_t cid, uint32_t nsid, uint8_t fid, uint8_t sel, uint32_t cdw11){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_getfeat");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,B,B,K)" ,cid,nsid,fid,sel,cdw11);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_setfeat(uint16_t cid, uint32_t nsid, uint8_t fid, uint8_t save, uint32_t cdw11){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_setfeat");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,B,B,K)" ,cid,nsid,fid,save,cdw11);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_getfeat_vwcache(const char* result){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_getfeat_vwcache");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_getfeat_numq(int result){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_getfeat_numq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,result);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_setfeat_numq(int reqcq, int reqsq, int gotcq, int gotsq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_setfeat_numq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i)" ,reqcq,reqsq,gotcq,gotsq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_setfeat_timestamp(uint64_t ts){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_setfeat_timestamp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ts);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_getfeat_timestamp(uint64_t ts){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_getfeat_timestamp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,ts);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_process_aers(int queued){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_process_aers");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,queued);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_aer(uint16_t cid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_aer");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_aer_aerl_exceeded(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_aer_aerl_exceeded");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_aer_masked(uint8_t type, uint8_t mask){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_aer_masked");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,type,mask);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_aer_post_cqe(uint8_t typ, uint8_t info, uint8_t log_page){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_aer_post_cqe");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B)" ,typ,info,log_page);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ns_attachment(uint16_t cid, uint8_t sel){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ns_attachment");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B)" ,cid,sel);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ns_attachment_attach(uint16_t cntlid, uint32_t nsid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ns_attachment_attach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K)" ,cntlid,nsid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_enqueue_event(uint8_t typ, uint8_t info, uint8_t log_page){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_enqueue_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B,B)" ,typ,info,log_page);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_enqueue_event_noqueue(int queued){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_enqueue_event_noqueue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,queued);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_enqueue_event_masked(uint8_t typ){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_enqueue_event_masked");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,typ);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_no_outstanding_aers(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_no_outstanding_aers");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_enqueue_req_completion(uint16_t cid, uint16_t cqid, uint32_t dw0, uint32_t dw1, uint16_t status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_enqueue_req_completion");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,K,K,i)" ,cid,cqid,dw0,dw1,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_mmio_read(uint64_t addr, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_mmio_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I)" ,addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_mmio_write(uint64_t addr, uint64_t data, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_mmio_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,addr,data,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_mmio_doorbell_cq(uint16_t cqid, uint16_t new_head){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_mmio_doorbell_cq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cqid,new_head);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_mmio_doorbell_sq(uint16_t sqid, uint16_t new_tail){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_mmio_doorbell_sq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,sqid,new_tail);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_mmio_intm_set(uint64_t data, uint64_t new_mask){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_mmio_intm_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,data,new_mask);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_mmio_intm_clr(uint64_t data, uint64_t new_mask){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_mmio_intm_clr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,data,new_mask);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_mmio_cfg(uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_mmio_cfg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_mmio_aqattr(uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_mmio_aqattr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_mmio_asqaddr(uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_mmio_asqaddr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_mmio_acqaddr(uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_mmio_acqaddr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_mmio_asqaddr_hi(uint64_t data, uint64_t new_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_mmio_asqaddr_hi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,data,new_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_mmio_acqaddr_hi(uint64_t data, uint64_t new_addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_mmio_acqaddr_hi");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,data,new_addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_mmio_start_success(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_mmio_start_success");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_mmio_stopped(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_mmio_stopped");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_mmio_shutdown_set(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_mmio_shutdown_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_mmio_shutdown_cleared(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_mmio_shutdown_cleared");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_zns_zone_reset(uint64_t zslba){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_zns_zone_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,zslba);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_set_descriptor_extension(uint64_t slba, uint32_t zone_idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_set_descriptor_extension");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,slba,zone_idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_zd_extension_set(uint32_t zone_idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_zd_extension_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,zone_idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_clear_ns_close(uint32_t state, uint64_t slba){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_clear_ns_close");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,state,slba);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_clear_ns_reset(uint32_t state, uint64_t slba){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_clear_ns_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,state,slba);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_mdts(size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_mdts");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_zasl(size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_zasl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_req_status(uint16_t cid, uint32_t nsid, uint16_t status, uint8_t opc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_req_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,i,B)" ,cid,nsid,status,opc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_addr_read(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_addr_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_addr_write(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_addr_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_cfs(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_cfs");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_aio(uint16_t cid, const char *errname, uint16_t status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_aio");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b,i)" ,cid,&errname,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_copy_invalid_format(uint8_t format){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_copy_invalid_format");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,format);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_sgld(uint16_t cid, uint8_t typ){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_sgld");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B)" ,cid,typ);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_num_sgld(uint16_t cid, uint8_t typ){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_num_sgld");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B)" ,cid,typ);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_sgl_excess_length(uint32_t residual){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_sgl_excess_length");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,residual);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_dma(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_dma");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_prplist_ent(uint64_t prplist){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_prplist_ent");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,prplist);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_prp2_align(uint64_t prp2){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_prp2_align");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,prp2);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_opc(uint8_t opc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_opc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,opc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_admin_opc(uint8_t opc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_admin_opc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,opc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_lba_range(uint64_t start, uint64_t len, uint64_t limit){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_lba_range");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,start,len,limit);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_log_page_offset(uint64_t ofs, uint64_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_log_page_offset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,ofs,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_cmb_invalid_cba(uint64_t cmbmsc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_cmb_invalid_cba");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,cmbmsc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_cmb_not_enabled(uint64_t cmbmsc){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_cmb_not_enabled");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,cmbmsc);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_unaligned_zone_cmd(uint8_t action, uint64_t slba, uint64_t zslba){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_unaligned_zone_cmd");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,K)" ,action,slba,zslba);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_zone_state_transition(uint8_t action, uint64_t slba, uint8_t attrs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_zone_state_transition");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,K,B)" ,action,slba,attrs);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_write_not_at_wp(uint64_t slba, uint64_t zone, uint64_t wp){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_write_not_at_wp");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,slba,zone,wp);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_append_not_at_start(uint64_t slba, uint64_t zone){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_append_not_at_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,slba,zone);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_zone_is_full(uint64_t zslba){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_zone_is_full");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,zslba);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_zone_is_read_only(uint64_t zslba){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_zone_is_read_only");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,zslba);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_zone_is_offline(uint64_t zslba){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_zone_is_offline");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,zslba);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_zone_boundary(uint64_t slba, uint32_t nlb, uint64_t zcap){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_zone_boundary");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,slba,nlb,zcap);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_zone_invalid_write(uint64_t slba, uint64_t wp){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_zone_invalid_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,slba,wp);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_zone_write_not_ok(uint64_t slba, uint32_t nlb, uint16_t status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_zone_write_not_ok");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,slba,nlb,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_zone_read_not_ok(uint64_t slba, uint32_t nlb, uint16_t status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_zone_read_not_ok");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,slba,nlb,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_insuff_active_res(uint32_t max_active){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_insuff_active_res");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,max_active);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_insuff_open_res(uint32_t max_open){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_insuff_open_res");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,max_open);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_zd_extension_map_error(uint32_t zone_idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_zd_extension_map_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,zone_idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_iocsci(uint32_t idx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_iocsci");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,idx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_del_sq(uint16_t qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_del_sq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_create_sq_cqid(uint16_t cqid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_create_sq_cqid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cqid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_create_sq_sqid(uint16_t sqid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_create_sq_sqid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,sqid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_create_sq_size(uint16_t qsize){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_create_sq_size");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qsize);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_create_sq_addr(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_create_sq_addr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_create_sq_qflags(uint16_t qflags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_create_sq_qflags");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qflags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_del_cq_cqid(uint16_t cqid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_del_cq_cqid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cqid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_del_cq_notempty(uint16_t cqid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_del_cq_notempty");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cqid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_create_cq_cqid(uint16_t cqid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_create_cq_cqid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cqid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_create_cq_size(uint16_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_create_cq_size");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_create_cq_addr(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_create_cq_addr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_create_cq_vector(uint16_t vector){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_create_cq_vector");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,vector);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_create_cq_qflags(uint16_t qflags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_create_cq_qflags");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,qflags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_identify_cns(uint16_t cns){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_identify_cns");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cns);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_getfeat(int dw10){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_getfeat");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,dw10);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_setfeat(uint32_t dw10){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_setfeat");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,dw10);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_log_page(uint16_t cid, uint16_t lid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_log_page");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cid,lid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_startfail_cq(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_startfail_cq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_startfail_sq(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_startfail_sq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_startfail_asq_misaligned(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_startfail_asq_misaligned");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_startfail_acq_misaligned(uint64_t addr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_startfail_acq_misaligned");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,addr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_startfail_page_too_small(uint8_t log2ps, uint8_t maxlog2ps){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_startfail_page_too_small");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,log2ps,maxlog2ps);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_startfail_page_too_large(uint8_t log2ps, uint8_t maxlog2ps){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_startfail_page_too_large");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,log2ps,maxlog2ps);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_startfail_cqent_too_small(uint8_t log2ps, uint8_t maxlog2ps){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_startfail_cqent_too_small");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,log2ps,maxlog2ps);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_startfail_cqent_too_large(uint8_t log2ps, uint8_t maxlog2ps){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_startfail_cqent_too_large");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,log2ps,maxlog2ps);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_startfail_sqent_too_small(uint8_t log2ps, uint8_t maxlog2ps){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_startfail_sqent_too_small");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,log2ps,maxlog2ps);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_startfail_sqent_too_large(uint8_t log2ps, uint8_t maxlog2ps){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_startfail_sqent_too_large");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,log2ps,maxlog2ps);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_startfail_css(uint8_t css){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_startfail_css");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,css);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_startfail_asqent_sz_zero(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_startfail_asqent_sz_zero");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_startfail_acqent_sz_zero(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_startfail_acqent_sz_zero");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_startfail_zasl_too_small(uint32_t zasl, uint32_t pagesz){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_startfail_zasl_too_small");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,zasl,pagesz);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_startfail(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_startfail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_err_invalid_mgmt_action(uint8_t action){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_err_invalid_mgmt_action");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,action);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_mmiowr_misaligned32(uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_mmiowr_misaligned32");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_mmiowr_toosmall(uint64_t offset, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_mmiowr_toosmall");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,I)" ,offset,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_mmiowr_intmask_with_msix(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_mmiowr_intmask_with_msix");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_mmiowr_ro_csts(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_mmiowr_ro_csts");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_mmiowr_ssreset_w1c_unsupported(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_mmiowr_ssreset_w1c_unsupported");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_mmiowr_ssreset_unsupported(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_mmiowr_ssreset_unsupported");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_mmiowr_cmbloc_reserved(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_mmiowr_cmbloc_reserved");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_mmiowr_cmbsz_readonly(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_mmiowr_cmbsz_readonly");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_mmiowr_pmrcap_readonly(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_mmiowr_pmrcap_readonly");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_mmiowr_pmrsts_readonly(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_mmiowr_pmrsts_readonly");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_mmiowr_pmrebs_readonly(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_mmiowr_pmrebs_readonly");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_mmiowr_pmrswtp_readonly(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_mmiowr_pmrswtp_readonly");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_mmiowr_invalid(uint64_t offset, uint64_t data){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_mmiowr_invalid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,offset,data);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_mmiord_misaligned32(uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_mmiord_misaligned32");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_mmiord_toosmall(uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_mmiord_toosmall");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_mmiord_invalid_ofs(uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_mmiord_invalid_ofs");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_db_wr_misaligned(uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_db_wr_misaligned");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_db_wr_invalid_cq(uint32_t qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_db_wr_invalid_cq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_db_wr_invalid_cqhead(uint32_t qid, uint16_t new_head){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_db_wr_invalid_cqhead");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,qid,new_head);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_db_wr_invalid_sq(uint32_t qid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_db_wr_invalid_sq");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,qid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_db_wr_invalid_sqtail(uint32_t qid, uint16_t new_tail){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_db_wr_invalid_sqtail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,i)" ,qid,new_tail);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_unknown_css_value(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_unknown_css_value");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_pci_nvme_ub_too_many_mappings(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"pci_nvme_ub_too_many_mappings");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}


#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_.h"

void glue_multiwrite_cb(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"multiwrite_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_trace_multiwrite_cb(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"trace_multiwrite_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_g_malloc(size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"g_malloc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sprintf(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sprintf");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_breakpoint_insert(int cpu_index, uint64_t pc, int flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"breakpoint_insert");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,i)" ,cpu_index,pc,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_breakpoint_remove(int cpu_index, uint64_t pc, int flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"breakpoint_remove");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,i)" ,cpu_index,pc,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_breakpoint_singlestep(int cpu_index, int enabled){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"breakpoint_singlestep");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,cpu_index,enabled);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dma_blk_io(void *dbs, void *bs, int64_t offset, bool to_dev){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dma_blk_io");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,L,p)" ,&dbs,&bs,offset,to_dev);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dma_aio_cancel(void *dbs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dma_aio_cancel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&dbs);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dma_complete(void *dbs, int ret, void *cb){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dma_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,O&)" ,&dbs,ret,&cb);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dma_blk_cb(void *dbs, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dma_blk_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&dbs,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_dma_map_wait(void *dbs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"dma_map_wait");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&dbs);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_find_ram_offset(uint64_t size, uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"find_ram_offset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,size,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_find_ram_offset_loop(uint64_t size, uint64_t candidate, uint64_t offset, uint64_t next, uint64_t mingap){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"find_ram_offset_loop");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K)" ,size,candidate,offset,next,mingap);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_memory_notdirty_write_access(uint64_t vaddr, uint64_t ram_addr, unsigned size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"memory_notdirty_write_access");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,I)" ,vaddr,ram_addr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_memory_notdirty_set_dirty(uint64_t vaddr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"memory_notdirty_set_dirty");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,vaddr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_op_start(const char *device){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_op_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&device);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_op_exiting(uint8_t code){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_op_exiting");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,code);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_op_continue(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_op_continue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_op_continue_cpu(int cpu_index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_op_continue_cpu");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cpu_index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_op_stepping(int cpu_index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_op_stepping");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,cpu_index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_op_extra_info(const char *info){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_op_extra_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&info);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_hit_watchpoint(const char *type, int cpu_gdb_index, uint64_t vaddr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_hit_watchpoint");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,K)" ,&type,cpu_gdb_index,vaddr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_hit_internal_error(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_hit_internal_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_hit_break(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_hit_break");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_hit_paused(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_hit_paused");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_hit_shutdown(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_hit_shutdown");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_hit_io_error(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_hit_io_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_hit_watchdog(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_hit_watchdog");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_hit_unknown(int state){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_hit_unknown");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,state);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_io_reply(const char *message){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_io_reply");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&message);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_io_binaryreply(size_t ofs, const char *line){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_io_binaryreply");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,ofs,&line);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_io_command(const char *command){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_io_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&command);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_io_got_ack(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_io_got_ack");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_io_got_unexpected(uint8_t ch){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_io_got_unexpected");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,ch);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_err_got_nack(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_err_got_nack");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_err_garbage(uint8_t ch){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_err_garbage");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,ch);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_err_overrun(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_err_overrun");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_err_invalid_repeat(uint8_t ch){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_err_invalid_repeat");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,ch);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_err_invalid_rle(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_err_invalid_rle");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_err_checksum_invalid(uint8_t ch){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_err_checksum_invalid");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B)" ,ch);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_gdbstub_err_checksum_incorrect(uint8_t expected, uint8_t got){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"gdbstub_err_checksum_incorrect");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(B,B)" ,expected,got);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_job_state_transition(void *job,  int ret, const char *legal, const char *s0, const char *s1){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"job_state_transition");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,b,b,b)" ,&job,ret,&legal,&s0,&s1);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_job_apply_verb(void *job, const char *state, const char *verb, const char *legal){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"job_apply_verb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,b,b)" ,&job,&state,&verb,&legal);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_job_completed(void *job, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"job_completed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&job,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qmp_job_cancel(void *job){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qmp_job_cancel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&job);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qmp_job_pause(void *job){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qmp_job_pause");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&job);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qmp_job_resume(void *job){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qmp_job_resume");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&job);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qmp_job_complete(void *job){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qmp_job_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&job);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qmp_job_finalize(void *job){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qmp_job_finalize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&job);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qmp_job_dismiss(void *job){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qmp_job_dismiss");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&job);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_guest_cpu_enter(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"guest_cpu_enter");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_guest_cpu_exit(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"guest_cpu_exit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_guest_cpu_reset(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"guest_cpu_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_guest_ld_before(TCGv vaddr, uint32_t memopidx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"guest_ld_before");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,memopidx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_guest_st_before(TCGv vaddr, uint32_t memopidx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"guest_st_before");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,memopidx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_guest_rmw_before(TCGv vaddr, uint32_t memopidx){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"guest_rmw_before");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,memopidx);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_guest_user_syscall(uint64_t num, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6, uint64_t arg7, uint64_t arg8){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"guest_user_syscall");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,K,K,K,K,K,K)" ,num,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_guest_user_syscall_ret(uint64_t num, uint64_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"guest_user_syscall_ret");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,num,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

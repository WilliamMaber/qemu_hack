
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_block.h"

void glue_bdrv_open_common(void *bs, const char *filename, int flags, const char *format_name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bdrv_open_common");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,i,b)" ,&bs,&filename,flags,&format_name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bdrv_lock_medium(void *bs, bool locked){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bdrv_lock_medium");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,p)" ,&bs,locked);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_blk_co_preadv(void *blk, void *bs, int64_t offset, int64_t bytes, int flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"blk_co_preadv");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,L,L,i)" ,&blk,&bs,offset,bytes,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_blk_co_pwritev(void *blk, void *bs, int64_t offset, int64_t bytes, int flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"blk_co_pwritev");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,L,L,i)" ,&blk,&bs,offset,bytes,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_blk_root_attach(void *child, void *blk, void *bs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"blk_root_attach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,O&)" ,&child,&blk,&bs);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_blk_root_detach(void *child, void *blk, void *bs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"blk_root_detach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,O&)" ,&child,&blk,&bs);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bdrv_co_preadv_part(void *bs, int64_t offset, int64_t bytes, unsigned int flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bdrv_co_preadv_part");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,L,I)" ,&bs,offset,bytes,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bdrv_co_pwritev_part(void *bs, int64_t offset, int64_t bytes, unsigned int flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bdrv_co_pwritev_part");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,L,I)" ,&bs,offset,bytes,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bdrv_co_pwrite_zeroes(void *bs, int64_t offset, int64_t bytes, int flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bdrv_co_pwrite_zeroes");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,L,i)" ,&bs,offset,bytes,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bdrv_co_do_copy_on_readv(void *bs, int64_t offset, int64_t bytes, int64_t cluster_offset, int64_t cluster_bytes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bdrv_co_do_copy_on_readv");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,L,L,L)" ,&bs,offset,bytes,cluster_offset,cluster_bytes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bdrv_co_copy_range_from(void *src, int64_t src_offset, void *dst, int64_t dst_offset, int64_t bytes, int read_flags, int write_flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bdrv_co_copy_range_from");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,O&,L,L,i,i)" ,&src,src_offset,&dst,dst_offset,bytes,read_flags,write_flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_bdrv_co_copy_range_to(void *src, int64_t src_offset, void *dst, int64_t dst_offset, int64_t bytes, int read_flags, int write_flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"bdrv_co_copy_range_to");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,O&,L,L,i,i)" ,&src,src_offset,&dst,dst_offset,bytes,read_flags,write_flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_stream_start(void *bs, void *base, void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"stream_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,O&)" ,&bs,&base,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_commit_start(void *bs, void *base, void *top, void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"commit_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,O&,O&)" ,&bs,&base,&top,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mirror_start(void *bs, void *s, void *opaque){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mirror_start");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,O&)" ,&bs,&s,&opaque);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mirror_restart_iter(void *s, int64_t cnt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mirror_restart_iter");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L)" ,&s,cnt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mirror_before_flush(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mirror_before_flush");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mirror_before_drain(void *s, int64_t cnt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mirror_before_drain");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L)" ,&s,cnt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mirror_before_sleep(void *s, int64_t cnt, int synced, uint64_t delay_ns){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mirror_before_sleep");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,i,K)" ,&s,cnt,synced,delay_ns);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mirror_one_iteration(void *s, int64_t offset, uint64_t bytes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mirror_one_iteration");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,K)" ,&s,offset,bytes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mirror_iteration_done(void *s, int64_t offset, uint64_t bytes, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mirror_iteration_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,K,i)" ,&s,offset,bytes,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mirror_yield(void *s, int64_t cnt, int buf_free_count, int in_flight){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mirror_yield");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,i,i)" ,&s,cnt,buf_free_count,in_flight);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_mirror_yield_in_flight(void *s, int64_t offset, int in_flight){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"mirror_yield_in_flight");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,i)" ,&s,offset,in_flight);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_backup_do_cow_enter(void *job, int64_t start, int64_t offset, uint64_t bytes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"backup_do_cow_enter");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,L,K)" ,&job,start,offset,bytes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_backup_do_cow_return(void *job, int64_t offset, uint64_t bytes, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"backup_do_cow_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,K,i)" ,&job,offset,bytes,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_block_copy_skip_range(void *bcs, int64_t start, uint64_t bytes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"block_copy_skip_range");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,K)" ,&bcs,start,bytes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_block_copy_process(void *bcs, int64_t start){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"block_copy_process");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L)" ,&bcs,start);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_block_copy_copy_range_fail(void *bcs, int64_t start, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"block_copy_copy_range_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,i)" ,&bcs,start,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_block_copy_read_fail(void *bcs, int64_t start, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"block_copy_read_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,i)" ,&bcs,start,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_block_copy_write_fail(void *bcs, int64_t start, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"block_copy_write_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,i)" ,&bcs,start,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_block_copy_write_zeroes_fail(void *bcs, int64_t start, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"block_copy_write_zeroes_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,i)" ,&bcs,start,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qmp_block_job_cancel(void *job){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qmp_block_job_cancel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&job);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qmp_block_job_pause(void *job){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qmp_block_job_pause");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&job);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qmp_block_job_resume(void *job){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qmp_block_job_resume");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&job);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qmp_block_job_complete(void *job){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qmp_block_job_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&job);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qmp_block_job_finalize(void *job){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qmp_block_job_finalize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&job);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qmp_block_job_dismiss(void *job){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qmp_block_job_dismiss");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&job);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qmp_block_stream(void *bs){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qmp_block_stream");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&bs);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_file_paio_submit(void *acb, void *opaque, int64_t offset, int count, int type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"file_paio_submit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,L,i,i)" ,&acb,&opaque,offset,count,type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_luring_init_state(void *s, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"luring_init_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&s,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_luring_cleanup_state(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"luring_cleanup_state");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_luring_io_plug(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"luring_io_plug");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_luring_io_unplug(void *s, int blocked, int plugged, int queued, int inflight){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"luring_io_unplug");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,i,i)" ,&s,blocked,plugged,queued,inflight);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_luring_do_submit(void *s, int blocked, int plugged, int queued, int inflight){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"luring_do_submit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,i,i)" ,&s,blocked,plugged,queued,inflight);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_luring_do_submit_done(void *s, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"luring_do_submit_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&s,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_luring_co_submit(void *bs, void *s, void *luringcb, int fd, uint64_t offset, size_t nbytes, int type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"luring_co_submit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,O&,i,K,i,i)" ,&bs,&s,&luringcb,fd,offset,nbytes,type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_luring_process_completion(void *s, void *aiocb, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"luring_process_completion");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i)" ,&s,&aiocb,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_luring_io_uring_submit(void *s, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"luring_io_uring_submit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&s,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_luring_resubmit_short_read(void *s, void *luringcb, int nread){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"luring_resubmit_short_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i)" ,&s,&luringcb,nread);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_add_task(void *co, void *bs, void *pool, const char *action, int cluster_type, uint64_t host_offset, uint64_t offset, uint64_t bytes, void *qiov, size_t qiov_offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_add_task");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,O&,b,i,K,K,K,O&,i)" ,&co,&bs,&pool,&action,cluster_type,host_offset,offset,bytes,&qiov,qiov_offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_writev_start_req(void *co, int64_t offset, int64_t bytes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_writev_start_req");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,L)" ,&co,offset,bytes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_writev_done_req(void *co, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_writev_done_req");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&co,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_writev_start_part(void *co){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_writev_start_part");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&co);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_writev_done_part(void *co, int cur_bytes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_writev_done_part");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&co,cur_bytes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_writev_data(void *co, uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_writev_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K)" ,&co,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_pwrite_zeroes_start_req(void *co, int64_t offset, int64_t bytes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_pwrite_zeroes_start_req");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,L)" ,&co,offset,bytes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_pwrite_zeroes(void *co, int64_t offset, int64_t bytes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_pwrite_zeroes");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,L)" ,&co,offset,bytes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_skip_cow(void *co, uint64_t offset, int nb_clusters){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_skip_cow");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,i)" ,&co,offset,nb_clusters);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_alloc_clusters_offset(void *co, uint64_t offset, int bytes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_alloc_clusters_offset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,i)" ,&co,offset,bytes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_handle_copied(void *co, uint64_t guest_offset, uint64_t host_offset, uint64_t bytes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_handle_copied");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K)" ,&co,guest_offset,host_offset,bytes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_handle_alloc(void *co, uint64_t guest_offset, uint64_t host_offset, uint64_t bytes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_handle_alloc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K)" ,&co,guest_offset,host_offset,bytes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_do_alloc_clusters_offset(void *co, uint64_t guest_offset, uint64_t host_offset, int nb_clusters){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_do_alloc_clusters_offset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,i)" ,&co,guest_offset,host_offset,nb_clusters);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_cluster_alloc_phys(void *co){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_cluster_alloc_phys");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&co);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_cluster_link_l2(void *co, int nb_clusters){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_cluster_link_l2");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&co,nb_clusters);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_l2_allocate(void *bs, int l1_index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_l2_allocate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&bs,l1_index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_l2_allocate_get_empty(void *bs, int l1_index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_l2_allocate_get_empty");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&bs,l1_index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_l2_allocate_write_l2(void *bs, int l1_index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_l2_allocate_write_l2");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&bs,l1_index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_l2_allocate_write_l1(void *bs, int l1_index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_l2_allocate_write_l1");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&bs,l1_index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_l2_allocate_done(void *bs, int l1_index, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_l2_allocate_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&bs,l1_index,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_cache_get(void *co, int c, uint64_t offset, bool read_from_disk){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_cache_get");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,K,p)" ,&co,c,offset,read_from_disk);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_cache_get_replace_entry(void *co, int c, int i){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_cache_get_replace_entry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&co,c,i);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_cache_get_read(void *co, int c, int i){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_cache_get_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&co,c,i);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_cache_get_done(void *co, int c, int i){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_cache_get_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&co,c,i);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_cache_flush(void *co, int c){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_cache_flush");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&co,c);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_cache_entry_flush(void *co, int c, int i){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_cache_entry_flush");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&co,c,i);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qcow2_process_discards_failed_region(uint64_t offset, uint64_t bytes, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qcow2_process_discards_failed_region");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,i)" ,offset,bytes,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qed_alloc_l2_cache_entry(void *l2_cache, void *entry){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qed_alloc_l2_cache_entry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&l2_cache,&entry);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qed_unref_l2_cache_entry(void *entry, int ref){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qed_unref_l2_cache_entry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&entry,ref);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qed_find_l2_cache_entry(void *l2_cache, void *entry, uint64_t offset, int ref){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qed_find_l2_cache_entry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,K,i)" ,&l2_cache,&entry,offset,ref);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qed_read_table(void *s, uint64_t offset, void *table){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qed_read_table");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,O&)" ,&s,offset,&table);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qed_read_table_cb(void *s, void *table, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qed_read_table_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i)" ,&s,&table,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qed_write_table(void *s, uint64_t offset, void *table, unsigned int index, unsigned int n){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qed_write_table");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,O&,I,I)" ,&s,offset,&table,index,n);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qed_write_table_cb(void *s, void *table, int flush, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qed_write_table_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,i)" ,&s,&table,flush,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qed_need_check_timer_cb(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qed_need_check_timer_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qed_start_need_check_timer(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qed_start_need_check_timer");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qed_cancel_need_check_timer(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qed_cancel_need_check_timer");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qed_aio_complete(void *s, void *acb, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qed_aio_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i)" ,&s,&acb,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qed_aio_setup(void *s, void *acb, int64_t sector_num, int nb_sectors, void *opaque, int flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qed_aio_setup");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,L,i,O&,i)" ,&s,&acb,sector_num,nb_sectors,&opaque,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qed_aio_next_io(void *s, void *acb, int ret, uint64_t cur_pos){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qed_aio_next_io");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,K)" ,&s,&acb,ret,cur_pos);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qed_aio_read_data(void *s, void *acb, int ret, uint64_t offset, size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qed_aio_read_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,K,i)" ,&s,&acb,ret,offset,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qed_aio_write_data(void *s, void *acb, int ret, uint64_t offset, size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qed_aio_write_data");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,K,i)" ,&s,&acb,ret,offset,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qed_aio_write_prefill(void *s, void *acb, uint64_t start, size_t len, uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qed_aio_write_prefill");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,K,i,K)" ,&s,&acb,start,len,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qed_aio_write_postfill(void *s, void *acb, uint64_t start, size_t len, uint64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qed_aio_write_postfill");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,K,i,K)" ,&s,&acb,start,len,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qed_aio_write_main(void *s, void *acb, int ret, uint64_t offset, size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qed_aio_write_main");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,K,i)" ,&s,&acb,ret,offset,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_controller_capability_raw(uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_controller_capability_raw");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_controller_capability(const char *desc, uint64_t value){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_controller_capability");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K)" ,&desc,value);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_controller_spec_version(uint32_t mjr, uint32_t mnr, uint32_t ter){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_controller_spec_version");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K)" ,mjr,mnr,ter);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_kick(void *s, unsigned q_index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_kick");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I)" ,&s,q_index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_dma_flush_queue_wait(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_dma_flush_queue_wait");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_error(int cmd_specific, int sq_head, int sqid, int cid, int status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i,i)" ,cmd_specific,sq_head,sqid,cid,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_process_completion(void *s, unsigned q_index, int inflight){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_process_completion");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I,i)" ,&s,q_index,inflight);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_process_completion_queue_plugged(void *s, unsigned q_index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_process_completion_queue_plugged");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I)" ,&s,q_index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_complete_command(void *s, unsigned q_index, int cid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_complete_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I,i)" ,&s,q_index,cid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_submit_command(void *s, unsigned q_index, int cid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_submit_command");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I,i)" ,&s,q_index,cid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_submit_command_raw(int c0, int c1, int c2, int c3, int c4, int c5, int c6, int c7){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_submit_command_raw");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,i,i,i,i,i,i)" ,c0,c1,c2,c3,c4,c5,c6,c7);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_handle_event(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_handle_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_poll_queue(void *s, unsigned q_index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_poll_queue");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I)" ,&s,q_index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_prw_aligned(void *s, int is_write, uint64_t offset, uint64_t bytes, int flags, int niov){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_prw_aligned");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,K,K,i,i)" ,&s,is_write,offset,bytes,flags,niov);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_write_zeroes(void *s, uint64_t offset, uint64_t bytes, int flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_write_zeroes");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,i)" ,&s,offset,bytes,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_qiov_unaligned(const void *qiov, int n, void *base, size_t size, int align){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_qiov_unaligned");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,O&,i,i)" ,&qiov,n,&base,size,align);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_prw_buffered(void *s, uint64_t offset, uint64_t bytes, int niov, int is_write){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_prw_buffered");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,i,i)" ,&s,offset,bytes,niov,is_write);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_rw_done(void *s, int is_write, uint64_t offset, uint64_t bytes, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_rw_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,K,K,i)" ,&s,is_write,offset,bytes,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_dsm(void *s, int64_t offset, int64_t bytes){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_dsm");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,L)" ,&s,offset,bytes);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_dsm_done(void *s, int64_t offset, int64_t bytes, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_dsm_done");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,L,i)" ,&s,offset,bytes,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_dma_map_flush(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_dma_map_flush");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_free_req_queue_wait(void *s, unsigned q_index){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_free_req_queue_wait");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,I)" ,&s,q_index);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_create_queue_pair(unsigned q_index, void *q, size_t size, void *aio_context, int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_create_queue_pair");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,O&,i,O&,i)" ,q_index,&q,size,&aio_context,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_free_queue_pair(unsigned q_index, void *q, void *cq, void *sq){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_free_queue_pair");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(I,O&,O&,O&)" ,q_index,&q,&cq,&sq);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_cmd_map_qiov(void *s, void *cmd, void *req, void *qiov, int entries){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_cmd_map_qiov");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,O&,O&,i)" ,&s,&cmd,&req,&qiov,entries);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_cmd_map_qiov_pages(void *s, int i, uint64_t page){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_cmd_map_qiov_pages");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,K)" ,&s,i,page);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nvme_cmd_map_qiov_iov(void *s, int i, void *page, int pages){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nvme_cmd_map_qiov_iov");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,O&,i)" ,&s,i,&page,pages);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_iscsi_xcopy(void *src_lun, uint64_t src_off, void *dst_lun, uint64_t dst_off, uint64_t bytes, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"iscsi_xcopy");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,O&,K,K,i)" ,&src_lun,src_off,&dst_lun,dst_off,bytes,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_parse_blockstatus_compliance(const char *err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_parse_blockstatus_compliance");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_structured_read_compliance(const char *type){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_structured_read_compliance");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&type);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_read_reply_entry_fail(int ret, const char *err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_read_reply_entry_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,b)" ,ret,&err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_co_request_fail(uint64_t from, uint32_t len, uint64_t handle, uint16_t flags, uint16_t type, const char *name, int ret, const char *err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_co_request_fail");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,K,i,i,b,i,b)" ,from,len,handle,flags,type,&name,ret,&err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_client_handshake(const char *export_name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_client_handshake");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&export_name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_nbd_client_handshake_success(const char *export_name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"nbd_client_handshake_success");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&export_name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ssh_restart_coroutine(void *co){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ssh_restart_coroutine");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&co);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ssh_flush(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ssh_flush");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ssh_check_host_key_knownhosts(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ssh_check_host_key_knownhosts");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ssh_connect_to_ssh(char *path, int flags, int mode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ssh_connect_to_ssh");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&path,flags,mode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ssh_co_yield(int sock, void *rd_handler, void *wr_handler){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ssh_co_yield");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,O&,O&)" ,sock,&rd_handler,&wr_handler);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ssh_co_yield_back(int sock){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ssh_co_yield_back");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,sock);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ssh_getlength(int64_t length){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ssh_getlength");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(L)" ,length);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ssh_co_create_opts(uint64_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ssh_co_create_opts");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ssh_read(int64_t offset, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ssh_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(L,i)" ,offset,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ssh_read_buf(void *buf, size_t size, size_t actual_size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ssh_read_buf");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&buf,size,actual_size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ssh_read_return(ssize_t ret, int sftp_err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ssh_read_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,ret,sftp_err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ssh_write(int64_t offset, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ssh_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(L,i)" ,offset,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ssh_write_buf(void *buf, size_t size, size_t actual_size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ssh_write_buf");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&buf,size,actual_size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ssh_write_return(ssize_t ret, int sftp_err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ssh_write_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,ret,sftp_err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ssh_seek(int64_t offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ssh_seek");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(L)" ,offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ssh_auth_methods(int methods){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ssh_auth_methods");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,methods);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_ssh_server_status(int status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"ssh_server_status");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_curl_timer_cb(long timeout_ms){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"curl_timer_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_curl_sock_cb(int action, int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"curl_sock_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,action,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_curl_read_cb(size_t realsize){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"curl_read_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,realsize);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_curl_open(const char *file){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"curl_open");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&file);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_curl_open_size(uint64_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"curl_open_size");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K)" ,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_curl_setup_preadv(uint64_t bytes, uint64_t start, const char *range){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"curl_setup_preadv");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K,b)" ,bytes,start,&range);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_curl_close(void){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"curl_close");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("()" );
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_file_copy_file_range(void *bs, int src, int64_t src_off, int dst, int64_t dst_off, int64_t bytes, int flags, int64_t ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"file_copy_file_range");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,L,i,L,L,i,L)" ,&bs,src,src_off,dst,dst_off,bytes,flags,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_file_FindEjectableOpticalMedia(const char *media){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"file_FindEjectableOpticalMedia");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&media);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_file_setup_cdrom(const char *partition){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"file_setup_cdrom");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&partition);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_file_hdev_is_sg(int type, int version){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"file_hdev_is_sg");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i)" ,type,version);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_file_flush_fdatasync_failed(int err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"file_flush_fdatasync_failed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_sftp_error(const char *op, const char *ssh_err, int ssh_err_code, int sftp_err_code){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"sftp_error");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,b,i,i)" ,&op,&ssh_err,ssh_err_code,sftp_err_code);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

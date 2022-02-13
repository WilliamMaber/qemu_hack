
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_util.h"

void glue_run_poll_handlers_begin(void *ctx, int64_t max_ns, int64_t timeout){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"run_poll_handlers_begin");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,L)" ,&ctx,max_ns,timeout);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_run_poll_handlers_end(void *ctx, bool progress, int64_t timeout){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"run_poll_handlers_end");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,p,L)" ,&ctx,progress,timeout);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_poll_shrink(void *ctx, int64_t old, int64_t new){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"poll_shrink");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,L)" ,&ctx,old,new);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_poll_grow(void *ctx, int64_t old, int64_t new){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"poll_grow");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,L,L)" ,&ctx,old,new);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_poll_add(void *ctx, void *node, int fd, unsigned revents){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"poll_add");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,I)" ,&ctx,&node,fd,revents);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_poll_remove(void *ctx, void *node, int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"poll_remove");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i)" ,&ctx,&node,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aio_co_schedule(void *ctx, void *co){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aio_co_schedule");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&ctx,&co);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_aio_co_schedule_bh_cb(void *ctx, void *co){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"aio_co_schedule_bh_cb");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&ctx,&co);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_thread_pool_submit(void *pool, void *req, void *opaque){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"thread_pool_submit");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,O&)" ,&pool,&req,&opaque);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_thread_pool_complete(void *pool, void *req, void *opaque, int ret){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"thread_pool_complete");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,O&,i)" ,&pool,&req,&opaque,ret);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_thread_pool_cancel(void *req, void *opaque){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"thread_pool_cancel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&req,&opaque);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_buffer_resize(const char *buf, size_t olen, size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"buffer_resize");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,i)" ,&buf,olen,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_buffer_move_empty(const char *buf, size_t len, const char *from){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"buffer_move_empty");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,b)" ,&buf,len,&from);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_buffer_move(const char *buf, size_t len, const char *from){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"buffer_move");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i,b)" ,&buf,len,&from);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_buffer_free(const char *buf, size_t len){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"buffer_free");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,i)" ,&buf,len);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_file_monitor_add_watch(void *mon, const char *dirpath, const char *filename, void *cb, void *opaque, int64_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_file_monitor_add_watch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,b,O&,O&,L)" ,&mon,&dirpath,&filename,&cb,&opaque,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_file_monitor_remove_watch(void *mon, const char *dirpath, int64_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_file_monitor_remove_watch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,L)" ,&mon,&dirpath,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_file_monitor_new(void *mon, int fd){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_file_monitor_new");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&mon,fd);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_file_monitor_enable_watch(void *mon, const char *dirpath, int id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_file_monitor_enable_watch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,i)" ,&mon,&dirpath,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_file_monitor_disable_watch(void *mon, const char *dirpath, int id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_file_monitor_disable_watch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,i)" ,&mon,&dirpath,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_file_monitor_event(void *mon, const char *dirpath, const char *filename, int mask, unsigned int id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_file_monitor_event");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,b,i,I)" ,&mon,&dirpath,&filename,mask,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_file_monitor_dispatch(void *mon, const char *dirpath, const char *filename, int ev, void *cb, void *opaque, int64_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_file_monitor_dispatch");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,b,i,O&,O&,L)" ,&mon,&dirpath,&filename,ev,&cb,&opaque,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_aio_coroutine_enter(void *ctx, void *from, void *to, void *opaque){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_aio_coroutine_enter");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,O&,O&)" ,&ctx,&from,&to,&opaque);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_coroutine_yield(void *from, void *to){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_coroutine_yield");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&from,&to);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_coroutine_terminate(void *co){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_coroutine_terminate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&co);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_co_mutex_lock_uncontended(void *mutex, void *self){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_co_mutex_lock_uncontended");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&mutex,&self);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_co_mutex_lock_entry(void *mutex, void *self){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_co_mutex_lock_entry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&mutex,&self);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_co_mutex_lock_return(void *mutex, void *self){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_co_mutex_lock_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&mutex,&self);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_co_mutex_unlock_entry(void *mutex, void *self){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_co_mutex_unlock_entry");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&mutex,&self);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_co_mutex_unlock_return(void *mutex, void *self){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_co_mutex_unlock_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&mutex,&self);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_memalign(size_t alignment, size_t size, void *ptr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_memalign");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,i,O&)" ,alignment,size,&ptr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_anon_ram_alloc(size_t size, void *ptr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_anon_ram_alloc");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,O&)" ,size,&ptr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_vfree(void *ptr){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_vfree");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&ptr);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_anon_ram_free(void *ptr, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_anon_ram_free");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&ptr,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hbitmap_iter_skip_words(const void *hb, void *hbi, uint64_t pos, unsigned long cur){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hbitmap_iter_skip_words");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,K)" ,&hb,&hbi,pos);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hbitmap_reset(void *hb, uint64_t start, uint64_t count, uint64_t sbit, uint64_t ebit){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hbitmap_reset");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K,K)" ,&hb,start,count,sbit,ebit);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_hbitmap_set(void *hb, uint64_t start, uint64_t count, uint64_t sbit, uint64_t ebit){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"hbitmap_set");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,K,K)" ,&hb,start,count,sbit,ebit);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lockcnt_fast_path_attempt(const void *lockcnt, int expected, int new){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lockcnt_fast_path_attempt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&lockcnt,expected,new);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lockcnt_fast_path_success(const void *lockcnt, int expected, int new){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lockcnt_fast_path_success");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&lockcnt,expected,new);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lockcnt_unlock_attempt(const void *lockcnt, int expected, int new){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lockcnt_unlock_attempt");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&lockcnt,expected,new);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lockcnt_unlock_success(const void *lockcnt, int expected, int new){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lockcnt_unlock_success");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&lockcnt,expected,new);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lockcnt_futex_wait_prepare(const void *lockcnt, int expected, int new){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lockcnt_futex_wait_prepare");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i)" ,&lockcnt,expected,new);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lockcnt_futex_wait(const void *lockcnt, int val){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lockcnt_futex_wait");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&lockcnt,val);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lockcnt_futex_wait_resume(const void *lockcnt, int new){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lockcnt_futex_wait_resume");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i)" ,&lockcnt,new);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_lockcnt_futex_wake(const void *lockcnt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"lockcnt_futex_wake");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&lockcnt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_socket_listen(int num){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"socket_listen");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,num);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_mutex_lock(void *mutex, const char *file, const int line){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_mutex_lock");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,i)" ,&mutex,&file,line);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_mutex_locked(void *mutex, const char *file, const int line){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_mutex_locked");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,i)" ,&mutex,&file,line);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_mutex_unlock(void *mutex, const char *file, const int line){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_mutex_unlock");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,b,i)" ,&mutex,&file,line);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_vfio_dma_reset_temporary(void *s){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_vfio_dma_reset_temporary");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&)" ,&s);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_vfio_ram_block_added(void *s, void *p, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_vfio_ram_block_added");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i)" ,&s,&p,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_vfio_ram_block_removed(void *s, void *p, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_vfio_ram_block_removed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i)" ,&s,&p,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_vfio_dump_mapping(void *host, uint64_t iova, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_vfio_dump_mapping");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,i)" ,&host,iova,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_vfio_find_mapping(void *s, void *p){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_vfio_find_mapping");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&s,&p);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_vfio_new_mapping(void *s, void *host, size_t size, int index, uint64_t iova){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_vfio_new_mapping");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,i,K)" ,&s,&host,size,index,iova);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_vfio_do_mapping(void *s, void *host, uint64_t iova, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_vfio_do_mapping");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,K,i)" ,&s,&host,iova,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_vfio_dma_map(void *s, void *host, size_t size, bool temporary, uint64_t *iova){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_vfio_dma_map");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,i,p,K)" ,&s,&host,size,temporary,iova);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_vfio_dma_mapped(void *s, void *host, uint64_t iova, size_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_vfio_dma_mapped");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&,K,i)" ,&s,&host,iova,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_vfio_dma_unmap(void *s, void *host){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_vfio_dma_unmap");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,O&)" ,&s,&host);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_vfio_pci_read_config(void *buf, int ofs, int size, uint64_t region_ofs, uint64_t region_size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_vfio_pci_read_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,K,K)" ,&buf,ofs,size,region_ofs,region_size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_vfio_pci_write_config(void *buf, int ofs, int size, uint64_t region_ofs, uint64_t region_size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_vfio_pci_write_config");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,i,i,K,K)" ,&buf,ofs,size,region_ofs,region_size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_vfio_region_info(const char *desc, uint64_t region_ofs, uint64_t region_size, uint32_t cap_offset){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_vfio_region_info");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b,K,K,K)" ,&desc,region_ofs,region_size,cap_offset);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_qemu_vfio_pci_map_bar(int index, uint64_t region_ofs, uint64_t region_size, int ofs, void *host){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"qemu_vfio_pci_map_bar");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,K,K,i,O&)" ,index,region_ofs,region_size,ofs,&host);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_uffd_query_features_nosys(int err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"uffd_query_features_nosys");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_uffd_query_features_api_failed(int err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"uffd_query_features_api_failed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_uffd_create_fd_nosys(int err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"uffd_create_fd_nosys");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_uffd_create_fd_api_failed(int err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"uffd_create_fd_api_failed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i)" ,err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_uffd_create_fd_api_noioctl(uint64_t ioctl_req, uint64_t ioctl_supp){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"uffd_create_fd_api_noioctl");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(K,K)" ,ioctl_req,ioctl_supp);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_uffd_register_memory_failed(void *addr, uint64_t length, uint64_t mode, int err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"uffd_register_memory_failed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,K,i)" ,&addr,length,mode,err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_uffd_unregister_memory_failed(void *addr, uint64_t length, int err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"uffd_unregister_memory_failed");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(O&,K,i)" ,&addr,length,err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_module_load_module(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"module_load_module");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_module_lookup_object_type(const char *name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"module_lookup_object_type");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(b)" ,&name);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

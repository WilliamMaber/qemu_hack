
#include "qemu/osdep.h"
#include <Python.h>
#include "../type.h"
//
# include "../callbackhelper.h"
# include "callback_glue_hw_9pfs.h"

void glue_v9fs_rcancel(uint16_t tag, uint8_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_rcancel");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B)" ,tag,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_rerror(uint16_t tag, uint8_t id, int err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_rerror");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,i)" ,tag,id,err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_version(uint16_t tag, uint8_t id, int32_t msize, char* version){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_version");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l)" ,tag,id,msize);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_version_return(uint16_t tag, uint8_t id, int32_t msize, char* version){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_version_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l)" ,tag,id,msize);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_attach(uint16_t tag, uint8_t id, int32_t fid, int32_t afid, char* uname, char* aname){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_attach");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,l)" ,tag,id,fid,afid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_attach_return(uint16_t tag, uint8_t id, uint8_t type, uint32_t version, uint64_t path){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_attach_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,B,K,K)" ,tag,id,type,version,path);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_stat(uint16_t tag, uint8_t id, int32_t fid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_stat");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l)" ,tag,id,fid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_stat_return(uint16_t tag, uint8_t id, int32_t mode, int32_t atime, int32_t mtime, int64_t length){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_stat_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,l,l,L)" ,tag,id,mode,atime,mtime,length);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_getattr(uint16_t tag, uint8_t id, int32_t fid, uint64_t request_mask){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_getattr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,K)" ,tag,id,fid,request_mask);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_getattr_return(uint16_t tag, uint8_t id, uint64_t result_mask, uint32_t mode, uint32_t uid, uint32_t gid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_getattr_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,K,K,K,K)" ,tag,id,result_mask,mode,uid,gid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_walk(uint16_t tag, uint8_t id, int32_t fid, int32_t newfid, uint16_t nwnames){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_walk");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,l,i)" ,tag,id,fid,newfid,nwnames);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_walk_return(uint16_t tag, uint8_t id, uint16_t nwnames, void* qids){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_walk_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,i)" ,tag,id,nwnames);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_open(uint16_t tag, uint8_t id, int32_t fid, int32_t mode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_open");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,l)" ,tag,id,fid,mode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_open_return(uint16_t tag, uint8_t id, uint8_t type, uint32_t version, uint64_t path, int iounit){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_open_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,B,K,K,i)" ,tag,id,type,version,path,iounit);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_lcreate(uint16_t tag, uint8_t id, int32_t dfid, int32_t flags, int32_t mode, uint32_t gid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_lcreate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,l,l,K)" ,tag,id,dfid,flags,mode,gid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_lcreate_return(uint16_t tag, uint8_t id, uint8_t type, uint32_t version, uint64_t path, int32_t iounit){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_lcreate_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,B,K,K,l)" ,tag,id,type,version,path,iounit);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_fsync(uint16_t tag, uint8_t id, int32_t fid, int datasync){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_fsync");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,i)" ,tag,id,fid,datasync);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_clunk(uint16_t tag, uint8_t id, int32_t fid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_clunk");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l)" ,tag,id,fid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_read(uint16_t tag, uint8_t id, int32_t fid, uint64_t off, uint32_t max_count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_read");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,K,K)" ,tag,id,fid,off,max_count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_read_return(uint16_t tag, uint8_t id, int32_t count, ssize_t err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_read_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,i)" ,tag,id,count,err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_readdir(uint16_t tag, uint8_t id, int32_t fid, uint64_t offset, uint32_t max_count){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_readdir");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,K,K)" ,tag,id,fid,offset,max_count);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_readdir_return(uint16_t tag, uint8_t id, uint32_t count, ssize_t retval){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_readdir_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,K,i)" ,tag,id,count,retval);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_write(uint16_t tag, uint8_t id, int32_t fid, uint64_t off, uint32_t count, int cnt){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_write");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,K,K,i)" ,tag,id,fid,off,count,cnt);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_write_return(uint16_t tag, uint8_t id, int32_t total, ssize_t err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_write_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,i)" ,tag,id,total,err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_create(uint16_t tag, uint8_t id, int32_t fid, char* name, int32_t perm, int8_t mode){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_create");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,l,O&)" ,tag,id,fid,perm,mode);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_create_return(uint16_t tag, uint8_t id, uint8_t type, uint32_t version, uint64_t path, int iounit){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_create_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,B,K,K,i)" ,tag,id,type,version,path,iounit);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_symlink(uint16_t tag, uint8_t id, int32_t fid,  char* name, char* symname, uint32_t gid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_symlink");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,K)" ,tag,id,fid,gid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_symlink_return(uint16_t tag, uint8_t id, uint8_t type, uint32_t version, uint64_t path){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_symlink_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,B,K,K)" ,tag,id,type,version,path);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_flush(uint16_t tag, uint8_t id, int16_t flush_tag){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_flush");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,O&)" ,tag,id,flush_tag);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_link(uint16_t tag, uint8_t id, int32_t dfid, int32_t oldfid, char* name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_link");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,l)" ,tag,id,dfid,oldfid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_remove(uint16_t tag, uint8_t id, int32_t fid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_remove");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l)" ,tag,id,fid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_wstat(uint16_t tag, uint8_t id, int32_t fid, int32_t mode, int32_t atime, int32_t mtime){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_wstat");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,l,l,l)" ,tag,id,fid,mode,atime,mtime);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_mknod(uint16_t tag, uint8_t id, int32_t fid, int mode, int major, int minor){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_mknod");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,i,i,i)" ,tag,id,fid,mode,major,minor);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_mknod_return(uint16_t tag, uint8_t id, uint8_t type, uint32_t version, uint64_t path){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_mknod_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,B,K,K)" ,tag,id,type,version,path);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_lock(uint16_t tag, uint8_t id, int32_t fid, uint8_t type, uint64_t start, uint64_t length){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_lock");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,B,K,K)" ,tag,id,fid,type,start,length);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_lock_return(uint16_t tag, uint8_t id, int8_t status){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_lock_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,O&)" ,tag,id,status);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_getlock(uint16_t tag, uint8_t id, int32_t fid, uint8_t type, uint64_t start, uint64_t length){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_getlock");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,B,K,K)" ,tag,id,fid,type,start,length);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_getlock_return(uint16_t tag, uint8_t id, uint8_t type, uint64_t start, uint64_t length, uint32_t proc_id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_getlock_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,B,K,K,K)" ,tag,id,type,start,length,proc_id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_mkdir(uint16_t tag, uint8_t id, int32_t fid, char* name, int mode, uint32_t gid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_mkdir");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,i,K)" ,tag,id,fid,mode,gid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_mkdir_return(uint16_t tag, uint8_t id, uint8_t type, uint32_t version, uint64_t path, int err){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_mkdir_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,B,K,K,i)" ,tag,id,type,version,path,err);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_xattrwalk(uint16_t tag, uint8_t id, int32_t fid, int32_t newfid, char* name){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_xattrwalk");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,l)" ,tag,id,fid,newfid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_xattrwalk_return(uint16_t tag, uint8_t id, int64_t size){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_xattrwalk_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,L)" ,tag,id,size);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_xattrcreate(uint16_t tag, uint8_t id, int32_t fid, char* name, uint64_t size, int flags){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_xattrcreate");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,K,i)" ,tag,id,fid,size,flags);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_readlink(uint16_t tag, uint8_t id, int32_t fid){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_readlink");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l)" ,tag,id,fid);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_readlink_return(uint16_t tag, uint8_t id, char* target){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_readlink_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B)" ,tag,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_setattr(uint16_t tag, uint8_t id, int32_t fid, int32_t valid, int32_t mode, int32_t uid, int32_t gid, int64_t size, int64_t atime_sec, int64_t mtime_sec){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_setattr");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B,l,l,l,l,l,L,L,L)" ,tag,id,fid,valid,mode,uid,gid,size,atime_sec,mtime_sec);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}
void glue_v9fs_setattr_return(uint16_t tag, uint8_t id){

        if (pModule!= NULL){
            PyObject* pFunc = PyObject_GetAttrString(pModule,"v9fs_setattr_return");
            if (pFunc  && PyCallable_Check(pFunc)){
            PyObject* pValue = Py_BuildValue("(i,B)" ,tag,id);
            PyObject_CallObject(pFunc, pValue);
        }
        }
        
}

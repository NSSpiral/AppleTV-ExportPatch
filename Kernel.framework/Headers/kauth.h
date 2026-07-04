#ifndef _KERNEL_KAUTH_H_
#define _KERNEL_KAUTH_H_

#include "types.h"

/* -- kauth -- */

#ifdef __cplusplus
extern "C" {
#endif

extern int kauth_acl_alloc();
extern int kauth_acl_free();
extern int kauth_authorize_action();
extern int kauth_authorize_process();
extern int kauth_cred_create();
extern int kauth_cred_find();
extern int kauth_cred_get();
extern int kauth_cred_get_with_ref();
extern int kauth_cred_getgid();
extern int kauth_cred_getgroups();
extern int kauth_cred_getguid();
extern int kauth_cred_getntsid();
extern int kauth_cred_getrgid();
extern int kauth_cred_getruid();
extern int kauth_cred_getsvgid();
extern int kauth_cred_getsvuid();
extern int kauth_cred_getuid();
extern int kauth_cred_gid2guid();
extern int kauth_cred_gid2ntsid();
extern int kauth_cred_grnam2guid();
extern int kauth_cred_guid2gid();
extern int kauth_cred_guid2grnam();
extern int kauth_cred_guid2ntsid();
extern int kauth_cred_guid2pwnam();
extern int kauth_cred_guid2uid();
extern int kauth_cred_ismember_gid();
extern int kauth_cred_ismember_guid();
extern int kauth_cred_issuser();
extern int kauth_cred_label_update();
extern int kauth_cred_ntsid2gid();
extern int kauth_cred_ntsid2guid();
extern int kauth_cred_ntsid2uid();
extern int kauth_cred_proc_ref();
extern int kauth_cred_pwnam2guid();
extern int kauth_cred_ref();
extern int kauth_cred_uid2guid();
extern int kauth_cred_uid2ntsid();
extern int kauth_cred_unref();
extern int kauth_deregister_scope();
extern int kauth_filesec_alloc();
extern int kauth_filesec_free();
extern int kauth_getgid();
extern int kauth_getruid();
extern int kauth_getuid();
extern int kauth_guid_equal();
extern int kauth_listen_scope();
extern int kauth_null_guid();
extern int kauth_proc_label_update();
extern int kauth_register_scope();
extern int kauth_unlisten_scope();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_KAUTH_H_ */

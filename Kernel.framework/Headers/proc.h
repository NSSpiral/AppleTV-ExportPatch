#ifndef _KERNEL_PROC_H_
#define _KERNEL_PROC_H_

#include "types.h"

/* -- proc -- */

#ifdef __cplusplus
extern "C" {
#endif

extern struct proc * current_proc(void);
extern int proc_exiting(proc_t);
extern int proc_forcequota(proc_t);
extern int proc_is64bit(proc_t);
extern int proc_is_classic(proc_t p);
extern int proc_issignal(int pid, sigset_t mask);
extern void proc_name(int pid, char *buf, int size);
extern int proc_noremotehang(proc_t);
extern pid_t proc_pgrpid(proc_t p);
extern int proc_pid(proc_t);
extern int proc_ppid(proc_t);
extern int proc_rele(proc_t p);
extern proc_t proc_self(void);
extern void proc_selfname(char *buf, int size);
extern pid_t proc_selfpgrpid(void);
extern int proc_selfpid(void);
extern int proc_selfppid(void);
extern void proc_signal(int pid, int signum);
extern int proc_suser(proc_t p);
extern kauth_cred_t proc_ucred(proc_t p);

extern int proc_find();
extern int proc_getcdhash();
extern int proc_getexecutablevnode();
extern int proc_isinferior();
extern int proc_pidbackgrounded();
extern int proc_pidversion();
extern int proc_task();
extern int proc_uniqueid();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_PROC_H_ */

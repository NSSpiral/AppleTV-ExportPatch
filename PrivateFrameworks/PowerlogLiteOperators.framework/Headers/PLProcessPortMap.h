/* Runtime dump - PLProcessPortMap
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLProcessPortMap : NSObject
{
    NSMutableDictionary * processFDs;
    struct socket_fdinfo si;
    int NbPids;
    int NbFds;
    int * Pids;
    struct proc_fdinfo * Fds;
}

- (void)dealloc;
- (PLProcessPortMap *)init;
- (void).cxx_destruct;
- (int)getPids;
- (int)getFds:(struct proc_taskallinfo)arg0 withPid:(struct proc_taskinfo)arg1;
- (NSObject *)buildPortMap;

@end

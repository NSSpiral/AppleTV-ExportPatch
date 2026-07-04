/* Runtime dump - IMRemoteObjectInternal
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMRemoteObjectInternal : NSObject
{
    NSRecursiveLock * _lock;
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    long _deathPostPredicate;
    Protocol * _protocol;
    NSString * _portName;
    char _willBeTerminated;
    int _pid;
}

@end

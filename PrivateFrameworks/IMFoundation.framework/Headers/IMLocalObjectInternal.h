/* Runtime dump - IMLocalObjectInternal
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMLocalObjectInternal : NSObject
{
    IMMessageContext * _currentMessageContext;
    NSRecursiveLock * _lock;
    id _target;
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_semaphore> * _deathLock;
    NSString * _portName;
    NSProtocolChecker * _protocolChecker;
    NSMutableArray * _componentQueue;
    NSLock * _componentQueueLock;
    NSRecursiveLock * _componentQueueProcessingLock;
    struct __CFRunLoopSource * _runloopSource;
    char _pendingComponentQueueProcessing;
    char _busyForwarding;
    char _offMainThread;
}

- (void)dealloc;

@end

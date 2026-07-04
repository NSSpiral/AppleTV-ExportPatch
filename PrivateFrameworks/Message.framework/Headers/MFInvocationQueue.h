/* Runtime dump - MFInvocationQueue
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFInvocationQueue : NSObject <MFDiagnosticsGenerator>
{
    NSConditionLock * _lock;
    NSMutableArray * _items;
    unsigned int _numThreads;
    unsigned int _maxThreads;
    int _threadPriorityTrigger;
    double _threadRecycleTimeout;
    struct __CFSet * _lowPriorityThreads;
    char _isForeground;
}

@property (nonatomic) unsigned int maxThreadCount;
@property (nonatomic) int threadPriorityTrigger;
@property (nonatomic) double threadRecycleTimeout;
@property (readonly, nonatomic) unsigned int invocationCount;
@property (readonly, nonatomic) unsigned int threadCount;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MFInvocationQueue *)sharedInvocationQueue;
+ (unsigned int)totalInvocationCount;
+ (void)flushAllInvocationQueues;

- (void)removeAllItems;
- (void)dealloc;
- (MFInvocationQueue *)init;
- (void)applicationWillSuspend;
- (void)setMaxThreadCount:(unsigned int)arg0;
- (void)addInvocation:(NSObject *)arg0;
- (NSDictionary *)copyDiagnosticInformation;
- (void)setThreadRecycleTimeout:(double)arg0;
- (void)applicationWillResume;
- (void)didCancel:(char)arg0;
- (MFInvocationQueue *)initWithMaxThreadCount:(unsigned long)arg0;
- (void)_drainQueue:(NSObject *)arg0;
- (void)_processInvocation:(NSObject *)arg0;
- (void)_adjustThreadPrioritiesIsForeground:(char)arg0;
- (unsigned int)maxThreadCount;
- (unsigned int)invocationCount;
- (unsigned int)threadCount;
- (int)threadPriorityTrigger;
- (void)setThreadPriorityTrigger:(int)arg0;
- (double)threadRecycleTimeout;

@end

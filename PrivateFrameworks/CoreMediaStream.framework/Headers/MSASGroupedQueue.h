/* Runtime dump - MSASGroupedQueue
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASGroupedQueue : NSObject
{
    char _isShuttingDown;
    char _isAssertingBusyAssertion;
    MSASServerSideModel * _model;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSObject<OS_dispatch_queue> * _memberQueue;
    int _maxGroupedCallbackEventBatchCount;
    MSTimerGate * _idleTimerGate;
    MSTimerGate * _stalenessTimerGate;
    double _maxGroupedCallbackEventIdleInterval;
    double _maxGroupedCallbackEventStaleness;
}

@property (weak, nonatomic) MSASServerSideModel * model;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * memberQueue;
@property (nonatomic) int maxGroupedCallbackEventBatchCount;
@property (nonatomic) double maxGroupedCallbackEventIdleInterval;
@property (nonatomic) double maxGroupedCallbackEventStaleness;
@property (readonly, nonatomic) char isAssertingBusyAssertion;
@property (nonatomic) char isShuttingDown;
@property (retain, nonatomic) MSTimerGate * idleTimerGate;
@property (retain, nonatomic) MSTimerGate * stalenessTimerGate;

- (void)dealloc;
- (MSASGroupedQueue *)init;
- (MSASServerSideModel *)model;
- (NSObject<OS_dispatch_queue> *)memberQueue;
- (void)setMemberQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void).cxx_destruct;
- (void)setModel:(MSASServerSideModel *)arg0;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (int)maxGroupedCallbackEventBatchCount;
- (void)setMaxGroupedCallbackEventBatchCount:(int)arg0;
- (double)maxGroupedCallbackEventIdleInterval;
- (void)setMaxGroupedCallbackEventIdleInterval:(double)arg0;
- (double)maxGroupedCallbackEventStaleness;
- (void)setMaxGroupedCallbackEventStaleness:(double)arg0;
- (void)shutDownFlush:(char)arg0 completionBlock:(id /* block */)arg1;
- (char)hasEnqueuedItems;
- (void)flushQueueCompletionBlock:(id /* block */)arg0;
- (void)setIsShuttingDown:(char)arg0;
- (char)isShuttingDown;
- (void)workQueueFlushQueue;
- (void)workQueueDidEnqueueFirstItem;
- (void)workQueueDidEnqueueSubsequentItem;
- (void)assertBusyAssertion;
- (void)deassertBusyAssertion;
- (void)workQueueAssertBusyAssertion;
- (void)workQueueDeassertBusyAssertion;
- (char)memberQueueIsAssertingBusyAssertion;
- (void)memberQueueSetIsAssertingBusyAssertion:(char)arg0;
- (void)workQueueClearIdleTimer;
- (void)workQueueClearStalenessTimer;
- (MSTimerGate *)idleTimerGate;
- (void)setIdleTimerGate:(MSTimerGate *)arg0;
- (MSTimerGate *)stalenessTimerGate;
- (void)setStalenessTimerGate:(MSTimerGate *)arg0;
- (void)workQueueRestartStalenessTimer;
- (void)workQueueRestartIdleTimer;
- (char)isAssertingBusyAssertion;

@end

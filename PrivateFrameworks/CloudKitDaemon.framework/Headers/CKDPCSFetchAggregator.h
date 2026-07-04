/* Runtime dump - CKDPCSFetchAggregator
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSFetchAggregator : NSObject
{
    CKDClientContext * _context;
    NSObject<OS_dispatch_queue> * _opQueue;
    NSOperationQueue * _queue;
    NSMutableArray * _queuedFetches;
    NSMutableArray * _runningFetches;
    NSObject<OS_dispatch_source> * _timerSource;
}

@property (weak, nonatomic) CKDClientContext * context;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * opQueue;
@property (retain, nonatomic) NSOperationQueue * queue;
@property (retain, nonatomic) NSMutableArray * queuedFetches;
@property (retain, nonatomic) NSMutableArray * runningFetches;
@property (retain, nonatomic) NSObject<OS_dispatch_source> * timerSource;

- (void)dealloc;
- (CKDClientContext *)context;
- (void)setContext:(CKDClientContext *)arg0;
- (CKDPCSFetchAggregator *)initWithContext:(CKDClientContext *)arg0;
- (void).cxx_destruct;
- (NSOperationQueue *)queue;
- (void)setQueue:(NSOperationQueue *)arg0;
- (void)requestFetchOfRecordWithID:(int)arg0 forOperation:(NSObject *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestFetchOfShareWithID:(int)arg0 forOperation:(NSObject *)arg1 withCompletionHandler:(id /* block */)arg2;
- (NSObject<OS_dispatch_queue> *)opQueue;
- (void)setOpQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_dispatch_source> *)timerSource;
- (void)setTimerSource:(NSObject<OS_dispatch_source> *)arg0;
- (void)_lockedFireReadyQueuedFetches;
- (NSMutableArray *)runningFetches;
- (NSMutableArray *)queuedFetches;
- (void)_lockedRescheduleQueuedFetchesTimer;
- (NSObject *)_lockedGetQueuedFetchForOperation:(NSObject *)arg0 ofClass:(Class)arg1;
- (void)setQueuedFetches:(NSMutableArray *)arg0;
- (void)setRunningFetches:(NSMutableArray *)arg0;

@end

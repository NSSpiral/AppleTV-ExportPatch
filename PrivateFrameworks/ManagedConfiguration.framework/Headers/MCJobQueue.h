/* Runtime dump - MCJobQueue
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCJobQueue : NSObject
{
    NSObject<OS_dispatch_queue> * _executionQueue;
    <MCJobQueueObserver> * _observer;
    NSObject<OS_dispatch_queue> * _jobQueue;
    NSObject<OS_dispatch_group> * _jobGroup;
    id _executionQueueAbortCompletionBlock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * executionQueue;
@property (weak, nonatomic) <MCJobQueueObserver> * observer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * jobQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> * jobGroup;
@property (copy, nonatomic) id executionQueueAbortCompletionBlock;

- (MCJobQueue *)init;
- (<MCJobQueueObserver> *)observer;
- (void)setObserver:(<MCJobQueueObserver> *)arg0;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)executionQueue;
- (NSObject<OS_dispatch_group> *)jobGroup;
- (NSObject<OS_dispatch_queue> *)jobQueue;
- (id /* block */)executionQueueAbortCompletionBlock;
- (void)setExecutionQueueAbortCompletionBlock:(id /* block */)arg0;
- (void)jobDidFinish;
- (void)waitForEnqueuedJobsToCompleteCompletionBlock:(id /* block */)arg0;
- (void)abortEnqueuedJobsCompletionBlock:(id /* block */)arg0;
- (void)setExecutionQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setJobQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setJobGroup:(NSObject<OS_dispatch_group> *)arg0;
- (void)enqueueJob:(id)arg0;

@end

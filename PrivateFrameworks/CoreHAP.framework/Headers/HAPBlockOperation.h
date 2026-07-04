/* Runtime dump - HAPBlockOperation
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBlockOperation : NSBlockOperation
{
    NSObject<OS_dispatch_semaphore> * _finishedSemaphore;
    NSError * _error;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (retain, nonatomic) NSError * error;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> * finishedSemaphore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (readonly, nonatomic) unsigned long long dispatchTimeout;

- (void)cancel;
- (void)dealloc;
- (HAPBlockOperation *)init;
- (NSString *)description;
- (NSString *)debugDescription;
- (void)start;
- (void).cxx_destruct;
- (void)_cancelWithError:(NSError *)arg0;
- (void)finish;
- (NSError *)error;
- (void)cancelWithError:(NSError *)arg0;
- (void)_finish;
- (NSObject<OS_dispatch_semaphore> *)finishedSemaphore;
- (void)setFinishedSemaphore:(NSObject<OS_dispatch_semaphore> *)arg0;
- (unsigned long long)dispatchTimeout;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (NSError *)_error;
- (void)_setError:(NSError *)arg0;
- (NSObject<OS_dispatch_semaphore> *)_finishedSemaphore;
- (void)_setFinishedSemaphore:(id)arg0;
- (void)setError:(NSError *)arg0;

@end

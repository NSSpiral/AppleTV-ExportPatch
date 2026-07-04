/* Runtime dump - SBKAsynchronousTask
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKAsynchronousTask : NSObject
{
    NSString * _debugDescription;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    char _taskInvalidationDisabled;
    double _timeout;
    int _cancelType;
    id _result;
    NSError * _error;
    id _expirationHandler;
    id _finishedHandler;
    SBKTaskAssertion * _taskAssertion;
    NSMutableArray * _completions;
}

@property (copy) id finishedHandler;
@property (copy) id expirationHandler;
@property (retain) id result;
@property (retain) NSError * error;
@property int cancelType;
@property (retain) SBKTaskAssertion * taskAssertion;
@property (retain) NSMutableArray * completions;

- (void)_invalidateTimer;
- (void)dealloc;
- (NSString *)description;
- (NSString *)debugDescription;
- (void)invalidate;
- (void).cxx_destruct;
- (CKDPResponseOperationResult *)result;
- (NSError *)error;
- (void)setResult:(NSObject *)arg0;
- (void)setFinishedHandler:(id /* block */)arg0;
- (id /* block */)finishedHandler;
- (id /* block */)expirationHandler;
- (void)setExpirationHandler:(id /* block */)arg0;
- (void)setError:(NSError *)arg0;
- (void)addTaskCompletionBlock:(id /* block */)arg0;
- (SBKAsynchronousTask *)initWithHandlerQueue:(NSObject<OS_dispatch_queue> *)arg0 timeout:(double)arg1 debugDescription:(NSString *)arg2;
- (void)invokeTaskCompletionBlocksWithBlock:(id /* block */)arg0;
- (void)finishTaskOperationWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (void)beginTaskOperation;
- (int)cancelType;
- (void)setCancelType:(int)arg0;
- (void)_onQueueFireExpirationHandlerIfNecesary;
- (void)setTaskAssertion:(SBKTaskAssertion *)arg0;
- (void)_invalidateAssertion:(char)arg0;
- (void)endTaskOperation;
- (SBKTaskAssertion *)taskAssertion;
- (NSMutableArray *)completions;
- (void)setCompletions:(NSMutableArray *)arg0;

@end

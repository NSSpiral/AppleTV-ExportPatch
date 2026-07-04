/* Runtime dump - BSFuture
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSFuture : NSObject <BSFuture>
{
    NSConditionLock * _stateLock;
    id _result;
    NSError * _error;
    NSMutableArray * _completionBlocks;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) char finished;
@property (readonly) char cancelled;

- (char)finishWithResult:(NSObject *)arg0;
- (char)cancel;
- (void)dealloc;
- (BSFuture *)init;
- (char)isCancelled;
- (char)isFinished;
- (NSDate *)resultBeforeDate:(NSDate *)arg0 error:(id *)arg1;
- (char)_nts_isFinished;
- (void)_flushCompletionBlocks;
- (void)didCancel;
- (void)_addCompletionBlock:(id /* block */)arg0;
- (NSObject *)result:(id *)arg0;
- (void)addSuccessBlock:(id /* block */)arg0;
- (void)addFailureBlock:(id /* block */)arg0;
- (char)finishWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (char)finishWithError:(NSError *)arg0;

@end

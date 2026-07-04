/* Runtime dump - MFFuture
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFFuture : NSObject <MFFuture>
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

+ (MFFuture *)future;

- (id)resultWithTimeout:(double)arg0 error:(id *)arg1;
- (char)finishWithResult:(NSObject *)arg0;
- (char)cancel;
- (void)dealloc;
- (MFFuture *)init;
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

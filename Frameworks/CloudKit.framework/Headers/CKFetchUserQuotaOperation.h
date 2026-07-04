/* Runtime dump - CKFetchUserQuotaOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchUserQuotaOperation : CKDatabaseOperation
{
    id _fetchUserQuotaCompletionBlock;
    unsigned long long _quotaAvailable;
}

@property (copy, nonatomic) id fetchUserQuotaCompletionBlock;
@property (nonatomic) unsigned long long quotaAvailable;

- (void)performCKOperation;
- (void)_handleCompletionCallback:(id /* block */)arg0;
- (id /* block */)fetchUserQuotaCompletionBlock;
- (CKFetchUserQuotaOperation *)init;
- (void).cxx_destruct;
- (void)setFetchUserQuotaCompletionBlock:(id /* block */)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (Class)operationInfoClass;
- (void)setQuotaAvailable:(unsigned long long)arg0;
- (unsigned long long)quotaAvailable;

@end

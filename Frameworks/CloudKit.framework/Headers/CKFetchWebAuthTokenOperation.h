/* Runtime dump - CKFetchWebAuthTokenOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchWebAuthTokenOperation : CKDatabaseOperation
{
    id _fetchWebAuthTokenCompletionBlock;
    NSString * _webAuthToken;
}

@property (copy, nonatomic) id fetchWebAuthTokenCompletionBlock;
@property (copy, nonatomic) NSString * webAuthToken;

- (void)performCKOperation;
- (void)_handleCompletionCallback:(id /* block */)arg0;
- (id /* block */)fetchWebAuthTokenCompletionBlock;
- (CKFetchWebAuthTokenOperation *)init;
- (void).cxx_destruct;
- (void)setFetchWebAuthTokenCompletionBlock:(id /* block */)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (Class)operationInfoClass;
- (void)setWebAuthToken:(NSString *)arg0;
- (NSString *)webAuthToken;

@end

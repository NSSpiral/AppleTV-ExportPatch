/* Runtime dump - CKAcceptSharesOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKAcceptSharesOperation : CKDatabaseOperation
{
    NSArray * _shareURLs;
    id _perShareCompletionBlock;
    id _acceptSharesCompletionBlock;
    NSMutableDictionary * _errorsByShareURL;
}

@property (copy, nonatomic) NSArray * shareURLs;
@property (copy, nonatomic) id perShareCompletionBlock;
@property (copy, nonatomic) id acceptSharesCompletionBlock;
@property (retain, nonatomic) NSMutableDictionary * errorsByShareURL;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (NSArray *)shareURLs;
- (void)setShareURLs:(NSArray *)arg0;
- (id /* block */)perShareCompletionBlock;
- (NSMutableDictionary *)errorsByShareURL;
- (id /* block */)acceptSharesCompletionBlock;
- (void)setErrorsByShareURL:(NSMutableDictionary *)arg0;
- (CKAcceptSharesOperation *)init;
- (void).cxx_destruct;
- (CKAcceptSharesOperation *)initWithShareURLs:(NSArray *)arg0;
- (void)setPerShareCompletionBlock:(id /* block */)arg0;
- (void)setAcceptSharesCompletionBlock:(id /* block */)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;

@end

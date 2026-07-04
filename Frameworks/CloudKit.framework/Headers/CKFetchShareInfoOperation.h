/* Runtime dump - CKFetchShareInfoOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchShareInfoOperation : CKOperation
{
    NSArray * _shareURLs;
    id _perShareInfoBlock;
    id _fetchShareInfoCompletionBlock;
    NSMutableDictionary * _shareInfoByURL;
    NSMutableDictionary * _errorsByURL;
}

@property (retain, nonatomic) NSArray * shareURLs;
@property (copy, nonatomic) id perShareInfoBlock;
@property (copy, nonatomic) id fetchShareInfoCompletionBlock;
@property (retain, nonatomic) NSMutableDictionary * shareInfoByURL;
@property (retain, nonatomic) NSMutableDictionary * errorsByURL;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (NSArray *)shareURLs;
- (id /* block */)perShareInfoBlock;
- (NSMutableDictionary *)errorsByURL;
- (NSMutableDictionary *)shareInfoByURL;
- (id /* block */)fetchShareInfoCompletionBlock;
- (void)setShareURLs:(NSArray *)arg0;
- (void)setShareInfoByURL:(NSMutableDictionary *)arg0;
- (void)setErrorsByURL:(NSMutableDictionary *)arg0;
- (void).cxx_destruct;
- (CKFetchShareInfoOperation *)initWithShareURLs:(NSArray *)arg0;
- (void)setPerShareInfoBlock:(id /* block */)arg0;
- (void)setFetchShareInfoCompletionBlock:(id /* block */)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;

@end

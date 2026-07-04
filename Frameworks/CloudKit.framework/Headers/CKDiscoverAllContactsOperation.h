/* Runtime dump - CKDiscoverAllContactsOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDiscoverAllContactsOperation : CKOperation
{
    id _discoverAllContactsCompletionBlock;
    NSMutableArray * _discoveredUserInfos;
}

@property (copy, nonatomic) id discoverAllContactsCompletionBlock;
@property (retain, nonatomic) NSMutableArray * discoveredUserInfos;

- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (void)setDiscoverAllContactsCompletionBlock:(id /* block */)arg0;
- (id /* block */)discoverAllContactsCompletionBlock;
- (NSMutableArray *)discoveredUserInfos;
- (void)setDiscoveredUserInfos:(NSMutableArray *)arg0;
- (CKDiscoverAllContactsOperation *)init;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (Class)operationInfoClass;

@end

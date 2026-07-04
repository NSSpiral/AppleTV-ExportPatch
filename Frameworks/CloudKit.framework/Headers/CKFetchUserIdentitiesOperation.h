/* Runtime dump - CKFetchUserIdentitiesOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchUserIdentitiesOperation : CKOperation
{
    NSArray * _identities;
    id _identityFetchedBlock;
    id _fetchIdentitiesCompletionBlock;
    NSMutableDictionary * _lookupInfoToUserIdentities;
    NSMutableSet * _discoveredUserIdentities;
    NSMutableDictionary * _lookupErrors;
}

@property (retain, nonatomic) NSArray * identities;
@property (copy, nonatomic) id identityFetchedBlock;
@property (copy, nonatomic) id fetchIdentitiesCompletionBlock;
@property (retain, nonatomic) NSMutableDictionary * lookupInfoToUserIdentities;
@property (retain, nonatomic) NSMutableSet * discoveredUserIdentities;
@property (retain, nonatomic) NSMutableDictionary * lookupErrors;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (CKFetchUserIdentitiesOperation *)initWithIdentitiesToFetch:(id)arg0;
- (void)setFetchIdentitiesCompletionBlock:(id /* block */)arg0;
- (NSArray *)identities;
- (id /* block */)fetchIdentitiesCompletionBlock;
- (id /* block */)identityFetchedBlock;
- (NSMutableSet *)discoveredUserIdentities;
- (NSMutableDictionary *)lookupErrors;
- (NSMutableDictionary *)lookupInfoToUserIdentities;
- (void)setIdentities:(NSArray *)arg0;
- (void)setIdentityFetchedBlock:(id /* block */)arg0;
- (void)setLookupInfoToUserIdentities:(NSMutableDictionary *)arg0;
- (void)setDiscoveredUserIdentities:(NSMutableSet *)arg0;
- (void)setLookupErrors:(NSMutableDictionary *)arg0;
- (CKFetchUserIdentitiesOperation *)init;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;

@end

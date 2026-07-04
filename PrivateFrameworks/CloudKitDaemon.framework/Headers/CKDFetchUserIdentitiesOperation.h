/* Runtime dump - CKDFetchUserIdentitiesOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchUserIdentitiesOperation : CKDOperation
{
    id _fetchUserIdentityProgressBlock;
    NSArray * _identityInfos;
}

@property (copy, nonatomic) id fetchUserIdentityProgressBlock;
@property (retain, nonatomic) NSArray * identityInfos;

- (void)main;
- (void).cxx_destruct;
- (CKDFetchUserIdentitiesOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)setFetchUserIdentityProgressBlock:(id /* block */)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (NSArray *)identityInfos;
- (id /* block */)fetchUserIdentityProgressBlock;
- (void)_handleFetchedInfo:(NSDictionary *)arg0 withIdentity:(NSObject *)arg1 error:(NSError *)arg2;
- (void)_fetchInfoFromCache;
- (void)setIdentityInfos:(NSArray *)arg0;

@end

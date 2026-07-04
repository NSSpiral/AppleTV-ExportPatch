/* Runtime dump - CKDFetchShareInfoOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchShareInfoOperation : CKDOperation
{
    id _shareInfoFetchedBlock;
    NSMutableArray * _shareURLsToFetch;
    NSMutableDictionary * _shareTokenInfosToFetchByURL;
}

@property (copy, nonatomic) id shareInfoFetchedBlock;
@property (retain, nonatomic) NSMutableArray * shareURLsToFetch;
@property (retain, nonatomic) NSMutableDictionary * shareTokenInfosToFetchByURL;

- (void)main;
- (void).cxx_destruct;
- (CKDFetchShareInfoOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)setShareInfoFetchedBlock:(id /* block */)arg0;
- (NSObject *)nameForState:(unsigned int)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (char)makeStateTransition;
- (NSMutableArray *)shareURLsToFetch;
- (void)_prepareShortTokens;
- (void)_fetchShortTokenInfo;
- (NSMutableDictionary *)shareTokenInfosToFetchByURL;
- (id /* block */)shareInfoFetchedBlock;
- (void)_performCallbackForURL:(NSURL *)arg0 withInfo:(NSDictionary *)arg1 error:(NSError *)arg2;
- (NSString *)_decodeProtectedFullToken:(NSString *)arg0 tokenInfo:(NSDictionary *)arg1;
- (void)setShareURLsToFetch:(NSMutableArray *)arg0;
- (void)setShareTokenInfosToFetchByURL:(NSMutableDictionary *)arg0;

@end

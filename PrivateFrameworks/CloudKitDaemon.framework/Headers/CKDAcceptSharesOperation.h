/* Runtime dump - CKDAcceptSharesOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAcceptSharesOperation : CKDDatabaseOperation
{
    id _acceptCompletionBlock;
    NSMutableArray * _shareURLsToAccept;
    NSMutableArray * _acceptedShareURLsToFetch;
    NSMutableDictionary * _shareInfosToAcceptByURL;
    int _numShareAcceptAttempts;
}

@property (copy, nonatomic) id acceptCompletionBlock;
@property (retain, nonatomic) NSMutableArray * shareURLsToAccept;
@property (retain, nonatomic) NSMutableArray * acceptedShareURLsToFetch;
@property (retain, nonatomic) NSMutableDictionary * shareInfosToAcceptByURL;
@property (nonatomic) int numShareAcceptAttempts;

- (void)main;
- (void).cxx_destruct;
- (CKDAcceptSharesOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)setAcceptCompletionBlock:(id /* block */)arg0;
- (NSObject *)nameForState:(unsigned int)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (char)makeStateTransition;
- (NSMutableArray *)shareURLsToAccept;
- (void)_fetchInfoForShares;
- (void)_prepareShareInfo;
- (void)_fetchAcceptedShares;
- (char)_acceptShares;
- (NSMutableArray *)acceptedShareURLsToFetch;
- (id /* block */)acceptCompletionBlock;
- (void)_performCallbackForURL:(NSURL *)arg0 withShare:(CKShare *)arg1 error:(NSError *)arg2;
- (NSMutableDictionary *)shareInfosToAcceptByURL;
- (int)numShareAcceptAttempts;
- (void)setNumShareAcceptAttempts:(int)arg0;
- (void)_handleShareURLAccepted:(id)arg0 forShare:(CKShare *)arg1 responseCode:(int *)arg2;
- (id)_addSelfIdentityToShareInfoPublicPCS:(id)arg0 forShareWithURL:(NSString *)arg1 error:(id *)arg2;
- (void)setShareURLsToAccept:(NSMutableArray *)arg0;
- (void)setAcceptedShareURLsToFetch:(NSMutableArray *)arg0;
- (void)setShareInfosToAcceptByURL:(NSMutableDictionary *)arg0;

@end

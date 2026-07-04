/* Runtime dump - CKDMescalSessionOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMescalSessionOperation : CKDDatabaseOperation
{
    int _serverVersion;
    CKDMescalSession * _mescalSession;
}

@property (nonatomic) int serverVersion;
@property (retain, nonatomic) CKDMescalSession * mescalSession;

- (void)main;
- (void).cxx_destruct;
- (CKDMescalSessionOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (CKDMescalSession *)mescalSession;
- (void)setMescalSession:(CKDMescalSession *)arg0;
- (char)allowsAnonymousAccount;
- (char)shouldCheckAppVersion;
- (NSString *)flowControlKey;
- (int)serverVersion;
- (void)setServerVersion:(int)arg0;
- (void)_handleCertRequestFinished:(id)arg0;
- (void)_handleSessionRequestFinished:(id)arg0;
- (void)_handleDataExchanged:(id)arg0 withError:(NSError *)arg1;
- (void)_exchangeDataAndSendRequest:(NSURLRequest *)arg0;
- (char)requiresTokenRegistration;

@end

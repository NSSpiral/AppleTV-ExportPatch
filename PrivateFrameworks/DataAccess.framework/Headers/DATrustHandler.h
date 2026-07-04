/* Runtime dump - DATrustHandler
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DATrustHandler : NSObject
{
    <DATrustHandlerDelegate> * _delegate;
    NSMutableDictionary * _haveWarnedAboutCertDict;
}

@property (weak, nonatomic) <DATrustHandlerDelegate> * delegate;
@property (retain, nonatomic) NSMutableDictionary * haveWarnedAboutCertDict;

- (void)setDelegate:(<DATrustHandlerDelegate> *)arg0;
- (<DATrustHandlerDelegate> *)delegate;
- (void).cxx_destruct;
- (char)resetCertWarnings;
- (int)_actionForTrust:(struct __SecTrust *)arg0 host:(NSString *)arg1 service:(NSObject *)arg2;
- (char)haveWarnedAboutCert:(id)arg0 forHost:(NSString *)arg1;
- (id)_serverSuffixesToAlwaysFail;
- (void)setHaveWarnedAboutCert:(id)arg0 forHost:(NSString *)arg1;
- (void)handleTrust:(struct __SecTrust *)arg0 forHost:(NSString *)arg1 withCompletionBlock:(id /* block */)arg2;
- (NSMutableDictionary *)haveWarnedAboutCertDict;
- (void)setHaveWarnedAboutCertDict:(NSMutableDictionary *)arg0;
- (char)handleTrustChallenge:(NSObject *)arg0;
- (DATrustHandler *)initWithDelegate:(<DATrustHandlerDelegate> *)arg0;

@end

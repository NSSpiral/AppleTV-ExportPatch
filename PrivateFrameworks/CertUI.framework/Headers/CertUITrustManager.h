/* Runtime dump - CertUITrustManager
 * Image: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

@interface CertUITrustManager : NSObject
{
    NSString * _access;
}

+ (void)_migrateVersionZeroFromAccessGroup:(NSObject *)arg0 toGroup:(NSObject *)arg1;
+ (void)migrateFromVersionZero;
+ (void)migrateFromVersionOne;
+ (CertUITrustManager *)defaultTrustManager;

- (CertUITrustManager *)init;
- (void).cxx_destruct;
- (int)_actionForTrust:(struct __SecTrust *)arg0 exceptions:(id)arg1;
- (int)actionForSSLTrust:(struct __SecTrust *)arg0 hostname:(NSString *)arg1 service:(NSObject *)arg2;
- (void)addSSLTrust:(struct __SecTrust *)arg0 hostname:(NSString *)arg1 service:(NSObject *)arg2;
- (void)removeSSLTrust:(struct __SecTrust *)arg0 hostname:(NSString *)arg1 service:(NSObject *)arg2;
- (void)removeAllTrusts;
- (void)clearSavedTrustSettingsForTrust:(struct __SecTrust *)arg0 host:(NSString *)arg1 service:(NSObject *)arg2;
- (int)actionForSMIMETrust:(struct __SecTrust *)arg0 sender:(NSObject *)arg1;
- (CertUITrustManager *)initWithAccessGroup:(NSString *)arg0;
- (void)addSMIMETrust:(struct __SecTrust *)arg0 sender:(NSObject *)arg1;
- (void)removeSMIMETrust:(struct __SecTrust *)arg0 sender:(NSObject *)arg1;
- (char)_hasExceptionsForSMIMETrust:(struct __SecTrust *)arg0 sender:(NSObject *)arg1;
- (int)actionForTrust:(struct __SecTrust *)arg0 forHost:(NSString *)arg1 andService:(NSObject *)arg2;
- (void)allowTrust:(struct __SecTrust *)arg0 forHost:(NSString *)arg1 service:(NSObject *)arg2;

@end

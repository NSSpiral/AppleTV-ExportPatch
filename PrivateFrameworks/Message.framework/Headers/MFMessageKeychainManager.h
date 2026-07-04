/* Runtime dump - MFMessageKeychainManager
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageKeychainManager : NSObject

+ (void)initialize;
+ (struct __SecIdentity *)copyIdentityForPersistentReference:(NSObject *)arg0 error:(id *)arg1;
+ (struct __SecIdentity *)copyClientSSLIdentityForHostName:(NSString *)arg0 error:(id *)arg1;
+ (NSObject *)persistentReferenceForIdentity:(struct __SecIdentity *)arg0 error:(id *)arg1;
+ (NSString *)_passwordForHost:(NSString *)arg0 username:(NSString *)arg1 port:(int)arg2 keychainProtocol:(struct __CFString *)arg3;
+ (NSNumber *)_passwordForGenericAccount:(NSObject *)arg0 service:(NSObject *)arg1 error:(id *)arg2;
+ (NSString *)passwordForServiceName:(NSString *)arg0 accountName:(NSString *)arg1 synchronizable:(char)arg2 error:(id *)arg3;
+ (NSString *)passwordForServiceName:(NSString *)arg0 accountName:(NSString *)arg1 error:(id *)arg2;
+ (char)_matchSSLClientIdentity:(struct __SecIdentity *)arg0 withHostname:(NSString *)arg1;
+ (char)validateSigningIdentity:(struct __SecIdentity *)arg0 forAddress:(NSString *)arg1 error:(id *)arg2;
+ (NSError *)_copyAllIdentitiesWithError:(id *)arg0 usingBlock:(id /* block */)arg1;
+ (char)validateEncryptionIdentity:(struct __SecIdentity *)arg0 forAddress:(NSString *)arg1 error:(id *)arg2;
+ (struct __SecPolicy *)copySMIMESigningPolicyForAddress:(NSString *)arg0;
+ (char)_validateIdentity:(struct __SecIdentity *)arg0 forAddress:(NSString *)arg1 policy:(struct __SecPolicy *)arg2 usage:(unsigned int)arg3 error:(id *)arg4;
+ (struct __SecPolicy *)copySMIMEEncryptionPolicyForAddress:(NSString *)arg0;
+ (NSObject *)newTrustManager;
+ (struct __SecCertificate *)_copyCertificateForPersistent:(id)arg0 error:(id *)arg1;
+ (MFMessageKeychainManager *)_removeCertificateForPersistent:(id)arg0;
+ (NSObject *)_addCertificate:(struct __SecCertificate *)arg0 persistent:(id *)arg1;
+ (MFMessageKeychainManager *)_addPersistentMapping:(id)arg0 forAddress:(NSString *)arg1;
+ (int)_actionForCertificate:(struct __SecCertificate *)arg0 policy:(struct __SecPolicy *)arg1 uncommentedAddress:(NSString *)arg2;
+ (NSString *)passwordForHost:(NSString *)arg0 username:(NSString *)arg1 port:(int)arg2 keychainProtocol:(void *)arg3;
+ (void)setPassword:(NSString *)arg0 forHost:(NSString *)arg1 username:(NSString *)arg2 port:(int)arg3 keychainProtocol:(void *)arg4 keychainAccessibility:(void *)arg5;
+ (void)removePasswordForHost:(NSString *)arg0 username:(NSString *)arg1 port:(int)arg2 keychainProtocol:(void *)arg3;
+ (NSString *)passwordForServiceName:(NSString *)arg0 accountName:(NSString *)arg1;
+ (char)addPassword:(NSString *)arg0 forServiceName:(NSString *)arg1 accountName:(NSString *)arg2 keychainAccessibility:(void *)arg3 synchronizable:(char)arg4 error:(id *)arg5;
+ (void)setPassword:(NSString *)arg0 forServiceName:(NSString *)arg1 accountName:(NSString *)arg2 keychainAccessibility:(void *)arg3;
+ (void)removePasswordForServiceName:(NSString *)arg0 accountName:(NSString *)arg1;
+ (NSString *)copyAllSigningIdentitiesForAddress:(NSString *)arg0 error:(id *)arg1;
+ (NSString *)copyAllEncryptionIdentitiesForAddress:(NSString *)arg0 error:(id *)arg1;
+ (struct __SecCertificate *)copyEncryptionCertificateForAddress:(NSString *)arg0 error:(id *)arg1;
+ (NSObject *)saveEncryptionCertificate:(struct __SecCertificate *)arg0 forAddress:(NSString *)arg1;
+ (int)actionForSigningIdentity:(struct __SecIdentity *)arg0 address:(NSString *)arg1;
+ (int)actionForEncryptionCertificate:(struct __SecCertificate *)arg0 address:(NSString *)arg1;

@end

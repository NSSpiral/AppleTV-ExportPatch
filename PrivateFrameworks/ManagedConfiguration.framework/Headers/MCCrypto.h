/* Runtime dump - MCCrypto
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCCrypto : NSObject

+ (struct __SecCertificate *)copyCertificateRefFromPEMData:(NSData *)arg0;
+ (NSError *)_decryptionFailedError;
+ (void)createNewActivationLockBypassCodeOutCode:(char *)arg0 outRawBytes:(char *)arg1 outHash:(char *)arg2;
+ (MCCrypto *)storeActivationLockBypassCode:(id)arg0 hash:(id)arg1;
+ (struct __SecCertificate *)copyCertificateRefFromPKCS1Data:(NSData *)arg0;
+ (char)isValidPKCS12Data:(NSData *)arg0;
+ (NSData *)objectFromEncryptedData:(NSData *)arg0 outCertificate:(struct __SecCertificate * *)arg1 outError:(struct __SecCertificate)arg2;
+ (MCCrypto *)createAndStoreNewActivationLockBypassCodeAndHash;
+ (MCCrypto *)storedActivationLockBypassCode;
+ (void)clearStoredActivationLockBypassCode;
+ (void)clearStoredActivationLockHash;
+ (MCCrypto *)storedActivationLockBypassCodeHash;

@end

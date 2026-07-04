/* Runtime dump - ACDPropertyEncryption
 * Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACDPropertyEncryption : NSObject

+ (struct __SecKey *)accountPropertyCryptoKeyCreatingIfNecessary:(char)arg0;
+ (NSObject *)decryptProperty:(NSObject *)arg0;
+ (NSObject *)_decryptableDataForStoredProperty:(NSObject *)arg0;
+ (NSObject *)encryptProperty:(NSObject *)arg0;

@end

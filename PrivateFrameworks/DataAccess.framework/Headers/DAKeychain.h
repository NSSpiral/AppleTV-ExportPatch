/* Runtime dump - DAKeychain
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAKeychain : NSObject

+ (DAKeychain *)sharedKeychain;

- (void)migratePasswordForAccount:(NSObject *)arg0;
- (int)_daKeychainAccessibilityForSecAccessibility:(void *)arg0;
- (char)canAccessCredentialsWithAccessibility:(int)arg0;
- (void)removePersistentCredentials;
- (struct __CFDictionary *)_DACopyMutableQueryForAccountWithPersistentUUID:(NSString *)arg0;
- (void *)_secAccessibilityForDAKeychainAccessibility:(int)arg0;
- (struct __CFDictionary *)_DACopyMutableAttributesForAccountWithPersistentUUID:(NSString *)arg0 accessibility:(int)arg1;
- (char)removePasswordForAccount:(NSObject *)arg0 withPersistentUUID:(NSString *)arg1;
- (id)passwordForAccountWithPersistentUUID:(NSString *)arg0 expectedAccessibility:(int)arg1 shouldSetAccessibility:(char)arg2 passwordExpected:(char)arg3;
- (NSURL *)guessPasswordForURL:(NSURL *)arg0;
- (void)removeKeychainInformationsForURL:(NSURL *)arg0;
- (char)setPassword:(NSString *)arg0 forAccount:(NSObject *)arg1 withPersistentUUID:(NSString *)arg2 withAccessibility:(int)arg3;
- (NSURL *)loadKeychainInformationsForURL:(NSURL *)arg0;
- (char)saveKeychainInformationsForURL:(NSURL *)arg0 andPassword:(NSString *)arg1 withAccessibility:(int)arg2;

@end

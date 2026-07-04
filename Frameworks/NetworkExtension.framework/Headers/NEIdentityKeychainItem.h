/* Runtime dump - NEIdentityKeychainItem
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIdentityKeychainItem : NEKeychainItem

+ (NEIdentityKeychainItem *)copyIdentities:(id)arg0 fromDomain:(int)arg1;
+ (NSObject *)copyPersistentReferenceForIdentity:(struct __SecIdentity *)arg0;
+ (NSObject *)copyPropertiesForIdentity:(struct __SecIdentity *)arg0 persistentReference:(NSData *)arg1;

- (NEIdentityKeychainItem *)initWithIdentifier:(NSString *)arg0 domain:(int)arg1;
- (void)syncUsingConfiguration:(NSDictionary *)arg0 accountName:(NSString *)arg1 passwordType:(int)arg2 identifierSuffix:(NSString *)arg3;
- (NEIdentityKeychainItem *)initWithPassword:(NSString *)arg0 domain:(int)arg1;
- (NSString *)copyPassword;
- (NEIdentityKeychainItem *)copyWithZone:(struct _NSZone *)arg0;
- (void)sync;

@end

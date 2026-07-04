/* Runtime dump - NEKeychainItem
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEKeychainItem : NSObject <NEPrettyDescription, NSCopying, NSSecureCoding>
{
    NSString * _password;
    NSString * _identifier;
    NSData * _persistentReference;
    char _legacy;
    int _domain;
    NEKeychainItem * _oldItem;
}

@property (copy) NSString * identifier;
@property (copy) NSString * password;
@property (copy) NSData * persistentReference;
@property (readonly) int domain;
@property (copy) NEKeychainItem * oldItem;
@property (readonly) char legacy;

+ (char)supportsSecureCoding;

- (NSString *)descriptionWithIndent:(int)arg0;
- (NEKeychainItem *)initWithPersistentReference:(NSData *)arg0 domain:(int)arg1;
- (void)setPersistentReference:(NSData *)arg0;
- (NSData *)persistentReference;
- (NEKeychainItem *)initWithIdentifier:(NSString *)arg0 domain:(int)arg1;
- (void)syncUsingConfiguration:(NSDictionary *)arg0 accountName:(NSString *)arg1 passwordType:(int)arg2 identifierSuffix:(NSString *)arg3;
- (void)migrateFromPreferences:(struct __SCPreferences *)arg0;
- (NEKeychainItem *)initWithLegacyIdentifier:(char)arg0 domain:(int)arg1;
- (NEKeychainItem *)initWithPassword:(NSString *)arg0 domain:(int)arg1;
- (NSString *)copyPassword;
- (char)copyDataFromKeychainItem:(void *)arg0 outPassword:(id *)arg1 outIdentifier:(id *)arg2 outPersistentReference:(id *)arg3;
- (NSObject *)copyKindForPasswordType:(int)arg0;
- (void)addOrUpdateWithConfiguration:(NSDictionary *)arg0 passwordType:(int)arg1 accountName:(NSString *)arg2 identifierSuffix:(NSString *)arg3;
- (NEKeychainItem *)oldItem;
- (void)setOldItem:(NEKeychainItem *)arg0;
- (void)setIdentifierInternal:(id)arg0;
- (NEKeychainItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)identifier;
- (int)domain;
- (NEKeychainItem *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (void)remove;
- (void).cxx_destruct;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;
- (char)legacy;

@end

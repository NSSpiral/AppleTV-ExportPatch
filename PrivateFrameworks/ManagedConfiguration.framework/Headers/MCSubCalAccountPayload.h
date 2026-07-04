/* Runtime dump - MCSubCalAccountPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCSubCalAccountPayload : MCPayload
{
    NSString * _accountDescription;
    NSString * _hostname;
    NSString * _username;
    NSString * _password;
    char _useSSL;
    NSString * _accountPersistentUUID;
    NSNumber * _useSSLNum;
}

@property (readonly, retain, nonatomic) NSString * accountDescription;
@property (readonly, retain, nonatomic) NSString * hostname;
@property (readonly, retain, nonatomic) NSString * username;
@property (readonly, retain, nonatomic) NSString * password;
@property (readonly, nonatomic) char useSSL;
@property (copy, nonatomic) NSString * accountPersistentUUID;
@property (readonly, nonatomic) NSNumber * useSSLNum;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (NSString *)description;
- (NSString *)title;
- (NSString *)subtitle2Label;
- (void).cxx_destruct;
- (NSString *)password;
- (char)useSSL;
- (NSString *)accountPersistentUUID;
- (MCSubCalAccountPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSString *)subtitle1Label;
- (NSString *)subtitle1Description;
- (NSArray *)payloadDescriptionKeyValueSections;
- (NSString *)subtitle2Description;
- (void)setAccountPersistentUUID:(NSString *)arg0;
- (NSNumber *)useSSLNum;
- (NSString *)accountDescription;
- (NSString *)username;
- (NSString *)hostname;

@end

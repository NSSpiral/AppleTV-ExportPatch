/* Runtime dump - MCCalDAVAccountPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCCalDAVAccountPayload : MCPayload
{
    NSString * _accountDescription;
    NSString * _hostname;
    NSString * _username;
    NSString * _password;
    NSString * _principalURL;
    char _useSSL;
    int _port;
    NSString * _accountPersistentUUID;
    NSNumber * _useSSLNum;
    NSNumber * _portNum;
}

@property (readonly, retain, nonatomic) NSString * accountDescription;
@property (readonly, retain, nonatomic) NSString * hostname;
@property (copy, nonatomic) NSString * username;
@property (copy, nonatomic) NSString * password;
@property (readonly, retain, nonatomic) NSString * principalURL;
@property (readonly, nonatomic) char useSSL;
@property (readonly, nonatomic) int port;
@property (copy, nonatomic) NSString * accountPersistentUUID;
@property (readonly, nonatomic) NSNumber * useSSLNum;
@property (readonly, nonatomic) NSNumber * portNum;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (NSString *)description;
- (NSString *)title;
- (NSString *)subtitle2Label;
- (void).cxx_destruct;
- (int)port;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;
- (void)setUsername:(NSString *)arg0;
- (char)useSSL;
- (NSString *)accountPersistentUUID;
- (MCCalDAVAccountPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSString *)subtitle1Label;
- (NSString *)subtitle1Description;
- (NSArray *)payloadDescriptionKeyValueSections;
- (NSString *)subtitle2Description;
- (void)setAccountPersistentUUID:(NSString *)arg0;
- (NSNumber *)useSSLNum;
- (NSString *)principalURL;
- (NSNumber *)portNum;
- (NSString *)accountDescription;
- (NSString *)username;
- (NSString *)hostname;

@end

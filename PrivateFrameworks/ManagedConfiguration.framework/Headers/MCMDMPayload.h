/* Runtime dump - MCMDMPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCMDMPayload : MCPayload
{
    NSString * _identityUUID;
    NSData * _identityPersistentID;
    char _useDevelopmentAPNS;
    NSString * _topic;
    NSString * _serverURLString;
    NSString * _checkInURLString;
    int _accessRights;
    char _signMessage;
    char _checkOutWhenRemoved;
    NSNumber * _useDevelopmentAPNSNum;
    NSNumber * _signMessageNum;
    NSNumber * _checkOutWhenRemovedNum;
}

@property (readonly, retain, nonatomic) NSString * identityUUID;
@property (retain, nonatomic) NSData * identityPersistentID;
@property (readonly, retain, nonatomic) NSString * topic;
@property (readonly, retain, nonatomic) NSString * serverURLString;
@property (readonly, nonatomic) char useDevelopmentAPNS;
@property (readonly, retain, nonatomic) NSString * checkInURLString;
@property (readonly, nonatomic) int accessRights;
@property (readonly, retain, nonatomic) NSArray * localizedAccessRightDescriptions;
@property (readonly, nonatomic) char signMessage;
@property (readonly, nonatomic) char checkOutWhenRemoved;
@property (readonly, nonatomic) NSNumber * useDevelopmentAPNSNum;
@property (readonly, nonatomic) NSNumber * signMessageNum;
@property (readonly, nonatomic) NSNumber * checkOutWhenRemovedNum;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (NSString *)description;
- (NSString *)title;
- (void).cxx_destruct;
- (NSString *)topic;
- (MCMDMPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSString *)subtitle1Label;
- (NSString *)subtitle1Description;
- (NSArray *)payloadDescriptionKeyValueSections;
- (NSArray *)installationWarnings;
- (NSError *)_invalidRightsError;
- (NSError *)_invalidTopicError;
- (id)_nonHTTPSURLErrorForField:(id)arg0;
- (NSArray *)localizedAccessRightDescriptions;
- (NSString *)identityUUID;
- (NSData *)identityPersistentID;
- (void)setIdentityPersistentID:(NSData *)arg0;
- (NSString *)serverURLString;
- (char)useDevelopmentAPNS;
- (NSString *)checkInURLString;
- (int)accessRights;
- (char)signMessage;
- (char)checkOutWhenRemoved;
- (NSNumber *)useDevelopmentAPNSNum;
- (NSNumber *)signMessageNum;
- (NSNumber *)checkOutWhenRemovedNum;

@end

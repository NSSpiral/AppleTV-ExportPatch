/* Runtime dump - MCPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCPayload : NSObject
{
    MCProfile * _profile;
    NSString * _type;
    NSString * _payloadDescription;
    NSString * _displayName;
    NSString * _identifier;
    NSString * _organization;
    NSString * _UUID;
    int _version;
    NSString * _persistentResourceID;
    char _mustInstallNonInteractively;
}

@property (readonly, weak, nonatomic) MCProfile * profile;
@property (readonly, retain, nonatomic) NSString * friendlyName;
@property (readonly, retain, nonatomic) NSString * type;
@property (readonly, retain, nonatomic) NSString * payloadDescription;
@property (retain, nonatomic) NSString * displayName;
@property (readonly, retain, nonatomic) NSString * identifier;
@property (readonly, retain, nonatomic) NSString * organization;
@property (readonly, retain, nonatomic) NSString * UUID;
@property (readonly, nonatomic) int version;
@property (retain, nonatomic) NSString * persistentResourceID;
@property (readonly, nonatomic) NSDictionary * restrictions;
@property (nonatomic) char mustInstallNonInteractively;
@property (readonly, retain, nonatomic) NSArray * installationWarnings;

+ (MCPayload *)badFieldTypeErrorWithField:(id)arg0;
+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;
+ (MCPayload *)payloadsFromArray:(NSArray *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
+ (NSNumber *)localizedDescriptionForPayloadCount:(unsigned int)arg0;
+ (MCPayload *)badFieldValueErrorWithField:(id)arg0 underlyingError:(NSError *)arg1;
+ (MCPayload *)missingFieldErrorWithField:(id)arg0 underlyingError:(NSError *)arg1;
+ (MCPayload *)badFieldValueErrorWithField:(id)arg0;
+ (NSDictionary *)wrapperPayloadDictionary;
+ (NSNumber *)localizedParenthesizedFormDescriptionForPayloadCount:(unsigned int)arg0;
+ (MCPayload *)payloadFromDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;

- (NSString *)description;
- (NSString *)identifier;
- (NSString *)type;
- (NSString *)title;
- (NSString *)UUID;
- (NSString *)subtitle2Label;
- (int)version;
- (void).cxx_destruct;
- (NSString *)displayName;
- (void)setDisplayName:(NSString *)arg0;
- (NSDictionary *)restrictions;
- (NSString *)friendlyName;
- (NSString *)organization;
- (MCPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSError *)malformedPayloadErrorWithError:(NSError *)arg0;
- (NSDictionary *)stubDictionary;
- (NSString *)subtitle1Label;
- (NSString *)subtitle1Description;
- (NSArray *)payloadDescriptionKeyValueSections;
- (NSArray *)installationWarnings;
- (NSString *)subtitle2Description;
- (NSString *)persistentResourceID;
- (char)mustInstallNonInteractively;
- (void)setMustInstallNonInteractively:(char)arg0;
- (void)setPersistentResourceID:(NSString *)arg0;
- (NSString *)payloadDescription;
- (MCProfile *)profile;

@end

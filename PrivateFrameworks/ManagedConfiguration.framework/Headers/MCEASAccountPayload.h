/* Runtime dump - MCEASAccountPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCEASAccountPayload : MCEmailAccountPayloadBase
{
    NSString * _accountDescription;
    NSString * _hostname;
    NSString * _username;
    NSString * _password;
    NSString * _emailAddress;
    NSNumber * _mailNumberOfPastDaysToSync;
    NSData * _embeddedCertificate;
    NSString * _embeddedCertificateName;
    NSString * _embeddedCertificatePassword;
    NSString * _certificateUUID;
    NSString * _accountPersistentUUID;
    NSData * _certificatePersistentID;
    char _syncDefaultFoldersOnly;
    NSNumber * _useSSL;
    NSNumber * _syncDefaultFoldersOnlyNum;
}

@property (readonly, retain, nonatomic) NSString * accountDescription;
@property (readonly, retain, nonatomic) NSString * hostname;
@property (copy, nonatomic) NSString * username;
@property (copy, nonatomic) NSString * password;
@property (copy, nonatomic) NSString * emailAddress;
@property (retain, nonatomic) NSNumber * useSSL;
@property (readonly, retain, nonatomic) NSNumber * mailNumberOfPastDaysToSync;
@property (readonly, retain, nonatomic) NSData * embeddedCertificate;
@property (readonly, retain, nonatomic) NSString * embeddedCertificateName;
@property (copy, nonatomic) NSString * embeddedCertificatePassword;
@property (readonly, retain, nonatomic) NSString * certificateUUID;
@property (readonly, nonatomic) char hasCertificate;
@property (copy, nonatomic) NSString * accountPersistentUUID;
@property (retain, nonatomic) NSData * certificatePersistentID;
@property (nonatomic) char syncDefaultFoldersOnly;
@property (readonly, nonatomic) NSNumber * syncDefaultFoldersOnlyNum;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (NSString *)description;
- (NSString *)title;
- (NSString *)subtitle2Label;
- (void).cxx_destruct;
- (NSString *)password;
- (char)hasCertificate;
- (NSString *)emailAddress;
- (void)setPassword:(NSString *)arg0;
- (void)setEmailAddress:(NSString *)arg0;
- (void)setUsername:(NSString *)arg0;
- (NSNumber *)useSSL;
- (char)syncDefaultFoldersOnly;
- (void)setUseSSL:(NSNumber *)arg0;
- (NSString *)accountPersistentUUID;
- (MCEASAccountPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSString *)subtitle1Label;
- (NSString *)subtitle1Description;
- (NSArray *)payloadDescriptionKeyValueSections;
- (NSData *)certificatePersistentID;
- (NSString *)subtitle2Description;
- (void)setCertificatePersistentID:(NSData *)arg0;
- (NSString *)certificateUUID;
- (void)setAccountPersistentUUID:(NSString *)arg0;
- (NSData *)embeddedCertificate;
- (NSString *)embeddedCertificateName;
- (NSString *)embeddedCertificatePassword;
- (void)setEmbeddedCertificatePassword:(NSString *)arg0;
- (void)setSyncDefaultFoldersOnly:(char)arg0;
- (NSNumber *)syncDefaultFoldersOnlyNum;
- (NSString *)accountDescription;
- (NSNumber *)mailNumberOfPastDaysToSync;
- (NSString *)username;
- (NSString *)hostname;

@end

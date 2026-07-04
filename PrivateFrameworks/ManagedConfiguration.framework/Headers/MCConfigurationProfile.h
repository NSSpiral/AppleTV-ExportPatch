/* Runtime dump - MCConfigurationProfile
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCConfigurationProfile : MCProfile
{
    NSArray * _payloads;
    NSArray * _managedPayloads;
    char _isCloudProfile;
    char _isCloudLocked;
    char _isMDMProfile;
    MCProfileServiceProfile * _OTAProfile;
}

@property (retain, nonatomic) MCProfileServiceProfile * OTAProfile;
@property (nonatomic) char isCloudProfile;
@property (nonatomic) char isCloudLocked;
@property (nonatomic) char isMDMProfile;

- (NSString *)description;
- (void).cxx_destruct;
- (struct __SecCertificate *)copyCertificateWithPersistentID:(NSObject *)arg0;
- (NSDictionary *)stubDictionary;
- (void)_addObjectsOfClass:(Class)arg0 fromArray:(NSArray *)arg1 toArray:(NSArray *)arg2;
- (id)_sortPayloads:(id)arg0;
- (NSArray *)payloads;
- (id)payloadWithUUID:(id)arg0;
- (struct __SecCertificate *)copyCertificateFromPayloadWithUUID:(id)arg0;
- (NSObject *)_subjectSummaryFromCertificate:(struct __SecCertificate *)arg0;
- (MCConfigurationProfile *)initWithDictionary:(NSDictionary *)arg0 allowEmptyPayload:(char)arg1 outError:(id *)arg2;
- (void)_sortPayloads;
- (id)installationWarningsIncludeUnsignedProfileWarning:(char)arg0;
- (NSObject *)_localizedPayloadSummaryByType:(NSObject *)arg0;
- (NSArray *)managedPayloads;
- (id)subjectSummaryFromCertificatePayloadWithUUID:(id)arg0;
- (NSObject *)subjectSummaryFromCertificateWithPersistentID:(NSObject *)arg0;
- (char)isManagedByProfileService;
- (NSArray *)localizedPayloadSummaryByType;
- (NSArray *)localizedManagedPayloadSummaryByType;
- (NSDate *)earliestCertificateExpiryDate;
- (MCProfileServiceProfile *)OTAProfile;
- (void)setOTAProfile:(id)arg0;
- (char)isCloudProfile;
- (void)setIsCloudProfile:(char)arg0;
- (char)isCloudLocked;
- (void)setIsCloudLocked:(char)arg0;
- (char)isMDMProfile;
- (void)setIsMDMProfile:(char)arg0;

@end

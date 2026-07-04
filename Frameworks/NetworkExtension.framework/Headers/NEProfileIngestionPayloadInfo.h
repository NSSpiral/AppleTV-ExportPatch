/* Runtime dump - NEProfileIngestionPayloadInfo
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEProfileIngestionPayloadInfo : NSObject <NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    char _isSetAside;
    char _applicationCreated;
    NSString * _payloadProtocolType;
    NSString * _payloadUUID;
    NSString * _payloadOrganization;
    NSString * _profileOrganization;
    NSString * _profileIdentifier;
    NSString * _profileUUID;
}

@property (copy) NSString * payloadProtocolType;
@property (copy) NSString * payloadUUID;
@property (copy) NSString * payloadOrganization;
@property (copy) NSString * profileOrganization;
@property (copy) NSString * profileIdentifier;
@property (copy) NSString * profileUUID;
@property char isSetAside;
@property char applicationCreated;

+ (char)supportsSecureCoding;

- (NSString *)descriptionWithIndent:(int)arg0;
- (NSDictionary *)copyLegacyDictionary;
- (NEProfileIngestionPayloadInfo *)initFromLegacyDictionary:(NSDictionary *)arg0;
- (char)applicationCreated;
- (NSString *)profileIdentifier;
- (char)isSetAside;
- (void)setApplicationCreated:(char)arg0;
- (void)setPayloadUUID:(NSString *)arg0;
- (void)setPayloadOrganization:(NSString *)arg0;
- (void)setProfileOrganization:(NSString *)arg0;
- (void)setProfileUUID:(NSString *)arg0;
- (void)setProfileIdentifier:(NSString *)arg0;
- (void)setIsSetAside:(char)arg0;
- (NSString *)payloadUUID;
- (NSString *)payloadProtocolType;
- (NSString *)payloadOrganization;
- (NSString *)profileUUID;
- (NSString *)profileOrganization;
- (void)setPayloadProtocolType:(NSString *)arg0;
- (NEProfileIngestionPayloadInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NEProfileIngestionPayloadInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end

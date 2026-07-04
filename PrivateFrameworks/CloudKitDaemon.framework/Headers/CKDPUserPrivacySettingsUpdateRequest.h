/* Runtime dump - CKDPUserPrivacySettingsUpdateRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserPrivacySettingsUpdateRequest : PBRequest <NSCopying>
{
    NSString * _bundleIdentifier;
    CKDPUserPrivacySettings * _userPrivacySettings;
}

@property (readonly, nonatomic) char hasBundleIdentifier;
@property (retain, nonatomic) NSString * bundleIdentifier;
@property (readonly, nonatomic) char hasUserPrivacySettings;
@property (retain, nonatomic) CKDPUserPrivacySettings * userPrivacySettings;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)bundleIdentifier;
- (CKDPUserPrivacySettingsUpdateRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setBundleIdentifier:(NSString *)arg0;
- (void)setUserPrivacySettings:(CKDPUserPrivacySettings *)arg0;
- (char)hasUserPrivacySettings;
- (CKDPUserPrivacySettings *)userPrivacySettings;
- (char)hasBundleIdentifier;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

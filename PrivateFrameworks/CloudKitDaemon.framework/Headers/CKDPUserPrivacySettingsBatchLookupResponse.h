/* Runtime dump - CKDPUserPrivacySettingsBatchLookupResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserPrivacySettingsBatchLookupResponse : PBCodable <NSCopying>
{
    NSMutableArray * _containerPrivacySettings;
}

@property (retain, nonatomic) NSMutableArray * containerPrivacySettings;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPUserPrivacySettingsBatchLookupResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSMutableArray *)containerPrivacySettings;
- (void)addContainerPrivacySettings:(NSDictionary *)arg0;
- (unsigned int)containerPrivacySettingsCount;
- (void)clearContainerPrivacySettings;
- (NSObject *)containerPrivacySettingsAtIndex:(unsigned int)arg0;
- (void)setContainerPrivacySettings:(NSMutableArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

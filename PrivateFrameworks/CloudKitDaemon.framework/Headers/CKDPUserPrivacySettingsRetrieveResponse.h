/* Runtime dump - CKDPUserPrivacySettingsRetrieveResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserPrivacySettingsRetrieveResponse : PBCodable <NSCopying>
{
    NSMutableArray * _applicationBundles;
    CKDPUserPrivacySettings * _userPrivacySettings;
}

@property (readonly, nonatomic) char hasUserPrivacySettings;
@property (retain, nonatomic) CKDPUserPrivacySettings * userPrivacySettings;
@property (retain, nonatomic) NSMutableArray * applicationBundles;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPUserPrivacySettingsRetrieveResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addApplicationBundle:(NSObject *)arg0;
- (unsigned int)applicationBundlesCount;
- (void)clearApplicationBundles;
- (NSObject *)applicationBundleAtIndex:(unsigned int)arg0;
- (void)setUserPrivacySettings:(CKDPUserPrivacySettings *)arg0;
- (char)hasUserPrivacySettings;
- (NSMutableArray *)applicationBundles;
- (void)setApplicationBundles:(NSMutableArray *)arg0;
- (CKDPUserPrivacySettings *)userPrivacySettings;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

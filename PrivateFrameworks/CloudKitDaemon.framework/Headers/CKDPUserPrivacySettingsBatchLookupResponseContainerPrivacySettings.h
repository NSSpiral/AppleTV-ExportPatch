/* Runtime dump - CKDPUserPrivacySettingsBatchLookupResponseContainerPrivacySettings
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserPrivacySettingsBatchLookupResponseContainerPrivacySettings : PBCodable <NSCopying>
{
    NSMutableArray * _applicationBundles;
    NSString * _applicationContainer;
    int _applicationContainerEnvironment;
    CKDPUserPrivacySettings * _userPrivacySettings;
    struct ? _has;
}

@property (readonly, nonatomic) char hasApplicationContainer;
@property (retain, nonatomic) NSString * applicationContainer;
@property (nonatomic) char hasApplicationContainerEnvironment;
@property (nonatomic) int applicationContainerEnvironment;
@property (retain, nonatomic) NSMutableArray * applicationBundles;
@property (readonly, nonatomic) char hasUserPrivacySettings;
@property (retain, nonatomic) CKDPUserPrivacySettings * userPrivacySettings;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPUserPrivacySettingsBatchLookupResponseContainerPrivacySettings *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addApplicationBundle:(NSObject *)arg0;
- (void)setApplicationContainer:(NSString *)arg0;
- (unsigned int)applicationBundlesCount;
- (void)clearApplicationBundles;
- (NSObject *)applicationBundleAtIndex:(unsigned int)arg0;
- (void)setUserPrivacySettings:(CKDPUserPrivacySettings *)arg0;
- (char)hasApplicationContainer;
- (int)applicationContainerEnvironment;
- (void)setApplicationContainerEnvironment:(int)arg0;
- (void)setHasApplicationContainerEnvironment:(char)arg0;
- (char)hasApplicationContainerEnvironment;
- (char)hasUserPrivacySettings;
- (NSString *)applicationContainer;
- (NSMutableArray *)applicationBundles;
- (void)setApplicationBundles:(NSMutableArray *)arg0;
- (CKDPUserPrivacySettings *)userPrivacySettings;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

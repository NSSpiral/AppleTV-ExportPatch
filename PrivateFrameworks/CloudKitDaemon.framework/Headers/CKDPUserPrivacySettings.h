/* Runtime dump - CKDPUserPrivacySettings
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserPrivacySettings : PBCodable <NSCopying>
{
    char _discoverable;
    struct ? _has;
}

@property (nonatomic) char hasDiscoverable;
@property (nonatomic) char discoverable;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPUserPrivacySettings *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (char)discoverable;
- (void)setDiscoverable:(char)arg0;
- (char)hasDiscoverable;
- (void)setHasDiscoverable:(char)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

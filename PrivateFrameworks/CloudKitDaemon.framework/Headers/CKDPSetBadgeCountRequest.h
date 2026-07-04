/* Runtime dump - CKDPSetBadgeCountRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPSetBadgeCountRequest : PBRequest <NSCopying>
{
    unsigned int _badgeCount;
    char _forDevice;
    struct ? _has;
}

@property (nonatomic) char hasBadgeCount;
@property (nonatomic) unsigned int badgeCount;
@property (nonatomic) char hasForDevice;
@property (nonatomic) char forDevice;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPSetBadgeCountRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setBadgeCount:(unsigned int)arg0;
- (void)setHasBadgeCount:(char)arg0;
- (char)hasBadgeCount;
- (void)setForDevice:(char)arg0;
- (void)setHasForDevice:(char)arg0;
- (char)hasForDevice;
- (unsigned int)badgeCount;
- (char)forDevice;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

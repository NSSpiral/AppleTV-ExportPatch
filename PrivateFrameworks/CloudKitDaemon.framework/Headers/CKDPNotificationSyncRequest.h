/* Runtime dump - CKDPNotificationSyncRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPNotificationSyncRequest : PBRequest <NSCopying>
{
    unsigned int _maxChanges;
    NSData * _serverChangeToken;
    struct ? _has;
}

@property (readonly, nonatomic) char hasServerChangeToken;
@property (retain, nonatomic) NSData * serverChangeToken;
@property (nonatomic) char hasMaxChanges;
@property (nonatomic) unsigned int maxChanges;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPNotificationSyncRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSData *)serverChangeToken;
- (void)setServerChangeToken:(NSData *)arg0;
- (char)hasServerChangeToken;
- (void)setMaxChanges:(unsigned int)arg0;
- (void)setHasMaxChanges:(char)arg0;
- (char)hasMaxChanges;
- (unsigned int)maxChanges;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

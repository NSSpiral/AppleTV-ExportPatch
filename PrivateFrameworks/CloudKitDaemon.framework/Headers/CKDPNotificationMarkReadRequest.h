/* Runtime dump - CKDPNotificationMarkReadRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPNotificationMarkReadRequest : PBRequest <NSCopying>
{
    NSString * _uuid;
}

@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSString * uuid;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPNotificationMarkReadRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSString *)uuid;
- (char)hasUuid;
- (void)setUuid:(NSString *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

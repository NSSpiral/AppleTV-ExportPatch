/* Runtime dump - CKDPShareTokenDeleteRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareTokenDeleteRequest : PBRequest <NSCopying>
{
    NSString * _routingKey;
    NSData * _shortTokenHash;
}

@property (readonly, nonatomic) char hasRoutingKey;
@property (retain, nonatomic) NSString * routingKey;
@property (readonly, nonatomic) char hasShortTokenHash;
@property (retain, nonatomic) NSData * shortTokenHash;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPShareTokenDeleteRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSString *)routingKey;
- (void)setRoutingKey:(NSString *)arg0;
- (void)setShortTokenHash:(NSData *)arg0;
- (char)hasShortTokenHash;
- (NSData *)shortTokenHash;
- (char)hasRoutingKey;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

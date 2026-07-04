/* Runtime dump - CKDPShareTokenRetrieveRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareTokenRetrieveRequest : PBRequest <NSCopying>
{
    NSString * _routingKey;
    CKDPShareIdentifier * _shareId;
    NSData * _shortTokenHash;
}

@property (readonly, nonatomic) char hasRoutingKey;
@property (retain, nonatomic) NSString * routingKey;
@property (readonly, nonatomic) char hasShortTokenHash;
@property (retain, nonatomic) NSData * shortTokenHash;
@property (readonly, nonatomic) char hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier * shareId;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPShareTokenRetrieveRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSString *)routingKey;
- (void)setRoutingKey:(NSString *)arg0;
- (void)setShareId:(CKDPShareIdentifier *)arg0;
- (void)setShortTokenHash:(NSData *)arg0;
- (char)hasShareId;
- (char)hasShortTokenHash;
- (CKDPShareIdentifier *)shareId;
- (NSData *)shortTokenHash;
- (char)hasRoutingKey;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

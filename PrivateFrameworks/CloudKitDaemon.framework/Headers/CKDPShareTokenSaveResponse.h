/* Runtime dump - CKDPShareTokenSaveResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareTokenSaveResponse : PBCodable <NSCopying>
{
    NSString * _routingKey;
}

@property (readonly, nonatomic) char hasRoutingKey;
@property (retain, nonatomic) NSString * routingKey;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPShareTokenSaveResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSString *)routingKey;
- (void)setRoutingKey:(NSString *)arg0;
- (char)hasRoutingKey;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

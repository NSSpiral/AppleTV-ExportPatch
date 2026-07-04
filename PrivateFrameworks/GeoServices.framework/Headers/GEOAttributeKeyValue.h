/* Runtime dump - GEOAttributeKeyValue
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAttributeKeyValue : PBCodable <NSCopying>
{
    NSString * _attributeKey;
    NSString * _attributeValue;
}

@property (retain, nonatomic) NSString * attributeKey;
@property (retain, nonatomic) NSString * attributeValue;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOAttributeKeyValue *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)attributeKey;
- (void)setAttributeKey:(NSString *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (NSString *)attributeValue;
- (void)setAttributeValue:(NSString *)arg0;

@end

/* Runtime dump - GEOPDStyleAttribute
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDStyleAttribute : PBCodable <NSCopying>
{
    unsigned int _key;
    unsigned int _value;
    struct ? _has;
}

@property (nonatomic) char hasKey;
@property (nonatomic) unsigned int key;
@property (nonatomic) char hasValue;
@property (nonatomic) unsigned int value;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)key;
- (unsigned int)value;
- (void)setValue:(unsigned int)arg0;
- (GEOPDStyleAttribute *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setKey:(unsigned int)arg0;
- (char)hasKey;
- (char)hasValue;
- (void)setHasKey:(char)arg0;
- (void)setHasValue:(char)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

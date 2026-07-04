/* Runtime dump - GEOVStyleAttribute
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVStyleAttribute : PBCodable <NSCopying>
{
    int _intValue;
    unsigned int _key;
    struct ? _has;
}

@property (nonatomic) unsigned int key;
@property (nonatomic) char hasIntValue;
@property (nonatomic) int intValue;

- (int)intValue;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)key;
- (GEOVStyleAttribute *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setKey:(unsigned int)arg0;
- (void)setIntValue:(int)arg0;
- (void)setHasIntValue:(char)arg0;
- (char)hasIntValue;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

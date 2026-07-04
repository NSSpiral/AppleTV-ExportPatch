/* Runtime dump - GEONamedFeature
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONamedFeature : PBCodable <NSCopying>
{
    double _value;
    NSString * _name;
}

@property (retain, nonatomic) NSString * name;
@property (nonatomic) double value;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (double)value;
- (void)setValue:(double)arg0;
- (GEONamedFeature *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

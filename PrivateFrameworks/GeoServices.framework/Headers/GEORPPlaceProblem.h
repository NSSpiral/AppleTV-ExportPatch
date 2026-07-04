/* Runtime dump - GEORPPlaceProblem
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPPlaceProblem : PBCodable <NSCopying>
{
    unsigned int _componentIndex;
    unsigned int _componentValueIndex;
    struct ? _has;
}

@property (nonatomic) char hasComponentIndex;
@property (nonatomic) unsigned int componentIndex;
@property (nonatomic) char hasComponentValueIndex;
@property (nonatomic) unsigned int componentValueIndex;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPPlaceProblem *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setComponentIndex:(unsigned int)arg0;
- (void)setHasComponentIndex:(char)arg0;
- (char)hasComponentIndex;
- (void)setComponentValueIndex:(unsigned int)arg0;
- (void)setHasComponentValueIndex:(char)arg0;
- (char)hasComponentValueIndex;
- (unsigned int)componentIndex;
- (unsigned int)componentValueIndex;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end

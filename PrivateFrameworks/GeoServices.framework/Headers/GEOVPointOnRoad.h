/* Runtime dump - GEOVPointOnRoad
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVPointOnRoad : PBCodable <NSCopying>
{
    int _featureIndex;
    int _vertexIndex;
    struct ? _has;
}

@property (nonatomic) int featureIndex;
@property (nonatomic) char hasVertexIndex;
@property (nonatomic) int vertexIndex;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOVPointOnRoad *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setVertexIndex:(int)arg0;
- (void)setHasVertexIndex:(char)arg0;
- (char)hasVertexIndex;
- (int)vertexIndex;
- (void)setFeatureIndex:(int)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (int)featureIndex;

@end

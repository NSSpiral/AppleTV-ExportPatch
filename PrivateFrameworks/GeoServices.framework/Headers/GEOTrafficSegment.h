/* Runtime dump - GEOTrafficSegment
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficSegment : PBCodable <NSCopying>
{
    int _speed;
    int _vertexCount;
    int _vertexOffset;
    int _width;
    struct ? _has;
}

@property (nonatomic) int vertexOffset;
@property (nonatomic) int vertexCount;
@property (nonatomic) char hasSpeed;
@property (nonatomic) int speed;
@property (nonatomic) char hasWidth;
@property (nonatomic) int width;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setSpeed:(int)arg0;
- (GEOTrafficSegment *)copyWithZone:(struct _NSZone *)arg0;
- (int)speed;
- (int)width;
- (NSDictionary *)dictionaryRepresentation;
- (void)setWidth:(int)arg0;
- (void)setHasSpeed:(char)arg0;
- (char)hasSpeed;
- (void)setVertexOffset:(int)arg0;
- (void)setVertexCount:(int)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (void)setHasWidth:(char)arg0;
- (char)hasWidth;
- (int)vertexCount;
- (int)vertexOffset;

@end

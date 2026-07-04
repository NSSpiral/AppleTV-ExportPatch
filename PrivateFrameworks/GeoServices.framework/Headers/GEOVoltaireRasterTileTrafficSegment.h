/* Runtime dump - GEOVoltaireRasterTileTrafficSegment
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireRasterTileTrafficSegment : NSObject
{
    struct ? * _vertices;
    int _vertexCount;
    char _hasSpeed;
    int _speed;
    char _hasWidth;
    int _width;
}

@property (readonly, nonatomic) struct ? * vertices;
@property (readonly, nonatomic) int vertexCount;
@property (nonatomic) char hasSpeed;
@property (nonatomic) int speed;
@property (nonatomic) char hasWidth;
@property (nonatomic) int width;

- (void)setSpeed:(int)arg0;
- (int)speed;
- (int)width;
- (void)setWidth:(int)arg0;
- (void)setHasSpeed:(char)arg0;
- (char)hasSpeed;
- (void)setVertices:(struct ? *)arg0 count:(int)arg1;
- (void)setHasWidth:(char)arg0;
- (char)hasWidth;
- (int)vertexCount;
- (struct ? *)vertices;

@end

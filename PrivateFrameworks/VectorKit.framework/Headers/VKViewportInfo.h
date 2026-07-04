/* Runtime dump - VKViewportInfo
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKViewportInfo : NSObject
{
    struct ? _centerCoordinate;
    int _tileSize;
    float _zoomLevel;
    double _pitch;
    double _yaw;
}

@property (readonly, nonatomic) NSDictionary * dictionaryRepresentation;
@property (nonatomic) struct ? centerCoordinate;
@property (nonatomic) float zoomLevel;
@property (nonatomic) int tileSize;
@property (nonatomic) double pitch;
@property (nonatomic) double yaw;

- (void)setTileSize:(int)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_construct;
- (int)tileSize;
- (double)pitch;
- (double)yaw;
- (struct ?)centerCoordinate;
- (void)setCenterCoordinate:(struct ?)arg0;
- (void)setZoomLevel:(float)arg0;
- (void)setPitch:(double)arg0;
- (void)setYaw:(double)arg0;
- (float)zoomLevel;
- (VKViewportInfo *)initWithDictionaryRepresentation:(NSDictionary *)arg0;

@end

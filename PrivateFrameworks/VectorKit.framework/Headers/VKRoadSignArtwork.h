/* Runtime dump - VKRoadSignArtwork
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRoadSignArtwork : NSObject
{
    struct __CTLine * _line;
    int _orientation;
    char _onRoute;
    float _contentScale;
    float _scale;
    struct CGSize _layoutSize;
}

- (void)dealloc;
- (UIImage *)image;
- (void).cxx_construct;
- (void)_updateLayoutSize;
- (struct Box<float, 2>)localRenderBounds;
- (VKRoadSignArtwork *)initWithString:(NSString *)arg0 orientation:(int)arg1 contentScale:(float)arg2 scale:(float)arg3 onRoute:(char)arg4;
- (struct Matrix<float, 2, 1>)offsetPixelForPixel:(struct Matrix<float, 2, 1>)arg0;
- (struct Box<float, 2>)localCollisionBounds;

@end

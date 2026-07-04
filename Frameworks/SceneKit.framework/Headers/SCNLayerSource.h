/* Runtime dump - SCNLayerSource
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNLayerSource : SCNImageSource
{
    CALayer * _layer;
}

@property (retain, nonatomic) CALayer * layer;

- (NSString *)textureSourceForContext:(void *)arg0;
- (void)dealloc;
- (CALayer *)layer;
- (void)setLayer:(CALayer *)arg0;
- (char)isOpaque;

@end

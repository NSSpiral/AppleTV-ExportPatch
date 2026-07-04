/* Runtime dump - SCNSpriteKitSource
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNSpriteKitSource : SCNImageSource
{
    SKScene * _scene;
}

@property (retain, nonatomic) SKScene * scene;

- (SKScene *)scene;
- (void)setScene:(SKScene *)arg0;
- (NSString *)textureSourceForContext:(void *)arg0;
- (void)dealloc;
- (char)isOpaque;

@end

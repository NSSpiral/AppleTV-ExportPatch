/* Runtime dump - SKOpenGLNode
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKOpenGLNode : SKNode

@property struct CGSize viewportSize;

+ (SKOpenGLNode *)openGLNodeWithViewportSize:(struct CGSize)arg0;

- (struct CGSize)viewportSize;
- (void)setViewportSize:(struct CGSize)arg0;
- (SKOpenGLNode *)initWithViewportSize:(struct CGSize)arg0;
- (void)renderForTime:(double)arg0;
- (char)needsRenderForTime:(double)arg0;
- (void)_renderForTime:(double)arg0;
- (SKOpenGLNode *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKOpenGLNode *)init;

@end

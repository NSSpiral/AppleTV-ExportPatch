/* Runtime dump - SKNoiseFieldNode
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKNoiseFieldNode : SKFieldNode

@property (nonatomic) float smoothness;
@property (nonatomic) float animationSpeed;

- (void)setSmoothness:(float)arg0;
- (void)setAnimationSpeed:(float)arg0;
- (float)smoothness;
- (float)animationSpeed;
- (NSString *)_descriptionClassName;
- (void)_initialize;
- (SKNoiseFieldNode *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKNoiseFieldNode *)init;

@end

/* Runtime dump - SKLightNode
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKLightNode : SKNode
{
    char _enabled;
    UIColor * _lightColor;
    UIColor * _ambientColor;
    UIColor * _shadowColor;
    float _falloff;
    unsigned int _categoryBitMask;
}

@property (nonatomic) char enabled;
@property (retain, nonatomic) UIColor * lightColor;
@property (retain, nonatomic) UIColor * ambientColor;
@property (retain, nonatomic) UIColor * shadowColor;
@property (nonatomic) float falloff;
@property (nonatomic) unsigned int categoryBitMask;

- (float)falloff;
- (void)setFalloff:(float)arg0;
- (char)isEqualToNode:(NSObject *)arg0;
- (void)setLightColor:(UIColor *)arg0;
- (void)setAmbientColor:(UIColor *)arg0;
- (void)setLightCategoryBitMask:(unsigned int)arg0;
- (void)setLightDecay:(float)arg0;
- (UIColor *)ambientColor;
- (UIColor *)lightColor;
- (float)lightDecay;
- (unsigned int)lightCategoryBitMask;
- (SKLightNode *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKLightNode *)init;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (SKLightNode *)copyWithZone:(struct _NSZone *)arg0;
- (void)setShadowColor:(UIColor *)arg0;
- (UIColor *)shadowColor;
- (void).cxx_destruct;
- (unsigned int)categoryBitMask;
- (void)setCategoryBitMask:(unsigned int)arg0;

@end

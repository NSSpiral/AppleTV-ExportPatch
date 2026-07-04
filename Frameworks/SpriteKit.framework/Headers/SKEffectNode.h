/* Runtime dump - SKEffectNode
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKEffectNode : SKNode

@property (retain, nonatomic) CIFilter * filter;
@property (nonatomic) char shouldCenterFilter;
@property (nonatomic) char shouldEnableEffects;
@property (nonatomic) char shouldRasterize;
@property (nonatomic) int blendMode;
@property (retain, nonatomic) SKShader * shader;

- (int)blendMode;
- (void)setBlendMode:(int)arg0;
- (char)isEqualToNode:(NSObject *)arg0;
- (void)_scaleFactorChangedFrom:(float)arg0 to:(float)arg1;
- (void)setShouldEnableEffects:(char)arg0;
- (void)_flippedChangedFrom:(char)arg0 to:(char)arg1;
- (char)shouldEnableEffects;
- (char)shouldCenterFilter;
- (void)setShouldCenterFilter:(char)arg0;
- (void)dealloc;
- (SKEffectNode *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKEffectNode *)init;
- (NSString *)description;
- (void)setFilter:(CIFilter *)arg0;
- (void)setShouldRasterize:(char)arg0;
- (char)shouldRasterize;
- (SKShader *)shader;
- (void)setShader:(SKShader *)arg0;
- (CIFilter *)filter;

@end

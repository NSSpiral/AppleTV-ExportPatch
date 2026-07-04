/* Runtime dump - SKSpriteNode
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKSpriteNode : SKNode
{
    SKLightNode * _light;
    char _shouldRepeatTexture;
}

@property (retain, nonatomic) SKTexture * texture;
@property (retain, nonatomic) SKTexture * normalTexture;
@property (nonatomic) unsigned int lightingBitMask;
@property (nonatomic) unsigned int shadowCastBitMask;
@property (nonatomic) unsigned int shadowedBitMask;
@property (nonatomic) struct CGRect centerRect;
@property (nonatomic) float colorBlendFactor;
@property (retain, nonatomic) UIColor * color;
@property (nonatomic) int blendMode;
@property (nonatomic) struct CGPoint anchorPoint;
@property (nonatomic) struct CGSize size;
@property (retain, nonatomic) SKShader * shader;
@property (nonatomic) char shouldRepeatTexture;
@property (nonatomic) struct CGSize repeatTextureSize;

+ (SKSpriteNode *)spriteNodeWithTexture:(SKTexture *)arg0;
+ (SKSpriteNode *)spriteNodeWithImageNamed:(id)arg0;
+ (SKSpriteNode *)spriteNodeWithImageNamed:(id)arg0 normalMapped:(char)arg1;
+ (SKSpriteNode *)spriteNodeWithTexture:(SKTexture *)arg0 size:(struct CGSize)arg1;
+ (SKSpriteNode *)spriteNodeWithTexture:(SKTexture *)arg0 normalMap:(NSObject *)arg1;
+ (SKSpriteNode *)spriteNodeWithColor:(UIColor *)arg0 size:(struct CGSize)arg1;

- (int)blendMode;
- (void)setBlendMode:(int)arg0;
- (float)colorBlendFactor;
- (void)setColorBlendFactor:(float)arg0;
- (char)isEqualToNode:(NSObject *)arg0;
- (NSData *)_copyImageData;
- (SKSpriteNode *)initWithImageNamed:(id)arg0;
- (void)setLightingBitMask:(unsigned int)arg0;
- (void)setShadowCastBitMask:(unsigned int)arg0;
- (void)setShadowedBitMask:(unsigned int)arg0;
- (SKSpriteNode *)initWithTexture:(SKTexture *)arg0 color:(UIColor *)arg1 size:(struct CGSize)arg2;
- (void)setNormalTexture:(SKTexture *)arg0;
- (SKTexture *)normalTexture;
- (unsigned int)lightingBitMask;
- (unsigned int)shadowCastBitMask;
- (unsigned int)shadowedBitMask;
- (SKSpriteNode *)initWithColor:(UIColor *)arg0 size:(struct CGSize)arg1;
- (struct CGRect)centerRect;
- (void)setCenterRect:(struct CGRect)arg0;
- (char)repeatTexture;
- (void)setRepeatTexture:(char)arg0;
- (struct CGSize)repeatTextureSize;
- (void)setRepeatTextureSize:(struct CGSize)arg0;
- (char)shouldRepeatTexture;
- (void)setShouldRepeatTexture:(char)arg0;
- (struct CGSize)size;
- (SKSpriteNode *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKSpriteNode *)init;
- (SKSpriteNode *)copy;
- (void)setBounds:(struct CGRect)arg0;
- (NSString *)description;
- (SKSpriteNode *)copyWithZone:(struct _NSZone *)arg0;
- (char)containsPoint:(struct CGPoint)arg0;
- (void)setSize:(struct CGSize)arg0;
- (struct CGPoint)anchorPoint;
- (void)setAnchorPoint:(struct CGPoint)arg0;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (void).cxx_destruct;
- (SKShader *)shader;
- (void)setShader:(SKShader *)arg0;
- (SKSpriteNode *)initWithTexture:(SKTexture *)arg0;
- (SKTexture *)texture;
- (void)setTexture:(SKTexture *)arg0;

@end

/* Runtime dump - SKFieldNode
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKFieldNode : SKNode
{
    PKPhysicsField * _field;
    SKRegion * _region;
    float _smoothness;
    float _animationSpeed;
    SKTexture * _texture;
    char _exclusive;
}

@property (retain, nonatomic) SKRegion * region;
@property (nonatomic) float strength;
@property (nonatomic) float falloff;
@property (nonatomic) float minimumRadius;
@property (nonatomic) char enabled;
@property (nonatomic) char exclusive;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) id direction;
@property (nonatomic) float smoothness;
@property (nonatomic) float animationSpeed;
@property (retain, nonatomic) SKTexture * texture;

+ (SKFieldNode *)dragField;
+ (SKFieldNode *)vortexField;
+ (SKFieldNode *)radialGravityField;
+ (SKFieldNode *)noiseFieldWithSmoothness:(float)arg0 animationSpeed:(float)arg1;
+ (SKFieldNode *)turbulenceFieldWithSmoothness:(float)arg0 animationSpeed:(float)arg1;
+ (SKFieldNode *)springField;
+ (SKFieldNode *)electricField;
+ (struct ?)magneticField;
+ (SKFieldNode *)customFieldWithEvaluationBlock:(id /* block */)arg0;
+ (SKFieldNode *)linearGravityFieldWithVector:(id)arg0;
+ (SKFieldNode *)velocityFieldWithVector:(id)arg0;
+ (NSObject *)velocityFieldWithTexture:(SKTexture *)arg0;

- (float)falloff;
- (void)setFalloff:(float)arg0;
- (void)setSmoothness:(float)arg0;
- (void)setAnimationSpeed:(float)arg0;
- (char)isExclusive;
- (void)setExclusive:(char)arg0;
- (float)smoothness;
- (float)animationSpeed;
- (void)setMinimumRadius:(float)arg0;
- (float)minimumRadius;
- (char)isEqualToNode:(NSObject *)arg0;
- (NSString *)_descriptionClassName;
- (SKFieldNode *)initWithCoder:(NSCoder *)arg0 field:(PKPhysicsField *)arg1;
- (SKFieldNode *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKFieldNode *)init;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (SKFieldNode *)copyWithZone:(struct _NSZone *)arg0;
- (void)setDirection:(TDThemeDirection *)arg0;
- (struct SCNVector3)direction;
- (void).cxx_destruct;
- (void)setRegion:(SKRegion *)arg0;
- (SKRegion *)region;
- (float)strength;
- (void)setStrength:(float)arg0;
- (unsigned int)categoryBitMask;
- (void)setCategoryBitMask:(unsigned int)arg0;
- (PKPhysicsField *)field;
- (SKTexture *)texture;
- (void)setTexture:(SKTexture *)arg0;

@end

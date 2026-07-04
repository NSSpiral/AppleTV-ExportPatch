/* Runtime dump - SKPhysicsJointPin
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsJointPin : SKPhysicsJoint
{
    char _shouldEnableLimits;
    float _lowerAngleLimit;
    float _upperAngleLimit;
    float _frictionTorque;
    float _rotationSpeed;
    struct CGPoint _anchor;
}

@property (nonatomic) char shouldEnableLimits;
@property (nonatomic) float lowerAngleLimit;
@property (nonatomic) float upperAngleLimit;
@property (nonatomic) float frictionTorque;
@property (nonatomic) float rotationSpeed;
@property (readonly) struct CGPoint anchor;

+ (SKPhysicsJointPin *)allocWithZone:(struct _NSZone *)arg0;
+ (SKPhysicsJointPin *)jointWithBodyA:(SCNPhysicsBody *)arg0 bodyB:(SCNPhysicsBody *)arg1 anchor:(struct CGPoint)arg2;

- (void)setFrictionTorque:(float)arg0;
- (float)lowerAngleLimit;
- (float)upperAngleLimit;
- (void)setLowerAngleLimit:(float)arg0;
- (void)setUpperAngleLimit:(float)arg0;
- (char)shouldEnableLimits;
- (void)setShouldEnableLimits:(char)arg0;
- (float)frictionTorque;
- (float)rotationSpeed;
- (void)setRotationSpeed:(float)arg0;
- (void).cxx_construct;
- (struct CGPoint)anchor;

@end

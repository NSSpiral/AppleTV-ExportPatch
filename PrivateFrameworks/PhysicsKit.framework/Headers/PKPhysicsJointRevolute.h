/* Runtime dump - PKPhysicsJointRevolute
 * Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsJointRevolute : PKPhysicsJoint
{
    struct b2RevoluteJointDef _jointDef;
    struct b2RevoluteJoint * _joint;
    struct CGPoint _anchor;
}

@property (nonatomic) char shouldEnableLimits;
@property (nonatomic) float lowerAngleLimit;
@property (nonatomic) float upperAngleLimit;
@property (nonatomic) float frictionTorque;
@property (nonatomic) float rotationSpeed;
@property (readonly) struct CGPoint anchor;

+ (PKPhysicsJointRevolute *)jointWithBodyA:(SCNPhysicsBody *)arg0 bodyB:(SCNPhysicsBody *)arg1 anchor:(struct CGPoint)arg2;

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
- (PKPhysicsJointRevolute *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_construct;
- (struct CGPoint)anchor;
- (struct b2Joint *)_joint;
- (void)set_joint:(struct b2Joint *)arg0;
- (struct b2JointDef *)_jointDef;
- (PKPhysicsJointRevolute *)initWithBodyA:(SCNPhysicsBody *)arg0 bodyB:(SCNPhysicsBody *)arg1 anchor:(struct CGPoint)arg2;
- (void)create;

@end

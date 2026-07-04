/* Runtime dump - PKPhysicsJointPrismatic
 * Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsJointPrismatic : PKPhysicsJoint
{
    struct b2PrismaticJointDef _jointDef;
    struct b2PrismaticJoint * _joint;
    struct CGPoint _anchor;
    struct CGVector _axis;
}

@property (nonatomic) char shouldEnableLimits;
@property (nonatomic) float lowerDistanceLimit;
@property (nonatomic) float upperDistanceLimit;

+ (PKPhysicsJointPrismatic *)jointWithBodyA:(SCNPhysicsBody *)arg0 bodyB:(SCNPhysicsBody *)arg1 anchor:(struct CGPoint)arg2 axis:(struct CGVector)arg3;

- (char)shouldEnableLimits;
- (void)setShouldEnableLimits:(char)arg0;
- (float)lowerDistanceLimit;
- (void)setLowerDistanceLimit:(float)arg0;
- (float)upperDistanceLimit;
- (void)setUpperDistanceLimit:(float)arg0;
- (PKPhysicsJointPrismatic *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_construct;
- (struct b2Joint *)_joint;
- (void)set_joint:(struct b2Joint *)arg0;
- (struct b2JointDef *)_jointDef;
- (PKPhysicsJointPrismatic *)initWithBodyA:(SCNPhysicsBody *)arg0 bodyB:(SCNPhysicsBody *)arg1 anchor:(struct CGPoint)arg2 axis:(struct CGVector)arg3;
- (void)create;

@end

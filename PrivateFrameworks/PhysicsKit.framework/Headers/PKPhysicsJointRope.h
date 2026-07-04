/* Runtime dump - PKPhysicsJointRope
 * Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsJointRope : PKPhysicsJoint
{
    struct b2RopeJointDef _jointDef;
    struct b2RopeJoint * _joint;
    struct CGPoint _anchorA;
    struct CGPoint _anchorB;
}

@property (nonatomic) float maxLength;

+ (PKPhysicsJointRope *)jointWithBodyA:(SCNPhysicsBody *)arg0 bodyB:(SCNPhysicsBody *)arg1 anchorA:(struct CGPoint)arg2 anchorB:(struct CGPoint)arg3;

- (PKPhysicsJointRope *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_construct;
- (struct b2Joint *)_joint;
- (void)set_joint:(struct b2Joint *)arg0;
- (struct b2JointDef *)_jointDef;
- (PKPhysicsJointRope *)initWithBodyA:(SCNPhysicsBody *)arg0 bodyB:(SCNPhysicsBody *)arg1 anchorA:(struct CGPoint)arg2 anchorB:(struct CGPoint)arg3;
- (void)create;
- (float)maxLength;
- (void)setMaxLength:(float)arg0;

@end

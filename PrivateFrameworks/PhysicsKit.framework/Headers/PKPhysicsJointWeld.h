/* Runtime dump - PKPhysicsJointWeld
 * Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsJointWeld : PKPhysicsJoint
{
    struct b2WeldJointDef _jointDef;
    struct b2WeldJoint * _joint;
    struct CGPoint _anchor;
}

+ (PKPhysicsJointWeld *)jointWithBodyA:(SCNPhysicsBody *)arg0 bodyB:(SCNPhysicsBody *)arg1 anchor:(struct CGPoint)arg2;

- (PKPhysicsJointWeld *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_construct;
- (struct b2Joint *)_joint;
- (void)set_joint:(struct b2Joint *)arg0;
- (struct b2JointDef *)_jointDef;
- (PKPhysicsJointWeld *)initWithBodyA:(SCNPhysicsBody *)arg0 bodyB:(SCNPhysicsBody *)arg1 anchor:(struct CGPoint)arg2;
- (void)create;

@end

/* Runtime dump - PKPhysicsJoint
 * Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsJoint : NSObject <NSCoding>
{
    char _inUse;
    char _implicit;
    struct b2Joint * _baseJoint;
    PKPhysicsBody * _bodyA;
    PKPhysicsBody * _bodyB;
}

@property (nonatomic) struct b2Joint * _joint;
@property (readonly, nonatomic) struct b2JointDef * _jointDef;
@property (retain, nonatomic) PKPhysicsBody * bodyA;
@property (retain, nonatomic) PKPhysicsBody * bodyB;
@property (readonly, nonatomic) struct CGVector reactionForce;
@property (readonly, nonatomic) float reactionTorque;

- (char)_implicit;
- (void)set_implicit:(char)arg0;
- (char)_inUse;
- (void)setBodyA:(PKPhysicsBody *)arg0;
- (void)setBodyB:(PKPhysicsBody *)arg0;
- (struct CGVector)reactionForce;
- (float)reactionTorque;
- (PKPhysicsJoint *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (PKPhysicsJoint *)init;
- (void).cxx_destruct;
- (PKPhysicsBody *)bodyA;
- (PKPhysicsBody *)bodyB;
- (void)set_inUse:(char)arg0;
- (struct b2Joint *)_joint;
- (void)set_joint:(struct b2Joint *)arg0;
- (struct b2JointDef *)_jointDef;
- (void)create;

@end

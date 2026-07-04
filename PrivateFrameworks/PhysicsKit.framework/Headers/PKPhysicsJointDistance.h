/* Runtime dump - PKPhysicsJointDistance
 * Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsJointDistance : PKPhysicsJoint
{
    struct b2DistanceJointDef _jointDef;
    struct b2DistanceJoint * _joint;
    struct CGPoint _anchorA;
    struct CGPoint _anchorB;
}

@property (nonatomic) float damping;
@property (nonatomic) float frequency;
@property (nonatomic) float length;
@property (nonatomic) char collideConnected;

+ (PKPhysicsJointDistance *)jointWithBodyA:(SCNPhysicsBody *)arg0 bodyB:(SCNPhysicsBody *)arg1 anchorA:(struct CGPoint)arg2 anchorB:(struct CGPoint)arg3;
+ (PKPhysicsJointDistance *)jointWithBodyA:(SCNPhysicsBody *)arg0 bodyB:(SCNPhysicsBody *)arg1 localAnchorA:(struct CGPoint)arg2 localAnchorB:(struct CGPoint)arg3;

- (PKPhysicsJointDistance *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDamping:(float)arg0;
- (float)length;
- (void)setLength:(float)arg0;
- (float)damping;
- (float)frequency;
- (void)setFrequency:(float)arg0;
- (void)setCollideConnected:(char)arg0;
- (void).cxx_construct;
- (struct b2Joint *)_joint;
- (void)set_joint:(struct b2Joint *)arg0;
- (struct b2JointDef *)_jointDef;
- (PKPhysicsJointDistance *)initWithBodyA:(SCNPhysicsBody *)arg0 bodyB:(SCNPhysicsBody *)arg1 localAnchorA:(struct CGPoint)arg2 localAnchorB:(struct CGPoint)arg3;
- (PKPhysicsJointDistance *)initWithBodyA:(SCNPhysicsBody *)arg0 bodyB:(SCNPhysicsBody *)arg1 anchorA:(struct CGPoint)arg2 anchorB:(struct CGPoint)arg3;
- (char)collideConnected;
- (void)create;

@end

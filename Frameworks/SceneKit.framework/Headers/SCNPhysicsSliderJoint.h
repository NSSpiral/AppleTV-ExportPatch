/* Runtime dump - SCNPhysicsSliderJoint
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsSliderJoint : SCNPhysicsBehavior
{
    struct ? _definition;
    struct btSliderConstraint * _constraint;
    SCNPhysicsWorld * _world;
}

@property (readonly, nonatomic) SCNPhysicsBody * bodyA;
@property (nonatomic) struct SCNVector3 axisA;
@property (nonatomic) struct SCNVector3 anchorA;
@property (readonly, nonatomic) SCNPhysicsBody * bodyB;
@property (nonatomic) struct SCNVector3 axisB;
@property (nonatomic) struct SCNVector3 anchorB;
@property (nonatomic) float minimumLinearLimit;
@property (nonatomic) float maximumLinearLimit;
@property (nonatomic) float minimumAngularLimit;
@property (nonatomic) float maximumAngularLimit;
@property (nonatomic) float motorTargetLinearVelocity;
@property (nonatomic) float motorMaximumForce;
@property (nonatomic) float motorTargetAngularVelocity;
@property (nonatomic) float motorMaximumTorque;

+ (NSObject *)SCNJSExportProtocol;
+ (SCNPhysicsSliderJoint *)jointWithBodyA:(SCNPhysicsBody *)arg0 axisA:(struct SCNVector3)arg1 anchorA:(struct SCNVector3)arg2 bodyB:(SCNPhysicsBody *)arg3 axisB:(struct SCNVector3)arg4 anchorB:(struct SCNVector3)arg5;
+ (NSObject *)jointWithBody:(SCNPhysicsBody *)arg0 axis:(struct SCNVector3)arg1 anchor:(struct SCNVector3)arg2;

- (SCNPhysicsSliderJoint *)initWithBodyA:(SCNPhysicsBody *)arg0 axisA:(struct SCNVector3)arg1 anchorA:(struct SCNVector3)arg2 bodyB:(SCNPhysicsBody *)arg3 axisB:(struct SCNVector3)arg4 anchorB:(struct SCNVector3)arg5;
- (SCNPhysicsSliderJoint *)initWithBody:(NSObject *)arg0 axis:(struct SCNVector3)arg1 anchor:(struct SCNVector3)arg2;
- (struct SCNVector3)axisA;
- (void)setAxisA:(struct SCNVector3)arg0;
- (struct SCNVector3)anchorA;
- (void)setAnchorA:(struct SCNVector3)arg0;
- (struct SCNVector3)axisB;
- (void)setAxisB:(struct SCNVector3)arg0;
- (struct SCNVector3)anchorB;
- (void)setAnchorB:(struct SCNVector3)arg0;
- (void)_addToPhysicsWorld:(SKPhysicsWorld *)arg0;
- (void)_willRemoveFromPhysicsWorld:(SKPhysicsWorld *)arg0;
- (float)minimumLinearLimit;
- (void)setMinimumLinearLimit:(float)arg0;
- (float)maximumLinearLimit;
- (void)setMaximumLinearLimit:(float)arg0;
- (float)minimumAngularLimit;
- (void)setMinimumAngularLimit:(float)arg0;
- (float)maximumAngularLimit;
- (void)setMaximumAngularLimit:(float)arg0;
- (float)motorTargetLinearVelocity;
- (void)setMotorTargetLinearVelocity:(float)arg0;
- (float)motorMaximumForce;
- (void)setMotorMaximumForce:(float)arg0;
- (float)motorTargetAngularVelocity;
- (void)setMotorTargetAngularVelocity:(float)arg0;
- (float)motorMaximumTorque;
- (void)setMotorMaximumTorque:(float)arg0;
- (void)dealloc;
- (SCNPhysicsSliderJoint *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_construct;
- (SCNPhysicsBody *)bodyA;
- (SCNPhysicsBody *)bodyB;

@end

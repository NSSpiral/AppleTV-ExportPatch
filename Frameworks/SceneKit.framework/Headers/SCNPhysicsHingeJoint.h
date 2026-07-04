/* Runtime dump - SCNPhysicsHingeJoint
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsHingeJoint : SCNPhysicsBehavior
{
    struct ? _definition;
    struct btHingeConstraint * _constraint;
    SCNPhysicsWorld * _world;
}

@property (readonly, nonatomic) SCNPhysicsBody * bodyA;
@property (nonatomic) struct SCNVector3 axisA;
@property (nonatomic) struct SCNVector3 anchorA;
@property (readonly, nonatomic) SCNPhysicsBody * bodyB;
@property (nonatomic) struct SCNVector3 axisB;
@property (nonatomic) struct SCNVector3 anchorB;

+ (NSObject *)SCNJSExportProtocol;
+ (SCNPhysicsHingeJoint *)jointWithBodyA:(SCNPhysicsBody *)arg0 axisA:(struct SCNVector3)arg1 anchorA:(struct SCNVector3)arg2 bodyB:(SCNPhysicsBody *)arg3 axisB:(struct SCNVector3)arg4 anchorB:(struct SCNVector3)arg5;
+ (NSObject *)jointWithBody:(SCNPhysicsBody *)arg0 axis:(struct SCNVector3)arg1 anchor:(struct SCNVector3)arg2;

- (SCNPhysicsHingeJoint *)initWithBodyA:(SCNPhysicsBody *)arg0 axisA:(struct SCNVector3)arg1 anchorA:(struct SCNVector3)arg2 bodyB:(SCNPhysicsBody *)arg3 axisB:(struct SCNVector3)arg4 anchorB:(struct SCNVector3)arg5;
- (SCNPhysicsHingeJoint *)initWithBody:(NSObject *)arg0 axis:(struct SCNVector3)arg1 anchor:(struct SCNVector3)arg2;
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
- (void)dealloc;
- (SCNPhysicsHingeJoint *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_construct;
- (SCNPhysicsBody *)bodyA;
- (SCNPhysicsBody *)bodyB;

@end

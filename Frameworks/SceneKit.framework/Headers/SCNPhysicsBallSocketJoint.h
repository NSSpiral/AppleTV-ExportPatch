/* Runtime dump - SCNPhysicsBallSocketJoint
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsBallSocketJoint : SCNPhysicsBehavior
{
    struct ? _definition;
    struct btPoint2PointConstraint * _constraint;
    SCNPhysicsWorld * _world;
}

@property (readonly, nonatomic) SCNPhysicsBody * bodyA;
@property (nonatomic) struct SCNVector3 anchorA;
@property (readonly, nonatomic) SCNPhysicsBody * bodyB;
@property (nonatomic) struct SCNVector3 anchorB;

+ (NSObject *)SCNJSExportProtocol;
+ (SCNPhysicsBallSocketJoint *)jointWithBodyA:(SCNPhysicsBody *)arg0 anchorA:(struct SCNVector3)arg1 bodyB:(SCNPhysicsBody *)arg2 anchorB:(struct SCNVector3)arg3;
+ (NSObject *)jointWithBody:(SCNPhysicsBody *)arg0 anchor:(struct SCNVector3)arg1;

- (struct SCNVector3)anchorA;
- (void)setAnchorA:(struct SCNVector3)arg0;
- (struct SCNVector3)anchorB;
- (void)setAnchorB:(struct SCNVector3)arg0;
- (void)_addToPhysicsWorld:(SKPhysicsWorld *)arg0;
- (void)_willRemoveFromPhysicsWorld:(SKPhysicsWorld *)arg0;
- (SCNPhysicsBallSocketJoint *)initWithBodyA:(SCNPhysicsBody *)arg0 anchorA:(struct SCNVector3)arg1 bodyB:(SCNPhysicsBody *)arg2 anchorB:(struct SCNVector3)arg3;
- (SCNPhysicsBallSocketJoint *)initWithBody:(NSObject *)arg0 anchor:(struct SCNVector3)arg1;
- (void)dealloc;
- (SCNPhysicsBallSocketJoint *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_construct;
- (SCNPhysicsBody *)bodyA;
- (SCNPhysicsBody *)bodyB;

@end

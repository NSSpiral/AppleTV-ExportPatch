/* Runtime dump - PKPhysicsContact
 * Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsContact : NSObject
{
    PKPhysicsBody * _bodyA;
    PKPhysicsBody * _bodyB;
    struct CGPoint _contactPoint;
    struct CGVector _contactNormal;
    float _impulse;
    char _didBegin;
    char _didEnd;
}

@property char didBegin;
@property char didEnd;
@property (readonly, nonatomic) PKPhysicsBody * bodyA;
@property (readonly, nonatomic) PKPhysicsBody * bodyB;
@property (readonly, nonatomic) struct CGPoint contactPoint;
@property (readonly, nonatomic) struct CGVector contactNormal;
@property (readonly, nonatomic) float collisionImpulse;

- (char)didBegin;
- (char)didEnd;
- (struct CGVector)contactNormal;
- (float)collisionImpulse;
- (void)setBodyA:(PKPhysicsBody *)arg0;
- (void)setBodyB:(PKPhysicsBody *)arg0;
- (PKPhysicsContact *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (PKPhysicsBody *)bodyA;
- (PKPhysicsBody *)bodyB;
- (struct CGPoint)contactPoint;
- (void)setDidBegin:(char)arg0;
- (void)setDidEnd:(char)arg0;
- (void)setContactPoint:(struct CGPoint)arg0;
- (void)setContactNormal:(struct CGVector)arg0;
- (void)setCollisionImpulse:(float)arg0;

@end

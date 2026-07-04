/* Runtime dump - SKPhysicsContact
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsContact : NSObject
{
    SKPhysicsBody * _bodyA;
    SKPhysicsBody * _bodyB;
    float _collisionImpulse;
    struct CGPoint _contactPoint;
    struct CGVector _contactNormal;
}

@property (readonly, nonatomic) SKPhysicsBody * bodyA;
@property (readonly, nonatomic) SKPhysicsBody * bodyB;
@property (readonly, nonatomic) struct CGPoint contactPoint;
@property (readonly, nonatomic) struct CGVector contactNormal;
@property (readonly, nonatomic) float collisionImpulse;

+ (SKPhysicsContact *)allocWithZone:(struct _NSZone *)arg0;
+ (SKPhysicsContact *)copyWithZone:(struct _NSZone *)arg0;

- (struct CGVector)contactNormal;
- (float)collisionImpulse;
- (void).cxx_construct;
- (void).cxx_destruct;
- (SKPhysicsBody *)bodyA;
- (SKPhysicsBody *)bodyB;
- (struct CGPoint)contactPoint;

@end

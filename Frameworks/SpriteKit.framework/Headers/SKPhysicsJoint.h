/* Runtime dump - SKPhysicsJoint
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsJoint : NSObject <NSCoding>
{
    char __implicit;
    SKPhysicsBody * bodyA;
    SKPhysicsBody * bodyB;
    float reactionTorque;
    struct CGVector reactionForce;
}

@property (retain, nonatomic) SKPhysicsBody * bodyA;
@property (retain, nonatomic) SKPhysicsBody * bodyB;
@property (readonly, nonatomic) struct CGVector reactionForce;
@property (readonly, nonatomic) float reactionTorque;
@property (nonatomic) char _implicit;

+ (SKPhysicsJoint *)allocWithZone:(struct _NSZone *)arg0;

- (char)_implicit;
- (void)set_implicit:(char)arg0;
- (void)setBodyA:(SKPhysicsBody *)arg0;
- (void)setBodyB:(SKPhysicsBody *)arg0;
- (struct CGVector)reactionForce;
- (float)reactionTorque;
- (SKPhysicsJoint *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (SKPhysicsBody *)bodyA;
- (SKPhysicsBody *)bodyB;

@end

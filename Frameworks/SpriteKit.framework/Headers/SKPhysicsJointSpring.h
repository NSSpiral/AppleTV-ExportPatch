/* Runtime dump - SKPhysicsJointSpring
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsJointSpring : SKPhysicsJoint
{
    float _damping;
    float _frequency;
}

@property (nonatomic) float damping;
@property (nonatomic) float frequency;

+ (SKPhysicsJointSpring *)jointWithBodyA:(SCNPhysicsBody *)arg0 bodyB:(SCNPhysicsBody *)arg1 anchorA:(struct CGPoint)arg2 anchorB:(struct CGPoint)arg3;
+ (SKPhysicsJointSpring *)allocWithZone:(struct _NSZone *)arg0;

- (void)setDamping:(float)arg0;
- (float)damping;
- (float)frequency;
- (void)setFrequency:(float)arg0;

@end

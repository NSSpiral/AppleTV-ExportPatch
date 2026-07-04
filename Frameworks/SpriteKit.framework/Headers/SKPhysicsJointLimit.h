/* Runtime dump - SKPhysicsJointLimit
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsJointLimit : SKPhysicsJoint
{
    float _maxLength;
}

@property (nonatomic) float maxLength;

+ (SKPhysicsJointLimit *)jointWithBodyA:(SCNPhysicsBody *)arg0 bodyB:(SCNPhysicsBody *)arg1 anchorA:(struct CGPoint)arg2 anchorB:(struct CGPoint)arg3;
+ (SKPhysicsJointLimit *)allocWithZone:(struct _NSZone *)arg0;

- (float)maxLength;
- (void)setMaxLength:(float)arg0;

@end

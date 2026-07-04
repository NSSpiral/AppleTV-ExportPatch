/* Runtime dump - SKPhysicsJointSliding
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsJointSliding : SKPhysicsJoint
{
    char _shouldEnableLimits;
    float _lowerDistanceLimit;
    float _upperDistanceLimit;
}

@property (nonatomic) char shouldEnableLimits;
@property (nonatomic) float lowerDistanceLimit;
@property (nonatomic) float upperDistanceLimit;

+ (SKPhysicsJointSliding *)jointWithBodyA:(SCNPhysicsBody *)arg0 bodyB:(SCNPhysicsBody *)arg1 anchor:(struct CGPoint)arg2 axis:(struct CGVector)arg3;
+ (SKPhysicsJointSliding *)allocWithZone:(struct _NSZone *)arg0;

- (char)shouldEnableLimits;
- (void)setShouldEnableLimits:(char)arg0;
- (float)lowerDistanceLimit;
- (void)setLowerDistanceLimit:(float)arg0;
- (float)upperDistanceLimit;
- (void)setUpperDistanceLimit:(float)arg0;

@end

/* Runtime dump - SKReachConstraints
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKReachConstraints : NSObject <NSCoding>
{
    float _lowerAngleLimit;
    float _upperAngleLimit;
}

@property (nonatomic) float lowerAngleLimit;
@property (nonatomic) float upperAngleLimit;

- (float)lowerAngleLimit;
- (float)upperAngleLimit;
- (SKReachConstraints *)initWithLowerAngleLimit:(float)arg0 upperAngleLimit:(float)arg1;
- (void)setLowerAngleLimit:(float)arg0;
- (void)setUpperAngleLimit:(float)arg0;
- (SKReachConstraints *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKReachConstraints *)init;
- (SKReachConstraints *)copyWithZone:(struct _NSZone *)arg0;

@end

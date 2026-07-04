/* Runtime dump - SKColorize
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKColorize : SKAction
{
    struct SKCColorize * _mycaction;
}

+ (SKColorize *)colorizeWithColor:(UIColor *)arg0 colorBlendFactor:(float)arg1 duration:(double)arg2;
+ (SKColorize *)colorizeWithColorBlendFactor:(float)arg0 duration:(double)arg1;

- (SCNAction *)reversedAction;
- (SKColorize *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKColorize *)init;
- (SKColorize *)copyWithZone:(struct _NSZone *)arg0;

@end

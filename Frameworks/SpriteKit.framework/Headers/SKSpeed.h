/* Runtime dump - SKSpeed
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKSpeed : SKAction
{
    struct SKCSpeed * _mycaction;
}

+ (SKSpeed *)speedBy:(float)arg0 duration:(double)arg1;
+ (SKSpeed *)speedTo:(float)arg0 duration:(double)arg1;

- (SCNAction *)reversedAction;
- (SKSpeed *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKSpeed *)init;
- (SKSpeed *)copyWithZone:(struct _NSZone *)arg0;

@end

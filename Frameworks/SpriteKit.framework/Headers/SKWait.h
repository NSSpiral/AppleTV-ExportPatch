/* Runtime dump - SKWait
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKWait : SKAction
{
    struct SKCWait * _mycaction;
}

+ (SKWait *)waitForDuration:(double)arg0 withRange:(double)arg1;
+ (SKWait *)waitForDuration:(double)arg0;

- (SCNAction *)reversedAction;
- (SKWait *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKWait *)init;

@end

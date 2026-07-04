/* Runtime dump - SKCustomAction
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKCustomAction : SKAction
{
    struct SKCCustomAction * _mycaction;
}

+ (SKCustomAction *)customActionWithDuration:(double)arg0 actionBlock:(id /* block */)arg1;

- (SCNAction *)reversedAction;
- (SKCustomAction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKCustomAction *)init;
- (SKCustomAction *)copyWithZone:(struct _NSZone *)arg0;

@end

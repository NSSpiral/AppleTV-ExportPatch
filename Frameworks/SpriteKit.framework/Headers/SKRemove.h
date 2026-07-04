/* Runtime dump - SKRemove
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKRemove : SKAction
{
    char _hasFired;
}

+ (SKRemove *)removeFromParent;

- (void)updateWithTarget:(NSObject *)arg0 forTime:(double)arg1;
- (SCNAction *)reversedAction;
- (void)willStartWithTarget:(NSObject *)arg0 atTime:(double)arg1;
- (SKRemove *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKRemove *)init;
- (SKRemove *)copyWithZone:(struct _NSZone *)arg0;

@end

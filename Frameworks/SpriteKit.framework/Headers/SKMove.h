/* Runtime dump - SKMove
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKMove : SKAction
{
    struct SKCMove * _mycaction;
}

+ (SKMove *)moveBy:(struct CGPoint)arg0 duration:(double)arg1;
+ (SKMove *)moveTo:(struct CGPoint)arg0 duration:(double)arg1;
+ (SKMove *)moveByX:(float)arg0 y:(float)arg1 duration:(double)arg2;
+ (SKMove *)moveToX:(float)arg0 duration:(double)arg1;
+ (SKMove *)moveToY:(float)arg0 duration:(double)arg1;
+ (SKMove *)moveToX:(float)arg0 y:(float)arg1 duration:(double)arg2;
+ (SKMove *)moveByX:(float)arg0 duration:(double)arg1;
+ (SKMove *)moveByY:(float)arg0 duration:(double)arg1;

- (SCNAction *)reversedAction;
- (SKMove *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKMove *)init;
- (SKMove *)copyWithZone:(struct _NSZone *)arg0;

@end

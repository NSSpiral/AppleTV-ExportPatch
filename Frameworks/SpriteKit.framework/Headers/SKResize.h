/* Runtime dump - SKResize
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKResize : SKAction
{
    struct SKCResize * _mycaction;
}

+ (SKResize *)resizeByWidth:(float)arg0 height:(float)arg1 duration:(double)arg2;
+ (SKResize *)resizeToWidth:(float)arg0 height:(float)arg1 duration:(double)arg2;
+ (SKResize *)resizeToWidth:(float)arg0 duration:(double)arg1;
+ (SKResize *)resizeToHeight:(float)arg0 duration:(double)arg1;

- (SCNAction *)reversedAction;
- (SKResize *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKResize *)init;
- (SKResize *)copyWithZone:(struct _NSZone *)arg0;

@end

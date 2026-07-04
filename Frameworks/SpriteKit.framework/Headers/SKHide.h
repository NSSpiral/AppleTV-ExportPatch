/* Runtime dump - SKHide
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKHide : SKAction
{
    struct SKCHide * _mycaction;
}

+ (SKHide *)unhide;
+ (SKHide *)hide;

- (SCNAction *)reversedAction;
- (SKHide *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKHide *)init;
- (SKHide *)copyWithZone:(struct _NSZone *)arg0;

@end

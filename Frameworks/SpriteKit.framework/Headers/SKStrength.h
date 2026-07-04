/* Runtime dump - SKStrength
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKStrength : SKAction
{
    struct SKCStrength * _mycaction;
}

+ (SKStrength *)strengthTo:(float)arg0 duration:(double)arg1;
+ (SKStrength *)strengthBy:(float)arg0 duration:(double)arg1;

- (SCNAction *)reversedAction;
- (SKStrength *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKStrength *)init;
- (SKStrength *)copyWithZone:(struct _NSZone *)arg0;

@end

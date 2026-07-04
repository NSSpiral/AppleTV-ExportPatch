/* Runtime dump - SKFalloff
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKFalloff : SKAction
{
    struct SKCFalloff * _mycaction;
}

+ (SKFalloff *)falloffTo:(float)arg0 duration:(double)arg1;
+ (SKFalloff *)falloffBy:(float)arg0 duration:(double)arg1;

- (SCNAction *)reversedAction;
- (SKFalloff *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKFalloff *)init;
- (SKFalloff *)copyWithZone:(struct _NSZone *)arg0;

@end

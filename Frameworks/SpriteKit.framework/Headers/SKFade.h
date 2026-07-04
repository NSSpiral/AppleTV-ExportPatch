/* Runtime dump - SKFade
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKFade : SKAction
{
    struct SKCFade * _mycaction;
}

+ (SKFade *)fadeAlphaBy:(float)arg0 duration:(double)arg1;
+ (SKFade *)fadeAlphaTo:(float)arg0 duration:(double)arg1;
+ (SKFade *)fadeOutWithDuration:(double)arg0;
+ (SKFade *)fadeInWithDuration:(double)arg0;

- (SCNAction *)reversedAction;
- (SKFade *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKFade *)init;
- (SKFade *)copyWithZone:(struct _NSZone *)arg0;

@end

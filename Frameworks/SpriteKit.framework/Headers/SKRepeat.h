/* Runtime dump - SKRepeat
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKRepeat : SKAction
{
    struct SKCRepeat * _mycaction;
    SKAction * _repeatedAction;
}

+ (SKRepeat *)repeatAction:(NSObject *)arg0 count:(unsigned int)arg1;
+ (SKRepeat *)repeatActionForever:(SCNAction *)arg0;

- (SCNAction *)reversedAction;
- (SKRepeat *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKRepeat *)init;
- (SKRepeat *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end

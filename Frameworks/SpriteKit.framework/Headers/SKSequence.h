/* Runtime dump - SKSequence
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKSequence : SKAction
{
    struct SKCSequence * _mycaction;
    NSArray * _actions;
    unsigned long _animIndex;
}

+ (SKSequence *)sequenceWithActions:(NSArray *)arg0;

- (SCNAction *)reversedAction;
- (SKSequence *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKSequence *)init;
- (SKSequence *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end

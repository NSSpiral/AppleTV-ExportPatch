/* Runtime dump - SKGroup
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKGroup : SKAction
{
    struct SKCGroup * _mycaction;
    NSArray * _actions;
}

+ (SKGroup *)groupWithActions:(NSArray *)arg0;

- (SCNAction *)reversedAction;
- (SKGroup *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKGroup *)init;
- (SKGroup *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (char)finished;

@end

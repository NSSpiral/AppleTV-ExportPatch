/* Runtime dump - SKRunAction
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKRunAction : SKAction
{
    SKAction * _action;
    NSString * _subSpriteKey;
    NSString * _actionKey;
    char _waitForKeyedAction;
    char _runOnSubSprite;
    char _fired;
}

+ (SKRunAction *)runAction:(SCNAction *)arg0 onFirstChildWithName:(NSString *)arg1;
+ (SKRunAction *)runAction:(SCNAction *)arg0 afterActionWithKey:(NSString *)arg1;

- (void)updateWithTarget:(NSObject *)arg0 forTime:(double)arg1;
- (SCNAction *)reversedAction;
- (void)willStartWithTarget:(NSObject *)arg0 atTime:(double)arg1;
- (SKRunAction *)init;
- (SKRunAction *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end

/* Runtime dump - SCNActionRunAction
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionRunAction : SCNAction
{
    SCNAction * _action;
    NSString * _subSpriteKey;
    NSString * _actionKey;
    char _waitForKeyedAction;
    char _runOnSubSprite;
    char _fired;
}

+ (NSObject *)runAction:(SCNAction *)arg0 onFirstChildWithName:(NSString *)arg1;
+ (NSObject *)runAction:(SCNAction *)arg0 afterActionWithKey:(NSString *)arg1;

- (char)isCustom;
- (void)updateWithTarget:(NSObject *)arg0 forTime:(double)arg1;
- (SCNAction *)reversedAction;
- (void)willStartWithTarget:(NSObject *)arg0 atTime:(double)arg1;
- (void)dealloc;
- (SCNActionRunAction *)init;
- (SCNActionRunAction *)copyWithZone:(struct _NSZone *)arg0;

@end

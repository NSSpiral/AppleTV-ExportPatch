/* Runtime dump - SCNActionGroup
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionGroup : SCNAction
{
    struct SCNCActionGroup * _mycaction;
    NSArray * _actions;
}

+ (SCNActionGroup *)groupWithActions:(NSArray *)arg0;
+ (char)supportsSecureCoding;

- (char)isCustom;
- (SCNAction *)reversedAction;
- (void)dealloc;
- (SCNActionGroup *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNActionGroup *)init;
- (SCNActionGroup *)copyWithZone:(struct _NSZone *)arg0;
- (char)finished;

@end

/* Runtime dump - SCNActionCustom
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionCustom : SCNAction
{
    struct SCNCActionCustom * _mycaction;
}

+ (SCNAction *)customActionWithDuration:(double)arg0 actionBlock:(id /* block */)arg1;
+ (char)supportsSecureCoding;

- (char)isCustom;
- (SCNAction *)reversedAction;
- (void)dealloc;
- (SCNActionCustom *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNActionCustom *)init;
- (SCNActionCustom *)copyWithZone:(struct _NSZone *)arg0;

@end

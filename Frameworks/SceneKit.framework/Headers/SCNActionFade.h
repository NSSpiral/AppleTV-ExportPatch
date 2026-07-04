/* Runtime dump - SCNActionFade
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionFade : SCNAction
{
    struct SCNCActionFade * _mycaction;
}

+ (SCNAction *)fadeOpacityBy:(float)arg0 duration:(double)arg1;
+ (SCNAction *)fadeOpacityTo:(float)arg0 duration:(double)arg1;
+ (char)supportsSecureCoding;
+ (SCNAction *)fadeOutWithDuration:(double)arg0;
+ (SCNAction *)fadeInWithDuration:(double)arg0;

- (SCNAction *)reversedAction;
- (SCNActionFade *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNActionFade *)init;
- (SCNActionFade *)copyWithZone:(struct _NSZone *)arg0;

@end

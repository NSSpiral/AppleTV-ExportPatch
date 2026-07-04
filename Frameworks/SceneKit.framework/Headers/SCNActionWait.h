/* Runtime dump - SCNActionWait
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionWait : SCNAction
{
    struct SCNCActionWait * _mycaction;
}

+ (SCNAction *)waitForDuration:(double)arg0 withRange:(double)arg1;
+ (SCNAction *)waitForDuration:(double)arg0;
+ (char)supportsSecureCoding;

- (SCNAction *)reversedAction;
- (SCNActionWait *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNActionWait *)init;

@end

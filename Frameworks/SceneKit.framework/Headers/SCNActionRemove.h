/* Runtime dump - SCNActionRemove
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionRemove : SCNAction
{
    char _hasFired;
}

+ (SCNAction *)removeFromParentNode;
+ (char)supportsSecureCoding;

- (void)updateWithTarget:(NSObject *)arg0 forTime:(double)arg1;
- (SCNAction *)reversedAction;
- (void)willStartWithTarget:(NSObject *)arg0 atTime:(double)arg1;
- (SCNActionRemove *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNActionRemove *)init;
- (SCNActionRemove *)copyWithZone:(struct _NSZone *)arg0;

@end

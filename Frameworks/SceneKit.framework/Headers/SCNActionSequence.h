/* Runtime dump - SCNActionSequence
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionSequence : SCNAction
{
    struct SCNCActionSequence * _mycaction;
    NSArray * _actions;
}

+ (SCNActionSequence *)sequenceWithActions:(NSArray *)arg0;
+ (char)supportsSecureCoding;

- (char)isCustom;
- (SCNAction *)reversedAction;
- (void)dealloc;
- (SCNActionSequence *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNActionSequence *)init;
- (SCNActionSequence *)copyWithZone:(struct _NSZone *)arg0;

@end

/* Runtime dump - SCNActionRepeat
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionRepeat : SCNAction
{
    struct SCNCActionRepeat * _mycaction;
    SCNAction * _repeatedAction;
}

+ (SCNAction *)repeatAction:(SCNAction *)arg0 count:(unsigned int)arg1;
+ (SCNAction *)repeatActionForever:(SCNAction *)arg0;
+ (char)supportsSecureCoding;

- (char)isCustom;
- (SCNAction *)reversedAction;
- (void)dealloc;
- (SCNActionRepeat *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNActionRepeat *)init;
- (SCNActionRepeat *)copyWithZone:(struct _NSZone *)arg0;

@end

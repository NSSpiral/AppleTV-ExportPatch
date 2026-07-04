/* Runtime dump - SCNActionPerformSelector
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionPerformSelector : SCNAction
{
    SEL _selector;
    id _target;
}

+ (NSString *)perfromSelector:(SEL)arg0 onTarget:(NSObject *)arg1;
+ (char)supportsSecureCoding;

- (char)isCustom;
- (void)updateWithTarget:(NSObject *)arg0 forTime:(double)arg1;
- (SCNAction *)reversedAction;
- (void)dealloc;
- (SCNActionPerformSelector *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNActionPerformSelector *)init;
- (SCNActionPerformSelector *)copyWithZone:(struct _NSZone *)arg0;

@end

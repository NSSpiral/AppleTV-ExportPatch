/* Runtime dump - SCNActionScale
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionScale : SCNAction
{
    struct SCNCActionScale * _mycaction;
}

+ (SCNAction *)scaleBy:(float)arg0 duration:(double)arg1;
+ (SCNAction *)scaleTo:(float)arg0 duration:(double)arg1;
+ (char)supportsSecureCoding;

- (SCNAction *)reversedAction;
- (SCNActionScale *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNActionScale *)init;
- (SCNActionScale *)copyWithZone:(struct _NSZone *)arg0;

@end

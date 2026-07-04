/* Runtime dump - SCNActionMove
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionMove : SCNAction
{
    struct SCNCActionMove * _mycaction;
}

+ (SCNAction *)moveByX:(float)arg0 y:(float)arg1 z:(float)arg2 duration:(double)arg3;
+ (SCNActionMove *)moveToX:(float)arg0 y:(float)arg1 z:(float)arg2 duration:(double)arg3;
+ (SCNAction *)moveBy:(struct SCNVector3)arg0 duration:(double)arg1;
+ (SCNAction *)moveTo:(struct SCNVector3)arg0 duration:(double)arg1;
+ (char)supportsSecureCoding;

- (SCNAction *)reversedAction;
- (SCNActionMove *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNActionMove *)init;
- (SCNActionMove *)copyWithZone:(struct _NSZone *)arg0;

@end

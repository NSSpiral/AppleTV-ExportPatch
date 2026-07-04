/* Runtime dump - SCNActionRotate
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionRotate : SCNAction
{
    struct SCNCActionRotate * _mycaction;
}

+ (SCNAction *)rotateByX:(float)arg0 y:(float)arg1 z:(float)arg2 duration:(double)arg3;
+ (SCNAction *)rotateToX:(float)arg0 y:(float)arg1 z:(float)arg2 duration:(double)arg3;
+ (SCNAction *)rotateByAngle:(float)arg0 aroundAxis:(struct SCNVector3)arg1 duration:(double)arg2;
+ (SCNAction *)rotateToAxisAngle:(struct SCNVector4)arg0 duration:(double)arg1;
+ (SCNAction *)rotateToX:(float)arg0 y:(float)arg1 z:(float)arg2 duration:(double)arg3 shortestUnitArc:(char)arg4;
+ (char)supportsSecureCoding;

- (SCNAction *)reversedAction;
- (SCNActionRotate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNActionRotate *)init;
- (SCNActionRotate *)copyWithZone:(struct _NSZone *)arg0;

@end

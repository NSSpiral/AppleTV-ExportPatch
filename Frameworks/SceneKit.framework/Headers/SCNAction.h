/* Runtime dump - SCNAction
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNAction : NSObject <NSCopying, NSSecureCoding>
{
    id _reserved;
    struct SCNCAction * _caction;
}

@property (nonatomic) double duration;
@property (nonatomic) int timingMode;
@property (nonatomic) id timingFunction;
@property (nonatomic) float speed;

+ (NSObject *)SCNJSExportProtocol;
+ (SCNAction *)runBlock:(id /* block */)arg0 queue:(/* block */ id)arg1;
+ (SCNAction *)waitForDuration:(double)arg0 withRange:(double)arg1;
+ (SCNAction *)waitForDuration:(double)arg0;
+ (SCNAction *)moveByX:(float)arg0 y:(float)arg1 z:(float)arg2 duration:(double)arg3;
+ (SCNAction *)rotateByX:(float)arg0 y:(float)arg1 z:(float)arg2 duration:(double)arg3;
+ (SCNAction *)rotateToX:(float)arg0 y:(float)arg1 z:(float)arg2 duration:(double)arg3;
+ (SCNAction *)rotateByAngle:(float)arg0 aroundAxis:(struct SCNVector3)arg1 duration:(double)arg2;
+ (SCNAction *)rotateToAxisAngle:(struct SCNVector4)arg0 duration:(double)arg1;
+ (SCNAction *)rotateToX:(float)arg0 y:(float)arg1 z:(float)arg2 duration:(double)arg3 shortestUnitArc:(char)arg4;
+ (SCNAction *)scaleBy:(float)arg0 duration:(double)arg1;
+ (SCNAction *)scaleTo:(float)arg0 duration:(double)arg1;
+ (SCNAction *)repeatAction:(SCNAction *)arg0 count:(unsigned int)arg1;
+ (SCNAction *)repeatActionForever:(SCNAction *)arg0;
+ (SCNAction *)fadeOpacityBy:(float)arg0 duration:(double)arg1;
+ (SCNAction *)fadeOpacityTo:(float)arg0 duration:(double)arg1;
+ (SCNAction *)removeFromParentNode;
+ (SCNAction *)customActionWithDuration:(double)arg0 actionBlock:(id /* block */)arg1;
+ (SCNAction *)moveBy:(struct SCNVector3)arg0 duration:(double)arg1;
+ (SCNAction *)moveTo:(struct SCNVector3)arg0 duration:(double)arg1;
+ (SCNAction *)sequence:(NSArray *)arg0;
+ (SCNAction *)group:(NSArray *)arg0;
+ (SCNAction *)runBlock:(id /* block */)arg0;
+ (SCNAction *)javaScriptActionWithScript:(NSString *)arg0 duration:(double)arg1;
+ (NSString *)performSelector:(SEL)arg0 onTarget:(NSObject *)arg1;
+ (NSObject *)runAction:(SCNAction *)arg0 onChildNodeWithName:(NSString *)arg1;
+ (char)supportsSecureCoding;
+ (SCNAction *)fadeOutWithDuration:(double)arg0;
+ (SCNAction *)fadeInWithDuration:(double)arg0;

- (struct SCNCAction *)caction;
- (char)isCustom;
- (void)updateWithTarget:(NSObject *)arg0 forTime:(double)arg1;
- (SCNAction *)reversedAction;
- (void)setCppAction:(void *)arg0;
- (double)durationRange;
- (void)setDurationRange:(double)arg0;
- (int)timingMode;
- (void)setTimingMode:(int)arg0;
- (void)wasPausedWithTarget:(NSObject *)arg0 atTime:(double)arg1;
- (void)willResumeWithTarget:(NSObject *)arg0 atTime:(double)arg1;
- (void)timeJumpWithTarget:(NSObject *)arg0 timeOffset:(double)arg1;
- (float)ratioForTime:(double)arg0;
- (void)wasAddedToTarget:(NSObject *)arg0 atTime:(double)arg1;
- (void)wasRemovedFromTarget:(NSObject *)arg0 atTime:(double)arg1;
- (void)willStartWithTarget:(NSObject *)arg0 atTime:(double)arg1;
- (void)dealloc;
- (SCNAction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNAction *)init;
- (SCNAction *)copy;
- (void)setSpeed:(float)arg0;
- (double)duration;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)setDuration:(double)arg0;
- (SCNAction *)copyWithZone:(struct _NSZone *)arg0;
- (void)setTimingFunction:(CAMediaTimingFunction *)arg0;
- (float)speed;
- (CAMediaTimingFunction *)timingFunction;
- (void)setKey:(NSString *)arg0;
- (void)setFinished:(char)arg0;
- (char)finished;

@end

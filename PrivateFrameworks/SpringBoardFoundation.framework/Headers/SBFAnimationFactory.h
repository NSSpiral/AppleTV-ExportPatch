/* Runtime dump - SBFAnimationFactory
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFAnimationFactory : NSObject <NSCopying, _UIBasicAnimationFactory>
{
    BSAnimationSettings * _settings;
}

@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double delay;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SBFAnimationFactory *)factoryWithSettings:(BSAnimationSettings *)arg0;
+ (void)animateWithFactory:(NSObject *)arg0 additionalDelay:(double)arg1 options:(unsigned int)arg2 actions:(TSTLayoutProcessChangesActions *)arg3 completion:(/* block */ id)arg4;
+ (SBFAnimationFactory *)factoryWithSettings:(BSAnimationSettings *)arg0 timingFunction:(CAMediaTimingFunction *)arg1;
+ (SBFAnimationFactory *)factoryWithAnimationAttributes:(NSDictionary *)arg0;
+ (SBFAnimationFactory *)factoryWithDuration:(double)arg0;
+ (SBFAnimationFactory *)factoryWithDuration:(double)arg0 delay:(double)arg1;
+ (SBFAnimationFactory *)factoryWithDuration:(double)arg0 timingFunction:(CAMediaTimingFunction *)arg1;
+ (SBFAnimationFactory *)factoryWithDuration:(double)arg0 delay:(double)arg1 timingFunction:(CAMediaTimingFunction *)arg2;
+ (SBFAnimationFactory *)factoryWithMass:(float)arg0 stiffness:(float)arg1 damping:(float)arg2;
+ (SBFAnimationFactory *)factoryWithMass:(float)arg0 stiffness:(float)arg1 damping:(float)arg2 epsilon:(float)arg3;
+ (SBFAnimationFactory *)factoryWithMass:(float)arg0 stiffness:(float)arg1 damping:(float)arg2 timingFunction:(CAMediaTimingFunction *)arg3;
+ (SBFAnimationFactory *)factoryWithMass:(float)arg0 stiffness:(float)arg1 damping:(float)arg2 epsilon:(float)arg3 timingFunction:(CAMediaTimingFunction *)arg4;
+ (void)animateWithFactory:(NSObject *)arg0 actions:(TSTLayoutProcessChangesActions *)arg1;
+ (void)animateWithFactory:(NSObject *)arg0 actions:(TSTLayoutProcessChangesActions *)arg1 completion:(/* block */ id)arg2;
+ (void)animateWithFactory:(NSObject *)arg0 options:(unsigned int)arg1 actions:(TSTLayoutProcessChangesActions *)arg2;
+ (void)animateWithFactory:(NSObject *)arg0 options:(unsigned int)arg1 actions:(TSTLayoutProcessChangesActions *)arg2 completion:(/* block */ id)arg3;
+ (void)animateWithFactory:(NSObject *)arg0 additionalDelay:(double)arg1 actions:(TSTLayoutProcessChangesActions *)arg2;
+ (void)animateWithFactory:(NSObject *)arg0 additionalDelay:(double)arg1 actions:(TSTLayoutProcessChangesActions *)arg2 completion:(/* block */ id)arg3;
+ (void)animateWithFactory:(NSObject *)arg0 additionalDelay:(double)arg1 options:(unsigned int)arg2 actions:(TSTLayoutProcessChangesActions *)arg3;

- (void)dealloc;
- (SBFAnimationFactory *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSObject *)_basicAnimationForView:(NSObject *)arg0 withKeyPath:(NSString *)arg1;
- (NSObject *)_timingFunctionForAnimation;
- (double)duration;
- (double)delay;
- (SBFAnimationFactory *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)_initWithSettings:(BSAnimationSettings *)arg0;
- (void)_animateWithAdditionalDelay:(double)arg0 options:(unsigned int)arg1 actions:(TSTLayoutProcessChangesActions *)arg2 completion:(/* block */ id)arg3;
- (id)factoryWithTimingFunction:(CAMediaTimingFunction *)arg0;

@end

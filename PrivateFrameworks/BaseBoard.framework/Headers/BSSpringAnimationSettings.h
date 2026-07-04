/* Runtime dump - BSSpringAnimationSettings
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSSpringAnimationSettings : BSAnimationSettings
{
    float _mass;
    float _stiffness;
    float _damping;
    float _epsilon;
    char _hasCalculatedDuration;
}

@property (readonly, nonatomic) float mass;
@property (readonly, nonatomic) float stiffness;
@property (readonly, nonatomic) float damping;
@property (readonly, nonatomic) float epsilon;

+ (char)supportsSecureCoding;
+ (BSSpringAnimationSettings *)settingsWithMass:(float)arg0 stiffness:(float)arg1 damping:(float)arg2;
+ (BSSpringAnimationSettings *)settingsWithMass:(float)arg0 stiffness:(float)arg1 damping:(float)arg2 epsilon:(float)arg3;
+ (BSSpringAnimationSettings *)settingsWithMass:(float)arg0 stiffness:(float)arg1 damping:(float)arg2 timingFunction:(CAMediaTimingFunction *)arg3;
+ (BSSpringAnimationSettings *)settingsWithMass:(float)arg0 stiffness:(float)arg1 damping:(float)arg2 epsilon:(float)arg3 timingFunction:(CAMediaTimingFunction *)arg4;
+ (BSSpringAnimationSettings *)settingsWithMass:(float)arg0 stiffness:(float)arg1 damping:(float)arg2 epsilon:(float)arg3 delay:(double)arg4 timingFunction:(CAMediaTimingFunction *)arg5;

- (float)stiffness;
- (BSSpringAnimationSettings *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (double)duration;
- (void)_setDuration:(double)arg0;
- (float)damping;
- (float)mass;
- (BSSpringAnimationSettings *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (BSSpringAnimationSettings *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (NSNumber *)_initWithDuration:(double)arg0 delay:(double)arg1 frameInterval:(double)arg2 timingFunction:(CAMediaTimingFunction *)arg3;
- (char)isSpringAnimation;
- (void)_setTimingFunction:(SCNJSTimingFunction *)arg0;
- (void)_setEpsilon:(float)arg0;
- (BSSpringAnimationSettings *)_initWithMass:(float)arg0 stiffness:(float)arg1 damping:(float)arg2 epsilon:(float)arg3 delay:(double)arg4 frameInterval:(double)arg5 timingFunction:(CAMediaTimingFunction *)arg6;
- (float)epsilon;
- (char)_hasCalculatedDuration;
- (void)_setMass:(float)arg0;
- (void)_setStiffness:(float)arg0;
- (void)_setDamping:(float)arg0;

@end

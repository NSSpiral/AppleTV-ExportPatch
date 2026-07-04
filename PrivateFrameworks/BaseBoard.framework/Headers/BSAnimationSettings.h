/* Runtime dump - BSAnimationSettings
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSAnimationSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSXPCCoding>
{
    double _duration;
    double _delay;
    double _frameInterval;
    CAMediaTimingFunction * _timingFunction;
}

@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double frameInterval;
@property (readonly, retain, nonatomic) CAMediaTimingFunction * timingFunction;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;
+ (NSNumber *)settingsWithDuration:(double)arg0;
+ (NSNumber *)settingsWithDuration:(double)arg0 timingFunction:(CAMediaTimingFunction *)arg1;
+ (NSNumber *)settingsWithDuration:(double)arg0 delay:(double)arg1;
+ (NSNumber *)settingsWithDuration:(double)arg0 delay:(double)arg1 timingFunction:(CAMediaTimingFunction *)arg2;

- (void)dealloc;
- (BSAnimationSettings *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (BSAnimationSettings *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (double)duration;
- (double)delay;
- (BSAnimationSettings *)copyWithZone:(struct _NSZone *)arg0;
- (void)_setDuration:(double)arg0;
- (CAMediaTimingFunction *)timingFunction;
- (double)frameInterval;
- (BSAnimationSettings *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (BSAnimationSettings *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (NSNumber *)_initWithDuration:(double)arg0 delay:(double)arg1 frameInterval:(double)arg2 timingFunction:(CAMediaTimingFunction *)arg3;
- (char)isSpringAnimation;
- (void)_setDelay:(double)arg0;
- (void)_setTimingFunction:(SCNJSTimingFunction *)arg0;
- (void)_setFrameInterval:(double)arg0;

@end

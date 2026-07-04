/* Runtime dump - BSMutableAnimationSettings
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSMutableAnimationSettings : BSAnimationSettings

@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic) double frameInterval;
@property (retain, nonatomic) CAMediaTimingFunction * timingFunction;

+ (NSNumber *)settingsWithDuration:(double)arg0;
+ (NSNumber *)settingsWithDuration:(double)arg0 timingFunction:(CAMediaTimingFunction *)arg1;
+ (NSNumber *)settingsWithDuration:(double)arg0 delay:(double)arg1;
+ (NSNumber *)settingsWithDuration:(double)arg0 delay:(double)arg1 timingFunction:(CAMediaTimingFunction *)arg2;

- (void)setDuration:(double)arg0;
- (void)setDelay:(double)arg0;
- (BSMutableAnimationSettings *)copyWithZone:(struct _NSZone *)arg0;
- (void)setFrameInterval:(double)arg0;
- (void)setTimingFunction:(CAMediaTimingFunction *)arg0;

@end

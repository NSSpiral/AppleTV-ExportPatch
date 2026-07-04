/* Runtime dump - MRAnimationTrigger
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRAnimationTrigger : NSObject
{
    MRAction * _action;
    float _startValue;
    float _lastValue;
    NSDictionary * _animationAttributes;
}

@property (retain, nonatomic) MRAction * action;
@property float startValue;
@property float lastValue;
@property (readonly) NSDictionary * animationAttributes;
@property (readonly) char isArmed;

- (void)dealloc;
- (MRAction *)action;
- (void)setAction:(MRAction *)arg0;
- (void)setStartValue:(float)arg0;
- (NSDictionary *)animationAttributes;
- (void)disarm;
- (MRAnimationTrigger *)initWithAction:(MRAction *)arg0;
- (float)rearmIfNeededWithDefaultValue:(float)arg0;
- (void)setLastValue:(float)arg0;
- (char)isArmed;
- (float)startValue;
- (float)lastValue;

@end

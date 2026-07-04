/* Runtime dump - MREffectOrigamiTiming
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectOrigamiTiming : NSObject <MZEffectTiming>
{
    NSString * _effectID;
    NSArray * _description;
    NSArray * _animationTimeBounds;
    double _durationStretchFactor;
    id _slideTimings;
    double _phaseInDuration;
    double _mainDuration;
    double _phaseOutDuration;
    double _defaultPhaseInDuration;
    double _defaultMainDuration;
    double _defaultPhaseOutDuration;
}

@property (readonly, nonatomic) double phaseInDuration;
@property (readonly, nonatomic) double mainDuration;
@property (readonly, nonatomic) double phaseOutDuration;

- (void)dealloc;
- (double)phaseInDuration;
- (double)phaseOutDuration;
- (double)mainDuration;
- (MREffectOrigamiTiming *)initWithEffectID:(NSString *)arg0;
- (void)setPhaseInDuration:(double)arg0 mainDuration:(double)arg1 phaseOutDuration:(double)arg2;
- (double)lowestDisplayTime;
- (double)showTimeForSlideAtIndex:(unsigned int)arg0;
- (double)showDurationForSlideAtIndex:(unsigned int)arg0;
- (double)displayTimeForSlideAtIndex:(unsigned int)arg0;
- (double)displayTimeForTextAtIndex:(unsigned int)arg0;

@end

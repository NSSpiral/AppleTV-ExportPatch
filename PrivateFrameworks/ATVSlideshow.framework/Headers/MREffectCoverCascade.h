/* Runtime dump - MREffectCoverCascade
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectCoverCascade : MREffect <MZEffectTiming>
{
    NSMutableArray * _slideStories;
    id _grid;
    struct _NSRange _previousNewSlideRange;
    unsigned int _numberOfStoriesRemoved;
    double _previousStartTime;
    unsigned char _previousScenarioType;
    unsigned char _previousStartX;
    unsigned char _currentComplexityLevel;
    char _previousWasCombo;
}

@property (readonly, nonatomic) double phaseInDuration;
@property (readonly, nonatomic) double mainDuration;
@property (readonly, nonatomic) double phaseOutDuration;

+ (NSObject *)customTimingWithEffectID:(NSString *)arg0 effectAttributes:(NSDictionary *)arg1 slideInformation:(NSDictionary *)arg2 textInformation:(NSDictionary *)arg3 inAspectRatio:(float)arg4;
+ (char)hasCustomTiming;
+ (char)supportsDynamicExpansionForEffectID:(NSObject *)arg0;
+ (unsigned int)typicalSlideBatchSizeForEffectID:(NSObject *)arg0;

- (void)_unload;
- (void)_cleanup;
- (void)setPhaseInDuration:(double)arg0 mainDuration:(double)arg1 phaseOutDuration:(double)arg2;
- (void)appendSlideInformation:(id)arg0 andTextInformation:(id)arg1;
- (void)setMultiImageSlideRange:(struct _NSRange)arg0;
- (double)lowestDisplayTime;
- (double)showTimeForSlideAtIndex:(unsigned int)arg0;
- (double)showDurationForSlideAtIndex:(unsigned int)arg0;
- (double)displayTimeForSlideAtIndex:(unsigned int)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)supportsDynamicExpansion;
- (int)typicalSlideBatchSize;
- (unsigned int)firstSlideIndexStillNeededAtTime:(double)arg0;
- (void)_applyTimingToSlideProviders;
- (double)displayTimeForTextAtIndex:(unsigned int)arg0;
- (double)_buildNumberOfSlideStories:(unsigned int)arg0 withSlideRange:(struct _NSRange)arg1;

@end

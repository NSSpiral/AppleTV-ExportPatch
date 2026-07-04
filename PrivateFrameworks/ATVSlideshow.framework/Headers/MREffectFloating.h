/* Runtime dump - MREffectFloating
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectFloating : MREffect <MZEffectTiming>
{
    int mTotalImages;
    NSMutableArray * mFrontSlideOrder;
    NSMutableArray * mMiddleSlideOrder;
    NSMutableArray * mBackSlideOrder;
    char mNeedsUpdate;
    char mNeedsMoreSlides;
    int mIterationOffset;
    NSMutableDictionary * mSlideTimes;
    float * mVBOData;
    unsigned int mVBO;
    MRContext * mHackContext;
}

@property (nonatomic) int totalImages;
@property (readonly, nonatomic) double phaseInDuration;
@property (readonly, nonatomic) double mainDuration;
@property (readonly, nonatomic) double phaseOutDuration;

+ (NSObject *)customTimingWithEffectID:(NSString *)arg0 effectAttributes:(NSDictionary *)arg1 slideInformation:(NSDictionary *)arg2 textInformation:(NSDictionary *)arg3 inAspectRatio:(float)arg4;
+ (char)hasCustomTiming;
+ (char)supportsDynamicExpansionForEffectID:(NSObject *)arg0;
+ (unsigned int)typicalSlideBatchSizeForEffectID:(NSObject *)arg0;

- (void)_unload;
- (char)isOpaque;
- (void)_cleanup;
- (MREffectFloating *)initWithEffectID:(NSString *)arg0;
- (void)setPhaseInDuration:(double)arg0 mainDuration:(double)arg1 phaseOutDuration:(double)arg2;
- (void)appendSlideInformation:(id)arg0 andTextInformation:(id)arg1;
- (void)setMultiImageSlideRange:(struct _NSRange)arg0;
- (double)lowestDisplayTime;
- (double)showTimeForSlideAtIndex:(unsigned int)arg0;
- (double)showDurationForSlideAtIndex:(unsigned int)arg0;
- (double)displayTimeForSlideAtIndex:(unsigned int)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)supportsDynamicExpansion;
- (int)typicalSlideBatchSize;
- (unsigned int)firstSlideIndexStillNeededAtTime:(double)arg0;
- (char)needsMoreSlidesAtTime:(double)arg0;
- (void)_applyTimingToSlideProviders;
- (double)displayTimeForTextAtIndex:(unsigned int)arg0;
- (void)_applySizeScript;
- (void)_orderImages;
- (double)_mainDurationForImageCount:(int)arg0;
- (void)setTotalImages:(int)arg0;
- (float)_rotationForRelative:(float)arg0 directionFactor:(float)arg1;
- (float)_zTranslationForRelativeTime:(float)arg0;
- (void)_bestTimeInfoFor:(id)arg0 time:(double)arg1 start:(float *)arg2 end:(float *)arg3;
- (int)totalImages;

@end

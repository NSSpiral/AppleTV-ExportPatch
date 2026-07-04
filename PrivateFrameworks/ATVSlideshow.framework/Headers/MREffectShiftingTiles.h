/* Runtime dump - MREffectShiftingTiles
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectShiftingTiles : MREffect <MZEffectTiming>
{
    NSMutableDictionary * mSprites;
    NSMutableArray * mTiming;
    NSMutableArray * mFirstLayout;
    NSMutableArray * mLastLayout;
    int mLastCol;
    int mLastSlideIndex;
    int mSlideStartIndex;
    char mNeedsToBeRebuilt;
    char mNeedsToRecalculateIterations;
    int mIterationStartIndex;
    double mIterationStartTime;
    float mAspectRatio;
    NSMutableArray * mSlideAspectRatios;
    double mFirstLayoutDuration;
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
- (MREffectShiftingTiles *)initWithEffectID:(NSString *)arg0;
- (void)setPhaseInDuration:(double)arg0 mainDuration:(double)arg1 phaseOutDuration:(double)arg2;
- (void)appendSlideInformation:(id)arg0 andTextInformation:(id)arg1;
- (void)setMultiImageSlideRange:(struct _NSRange)arg0;
- (double)lowestDisplayTime;
- (double)showTimeForSlideAtIndex:(unsigned int)arg0;
- (double)showDurationForSlideAtIndex:(unsigned int)arg0;
- (double)displayTimeForSlideAtIndex:(unsigned int)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (char)supportsDynamicExpansion;
- (int)typicalSlideBatchSize;
- (unsigned int)firstSlideIndexStillNeededAtTime:(double)arg0;
- (void)_applyTimingToSlideProviders;
- (double)displayTimeForTextAtIndex:(unsigned int)arg0;
- (float)_aspectRatioForSlideIndex:(int)arg0;
- (void)_addSlideAspectRatios:(id)arg0;
- (void)_setupLayoutsWithSlideInfo:(NSDictionary *)arg0 append:(char)arg1 aspectRatio:(float)arg2;
- (double)_calculateMainDuration;
- (int)_iterationForTime:(double)arg0 startTime:(double *)arg1 duration:(double *)arg2;
- (id)_layoutForIteration:(int)arg0;
- (NSObject *)_setupFirstLayout;
- (int)_slideCountForLayout:(int)arg0;
- (int)_lowestDisplayIteration;
- (double)_timeForIteration:(int)arg0;
- (int)_widthForLayout:(int)arg0;
- (double)_durationForAspectRatio:(float)arg0 inLayout:(int)arg1 withScreenRatio:(float)arg2;
- (void)_updateSizeScripts;
- (id)_layoutForTime:(double)arg0;
- (id)_infoForTime:(double)arg0;
- (int)_displaySlideCountForLayout:(int)arg0;
- (int)_displayWidthForLayout:(int)arg0;
- (id)_slideProviderWithAspectRatio:(char)arg0 nearest:(int)arg1 actual:(int *)arg2;

@end

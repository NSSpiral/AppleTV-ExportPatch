/* Runtime dump - MREffectHyperGrid
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectHyperGrid : MREffect <MZEffectTiming>
{
    NSMutableDictionary * mSprites;
    NSMutableArray * mLayouts;
    int mSlideStartIndex;
    int mIterationStartIndex;
    int mLastSlideIndex;
    int mLastIteration;
    id mCurves;
    id mBreakCurves;
    char mNeedsToRecalculateIterations;
    float mAspectRatio;
    NSDictionary * mBreakInformation;
    int mLastUsableIteration;
    id mLastIterationsAdded;
    char mCanAddSlides;
    int mIdealSlideCount;
    char mAspectRatioDidChange;
}

@property (readonly, nonatomic) double phaseInDuration;
@property (readonly, nonatomic) double mainDuration;
@property (readonly, nonatomic) double phaseOutDuration;

+ (NSObject *)customTimingWithEffectID:(NSString *)arg0 effectAttributes:(NSDictionary *)arg1 slideInformation:(NSDictionary *)arg2 textInformation:(NSDictionary *)arg3 inAspectRatio:(float)arg4;
+ (char)hasCustomTiming;

- (void)_unload;
- (char)isOpaque;
- (void)_cleanup;
- (void)setAttributes:(NSDictionary *)arg0;
- (MREffectHyperGrid *)initWithEffectID:(NSString *)arg0;
- (unsigned int)idealNumberOfSlides;
- (double)lowestDisplayTime;
- (double)showTimeForSlideAtIndex:(unsigned int)arg0;
- (double)showDurationForSlideAtIndex:(unsigned int)arg0;
- (double)displayTimeForSlideAtIndex:(unsigned int)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)beginMorphingToAspectRatio:(float)arg0 withDuration:(double)arg1;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (char)needsMoreSlidesAtTime:(double)arg0;
- (double)displayTimeForTextAtIndex:(unsigned int)arg0;
- (float)_aspectRatioForSlideIndex:(int)arg0;
- (int)_iterationForTime:(double)arg0;
- (double)_calculateMainDuration;
- (id)_slideProviderWithAspectRatio:(char)arg0 nearest:(int)arg1 actual:(int *)arg2;
- (void)_setupLayoutsWithSlideInfo:(NSDictionary *)arg0 aspectRatio:(float)arg1;
- (int)_layoutCount:(int)arg0;
- (int)_findLandscape:(char)arg0 inIndicies:(id)arg1 withSlideInformation:(id)arg2 iterations:(int)arg3 neededAspectRatio:(float)arg4;
- (NSObject *)layoutForSlideIndex:(int)arg0 forIterations:(id)arg1 atIndex:(int *)arg2;
- (char)_isMovieForSlideAtIndex:(int)arg0 slideInformation:(NSDictionary *)arg1;
- (char)slideIndex:(int)arg0 isInIteration:(MRShiftingTilesIteration *)arg1;
- (int)_findLandscape:(char)arg0 inIndicies:(id)arg1 withSlideInformation:(id)arg2;
- (double)_movieDurationForSlideAtIndex:(int)arg0 slideInformation:(NSDictionary *)arg1;
- (float)_aspectRatioForLayout:(int)arg0 atIndex:(int)arg1 inAspectRatio:(float)arg2;
- (void)_updateSizeScripts:(int)arg0;
- (void)_applyTimingToSlideProviders:(int)arg0;
- (void)interationTime:(double *)arg0 duration:(double *)arg1 forIndex:(int)arg2 atTime:(double)arg3 inIteration:(MRShiftingTilesIteration *)arg4 firstInterationIndex:(int)arg5 currentIterationIndex:(int)arg6;
- (void)_renderIterationAtIndex:(int)arg0 firstIteration:(int)arg1 atTime:(double)arg2 relativeTime:(double)arg3 inContext:(NSObject *)arg4 withArguments:(NSDictionary *)arg5;
- (void)_drawSlideAtIndex:(int)arg0 size:(struct CGSize)arg1 position:(struct CGPoint)arg2 atTime:(double)arg3 iterationTime:(double)arg4 iterationDuration:(double)arg5 inContext:(NSObject *)arg6 withArguments:(NSDictionary *)arg7;
- (char)_layoutAtIndexHasBreak:(int)arg0;
- (struct CGSize)_sizeForLayout:(int)arg0 atIndex:(int)arg1;

@end

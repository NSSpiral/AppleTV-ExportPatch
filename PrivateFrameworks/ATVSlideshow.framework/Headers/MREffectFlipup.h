/* Runtime dump - MREffectFlipup
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectFlipup : MREffect <MZEffectTiming>
{
    NSMutableDictionary * mSprites;
    NSMutableDictionary * mBreakInformation;
    id mZPositions;
    id mXPositions;
    char mIsLoaded;
    id mTiming;
    MRImageProvider * mGradientProvider;
    NSArray * mSortDescriptors;
    char mIsFirst;
}

@property (readonly, nonatomic) double phaseInDuration;
@property (readonly, nonatomic) double mainDuration;
@property (readonly, nonatomic) double phaseOutDuration;

+ (void)initialize;
+ (NSObject *)customTimingWithEffectID:(NSString *)arg0 effectAttributes:(NSDictionary *)arg1 slideInformation:(NSDictionary *)arg2 textInformation:(NSDictionary *)arg3 inAspectRatio:(float)arg4;
+ (char)hasCustomTiming;

- (void)_unload;
- (void)_cleanup;
- (void)setAttributes:(NSDictionary *)arg0;
- (MREffectFlipup *)initWithEffectID:(NSString *)arg0;
- (void)setPhaseInDuration:(double)arg0 mainDuration:(double)arg1 phaseOutDuration:(double)arg2;
- (double)lowestDisplayTime;
- (double)showTimeForSlideAtIndex:(unsigned int)arg0;
- (double)showDurationForSlideAtIndex:(unsigned int)arg0;
- (double)displayTimeForSlideAtIndex:(unsigned int)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (void)_applyTimingToSlideProviders;
- (double)displayTimeForTextAtIndex:(unsigned int)arg0;
- (void)_applySizeScripts:(float)arg0;
- (void)_setupForSlideInformation:(id)arg0 aspectRatio:(float)arg1;
- (double)_durationForEffect:(int)arg0;
- (float)_aspectRatioForSlideIndex:(int)arg0;
- (void)loadPositions;
- (int)_iterationForTime:(double)arg0;
- (double)_startTimeForIteration:(int)arg0;

@end

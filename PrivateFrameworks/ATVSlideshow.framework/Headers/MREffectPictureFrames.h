/* Runtime dump - MREffectPictureFrames
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectPictureFrames : MREffect <MZEffectTiming>
{
    NSMutableDictionary * mSprites;
    NSMutableDictionary * mFrameProviders;
    MRCroppingSprite * mFrameSprite;
    MRImageProvider * mWallProvider;
    MRImageProvider * mGradientProvider;
    NSMutableArray * mTableProviders;
    NSMutableArray * mWallSprites;
    NSMutableArray * mLayoutWidths;
    float mTotalWidth;
    float mXOffset;
    char mIsLoaded;
    NSMutableArray * mLayouts;
    NSMutableArray * mFrames;
    NSMutableArray * mSlideOrder;
    NSMutableArray * mAspectRatios;
    NSString * mFirstFrame;
    NSString * mLastFrame;
}

@property (readonly, nonatomic) double phaseInDuration;
@property (readonly, nonatomic) double mainDuration;
@property (readonly, nonatomic) double phaseOutDuration;

+ (void)initialize;
+ (NSObject *)customTimingWithEffectID:(NSString *)arg0 effectAttributes:(NSDictionary *)arg1 slideInformation:(NSDictionary *)arg2 textInformation:(NSDictionary *)arg3 inAspectRatio:(float)arg4;
+ (char)hasCustomTiming;

- (void)_unload;
- (void)_cleanup;
- (MREffectPictureFrames *)initWithEffectID:(NSString *)arg0;
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
- (double)_durationForEffect:(char)arg0;
- (float)_aspectRatioForSlideIndex:(int)arg0;
- (void)_setupLayoutWithSlideInformation:(id)arg0;
- (void)_setSizeScripts:(float)arg0;
- (struct CGRect)_frameRectFromInfo:(NSDictionary *)arg0 onShelf:(SEL)arg1;
- (struct CGRect)_rectForFrameID:(NSObject *)arg0 rect:(SEL)arg1 onTable:(char)arg2 aspectRatio:(struct CGRect)arg3 slideAspectRatio:(struct CGSize)arg4;
- (float)_startingOffset;
- (id)_randomFrameForAspectRatio:(id)arg0 forTable:(char)arg1 allowMatte:(char)arg2 onlyLoaded:(char)arg3 ignoreFrames:(id)arg4 randomGenerator:(CIRandomGenerator *)arg5;
- (double)_durationForEffect;
- (float)_startingWidth;
- (id)_populateFrames;
- (float)_nextSlideProviderAspectRatioToFitInAspectRatio:(id)arg0 providerKeys:(NSArray *)arg1 slideInformation:(NSDictionary *)arg2 index:(int *)arg3 force:(char)arg4;
- (float)_xForSlideAtIndex:(int)arg0 layoutWidth:(float *)arg1;
- (NSObject *)_drawFrame:(NSObject *)arg0 provider:(NSObject *)arg1 index:(int)arg2 rect:(struct CGRect)arg3 time:(struct CGSize)arg4 onTable:(char)arg5 inContext:(double)arg6 withArguments:(char)arg7;
- (void)_drawBreakFrameInRect:(struct CGRect)arg0 frameWidth:(struct CGSize)arg1 time:(id)arg2 inContext:(float)arg3 withArguments:(double)arg4;
- (void)_drawBreakFrame:(NSObject *)arg0 provider:(NSObject *)arg1 index:(int)arg2 rect:(struct CGRect)arg3 time:(struct CGSize)arg4 inContext:(NSObject *)arg5 withArguments:(double)arg6;
- (NSDictionary *)layoutsWithSlidesInfo:(NSDictionary *)arg0 seed:(unsigned int)arg1 hasShelf:(char)arg2;

@end

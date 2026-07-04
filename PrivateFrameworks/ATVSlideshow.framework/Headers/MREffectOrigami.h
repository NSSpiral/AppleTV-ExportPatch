/* Runtime dump - MREffectOrigami
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectOrigami : MREffect
{
    NSArray * mPatchworkAtBeginning;
    NSArray * mPatchworkAtEnd;
    NSMutableDictionary * mSprites;
    NSMutableArray * mSpriteKeysWatcher;
    NSArray * mAnimationTimeBounds;
    NSMutableArray * mItemInfos;
    double mDurationStretchFactor;
    MRImage * mBackColorImage;
    id mBackColorForImage;
    float mDescriptionAspectRatio;
    float mPixelUnit;
    char mIsOrigami2Effect;
    char mIsHorizontal;
    char mIsOriginallyHorizontal;
    MRCAMLBezierData * mBreakCurve;
    MROrigamiAnimationPath * mLittleSwing;
    MROrigamiAnimationPath * mBigSwing;
    MROrigamiAnimationPath * mSideSwing;
    MROrigamiAnimationPath * mThirdsSwingTop;
    MROrigamiAnimationPath * mThirdsSwingBottom;
    struct ? * mBreakInfos;
    unsigned int mTotalNumberOfFolds;
}

+ (void)initialize;
+ (NSObject *)customTimingWithEffectID:(NSString *)arg0 effectAttributes:(NSDictionary *)arg1 slideInformation:(NSDictionary *)arg2 textInformation:(NSDictionary *)arg3 inAspectRatio:(float)arg4;
+ (char)hasCustomTiming;

- (void)_unload;
- (void)_cleanup;
- (MREffectOrigami *)initWithEffectID:(NSString *)arg0;
- (void)setPhaseInDuration:(double)arg0 mainDuration:(double)arg1 phaseOutDuration:(double)arg2;
- (void)setPixelSize:(struct CGSize)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (id)patchworkAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)beginMorphingToAspectRatio:(float)arg0 withDuration:(double)arg1;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (void)_setupSwingTimings;
- (void)_cleanupSwingTimings;
- (char)_checkPanoramaAbsoluteSizeForImage:(UIImage *)arg0 inRect:(struct CGRect *)arg1;
- (char)_needsRenderingAtTime:(double)arg0 remainingStillDurationAfter:(double *)arg1;
- (void)renderFold4LeftAtTime:(double)arg0 andProgress:(float)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3 inRect:(struct CGRect)arg4 withAttributes:(struct CGSize)arg5;
- (void)renderStillAtTime:(double)arg0 andProgress:(float)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3 inRect:(struct CGRect)arg4 withAttributes:(struct CGSize)arg5;
- (void)_setupBreakInfos:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderFallAtTime:(double)arg0 andProgress:(float)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3 inRect:(struct CGRect)arg4 withAttributes:(struct CGSize)arg5;
- (void)renderFallBreakAtTime:(double)arg0 andProgress:(float)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3 inRect:(struct CGRect)arg4 withAttributes:(struct CGSize)arg5;
- (void)renderFall2AtTime:(double)arg0 andProgress:(float)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3 inRect:(struct CGRect)arg4 withAttributes:(struct CGSize)arg5;
- (void)renderBreakAtTime:(double)arg0 andProgress:(float)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3 inRect:(struct CGRect)arg4 withAttributes:(struct CGSize)arg5;
- (void)renderFlipLeftAtTime:(double)arg0 andProgress:(float)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3 inRect:(struct CGRect)arg4 withAttributes:(struct CGSize)arg5;
- (void)renderFlipDownAtTime:(double)arg0 andProgress:(float)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3 inRect:(struct CGRect)arg4 withAttributes:(struct CGSize)arg5;
- (void)renderFoldLeftAtTime:(double)arg0 andProgress:(float)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3 inRect:(struct CGRect)arg4 withAttributes:(struct CGSize)arg5;
- (void)renderFoldDownAtTime:(double)arg0 andProgress:(float)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3 inRect:(struct CGRect)arg4 withAttributes:(struct CGSize)arg5;
- (void)render1To3LeftAtTime:(double)arg0 andProgress:(float)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3 inRect:(struct CGRect)arg4 withAttributes:(struct CGSize)arg5;
- (void)render1To3DownAtTime:(double)arg0 andProgress:(float)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3 inRect:(struct CGRect)arg4 withAttributes:(struct CGSize)arg5;
- (void)renderFlipDiagonalAtTime:(double)arg0 andProgress:(float)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3 inRect:(struct CGRect)arg4 withAttributes:(struct CGSize)arg5;
- (void)renderUnfoldingFlowerAtTime:(double)arg0 andProgress:(float)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3 inRect:(struct CGRect)arg4 withAttributes:(struct CGSize)arg5;
- (void)_renderFallImage:(UIImage *)arg0 atProgress:(float)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3 inRect:(struct CGRect)arg4 withAttributes:(struct CGSize)arg5 :(id)arg6 :(id)arg7;
- (void)_renderFallBreakImage:(UIImage *)arg0 atProgress:(float)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3 inRect:(struct CGRect)arg4 withAttributes:(struct CGSize)arg5 :(id)arg6 :(id)arg7;
- (NSString *)_retainedByUserBackColorImageInContext:(NSObject *)arg0;
- (void)_setTargetSizeOfImageProviders;

@end

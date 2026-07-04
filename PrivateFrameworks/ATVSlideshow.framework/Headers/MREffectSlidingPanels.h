/* Runtime dump - MREffectSlidingPanels
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectSlidingPanels : MREffect
{
    MRTextRenderer * mTextRenderer;
    MRImage * mTextImage;
    struct CGContext * mCachedRenderedText;
    NSMutableDictionary * mSprites;
    NSDictionary * mBreakInformation;
    MRCroppingSprite * mTextSprite;
    struct CGSize mMaxTextSize;
    char mIsLoaded;
    NSArray * mCurrentInfo;
    char mHasBreak;
    struct CGSize mTextSize;
    char mFitMovies;
    MRCAMLBezierData * mEnterCurve;
    MRCAMLBezierData * mExitCurve;
}

- (void)_unload;
- (MREffectSlidingPanels *)init;
- (void)_cleanup;
- (void)setAttributes:(NSDictionary *)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)_loadForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)beginMorphingToAspectRatio:(float)arg0 withDuration:(double)arg1;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (struct CGSize)_maxSizeForTextElement:(NSObject *)arg0;
- (int)_maxLinesForTextElement:(NSObject *)arg0;
- (void)_applySizeScripts:(id)arg0;
- (struct CGSize)_sizeForBreakAspectRatio:(float)arg0 size:(struct CGSize)arg1 inContext:(NSObject *)arg2;
- (void)computeAnimationForTime:(double)arg0 direction:(TDThemeDirection *)arg1 rect:(struct CGRect *)arg2 justification:(struct CGSize)arg3;

@end

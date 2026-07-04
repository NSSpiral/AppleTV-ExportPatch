/* Runtime dump - MREffectReflectionsTitle
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectReflectionsTitle : MREffect
{
    NSMutableDictionary * mSprites;
    char mFlipped;
    char mSpeedUpRight;
    double mImageMain;
    double mTextMain;
    MRTextRenderer * mTextRenderer;
    MRTextRenderer * mWordRenderer;
    NSMutableArray * mWordImages;
    NSMutableArray * mWordFrames;
    NSMutableArray * mCachedRenderedWords;
    float mTextYOffset;
    struct CGSize mTextSize;
    struct CGSize mTextImageSize;
    MRImageProvider * mMaskProvider;
    MRImageProvider * mGroundShadowCenterProvider;
    MRImageProvider * mGroundShadowLeftProvider;
    MRImageProvider * mGroundShadowRightProvider;
    NSMutableDictionary * mBreakInformation;
    char mIsLoaded;
}

- (void)_unload;
- (void)_cleanup;
- (void)setAttributes:(NSDictionary *)arg0;
- (MREffectReflectionsTitle *)initWithEffectID:(NSString *)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)_loadForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (struct CGSize)_maxSizeForTextElement:(NSObject *)arg0;
- (int)_maxLinesForTextElement:(NSObject *)arg0;
- (void)_applySizeScripts:(float)arg0;
- (void)renderTextAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2 scale:(float)arg3;
- (void)render1SlideAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2 scale:(float)arg3 tilt:(int)arg4 phaseOutType:(int)arg5 direction:(int)arg6;
- (void)renderKey:(NSString *)arg0 size:(struct CGSize)arg1 position:(struct CGPoint)arg2 yRot:(float)arg3 tX:(float)arg4 time:(double)arg5 inContext:(NSObject *)arg6 withArguments:(NSDictionary *)arg7 light:(char)arg8 shadow:(char)arg9;
- (void)cacheRenderedWords;

@end

/* Runtime dump - MREffectScrapbook
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectScrapbook : MREffect
{
    NSMutableDictionary * mFrameProviders;
    NSMutableDictionary * mSprites;
    char mIsLoaded;
    char mTitleAspectRatio;
    NSArray * mLayouts;
    MRTextRenderer * mTextRenderer0;
    MRImage * mTextImage0;
    NSMutableArray * mRectsToSubtract;
    char mIsMovieOnly;
    struct CGSize mTextSize;
    id mLocalMatrix;
}

+ (void)initialize;

- (void)_unload;
- (char)isOpaque;
- (void)_cleanup;
- (MREffectScrapbook *)initWithEffectID:(NSString *)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)_loadForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)isAlphaFriendly;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (struct CGSize)_maxSizeForTextElement:(NSObject *)arg0;
- (int)_maxLinesForTextElement:(NSObject *)arg0;
- (void)_drawBreakFrameInRect:(struct CGRect)arg0 frameWidth:(struct CGSize)arg1 time:(id)arg2 inContext:(float)arg3 withArguments:(double)arg4;
- (void)_drawBreakTwoPartFrame:(NSObject *)arg0 index:(int)arg1 rect:(struct CGRect)arg2 rotation:(struct CGSize)arg3 forcedAspectRatio:(id)arg4 time:(float)arg5 inContext:(float)arg6 withArguments:(double)arg7;
- (void)_drawBreakFrame:(NSObject *)arg0 index:(int)arg1 rect:(struct CGRect)arg2 rotation:(struct CGSize)arg3 forcedAspectRatio:(id)arg4 layout:(float)arg5 offset:(float)arg6 time:(id)arg7 inContext:(struct CGSize)arg8 withArguments:(double)arg9;
- (void)_drawTextWithInfo:(NSDictionary *)arg0 rect:(struct CGRect)arg1 zIndex:(struct CGSize)arg2 zRotation:(float)arg3 time:(int)arg4 inContext:(float)arg5 withArguments:(double)arg6;
- (void)_drawFrame:(NSObject *)arg0 info:(NSDictionary *)arg1 rect:(struct CGRect)arg2 stretch:(struct CGSize)arg3 zIndex:(struct CGSize)arg4 zRotation:(char)arg5 subtract:(int)arg6 key:(float)arg7 time:(id)arg8 inContext:(NSObject *)arg9 withArguments:(double)arg10;
- (void)_drawMask:(NSObject *)arg0 index:(int)arg1 rect:(struct CGRect)arg2 zIndex:(struct CGSize)arg3 zRotation:(float)arg4 subtract:(int)arg5 time:(float)arg6 inContext:(NSObject *)arg7 withArguments:(double)arg8;
- (void)_drawBlendedFrame:(NSObject *)arg0 info:(NSDictionary *)arg1 index:(int)arg2 rect:(struct CGRect)arg3 zIndex:(struct CGSize)arg4 zRotation:(float)arg5 subtract:(int)arg6 time:(float)arg7 inContext:(NSObject *)arg8 withArguments:(double)arg9;
- (void)_drawPortraitPanoBackgroundInRect:(struct CGRect)arg0 flippedRect:(struct CGSize)arg1 paperType:(NSObject *)arg2 subtract:(struct CGRect)arg3 inTime:(struct CGSize)arg4 inContext:(NSObject *)arg5 withArguments:(NSDictionary *)arg6;
- (void)_drawLandscapePanoBackgroundInRect:(struct CGRect)arg0 paperType:(struct CGSize)arg1 subtract:(NSArray *)arg2 inTime:(id)arg3 inContext:(NSObject *)arg4 withArguments:(double)arg5;
- (void)_drawFrame:(NSObject *)arg0 info:(NSDictionary *)arg1 index:(int)arg2 rect:(struct CGRect)arg3 zIndex:(struct CGSize)arg4 zRotation:(float)arg5 subtract:(int)arg6 time:(float)arg7 inContext:(NSObject *)arg8 withArguments:(double)arg9;

@end

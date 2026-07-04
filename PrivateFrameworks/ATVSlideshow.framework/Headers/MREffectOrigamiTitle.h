/* Runtime dump - MREffectOrigamiTitle
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectOrigamiTitle : MREffect
{
    MRTextRenderer * mText0Renderer;
    MRCroppingSprite * mText0Sprite;
    NSMutableArray * mText0Images;
    NSMutableArray * mText0Offsets;
    MRImage * mText0Image;
    id mLineWordCounts;
    NSMutableArray * mWordIndexForGlyph;
    NSArray * mPatchworkAtEnd;
    NSMutableDictionary * mSprites;
    struct CGSize mImageSize;
    int mWordCount;
    MRCAMLBezierData * mBreakCurve;
    MROrigamiAnimationPath * mBigSwing;
}

- (void)_unload;
- (MREffectOrigamiTitle *)init;
- (void)_cleanup;
- (char)isLoadedForTime:(double)arg0;
- (void)_loadForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (id)patchworkAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (struct CGSize)_maxSizeForTextElement:(NSObject *)arg0;
- (int)_maxLinesForTextElement:(NSObject *)arg0;
- (void)_setupSwingTimings;
- (void)_cleanupSwingTimings;
- (void)renderTitleEffectAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderTextEffectAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderFallImage:(UIImage *)arg0 atProgress:(float)arg1 strength:(float)arg2 inContext:(NSObject *)arg3 withArguments:(NSDictionary *)arg4 inRect:(struct CGRect)arg5 withAttributes:(struct CGSize)arg6 :(id)arg7 :(id)arg8;
- (void)renderStillImage:(UIImage *)arg0 withKey:(NSString *)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3 inRect:(struct CGRect)arg4 withAttributes:(struct CGSize)arg5;
- (void)renderFallBreakImage:(UIImage *)arg0 atProgress:(float)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3 inRect:(struct CGRect)arg4 withAttributes:(struct CGSize)arg5 :(id)arg6 :(id)arg7;
- (void)renderBreakImage:(UIImage *)arg0 atProgress:(float)arg1 withKey:(NSString *)arg2 inContext:(NSObject *)arg3 withArguments:(NSDictionary *)arg4 inRect:(struct CGRect)arg5 withAttributes:(struct CGSize)arg6;
- (void)renderFallImage:(UIImage *)arg0 atProgress:(float)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3 inRect:(struct CGRect)arg4 withAttributes:(struct CGSize)arg5 :(id)arg6 :(id)arg7;

@end

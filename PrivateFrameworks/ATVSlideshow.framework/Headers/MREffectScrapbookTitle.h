/* Runtime dump - MREffectScrapbookTitle
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectScrapbookTitle : MREffect
{
    id mImageProviders;
    NSMutableDictionary * mSprites;
    MRTextRenderer * mTextRenderer0;
    MRImage * mTextImage0;
    float mLocalTranslationX;
    float mLocalTranslationY;
}

- (void)_unload;
- (char)isOpaque;
- (void)_cleanup;
- (MREffectScrapbookTitle *)initWithEffectID:(NSString *)arg0;
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
- (void)renderEffectTitleAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderEffectTitle2AtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;

@end

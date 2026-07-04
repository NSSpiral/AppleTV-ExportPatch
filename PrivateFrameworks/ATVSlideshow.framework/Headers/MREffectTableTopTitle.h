/* Runtime dump - MREffectTableTopTitle
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectTableTopTitle : MREffect
{
    MRTextRenderer * mTextRenderer;
    MRImage * mImage;
    NSMutableArray * mLetterImages;
    NSMutableArray * mLetterFrames;
    NSMutableArray * mCachedRenderedLetters;
    struct CGContext * mCachedRenderedText;
    int mNumberOfLetters;
    MRCroppingSprite * mTextSprite;
    struct CGSize mSizeOfText;
}

- (void)_unload;
- (MREffectTableTopTitle *)init;
- (void)_cleanup;
- (char)isLoadedForTime:(double)arg0;
- (void)_loadForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (struct CGSize)_maxSizeForTextElement:(NSObject *)arg0;
- (int)_maxLinesForTextElement:(NSObject *)arg0;
- (void)cacheRenderedWords;

@end

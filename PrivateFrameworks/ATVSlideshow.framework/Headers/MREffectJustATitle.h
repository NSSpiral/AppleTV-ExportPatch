/* Runtime dump - MREffectJustATitle
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectJustATitle : MREffect
{
    MRTextRenderer * mTextRenderer0;
    MRTextRenderer * mTextRenderer1;
    MRImage * mImage0;
    MRImage * mImage1;
    MRCroppingSprite * mTextSprite0;
    MRCroppingSprite * mTextSprite1;
    struct CGRect mText0Rect;
    struct CGRect mText1Rect;
    char mTextWasUpdatedSinceLastRendering;
}

- (void)_unload;
- (MREffectJustATitle *)init;
- (void)setAttributes:(NSDictionary *)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)_loadForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (struct CGSize)_maxSizeForTextElement:(NSObject *)arg0;
- (int)_maxLinesForTextElement:(NSObject *)arg0;

@end

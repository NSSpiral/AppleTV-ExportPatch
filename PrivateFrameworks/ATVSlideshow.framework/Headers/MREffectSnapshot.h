/* Runtime dump - MREffectSnapshot
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectSnapshot : MREffect
{
    MRCroppingSprite * mSprite;
    MRTextRenderer * mTextRenderer;
    MRImage * mTextImage;
    MRCroppingSprite * mTextSprite;
    int mNumberOfLines;
    MRCAMLBezierData * mPortraitPanoPath;
}

+ (void)initialize;

- (void)_cleanup;
- (MREffectSnapshot *)initWithEffectID:(NSString *)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)_loadForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (struct CGSize)_maxSizeForTextElement:(NSObject *)arg0;
- (int)_maxLinesForTextElement:(NSObject *)arg0;

@end

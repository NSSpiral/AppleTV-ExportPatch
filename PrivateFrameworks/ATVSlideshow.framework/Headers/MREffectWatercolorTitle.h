/* Runtime dump - MREffectWatercolorTitle
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectWatercolorTitle : MREffect
{
    MRTextRenderer * mTextRenderer;
    MRImage * mTextImage;
    MRCroppingSprite * mTextSprite;
}

- (void)_cleanup;
- (MREffectWatercolorTitle *)initWithEffectID:(NSString *)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)_loadForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (struct CGSize)_maxSizeForTextElement:(NSObject *)arg0;
- (int)_maxLinesForTextElement:(NSObject *)arg0;

@end

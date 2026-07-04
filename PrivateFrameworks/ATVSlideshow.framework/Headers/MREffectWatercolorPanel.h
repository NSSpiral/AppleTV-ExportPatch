/* Runtime dump - MREffectWatercolorPanel
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectWatercolorPanel : MREffect
{
    NSMutableDictionary * mSprites;
    MRTextRenderer * mTextRenderer;
    MRImage * mTextImage;
    MRCroppingSprite * mTextSprite;
    NSMutableDictionary * mBreakInformation;
}

- (void)_unload;
- (void)_cleanup;
- (void)setAttributes:(NSDictionary *)arg0;
- (MREffectWatercolorPanel *)initWithEffectID:(NSString *)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)_loadForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (struct CGSize)_maxSizeForTextElement:(NSObject *)arg0;
- (int)_maxLinesForTextElement:(NSObject *)arg0;
- (void)renderEffect2AtTime:(double)arg0 isSquare:(char)arg1 inContext:(NSObject *)arg2 withArguments:(NSDictionary *)arg3;
- (void)renderEffect3AtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderEffectSubtitleAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderSubtitleBreakAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderBreakAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;

@end

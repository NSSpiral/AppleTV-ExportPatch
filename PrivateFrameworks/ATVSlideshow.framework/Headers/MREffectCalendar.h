/* Runtime dump - MREffectCalendar
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectCalendar : MREffect
{
    MRTextRenderer * mTextRenderer;
    MRImage * mTextImage;
    struct CGSize mStride;
    struct CGSize mImageSize;
    struct CGSize mTextSize;
    struct CGPoint mBaseImagePosition;
    struct CGPoint mBaseTextPosition;
    unsigned char mFirstDayWeekday;
    unsigned char mNumberOfDays;
    char mTextWasUpdatedSinceLastRendering;
}

- (void)_unload;
- (MREffectCalendar *)init;
- (void)setAttributes:(NSDictionary *)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)_loadForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;

@end

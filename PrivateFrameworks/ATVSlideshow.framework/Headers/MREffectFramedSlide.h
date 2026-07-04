/* Runtime dump - MREffectFramedSlide
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectFramedSlide : MREffect
{
    MRCroppingSprite * mSprite;
    char mHasInnerRect;
    char mHasOuterRect;
    char mIsPlayable;
    char mIsPlaying;
    char mIsPressed;
}

+ (void)initialize;

- (MREffectFramedSlide *)init;
- (char)isOpaque;
- (void)_cleanup;
- (void)setAttributes:(NSDictionary *)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)isNative3D;
- (void)setLiveAttributes:(NSDictionary *)arg0;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (void)_renderImage:(UIImage *)arg0 withFrame:(struct CGRect)arg1 atTime:(double)arg2 inContext:(NSObject *)arg3 withArguments:(NSDictionary *)arg4;

@end

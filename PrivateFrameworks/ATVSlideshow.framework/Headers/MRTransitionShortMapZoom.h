/* Runtime dump - MRTransitionShortMapZoom
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRTransitionShortMapZoom : MRTransition
{
    MRImageProvider * mGradientProvider;
    MRImageProvider * mPinProvider;
    MRImageProvider * mYellowPinProvider;
    MRImageProvider * mRedPinProvider;
    MRImageProvider * mBoxShadowSmall;
}

- (void)_cleanup;
- (void)setAttributes:(NSDictionary *)arg0;
- (MRTransitionShortMapZoom *)initWithTransitionID:(NSString *)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)drawSortedPins:(id)arg0 providers:(NSArray *)arg1 attributes:(NSDictionary *)arg2 offset:(struct CGPoint)arg3 outro:(char)arg4 atTime:(double)arg5 inContext:(NSObject *)arg6 withArguments:(NSDictionary *)arg7;
- (void)unload;

@end

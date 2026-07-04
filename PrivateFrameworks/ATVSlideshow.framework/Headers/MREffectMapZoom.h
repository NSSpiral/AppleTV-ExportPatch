/* Runtime dump - MREffectMapZoom
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectMapZoom : MREffect
{
    NSMutableArray * mTileProviders;
    MRImageProvider * mGradientProvider;
}

- (void)_unload;
- (void)_cleanup;
- (MREffectMapZoom *)initWithEffectID:(NSString *)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;

@end

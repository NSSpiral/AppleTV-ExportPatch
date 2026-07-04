/* Runtime dump - MREffectWatercolorBackground
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectWatercolorBackground : MREffect
{
    MRImageProvider * mPlasmaProvider;
}

- (void)_unload;
- (void)_cleanup;
- (void)setAttributes:(NSDictionary *)arg0;
- (MREffectWatercolorBackground *)initWithEffectID:(NSString *)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;

@end

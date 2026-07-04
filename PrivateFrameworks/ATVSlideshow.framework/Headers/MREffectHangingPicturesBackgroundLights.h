/* Runtime dump - MREffectHangingPicturesBackgroundLights
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectHangingPicturesBackgroundLights : MREffect
{
    MRImageProvider * mBackgroundImageProvider;
    MRImageProvider * mBokehImageProvider;
}

- (void)_unload;
- (void)_cleanup;
- (MREffectHangingPicturesBackgroundLights *)initWithEffectID:(NSString *)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;

@end

/* Runtime dump - MREffectBackgroundImage
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectBackgroundImage : MREffect
{
    MRImageProvider * mImageProvider;
    NSString * mClampingMode;
}

- (void)_unload;
- (void)_cleanup;
- (MREffectBackgroundImage *)initWithEffectID:(NSString *)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)setAssetPath:(NSString *)arg0;
- (NSString *)assetPath;

@end

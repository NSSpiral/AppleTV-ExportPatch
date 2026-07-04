/* Runtime dump - MREffectHangingPicturesBackgroundStars
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectHangingPicturesBackgroundStars : MREffect
{
    struct ? * mStars;
    float * mStarsVertices;
    float * mStarsTexCoords;
    float * mStarsAttributes;
    MRImageProvider * mBackgroundImageProvider;
    MRImageProvider * mStarImageProvider;
}

+ (void)initialize;

- (void)_unload;
- (void)_cleanup;
- (MREffectHangingPicturesBackgroundStars *)initWithEffectID:(NSString *)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)_initStars;

@end

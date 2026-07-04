/* Runtime dump - MREffectStretchableSlide
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectStretchableSlide : MREffect
{
    struct CGRect mSpriteInnerRect;
    struct CGRect mImageInnerRect;
    char mDontDrawInner;
}

- (char)isOpaque;
- (void)setAttributes:(NSDictionary *)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)isNative3D;

@end

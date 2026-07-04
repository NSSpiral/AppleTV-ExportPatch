/* Runtime dump - MRTransitionFlatPageFlip
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRTransitionFlatPageFlip : MRTransition
{
    id mCurves;
    MRImageProvider * mPortraitShadow;
}

- (void)cleanup;
- (MRTransitionFlatPageFlip *)initWithTransitionID:(NSString *)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)unload;

@end

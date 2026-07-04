/* Runtime dump - MRTransitionRotate
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRTransitionRotate : MRTransition
{
    MRImageProvider * mBoxShadowBig;
}

- (void)_cleanup;
- (MRTransitionRotate *)initWithTransitionID:(NSString *)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)unload;

@end

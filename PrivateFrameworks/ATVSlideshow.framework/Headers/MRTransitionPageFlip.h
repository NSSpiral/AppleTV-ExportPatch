/* Runtime dump - MRTransitionPageFlip
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRTransitionPageFlip : MRTransition
{
    struct ? * mMesh;
}

- (void)setAttributes:(NSDictionary *)arg0;
- (void)cleanup;
- (MRTransitionPageFlip *)initWithTransitionID:(NSString *)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)releaseByTransitioner:(id)arg0;
- (void)buildMesh;

@end

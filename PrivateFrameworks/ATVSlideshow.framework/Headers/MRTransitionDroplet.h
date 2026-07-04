/* Runtime dump - MRTransitionDroplet
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRTransitionDroplet : MRTransition
{
    float mAmplitude;
    char mUseLighting;
}

- (MRTransitionDroplet *)initWithTransitionID:(NSString *)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;

@end

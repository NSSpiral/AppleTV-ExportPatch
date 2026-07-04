/* Runtime dump - MREffectDotProgress
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectDotProgress : MREffect
{
    short _selectedDotIndex;
    short _countOfDots;
}

- (void)setAttributes:(NSDictionary *)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)isNative3D;

@end

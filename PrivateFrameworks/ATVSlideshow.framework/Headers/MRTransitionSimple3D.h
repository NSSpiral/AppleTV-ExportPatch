/* Runtime dump - MRTransitionSimple3D
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRTransitionSimple3D : MRTransition
{
    unsigned long mSubtype;
    unsigned long mDirection;
}

+ (void)initialize;

- (void)setAttributes:(NSDictionary *)arg0;
- (MRTransitionSimple3D *)initWithTransitionID:(NSString *)arg0;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (id)retainedByUserRenderedImageAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;

@end

/* Runtime dump - MRAnimationManager
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRAnimationManager : NSObject
{
    NSMutableDictionary * mAnimations;
}

+ (void)initialize;
+ (void)loadAnimationManagerWithPaths:(NSArray *)arg0;
+ (MRAnimationManager *)sharedManager;

- (void)dealloc;
- (void)cleanup;
- (MRAnimationManager *)initWithPaths:(NSArray *)arg0;

@end

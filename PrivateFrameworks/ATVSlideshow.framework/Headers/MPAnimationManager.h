/* Runtime dump - MPAnimationManager
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPAnimationManager : NSObject
{
    NSMutableDictionary * mAnimations;
    NSMutableDictionary * mAnimationSets;
}

+ (void)releaseSharedManager;
+ (void)loadAnimationManagerWithPaths:(NSArray *)arg0;
+ (MPAnimationManager *)sharedManager;

- (void)dealloc;
- (NSSet *)animationDescriptionForAnimationSetID:(NSSet *)arg0;
- (NSObject *)animationDescriptionForAnimationID:(NSObject *)arg0;
- (MPAnimationManager *)initWithPaths:(NSArray *)arg0;

@end

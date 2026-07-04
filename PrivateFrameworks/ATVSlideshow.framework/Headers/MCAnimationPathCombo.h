/* Runtime dump - MCAnimationPathCombo
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCAnimationPathCombo : MCAnimationPath <MCAnimationPathSupport>
{
    NSMutableSet * mAnimationPaths;
    char mIsSnapshot;
    NSString * mCombineOperation;
}

@property (readonly) NSSet * animationPaths;
@property (readonly) unsigned int countOfAnimationPaths;
@property (copy) NSString * combineOperation;

- (void)addAnimationPath:(NSString *)arg0;
- (void)removeAllAnimationPaths;
- (NSSet *)animationPaths;
- (void)removeAnimationPathForKey:(NSString *)arg0;
- (NSString *)animationPathForKey:(NSString *)arg0;
- (void)setCombineOperation:(NSString *)arg0;
- (void)demolish;
- (unsigned int)countOfAnimationPaths;
- (NSString *)combineOperation;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (char)isSnapshot;
- (MCAnimationPathCombo *)initWithImprint:(NSDictionary *)arg0;
- (void)initAnimationPathsWithImprints:(id)arg0;
- (void)demolishAnimationPaths;
- (NSArray *)imprintsForAnimationPaths;
- (NSDictionary *)imprint;

@end

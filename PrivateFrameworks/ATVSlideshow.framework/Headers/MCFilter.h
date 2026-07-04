/* Runtime dump - MCFilter
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCFilter : MCObject <MCAnimationPathSupport>
{
    NSMutableDictionary * mAttributes;
    NSMutableSet * mAnimationPaths;
    unsigned int mIndex;
    NSString * mFilterID;
}

@property (readonly) NSSet * animationPaths;
@property (readonly) unsigned int countOfAnimationPaths;
@property (copy) NSString * filterID;
@property (copy) NSDictionary * attributes;
@property (nonatomic) unsigned int index;

- (unsigned int)index;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (NSDictionary *)attributes;
- (void)setAttributes:(NSDictionary *)arg0;
- (void)setIndex:(unsigned int)arg0;
- (void)addAnimationPath:(NSString *)arg0;
- (void)removeAllAnimationPaths;
- (NSSet *)animationPaths;
- (void)removeAnimationPathForKey:(NSString *)arg0;
- (NSString *)animationPathForKey:(NSString *)arg0;
- (void)demolish;
- (NSString *)filterID;
- (void)setFilterID:(NSString *)arg0;
- (unsigned int)countOfAnimationPaths;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (void)initAnimationPathsWithImprints:(id)arg0;
- (void)demolishAnimationPaths;
- (NSArray *)imprintsForAnimationPaths;
- (MCFilter *)initWithImprint:(NSDictionary *)arg0 andMontage:(NSObject *)arg1;
- (void)setAttribute:(char *)arg0 forKey:(NSString *)arg1;
- (NSDictionary *)imprint;
- (NSString *)attributeForKey:(NSString *)arg0;

@end

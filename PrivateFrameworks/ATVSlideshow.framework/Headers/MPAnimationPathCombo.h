/* Runtime dump - MPAnimationPathCombo
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPAnimationPathCombo : MPAnimationPath <MPAnimationSupport>
{
    NSMutableDictionary * _animationPaths;
    NSString * _operation;
    NSString * _key;
}

@property (copy, nonatomic) NSString * key;
@property (copy, nonatomic) NSString * operation;

+ (NSString *)animationPath;

- (void)dealloc;
- (MPAnimationPathCombo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPAnimationPathCombo *)init;
- (NSString *)operation;
- (void)setOperation:(NSString *)arg0;
- (NSString *)key;
- (MPAnimationPathCombo *)copyWithZone:(struct _NSZone *)arg0;
- (void)setKey:(NSString *)arg0;
- (void)cleanup;
- (NSMutableDictionary *)animationPaths;
- (void)copyAnimationPaths:(NSArray *)arg0;
- (void)removeAnimationPathForKey:(NSString *)arg0;
- (NSString *)animationPathForKey:(NSString *)arg0;
- (void)setAnimationPath:(NSString *)arg0 forKey:(NSString *)arg1;
- (void)setAnimationPath:(NSString *)arg0;

@end

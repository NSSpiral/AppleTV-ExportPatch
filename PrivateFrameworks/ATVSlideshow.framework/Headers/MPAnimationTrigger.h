/* Runtime dump - MPAnimationTrigger
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPAnimationTrigger : MPAction
{
    NSString * _animationKey;
    NSMutableDictionary * _animationAttributes;
}

@property (copy, nonatomic) NSString * animationKey;
@property (copy, nonatomic) NSDictionary * animationAttributes;

+ (MPAnimationTrigger *)animationTrigger;

- (void)dealloc;
- (MPAnimationTrigger *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPAnimationTrigger *)init;
- (MPAnimationTrigger *)copyWithZone:(struct _NSZone *)arg0;
- (void)setAnimationAttributes:(NSDictionary *)arg0;
- (void)setAction:(MCAction *)arg0;
- (NSString *)animationKey;
- (void)setAnimationKey:(NSString *)arg0;
- (NSString *)animationAttributeForKey:(NSString *)arg0;
- (NSDictionary *)animationAttributes;

@end

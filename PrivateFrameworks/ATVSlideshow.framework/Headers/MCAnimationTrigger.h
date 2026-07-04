/* Runtime dump - MCAnimationTrigger
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCAnimationTrigger : MCAction
{
    NSMutableDictionary * _animationAttributes;
    NSString * _animationKey;
}

@property (copy) NSString * animationKey;
@property (copy, nonatomic) NSDictionary * animationAttributes;

+ (MCAnimationTrigger *)animationTriggerForTargetPlugObjectID:(NSObject *)arg0 withAnimationKey:(NSString *)arg1;

- (NSString *)description;
- (void)setAnimationAttributes:(NSDictionary *)arg0;
- (NSString *)animationKey;
- (void)setAnimationKey:(NSString *)arg0;
- (NSDictionary *)animationAttributes;
- (void)demolish;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCAnimationTrigger *)initWithImprint:(NSDictionary *)arg0;
- (NSDictionary *)imprint;

@end

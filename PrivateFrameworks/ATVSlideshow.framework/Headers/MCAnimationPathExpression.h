/* Runtime dump - MCAnimationPathExpression
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCAnimationPathExpression : MCAnimationPath
{
    NSString * mExpression;
}

@property (copy) NSString * expression;

+ (NSString *)animationPathWithKey:(NSString *)arg0 andExpression:(NSObject *)arg1;

- (NSString *)expression;
- (void)demolish;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCAnimationPathExpression *)initWithImprint:(NSDictionary *)arg0;
- (NSDictionary *)imprint;
- (void)setExpression:(NSString *)arg0;

@end

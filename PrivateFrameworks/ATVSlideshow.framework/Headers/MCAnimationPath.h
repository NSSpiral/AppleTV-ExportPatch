/* Runtime dump - MCAnimationPath
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCAnimationPath : MCObjectLight
{
    char mIsTriggered;
    NSString * mKey;
}

@property (copy) NSString * key;
@property (nonatomic) char isTriggered;

+ (MCAnimationPath *)animationPathWithKey:(NSString *)arg0;

- (NSString *)key;
- (void)setKey:(NSString *)arg0;
- (char)isTriggered;
- (void)setIsTriggered:(char)arg0;
- (void)demolish;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCAnimationPath *)initWithImprint:(NSDictionary *)arg0;
- (NSDictionary *)imprint;

@end

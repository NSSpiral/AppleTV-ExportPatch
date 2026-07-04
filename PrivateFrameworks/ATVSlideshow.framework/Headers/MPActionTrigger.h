/* Runtime dump - MPActionTrigger
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPActionTrigger : MPAction
{
    NSString * _actionKey;
}

@property (copy, nonatomic) NSString * actionKey;

+ (MPActionTrigger *)actionTrigger;

- (void)dealloc;
- (MPActionTrigger *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPActionTrigger *)init;
- (MPActionTrigger *)copyWithZone:(struct _NSZone *)arg0;
- (void)setAction:(MCAction *)arg0;
- (NSString *)actionKey;
- (void)setActionKey:(NSString *)arg0;

@end

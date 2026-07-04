/* Runtime dump - UIUserNotificationActionSettings
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIUserNotificationActionSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString * _category;
    NSDictionary * _actionsByContext;
}

@property (copy, nonatomic) NSString * category;
@property (copy, nonatomic) NSDictionary * actionsByContext;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (UIUserNotificationActionSettings *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setCategory:(NSString *)arg0;
- (NSString *)category;
- (NSArray *)actions;
- (UIUserNotificationActionSettings *)copyWithZone:(struct _NSZone *)arg0;
- (UIUserNotificationActionSettings *)initWithCategory:(NSString *)arg0 actionsByContext:(NSDictionary *)arg1;
- (NSString *)actionsForContext:(unsigned int)arg0;
- (unsigned int)_maximumActionsForContext:(unsigned int)arg0;
- (UIUserNotificationActionSettings *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)validatedSettings;
- (NSDictionary *)actionsByContext;
- (void)setActionsByContext:(NSDictionary *)arg0;

@end

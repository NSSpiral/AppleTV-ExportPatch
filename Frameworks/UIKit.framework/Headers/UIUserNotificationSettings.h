/* Runtime dump - UIUserNotificationSettings
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIUserNotificationSettings : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _types;
    NSSet * _categories;
}

@property (readonly, nonatomic) unsigned int types;
@property (readonly, copy, nonatomic) NSSet * categories;

+ (NSArray *)settingsForTypes:(unsigned int)arg0 categories:(NSSet *)arg1;
+ (char)supportsSecureCoding;
+ (NSArray *)settingsForUserNotificationTypes:(unsigned int)arg0 userNotificationActionSettings:(NSDictionary *)arg1;
+ (NSDictionary *)settingsForRegisteredSettings:(NSDictionary *)arg0 requestedSettings:(NSDictionary *)arg1;

- (void)dealloc;
- (UIUserNotificationSettings *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)types;
- (UIUserNotificationSettings *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)validatedSettings;
- (UIUserNotificationSettings *)initWithUserNotificationTypes:(unsigned int)arg0 userNotificationActionSettings:(NSDictionary *)arg1;
- (UIUserNotificationSettings *)initWithTypes:(unsigned int)arg0 categories:(NSSet *)arg1;
- (NSSet *)categories;
- (char)mayPresentUserNotificationOfType:(unsigned int)arg0;
- (unsigned int)allowedUserNotificationTypes;
- (NSDictionary *)userNotificationActionSettings;

@end

/* Runtime dump - UIUserNotificationCategory
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIUserNotificationCategory : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString * _identifier;
    NSDictionary * _actionsByContext;
}

@property (copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) NSDictionary * actionsByContext;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (UIUserNotificationCategory *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSArray *)actions;
- (NSString *)identifier;
- (UIUserNotificationCategory *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (NSString *)actionsForContext:(unsigned int)arg0;
- (unsigned int)_maximumActionsForContext:(unsigned int)arg0;
- (UIUserNotificationCategory *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)actionsByContext;
- (void)setActionsByContext:(NSDictionary *)arg0;
- (UIUserNotificationCategory *)initWithIdentifier:(NSString *)arg0 actionsByContext:(NSDictionary *)arg1;
- (NSString *)validatedCategory;

@end

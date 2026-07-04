/* Runtime dump - UIUserNotificationAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIUserNotificationAction : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    char _authenticationRequired;
    char _destructive;
    NSString * _activationModeString;
    NSString * _identifier;
    NSString * _title;
    unsigned int _activationMode;
}

@property (copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) NSString * title;
@property (nonatomic) unsigned int activationMode;
@property (nonatomic) char authenticationRequired;
@property (nonatomic) char destructive;
@property (readonly, nonatomic) NSString * activationModeString;

+ (char)supportsSecureCoding;
+ (NSString *)actionWithIdentifier:(NSString *)arg0 title:(NSString *)arg1 activationMode:(unsigned int)arg2 isAuthenticationRequired:(char)arg3;

- (void)dealloc;
- (UIUserNotificationAction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setTitle:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)identifier;
- (NSString *)title;
- (UIUserNotificationAction *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (NSObject *)validatedAction;
- (UIUserNotificationAction *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (UIUserNotificationAction *)initWithIdentifier:(NSString *)arg0 title:(NSString *)arg1 activationMode:(unsigned int)arg2 isAuthenticationRequired:(char)arg3 isDestructive:(char)arg4;
- (unsigned int)activationMode;
- (char)isAuthenticationRequired;
- (char)isDestructive;
- (NSString *)activationModeString;
- (void)setActivationMode:(unsigned int)arg0;
- (void)setAuthenticationRequired:(char)arg0;
- (void)setDestructive:(char)arg0;

@end

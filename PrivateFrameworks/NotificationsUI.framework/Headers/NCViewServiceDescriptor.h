/* Runtime dump - NCViewServiceDescriptor
 * Image: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
 */

@interface NCViewServiceDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    NSString * _viewControllerClassName;
    NSString * _bundleIdentifier;
}

@property (readonly, copy, nonatomic) NSString * viewControllerClassName;
@property (readonly, copy, nonatomic) NSString * bundleIdentifier;

+ (char)supportsSecureCoding;
+ (NSString *)descriptorWithViewControllerClassName:(NSString *)arg0 bundleIdentifier:(NSString *)arg1;

- (void)dealloc;
- (NCViewServiceDescriptor *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)bundleIdentifier;
- (char)isValid;
- (NCViewServiceDescriptor *)copyWithZone:(struct _NSZone *)arg0;
- (NCViewServiceDescriptor *)initWithViewControllerClassName:(NSString *)arg0 bundleIdentifier:(NSString *)arg1;
- (NSString *)viewControllerClassName;

@end

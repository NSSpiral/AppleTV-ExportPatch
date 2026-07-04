/* Runtime dump - UIRuntimeAccessibilityConfiguration
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRuntimeAccessibilityConfiguration : NSObject
{
    NSString * accessibilityConfigurationHint;
    NSString * accessibilityConfigurationLabel;
    NSNumber * accessibilityConfigurationTraits;
    NSNumber * isAccessibilityConfigurationElement;
    NSObject * object;
}

@property (retain, nonatomic) NSString * accessibilityConfigurationHint;
@property (retain, nonatomic) NSString * accessibilityConfigurationLabel;
@property (retain, nonatomic) NSNumber * accessibilityConfigurationTraits;
@property (retain, nonatomic) NSNumber * isAccessibilityConfigurationElement;
@property (retain, nonatomic) NSObject * object;

- (void)dealloc;
- (UIRuntimeAccessibilityConfiguration *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSObject *)object;
- (void)setObject:(NSObject *)arg0;
- (void)applyConfiguration;
- (UIRuntimeAccessibilityConfiguration *)initWithObject:(NSObject *)arg0 label:(NSString *)arg1 hint:(id)arg2 traits:(NSArray *)arg3 andIsAccessibilityElement:(NSObject *)arg4;
- (NSString *)accessibilityConfigurationHint;
- (void)setAccessibilityConfigurationHint:(NSString *)arg0;
- (NSString *)accessibilityConfigurationLabel;
- (void)setAccessibilityConfigurationLabel:(NSString *)arg0;
- (NSNumber *)accessibilityConfigurationTraits;
- (void)setAccessibilityConfigurationTraits:(NSNumber *)arg0;
- (NSNumber *)isAccessibilityConfigurationElement;
- (void)setIsAccessibilityConfigurationElement:(NSNumber *)arg0;

@end

/* Runtime dump - MCProfileWarning
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCProfileWarning : NSObject <NSSecureCoding>
{
    NSString * _localizedTitle;
    NSString * _localizedBody;
    char _isLongForm;
}

@property (retain, nonatomic) NSString * localizedTitle;
@property (retain, nonatomic) NSString * localizedBody;
@property (nonatomic) char isLongForm;

+ (char)supportsSecureCoding;
+ (NSString *)warningWithLocalizedTitle:(NSString *)arg0 localizedBody:(NSString *)arg1 isLongForm:(char)arg2;

- (void)setLocalizedTitle:(NSString *)arg0;
- (MCProfileWarning *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSString *)localizedTitle;
- (MCProfileWarning *)initWithLocalizedTitle:(NSString *)arg0 localizedBody:(NSString *)arg1 isLongForm:(char)arg2;
- (NSString *)localizedBody;
- (void)setLocalizedBody:(NSString *)arg0;
- (char)isLongForm;
- (void)setIsLongForm:(char)arg0;

@end

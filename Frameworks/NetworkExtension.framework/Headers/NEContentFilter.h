/* Runtime dump - NEContentFilter
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEContentFilter : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    char _enabled;
    NEContentFilterPlugin * _plugin;
}

@property char enabled;
@property (copy) NEContentFilterPlugin * plugin;

+ (char)supportsSecureCoding;

- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (NEContentFilter *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (NEContentFilter *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPlugin:(NEContentFilterPlugin *)arg0;
- (NEContentFilterPlugin *)plugin;
- (void).cxx_destruct;

@end

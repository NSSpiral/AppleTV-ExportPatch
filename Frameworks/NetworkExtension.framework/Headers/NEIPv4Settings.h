/* Runtime dump - NEIPv4Settings
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIPv4Settings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    char _overridePrimary;
    int _configMethod;
    NSString * _address;
    NSString * _subnetMask;
    NSString * _router;
}

@property int configMethod;
@property (copy) NSString * address;
@property (copy) NSString * subnetMask;
@property (copy) NSString * router;
@property char overridePrimary;

+ (char)supportsSecureCoding;

- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (NSDictionary *)copyLegacyDictionary;
- (NEIPv4Settings *)initFromLegacyDictionary:(NSDictionary *)arg0;
- (int)configMethod;
- (NSString *)router;
- (char)overridePrimary;
- (void)setConfigMethod:(int)arg0;
- (void)setRouter:(NSString *)arg0;
- (void)setOverridePrimary:(char)arg0;
- (NEIPv4Settings *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NEIPv4Settings *)init;
- (NEIPv4Settings *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSString *)subnetMask;
- (void)setSubnetMask:(NSString *)arg0;
- (void)setAddress:(NSString *)arg0;
- (NSString *)address;

@end

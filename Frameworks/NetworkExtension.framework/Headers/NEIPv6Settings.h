/* Runtime dump - NEIPv6Settings
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIPv6Settings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    int _configMethod;
    NSString * _router;
    NSString * _address;
    int _prefixLength;
}

@property int configMethod;
@property (copy) NSString * router;
@property (copy) NSString * address;
@property int prefixLength;

+ (char)supportsSecureCoding;

- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (NSDictionary *)copyLegacyDictionary;
- (NEIPv6Settings *)initFromLegacyDictionary:(NSDictionary *)arg0;
- (int)configMethod;
- (NSString *)router;
- (void)setConfigMethod:(int)arg0;
- (void)setRouter:(NSString *)arg0;
- (int)prefixLength;
- (void)setPrefixLength:(int)arg0;
- (NEIPv6Settings *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NEIPv6Settings *)init;
- (NEIPv6Settings *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setAddress:(NSString *)arg0;
- (NSString *)address;

@end

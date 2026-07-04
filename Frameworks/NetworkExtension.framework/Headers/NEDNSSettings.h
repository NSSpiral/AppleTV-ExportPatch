/* Runtime dump - NEDNSSettings
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEDNSSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    NSArray * _servers;
    NSArray * _searchDomains;
}

@property (readonly) NSArray * servers;
@property (readonly) NSArray * searchDomains;

+ (char)supportsSecureCoding;

- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (NSDictionary *)copyLegacyDictionary;
- (NEDNSSettings *)initFromLegacyDictionary:(NSDictionary *)arg0;
- (NSArray *)servers;
- (NSArray *)searchDomains;
- (NEDNSSettings *)initWithServers:(NSArray *)arg0 andSearchDomains:(id)arg1;
- (NEDNSSettings *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NEDNSSettings *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end

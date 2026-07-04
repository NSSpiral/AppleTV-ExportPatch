/* Runtime dump - NEVPNAppRuleExecutable
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNAppRuleExecutable : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    char _requiresDomains;
    NSString * _matchSigningIdentifier;
    NSString * _matchDesignatedRequirement;
    NSString * _matchPath;
}

@property (readonly) NSString * matchSigningIdentifier;
@property (readonly) NSString * matchDesignatedRequirement;
@property (copy) NSString * matchPath;
@property (readonly) char requiresDomains;

+ (char)supportsSecureCoding;

- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (NSDictionary *)copyLegacyDictionary;
- (NEVPNAppRuleExecutable *)initFromLegacyDictionary:(NSDictionary *)arg0;
- (NSString *)matchSigningIdentifier;
- (NEVPNAppRuleExecutable *)initWithSigningIdentifier:(NSString *)arg0 andDesignatedRequirement:(id)arg1;
- (void)setMatchPath:(NSString *)arg0;
- (char)requiresDomains;
- (NSString *)matchDesignatedRequirement;
- (NSString *)matchPath;
- (NEVPNAppRuleExecutable *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NEVPNAppRuleExecutable *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end

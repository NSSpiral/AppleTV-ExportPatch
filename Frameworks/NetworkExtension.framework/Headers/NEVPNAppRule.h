/* Runtime dump - NEVPNAppRule
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNAppRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    NSString * _identifier;
    NSArray * _matchExecutables;
    NSArray * _matchDomains;
    NSArray * _matchAccountIdentifiers;
}

@property (readonly) NSString * identifier;
@property (copy) NSArray * matchExecutables;
@property (copy) NSArray * matchDomains;
@property (copy) NSArray * matchAccountIdentifiers;

+ (char)supportsSecureCoding;

- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (NSDictionary *)copyLegacyDictionary;
- (NEVPNAppRule *)initFromLegacyDictionary:(NSDictionary *)arg0;
- (NSArray *)matchDomains;
- (char)overlapsWithRule:(NSObject *)arg0;
- (NSArray *)matchExecutables;
- (void)setMatchExecutables:(NSArray *)arg0;
- (void)setMatchAccountIdentifiers:(NSArray *)arg0;
- (void)setMatchDomains:(NSArray *)arg0;
- (NSArray *)matchAccountIdentifiers;
- (NEVPNAppRule *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)identifier;
- (NEVPNAppRule *)copyWithZone:(struct _NSZone *)arg0;
- (NEVPNAppRule *)initWithIdentifier:(NSString *)arg0;
- (void).cxx_destruct;

@end

/* Runtime dump - NEEvaluateConnectionRule
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEEvaluateConnectionRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    int _action;
    NSArray * _matchDomains;
    NSArray * _useDNSServers;
    NSURL * _probeURL;
}

@property (readonly) int action;
@property (readonly) NSArray * matchDomains;
@property (copy) NSArray * useDNSServers;
@property (copy) NSURL * probeURL;

+ (char)supportsSecureCoding;

- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (NSDictionary *)copyLegacyDictionary;
- (NEEvaluateConnectionRule *)initFromLegacyDictionary:(NSDictionary *)arg0;
- (NSURL *)probeURL;
- (void)setProbeURL:(NSURL *)arg0;
- (NEEvaluateConnectionRule *)initWithMatchDomains:(NSArray *)arg0 andAction:(int)arg1;
- (NSArray *)matchDomains;
- (NSArray *)useDNSServers;
- (void)setUseDNSServers:(NSArray *)arg0;
- (NEEvaluateConnectionRule *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (int)action;
- (NEEvaluateConnectionRule *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end

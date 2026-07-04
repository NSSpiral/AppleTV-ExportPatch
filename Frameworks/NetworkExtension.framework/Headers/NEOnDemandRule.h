/* Runtime dump - NEOnDemandRule
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEOnDemandRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    int _action;
    NSArray * _DNSSearchDomainMatch;
    NSArray * _DNSServerAddressMatch;
    int _interfaceTypeMatch;
    NSArray * _SSIDMatch;
    NSURL * _probeURL;
}

@property (readonly) int action;
@property (copy) NSArray * DNSSearchDomainMatch;
@property (copy) NSArray * DNSServerAddressMatch;
@property int interfaceTypeMatch;
@property (copy) NSArray * SSIDMatch;
@property (copy) NSURL * probeURL;

+ (NSDictionary *)createOnDemandRulesFromLegacyDictionary:(NSDictionary *)arg0;
+ (char)supportsSecureCoding;

- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (NSDictionary *)copyLegacyDictionary;
- (NEOnDemandRule *)initFromLegacyDictionary:(NSDictionary *)arg0;
- (NSArray *)DNSSearchDomainMatch;
- (NSArray *)DNSServerAddressMatch;
- (int)interfaceTypeMatch;
- (NSArray *)SSIDMatch;
- (NSURL *)probeURL;
- (void)setDNSSearchDomainMatch:(id)arg0;
- (void)setDNSServerAddressMatch:(id)arg0;
- (void)setInterfaceTypeMatch:(int)arg0;
- (void)setSSIDMatch:(id)arg0;
- (void)setProbeURL:(NSURL *)arg0;
- (NEOnDemandRule *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (int)action;
- (NEOnDemandRule *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NEOnDemandRule *)initWithAction:(int)arg0;

@end

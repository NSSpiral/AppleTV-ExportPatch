/* Runtime dump - NEVPNProtocolPPP
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNProtocolPPP : NEVPNProtocol
{
    char _verboseLoggingEnabled;
    int _authenticationMethod;
    NEDNSSettings * _DNSSettings;
    NEIPv4Settings * _IPv4Settings;
    NEIPv6Settings * _IPv6Settings;
}

@property int authenticationMethod;
@property char verboseLoggingEnabled;
@property (copy) NEDNSSettings * DNSSettings;
@property (copy) NEIPv4Settings * IPv4Settings;
@property (copy) NEIPv6Settings * IPv6Settings;

+ (char)supportsSecureCoding;

- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (NSDictionary *)copyLegacyDictionary;
- (char)setServiceProtocolsInService:(struct __SCNetworkService *)arg0;
- (char)updateWithServiceProtocolsFromService:(struct __SCNetworkService *)arg0;
- (NEVPNProtocolPPP *)initFromLegacyDictionary:(NSDictionary *)arg0;
- (void)setAuthenticationMethod:(int)arg0;
- (void)setDNSSettings:(NSDictionary *)arg0;
- (void)setVerboseLoggingEnabled:(char)arg0;
- (void)setIPv4Settings:(NSDictionary *)arg0;
- (void)setIPv6Settings:(NSDictionary *)arg0;
- (char)verboseLoggingEnabled;
- (NEDNSSettings *)DNSSettings;
- (NEIPv4Settings *)IPv4Settings;
- (NEIPv6Settings *)IPv6Settings;
- (NEVPNProtocolPPP *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NEVPNProtocolPPP *)copyWithZone:(struct _NSZone *)arg0;
- (NEVPNProtocolPPP *)initWithType:(int)arg0;
- (int)authenticationMethod;
- (void).cxx_destruct;

@end

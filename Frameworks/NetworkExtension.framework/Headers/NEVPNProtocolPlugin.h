/* Runtime dump - NEVPNProtocolPlugin
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNProtocolPlugin : NEVPNProtocol
{
    NSString * _pluginType;
    NSString * _authenticationPluginType;
    NSDictionary * _vendorConfiguration;
    NSDictionary * _vendorInfo;
    int _authenticationMethod;
    int _reassertTimeout;
}

@property (readonly) NSString * pluginType;
@property (copy) NSString * authenticationPluginType;
@property (copy) NSDictionary * vendorConfiguration;
@property (copy) NSDictionary * vendorInfo;
@property int authenticationMethod;
@property int reassertTimeout;

+ (char)supportsSecureCoding;

- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (NSDictionary *)copyLegacyDictionary;
- (char)setServiceProtocolsInService:(struct __SCNetworkService *)arg0;
- (char)updateWithServiceProtocolsFromService:(struct __SCNetworkService *)arg0;
- (struct __SCNetworkInterface *)createInterface;
- (NSString *)pluginType;
- (NEVPNProtocolPlugin *)initWithPluginType:(NSString *)arg0;
- (NEVPNProtocolPlugin *)initFromLegacyDictionary:(NSDictionary *)arg0;
- (void)copyPasswordsFromKeychainInDomain:(int)arg0;
- (void)setPluginType:(NSString *)arg0;
- (NSDictionary *)vendorConfiguration;
- (void)setVendorConfiguration:(NSDictionary *)arg0;
- (void)setAuthenticationMethod:(int)arg0;
- (void)initFromLegacyDictionaryExtra:(id)arg0;
- (void)setAuthenticationPluginType:(NSString *)arg0;
- (NSDictionary *)vendorInfo;
- (NSString *)authenticationPluginType;
- (int)reassertTimeout;
- (void)setVendorInfo:(NSDictionary *)arg0;
- (void)setReassertTimeout:(int)arg0;
- (NEVPNProtocolPlugin *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NEVPNProtocolPlugin *)init;
- (NEVPNProtocolPlugin *)copyWithZone:(struct _NSZone *)arg0;
- (int)authenticationMethod;
- (void).cxx_destruct;

@end

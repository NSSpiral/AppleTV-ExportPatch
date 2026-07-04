/* Runtime dump - NEContentFilterPlugin
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEContentFilterPlugin : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    char _filterBrowsers;
    char _filterSockets;
    NSString * _pluginType;
    NSDictionary * _vendorConfiguration;
    NSString * _serverAddress;
    NSString * _username;
    NSString * _organization;
    NSData * _passwordReference;
    NSData * _identityReference;
}

@property (readonly) NSString * pluginType;
@property char filterBrowsers;
@property char filterSockets;
@property (copy) NSDictionary * vendorConfiguration;
@property (copy) NSString * serverAddress;
@property (copy) NSString * username;
@property (copy) NSString * organization;
@property (copy) NSData * passwordReference;
@property (copy) NSData * identityReference;

+ (char)supportsSecureCoding;

- (NSString *)serverAddress;
- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (NSString *)pluginType;
- (NEContentFilterPlugin *)initWithPluginType:(NSString *)arg0;
- (NSData *)passwordReference;
- (void)setServerAddress:(NSString *)arg0;
- (void)setPasswordReference:(NSData *)arg0;
- (void)setIdentityReference:(NSData *)arg0;
- (NSData *)identityReference;
- (void)setPluginType:(NSString *)arg0;
- (NSDictionary *)vendorConfiguration;
- (void)setVendorConfiguration:(NSDictionary *)arg0;
- (NEContentFilterPlugin *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NEContentFilterPlugin *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setUsername:(NSString *)arg0;
- (NSString *)organization;
- (void)setOrganization:(NSString *)arg0;
- (char)filterBrowsers;
- (void)setFilterBrowsers:(char)arg0;
- (char)filterSockets;
- (void)setFilterSockets:(char)arg0;
- (NSString *)username;

@end

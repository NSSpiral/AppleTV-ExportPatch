/* Runtime dump - NEAOVPN
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEAOVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    char _enabled;
    char _toggleEnabled;
    char _allowCaptiveWebSheet;
    char _allowAllCaptiveNetworkPlugins;
    NSDictionary * _interfaceProtocolMapping;
    NSDictionary * _serviceExceptions;
    NSDictionary * _allowedCaptiveNetworkPlugins;
}

@property char enabled;
@property char toggleEnabled;
@property char allowCaptiveWebSheet;
@property char allowAllCaptiveNetworkPlugins;
@property (copy) NSDictionary * interfaceProtocolMapping;
@property (copy) NSDictionary * serviceExceptions;
@property (copy) NSDictionary * allowedCaptiveNetworkPlugins;

+ (char)supportsSecureCoding;

- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (NSDictionary *)interfaceProtocolMapping;
- (void)setToggleEnabled:(char)arg0;
- (void)setAllowCaptiveWebSheet:(char)arg0;
- (void)setAllowAllCaptiveNetworkPlugins:(char)arg0;
- (void)setServiceExceptions:(NSDictionary *)arg0;
- (void)setAllowedCaptiveNetworkPlugins:(NSDictionary *)arg0;
- (void)setInterfaceProtocolMapping:(NSDictionary *)arg0;
- (char)isToggleEnabled;
- (char)isAllowCaptiveWebSheet;
- (char)isAllowAllCaptiveNetworkPlugins;
- (NSDictionary *)serviceExceptions;
- (NSDictionary *)allowedCaptiveNetworkPlugins;
- (NEAOVPN *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (NEAOVPN *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end

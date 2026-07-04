/* Runtime dump - NEProxySettings
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEProxySettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    char _autoProxyDiscovery;
    char _autoProxyConfigurationEnabled;
    char _HTTPEnabled;
    char _HTTPSEnabled;
    char _FTPEnabled;
    char _SOCKSEnabled;
    char _RTSPEnabled;
    char _gopherEnabled;
    char _excludeSimpleHostnames;
    char _usePassiveFTP;
    NSURL * _proxyAutoConfigURL;
    NSString * _proxyAutoConfigJavaScript;
    NEProxyServer * _HTTPServer;
    NEProxyServer * _HTTPSServer;
    NEProxyServer * _FTPServer;
    NEProxyServer * _SOCKSServer;
    NEProxyServer * _RTSPServer;
    NEProxyServer * _gopherServer;
    NSArray * _exceptionList;
    NSArray * _supplementalMatchDomains;
    NSArray * _supplementalMatchOrders;
}

@property char autoProxyDiscovery;
@property char autoProxyConfigurationEnabled;
@property (copy) NSURL * proxyAutoConfigURL;
@property (copy) NSString * proxyAutoConfigJavaScript;
@property char HTTPEnabled;
@property (copy) NEProxyServer * HTTPServer;
@property char HTTPSEnabled;
@property (copy) NEProxyServer * HTTPSServer;
@property char FTPEnabled;
@property (copy) NEProxyServer * FTPServer;
@property char SOCKSEnabled;
@property (copy) NEProxyServer * SOCKSServer;
@property char RTSPEnabled;
@property (copy) NEProxyServer * RTSPServer;
@property char gopherEnabled;
@property (copy) NEProxyServer * gopherServer;
@property char excludeSimpleHostnames;
@property (copy) NSArray * exceptionList;
@property char usePassiveFTP;
@property (copy) NSArray * supplementalMatchDomains;
@property (copy) NSArray * supplementalMatchOrders;

+ (char)supportsSecureCoding;

- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (NSDictionary *)copyLegacyDictionary;
- (NEProxySettings *)initFromLegacyDictionary:(NSDictionary *)arg0;
- (void)syncWithKeychain;
- (void)removeKeychainItems;
- (NEProxyServer *)HTTPServer;
- (NEProxyServer *)HTTPSServer;
- (char)autoProxyDiscovery;
- (char)autoProxyConfigurationEnabled;
- (NSURL *)proxyAutoConfigURL;
- (NSString *)proxyAutoConfigJavaScript;
- (char)HTTPEnabled;
- (char)HTTPSEnabled;
- (char)FTPEnabled;
- (NEProxyServer *)FTPServer;
- (char)SOCKSEnabled;
- (NEProxyServer *)SOCKSServer;
- (char)RTSPEnabled;
- (NEProxyServer *)RTSPServer;
- (char)gopherEnabled;
- (NEProxyServer *)gopherServer;
- (char)excludeSimpleHostnames;
- (NSArray *)exceptionList;
- (char)usePassiveFTP;
- (NSArray *)supplementalMatchDomains;
- (NSArray *)supplementalMatchOrders;
- (void)setAutoProxyDiscovery:(char)arg0;
- (void)setAutoProxyConfigurationEnabled:(char)arg0;
- (void)setProxyAutoConfigURL:(NSURL *)arg0;
- (void)setProxyAutoConfigJavaScript:(NSString *)arg0;
- (void)setHTTPEnabled:(char)arg0;
- (void)setHTTPServer:(NSObject *)arg0;
- (void)setHTTPSEnabled:(char)arg0;
- (void)setHTTPSServer:(NSObject *)arg0;
- (void)setFTPEnabled:(char)arg0;
- (void)setFTPServer:(NSObject *)arg0;
- (void)setSOCKSEnabled:(char)arg0;
- (void)setSOCKSServer:(NSObject *)arg0;
- (void)setRTSPEnabled:(char)arg0;
- (void)setRTSPServer:(NSObject *)arg0;
- (void)setGopherEnabled:(char)arg0;
- (void)setGopherServer:(NEProxyServer *)arg0;
- (void)setExcludeSimpleHostnames:(char)arg0;
- (void)setExceptionList:(NSArray *)arg0;
- (void)setUsePassiveFTP:(char)arg0;
- (void)setSupplementalMatchDomains:(NSArray *)arg0;
- (void)setSupplementalMatchOrders:(NSArray *)arg0;
- (NEProxySettings *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NEProxySettings *)init;
- (NEProxySettings *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end

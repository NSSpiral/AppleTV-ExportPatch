/* Runtime dump - MCGlobalHTTPProxyPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCGlobalHTTPProxyPayload : MCPayload
{
    char _proxyPACFallbackAllowed;
    char _proxyCaptiveLoginAllowed;
    int _proxyType;
    NSString * _proxyServer;
    NSNumber * _proxyServerPort;
    NSString * _proxyUsername;
    NSString * _proxyPassword;
    NSString * _proxyPACURLString;
    NSString * _credentialUUID;
    NSNumber * _proxyPACFallbackAllowedNum;
    NSNumber * _proxyCaptiveLoginAllowedNum;
}

@property (nonatomic) int proxyType;
@property (retain, nonatomic) NSString * proxyServer;
@property (retain, nonatomic) NSNumber * proxyServerPort;
@property (retain, nonatomic) NSString * proxyUsername;
@property (retain, nonatomic) NSString * proxyPassword;
@property (retain, nonatomic) NSString * proxyPACURLString;
@property (nonatomic) char proxyPACFallbackAllowed;
@property (nonatomic) char proxyCaptiveLoginAllowed;
@property (retain, nonatomic) NSString * credentialUUID;
@property (retain, nonatomic) NSNumber * proxyPACFallbackAllowedNum;
@property (retain, nonatomic) NSNumber * proxyCaptiveLoginAllowedNum;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (NSString *)description;
- (NSString *)subtitle2Label;
- (void).cxx_destruct;
- (MCGlobalHTTPProxyPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSString *)subtitle1Label;
- (NSString *)subtitle1Description;
- (NSArray *)payloadDescriptionKeyValueSections;
- (NSArray *)installationWarnings;
- (NSString *)subtitle2Description;
- (NSString *)proxyServer;
- (void)setProxyServer:(NSString *)arg0;
- (void)setProxyType:(int)arg0;
- (NSNumber *)proxyServerPort;
- (NSString *)proxyUsername;
- (NSString *)proxyPassword;
- (NSString *)proxyPACURLString;
- (char)proxyPACFallbackAllowed;
- (void)setProxyServerPort:(NSNumber *)arg0;
- (void)setProxyUsername:(NSString *)arg0;
- (void)setProxyPassword:(NSString *)arg0;
- (void)setProxyPACURLString:(NSString *)arg0;
- (void)setProxyPACFallbackAllowed:(char)arg0;
- (NSString *)credentialUUID;
- (void)setCredentialUUID:(NSString *)arg0;
- (NSNumber *)proxyPACFallbackAllowedNum;
- (void)setProxyPACFallbackAllowedNum:(NSNumber *)arg0;
- (char)proxyCaptiveLoginAllowed;
- (NSNumber *)proxyCaptiveLoginAllowedNum;
- (void)setProxyCaptiveLoginAllowed:(char)arg0;
- (void)setProxyCaptiveLoginAllowedNum:(NSNumber *)arg0;
- (int)proxyType;

@end

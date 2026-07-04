/* Runtime dump - MCVPNPayloadBase
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCVPNPayloadBase : MCPayload
{
    NSMutableDictionary * _configurationDictionary;
    NSString * _serviceName;
    NSString * _vpnType;
    <NEProfilePayloadBaseDelegate> * _nePayloadBase;
    NSString * _userNameKey;
    NSString * _passwordKey;
    NSString * _proxyUserNameKey;
    NSString * _proxyPasswordKey;
    NSString * _sharedSecretKey;
    NSString * _pinKey;
}

@property (retain, nonatomic) NSMutableDictionary * configurationDictionary;
@property (copy, nonatomic) NSString * serviceName;
@property (copy, nonatomic) NSString * vpnType;
@property (retain, nonatomic) <NEProfilePayloadBaseDelegate> * nePayloadBase;
@property (retain, nonatomic) NSString * userNameKey;
@property (retain, nonatomic) NSString * passwordKey;
@property (retain, nonatomic) NSString * proxyUserNameKey;
@property (retain, nonatomic) NSString * proxyPasswordKey;
@property (retain, nonatomic) NSString * sharedSecretKey;
@property (retain, nonatomic) NSString * pinKey;

+ (MCVPNPayloadBase *)NEAlwaysOnVPNPayloadBaseDelegateWithConfigurationDict:(id)arg0;
+ (MCVPNPayloadBase *)NEVPNPayloadBaseDelegateWithConfigurationDict:(id)arg0;

- (NSString *)description;
- (void).cxx_destruct;
- (void)setServiceName:(NSString *)arg0;
- (NSString *)serviceName;
- (MCVPNPayloadBase *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSArray *)payloadDescriptionKeyValueSections;
- (NSArray *)installationWarnings;
- (NSString *)vpnType;
- (NSMutableDictionary *)configurationDictionary;
- (void)setConfigurationDictionary:(NSMutableDictionary *)arg0;
- (void)setVpnType:(NSString *)arg0;
- (<NEProfilePayloadBaseDelegate> *)nePayloadBase;
- (void)setNePayloadBase:(<NEProfilePayloadBaseDelegate> *)arg0;
- (NSString *)userNameKey;
- (void)setUserNameKey:(NSString *)arg0;
- (NSString *)passwordKey;
- (void)setPasswordKey:(NSString *)arg0;
- (NSString *)proxyUserNameKey;
- (void)setProxyUserNameKey:(NSString *)arg0;
- (NSString *)proxyPasswordKey;
- (void)setProxyPasswordKey:(NSString *)arg0;
- (NSString *)sharedSecretKey;
- (void)setSharedSecretKey:(NSString *)arg0;
- (NSString *)pinKey;
- (void)setPinKey:(NSString *)arg0;

@end

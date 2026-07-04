/* Runtime dump - NEVPNProtocol
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNProtocol : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSCopying, NSSecureCoding>
{
    NSData * _passwordReference;
    char _disconnectOnSleep;
    char _disconnectOnWake;
    char _identityDataImported;
    char _disconnectOnIdle;
    char _disconnectOnUserSwitch;
    char _disconnectOnLogout;
    NSString * _serverAddress;
    NSString * _username;
    NSString * _identityDataPassword;
    NSUUID * _identifier;
    int _type;
    int _disconnectOnWakeTimeout;
    NEKeychainItem * _passwordKeychainItem;
    NSString * _passwordEncryption;
    NEProxySettings * _proxySettings;
    NSData * _identityDataInternal;
    NSData * _identityDataHash;
    int _disconnectOnIdleTimeout;
    int _keychainDomain;
    NEIdentityKeychainItem * _identity;
}

@property (copy) NSString * serverAddress;
@property (copy) NSString * username;
@property (copy) NSData * passwordReference;
@property (copy) NSData * identityReference;
@property (copy) NSData * identityData;
@property (copy) NSString * identityDataPassword;
@property char disconnectOnSleep;
@property (copy) NSUUID * identifier;
@property (readonly) int type;
@property char disconnectOnWake;
@property int disconnectOnWakeTimeout;
@property (copy) NEKeychainItem * passwordKeychainItem;
@property (copy) NSString * passwordEncryption;
@property (copy) NEProxySettings * proxySettings;
@property (copy) NSData * identityReferenceInternal;
@property (copy) NSData * identityDataInternal;
@property char identityDataImported;
@property (copy) NSData * identityDataHash;
@property char disconnectOnIdle;
@property int disconnectOnIdleTimeout;
@property char disconnectOnUserSwitch;
@property char disconnectOnLogout;
@property int keychainDomain;
@property (retain) NEIdentityKeychainItem * identity;

+ (char)supportsSecureCoding;

- (NSString *)serverAddress;
- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (void)setDisconnectOnWake:(char)arg0;
- (NSDictionary *)copyLegacyDictionary;
- (void)syncWithKeychainInDomain:(int)arg0 configuration:(NSDictionary *)arg1 suffix:(NSString *)arg2;
- (void)removeKeychainItemsInDomain:(int)arg0;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences *)arg0;
- (char)setServiceProtocolsInService:(struct __SCNetworkService *)arg0;
- (char)updateWithServiceProtocolsFromService:(struct __SCNetworkService *)arg0;
- (struct __SCNetworkInterface *)createInterface;
- (NSData *)passwordReference;
- (NEKeychainItem *)passwordKeychainItem;
- (NSString *)passwordEncryption;
- (NSData *)identityDataInternal;
- (NSString *)identityDataPassword;
- (char)identityDataImported;
- (NSData *)identityDataHash;
- (NEProxySettings *)proxySettings;
- (char)disconnectOnIdle;
- (int)disconnectOnIdleTimeout;
- (char)disconnectOnSleep;
- (char)disconnectOnWake;
- (int)disconnectOnWakeTimeout;
- (NEVPNProtocol *)initWithProtocolIdentifier:(NSString *)arg0;
- (void)setServerAddress:(NSString *)arg0;
- (void)setPasswordReference:(NSData *)arg0;
- (void)setIdentityDataInternal:(NSData *)arg0;
- (void)setIdentityDataPassword:(NSString *)arg0;
- (void)setIdentityDataImported:(char)arg0;
- (void)setIdentityDataHash:(NSData *)arg0;
- (void)setProxySettings:(NEProxySettings *)arg0;
- (void)setDisconnectOnIdle:(char)arg0;
- (void)setDisconnectOnIdleTimeout:(int)arg0;
- (void)setDisconnectOnSleep:(char)arg0;
- (void)setDisconnectOnWakeTimeout:(int)arg0;
- (void)setPasswordKeychainItem:(NEKeychainItem *)arg0;
- (void)setPasswordEncryption:(NSString *)arg0;
- (int)keychainDomain;
- (void)setKeychainDomain:(int)arg0;
- (id)type2str;
- (void)addDisconnectOptions:(NSDictionary *)arg0;
- (void)initDisconnectOptions:(NSDictionary *)arg0;
- (NEVPNProtocol *)initFromLegacyDictionary:(NSDictionary *)arg0;
- (void)setIdentityReferenceInternal:(NSData *)arg0;
- (NSData *)identityReferenceInternal;
- (void)syncWithKeychainInDomainCommon:(int)arg0;
- (void)setIdentityReference:(NSData *)arg0;
- (NSData *)identityReference;
- (void)setIdentityData:(NSData *)arg0;
- (NSData *)identityData;
- (void)copyPasswordsFromKeychainInDomain:(int)arg0;
- (char)disconnectOnUserSwitch;
- (void)setDisconnectOnUserSwitch:(char)arg0;
- (char)disconnectOnLogout;
- (void)setDisconnectOnLogout:(char)arg0;
- (NEVPNProtocol *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSUUID *)identifier;
- (int)type;
- (NEVPNProtocol *)copyWithZone:(struct _NSZone *)arg0;
- (NEVPNProtocol *)initWithType:(int)arg0;
- (void)setIdentifier:(NSUUID *)arg0;
- (void).cxx_destruct;
- (void)setUsername:(NSString *)arg0;
- (void)setIdentity:(NEIdentityKeychainItem *)arg0;
- (NEIdentityKeychainItem *)identity;
- (NSString *)username;

@end

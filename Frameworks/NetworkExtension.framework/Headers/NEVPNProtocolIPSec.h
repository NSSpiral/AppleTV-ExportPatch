/* Runtime dump - NEVPNProtocolIPSec
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNProtocolIPSec : NEVPNProtocol
{
    NSData * _sharedSecretReference;
    char _useExtendedAuthentication;
    int _authenticationMethod;
    NSString * _localIdentifier;
    NSString * _remoteIdentifier;
    NEDNSSettings * _DNSSettings;
    NEKeychainItem * _sharedSecretKeychainItem;
    NSArray * _legacyProposals;
    NSArray * _legacyExchangeMode;
}

@property int authenticationMethod;
@property char useExtendedAuthentication;
@property (copy) NSData * sharedSecretReference;
@property (copy) NSString * localIdentifier;
@property (copy) NSString * remoteIdentifier;
@property (copy) NEDNSSettings * DNSSettings;
@property (copy) NEKeychainItem * sharedSecretKeychainItem;
@property (copy) NSArray * legacyProposals;
@property (copy) NSArray * legacyExchangeMode;

+ (char)supportsSecureCoding;

- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (void)setUseExtendedAuthentication:(char)arg0;
- (NSDictionary *)copyLegacyDictionary;
- (char)useExtendedAuthentication;
- (NEKeychainItem *)sharedSecretKeychainItem;
- (void)setSharedSecretKeychainItem:(NEKeychainItem *)arg0;
- (void)setLocalIdentifier:(NSString *)arg0;
- (void)syncWithKeychainInDomain:(int)arg0 configuration:(NSDictionary *)arg1 suffix:(NSString *)arg2;
- (void)removeKeychainItemsInDomain:(int)arg0;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences *)arg0;
- (char)setServiceProtocolsInService:(struct __SCNetworkService *)arg0;
- (char)updateWithServiceProtocolsFromService:(struct __SCNetworkService *)arg0;
- (void)setSharedSecretReference:(NSData *)arg0;
- (NSData *)sharedSecretReference;
- (struct __SCNetworkInterface *)createInterface;
- (NEVPNProtocolIPSec *)initFromLegacyDictionary:(NSDictionary *)arg0;
- (void)setAuthenticationMethod:(int)arg0;
- (void)setDNSSettings:(NSDictionary *)arg0;
- (void)setLegacyExchangeMode:(NSArray *)arg0;
- (void)setLegacyProposals:(NSArray *)arg0;
- (void)setRemoteIdentifier:(NSString *)arg0;
- (NEDNSSettings *)DNSSettings;
- (NSString *)remoteIdentifier;
- (NSArray *)legacyProposals;
- (NSArray *)legacyExchangeMode;
- (NEVPNProtocolIPSec *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NEVPNProtocolIPSec *)init;
- (NEVPNProtocolIPSec *)copyWithZone:(struct _NSZone *)arg0;
- (NEVPNProtocolIPSec *)initWithType:(int)arg0;
- (int)authenticationMethod;
- (void).cxx_destruct;
- (NSString *)localIdentifier;

@end

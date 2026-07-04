/* Runtime dump - NEVPNProtocolL2TP
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNProtocolL2TP : NEVPNProtocolPPP
{
    char _machineIdentityDataImported;
    int _machineAuthenticationMethod;
    NEKeychainItem * _sharedSecretKeychainItem;
    NSString * _localIdentifier;
    NSData * _machineIdentityDataInternal;
    NEIdentityKeychainItem * _machineIdentity;
}

@property int machineAuthenticationMethod;
@property (copy) NSData * sharedSecretReference;
@property (copy) NEKeychainItem * sharedSecretKeychainItem;
@property (copy) NSData * machineIdentityReference;
@property (copy) NSString * localIdentifier;
@property (copy) NSData * machineIdentityDataInternal;
@property char machineIdentityDataImported;
@property (retain) NEIdentityKeychainItem * machineIdentity;

+ (char)supportsSecureCoding;

- (char)checkValidityAndCollectErrors:(NSArray *)arg0;
- (NSString *)descriptionWithIndent:(int)arg0;
- (int)machineAuthenticationMethod;
- (NEKeychainItem *)sharedSecretKeychainItem;
- (NEIdentityKeychainItem *)machineIdentity;
- (NSData *)machineIdentityDataInternal;
- (char)machineIdentityDataImported;
- (void)setMachineAuthenticationMethod:(int)arg0;
- (void)setSharedSecretKeychainItem:(NEKeychainItem *)arg0;
- (void)setMachineIdentity:(NEIdentityKeychainItem *)arg0;
- (void)setMachineIdentityDataInternal:(NSData *)arg0;
- (void)setMachineIdentityDataImported:(char)arg0;
- (void)setLocalIdentifier:(NSString *)arg0;
- (void)syncWithKeychainInDomain:(int)arg0 configuration:(NSDictionary *)arg1 suffix:(NSString *)arg2;
- (void)removeKeychainItemsInDomain:(int)arg0;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences *)arg0;
- (NSData *)machineIdentityReference;
- (void)setMachineIdentityReference:(NSData *)arg0;
- (char)setServiceProtocolsInService:(struct __SCNetworkService *)arg0;
- (NSDictionary *)copyLegacyIPSecDictionary;
- (char)updateWithServiceProtocolsFromService:(struct __SCNetworkService *)arg0;
- (void)setIPSecSettingsFromLegacyDictionary:(NSDictionary *)arg0;
- (void)setSharedSecretReference:(NSData *)arg0;
- (NSData *)sharedSecretReference;
- (struct __SCNetworkInterface *)createInterface;
- (NEVPNProtocolL2TP *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NEVPNProtocolL2TP *)init;
- (NEVPNProtocolL2TP *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSString *)localIdentifier;

@end

/* Runtime dump - HMDResidentUser
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentUser : HMDUser
{
    NSString * _displayName;
    char _primaryResidentDevice;
    NSString * _deviceIdentifier;
    unsigned int _configurationState;
}

@property (readonly, copy, nonatomic) NSString * deviceIdentifier;
@property (nonatomic) unsigned int configurationState;
@property (readonly, nonatomic) char primaryResidentDevice;

+ (char)supportsSecureCoding;

- (HMDResidentUser *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSString *)displayName;
- (void)setDisplayName:(NSString *)arg0;
- (NSString *)deviceIdentifier;
- (void)setDeviceIdentifier:(NSString *)arg0;
- (unsigned int)configurationState;
- (char)mergeFromUser:(id)arg0;
- (void)setConfigurationState:(unsigned int)arg0;
- (HMDResidentUser *)initWithUserID:(NSString *)arg0 pairingUsername:(NSString *)arg1 publicKey:(NSString *)arg2 displayName:(NSString *)arg3 deviceIdentifier:(NSString *)arg4 configurationState:(unsigned int)arg5;
- (NSString *)encodingRemoteDisplayName;
- (char)isPrimaryResidentDevice;
- (char)configureWithIDSDevice:(NSObject *)arg0;

@end

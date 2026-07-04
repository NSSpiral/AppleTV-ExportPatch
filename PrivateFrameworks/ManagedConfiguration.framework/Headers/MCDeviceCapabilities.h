/* Runtime dump - MCDeviceCapabilities
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCDeviceCapabilities : NSObject
{
    char _supportsBlockLevelEncryption;
    char _supportsFileLevelEncryption;
}

@property (readonly, nonatomic) char supportsBlockLevelEncryption;
@property (readonly, nonatomic) char supportsFileLevelEncryption;

+ (MCDeviceCapabilities *)currentDevice;

- (MCDeviceCapabilities *)init;
- (char)_mediaDiskIsEncrypted;
- (char)validateCapabilitiesRequiredByRestrictions:(id)arg0 localizedIncompatibilityMessage:(NSString *)arg1 outError:(id *)arg2;
- (char)supportsBlockLevelEncryption;
- (char)supportsFileLevelEncryption;

@end

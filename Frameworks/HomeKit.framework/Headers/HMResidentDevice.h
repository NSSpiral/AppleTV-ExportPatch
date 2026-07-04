/* Runtime dump - HMResidentDevice
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMResidentDevice : HMUser
{
    unsigned int _configurationState;
    NSString * _deviceIdentifier;
}

@property (nonatomic) unsigned int configurationState;
@property (retain, nonatomic) NSString * deviceIdentifier;

+ (char)supportsSecureCoding;

- (HMResidentDevice *)initWithName:(NSString *)arg0 uuid:(NSUUID *)arg1 deviceIdentifier:(NSString *)arg2 home:(id)arg3;
- (HMResidentDevice *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSString *)deviceIdentifier;
- (void)setDeviceIdentifier:(NSString *)arg0;
- (unsigned int)configurationState;
- (void)setConfigurationState:(unsigned int)arg0;
- (char)_mergeWithNewObject:(char)arg0 operations:(HMObjectMergeOperations *)arg1;

@end

/* Runtime dump - SFRemoteHotspotDevice
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFRemoteHotspotDevice : NSObject <NSSecureCoding>
{
    unsigned char _networkType;
    char _hasDuplicates;
    NSString * _deviceName;
    NSString * _deviceIdentifier;
    NSNumber * _batteryLife;
    NSNumber * _signalStrength;
}

@property (copy) NSString * deviceName;
@property (copy) NSString * deviceIdentifier;
@property (retain) NSNumber * batteryLife;
@property unsigned char networkType;
@property (retain) NSNumber * signalStrength;
@property char hasDuplicates;

+ (char)supportsSecureCoding;

- (unsigned char)networkType;
- (void)dealloc;
- (SFRemoteHotspotDevice *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)deviceIdentifier;
- (void)setDeviceIdentifier:(NSString *)arg0;
- (NSString *)deviceName;
- (NSNumber *)signalStrength;
- (void)setSignalStrength:(NSNumber *)arg0;
- (NSNumber *)batteryLife;
- (void)setBatteryLife:(NSNumber *)arg0;
- (char)hasDuplicates;
- (void)setHasDuplicates:(char)arg0;
- (void)setDeviceName:(NSString *)arg0;
- (void)setNetworkType:(unsigned char)arg0;

@end

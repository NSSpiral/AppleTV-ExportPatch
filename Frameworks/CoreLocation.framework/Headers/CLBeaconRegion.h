/* Runtime dump - CLBeaconRegion
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLBeaconRegion : CLRegion
{
    NSUUID * _proximityUUID;
    NSNumber * _major;
    NSNumber * _minor;
}

@property (readonly, nonatomic) NSUUID * proximityUUID;
@property (readonly, nonatomic) NSNumber * major;
@property (readonly, nonatomic) NSNumber * minor;
@property (nonatomic) char notifyEntryStateOnDisplay;

+ (CLBeaconRegion *)any;
+ (char)supportsSecureCoding;

- (CLBeaconRegion *)initWithClientRegion:(struct ?)arg0;
- (char)_measuredPowerForDevice;
- (id)peripheralDataWithMeasuredPower:(id)arg0;
- (char)notifyEntryStateOnDisplay;
- (void)setNotifyEntryStateOnDisplay:(char)arg0;
- (void)dealloc;
- (CLBeaconRegion *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CLBeaconRegion *)init;
- (NSString *)description;
- (CLBeaconRegion *)copyWithZone:(struct _NSZone *)arg0;
- (CLBeaconRegion *)initWithIdentifier:(NSString *)arg0;
- (NSNumber *)major;
- (NSNumber *)minor;
- (NSUUID *)proximityUUID;
- (CLBeaconRegion *)initWithProximityUUID:(NSUUID *)arg0 major:(unsigned short)arg1 minor:(unsigned short)arg2 identifier:(NSString *)arg3;
- (CLBeaconRegion *)initWithProximityUUID:(NSUUID *)arg0 major:(unsigned short)arg1 identifier:(NSString *)arg2;
- (CLBeaconRegion *)initWithProximityUUID:(NSUUID *)arg0 identifier:(NSString *)arg1;

@end

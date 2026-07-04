/* Runtime dump - CLBeacon
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLBeacon : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID * _proximityUUID;
    NSNumber * _major;
    NSNumber * _minor;
    int _proximity;
    int _rssi;
    double _accuracy;
}

@property (readonly, nonatomic) NSUUID * proximityUUID;
@property (readonly, nonatomic) NSNumber * major;
@property (readonly, nonatomic) NSNumber * minor;
@property (readonly, nonatomic) int proximity;
@property (readonly, nonatomic) double accuracy;
@property (readonly, nonatomic) int rssi;

+ (char)supportsSecureCoding;

- (CLBeacon *)initWithProximityUUID:(NSUUID *)arg0 major:(NSNumber *)arg1 minor:(NSNumber *)arg2 proximity:(int)arg3 accuracy:(double)arg4 rssi:(int)arg5;
- (int)proximity;
- (void)dealloc;
- (CLBeacon *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CLBeacon *)copyWithZone:(struct _NSZone *)arg0;
- (NSNumber *)major;
- (NSNumber *)minor;
- (NSUUID *)proximityUUID;
- (double)accuracy;
- (int)rssi;

@end

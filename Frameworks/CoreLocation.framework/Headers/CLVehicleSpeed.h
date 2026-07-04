/* Runtime dump - CLVehicleSpeed
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLVehicleSpeed : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
}

@property (readonly, nonatomic) double speed;
@property (readonly, nonatomic) NSDate * timestamp;

+ (char)supportsSecureCoding;

- (CLVehicleSpeed *)initWithClientVehicleSpeed:(struct ?)arg0;
- (void)dealloc;
- (CLVehicleSpeed *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSDate *)timestamp;
- (CLVehicleSpeed *)copyWithZone:(struct _NSZone *)arg0;
- (double)speed;
- (NSString *)shortDescription;

@end

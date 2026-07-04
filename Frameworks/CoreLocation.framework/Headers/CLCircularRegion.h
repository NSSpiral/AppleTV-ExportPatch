/* Runtime dump - CLCircularRegion
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLCircularRegion : CLRegion

@property (readonly, nonatomic) struct ? center;
@property (readonly, nonatomic) double radius;

+ (CLCircularRegion *)circularRegionFromMapRegion:(NSObject *)arg0;
+ (char)supportsSecureCoding;

- (CLCircularRegion *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CLCircularRegion *)copyWithZone:(struct _NSZone *)arg0;
- (struct ?)center;
- (double)radius;
- (char)containsCoordinate:(struct ?)arg0;
- (CLCircularRegion *)initWithCenter:(struct ?)arg0 radius:(double)arg1 identifier:(NSString *)arg2;

@end

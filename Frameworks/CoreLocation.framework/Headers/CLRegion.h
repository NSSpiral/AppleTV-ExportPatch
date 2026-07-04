/* Runtime dump - CLRegion
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLRegion : NSObject <NSCopying, NSSecureCoding>
{
    struct ? fRegion;
}

@property (readonly, nonatomic) struct ? center;
@property (readonly, nonatomic) double radius;
@property (readonly, copy, nonatomic) NSString * identifier;
@property (nonatomic) char notifyOnEntry;
@property (nonatomic) char notifyOnExit;
@property (readonly, nonatomic) struct ? clientRegion;

+ (char)supportsSecureCoding;

- (struct ?)clientRegion;
- (CLRegion *)initWithClientRegion:(struct ?)arg0;
- (CLRegion *)initCircularRegionWithCenter:(struct ?)arg0 radius:(double)arg1 identifier:(NSString *)arg2;
- (NSCoder *)_initWithCoder:(NSCoder *)arg0;
- (void)_encodeWithCoder:(NSCoder *)arg0;
- (void)dealloc;
- (CLRegion *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)identifier;
- (CLRegion *)copyWithZone:(struct _NSZone *)arg0;
- (struct ?)center;
- (CLRegion *)initWithIdentifier:(NSString *)arg0;
- (double)radius;
- (char)containsCoordinate:(struct ?)arg0;
- (char)notifyOnExit;
- (void)setNotifyOnExit:(char)arg0;
- (char)notifyOnEntry;
- (void)setNotifyOnEntry:(char)arg0;

@end

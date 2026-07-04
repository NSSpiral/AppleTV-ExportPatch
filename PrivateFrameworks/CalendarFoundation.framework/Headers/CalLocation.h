/* Runtime dump - CalLocation
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLocation : NSObject <NSSecureCoding>
{
    CLLocation * _location;
    NSString * _address;
    NSString * _title;
    NSString * _displayName;
    NSString * _abURLString;
    CLPlacemark * _placemark;
    char _isCurrentLocation;
    double _radius;
    NSString * _routeType;
    int _type;
}

@property (copy, nonatomic) CLLocation * location;
@property (copy) NSString * address;
@property (copy) NSString * title;
@property (copy) NSString * displayName;
@property (copy) NSString * abURLString;
@property (copy) NSString * routeType;
@property (retain) CLPlacemark * placemark;
@property (readonly, nonatomic) char isCurrentLocation;
@property int type;
@property (nonatomic) double radius;

+ (NSString *)fullDisplayStringWithTitle:(NSString *)arg0 address:(NSString *)arg1;
+ (int)routingModeEnumForCalRouteType:(NSObject *)arg0;
+ (char)supportsSecureCoding;
+ (CalLocation *)geoURLStringFromCoordinates:(id)arg0;
+ (NSString *)coordinatesFromGeoURLString:(NSString *)arg0;
+ (CalLocation *)routeTypeStringForCalLocationRoutingMode:(int)arg0;

- (CLPlacemark *)placemark;
- (void)setPlacemark:(CLPlacemark *)arg0;
- (CalLocation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setTitle:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSString *)displayString;
- (void)setType:(int)arg0;
- (int)type;
- (NSString *)title;
- (CalLocation *)copyWithZone:(struct _NSZone *)arg0;
- (CLLocation *)location;
- (void).cxx_destruct;
- (NSString *)displayName;
- (NSString *)abURLString;
- (void)setAbURLString:(NSString *)arg0;
- (NSString *)typeString;
- (NSString *)geoURLString;
- (NSString *)fullTitleAndAddressString;
- (void)setDisplayName:(NSString *)arg0;
- (double)radius;
- (void)setRadius:(double)arg0;
- (void)setAddress:(NSString *)arg0;
- (NSString *)address;
- (NSString *)routeType;
- (void)setRouteType:(NSString *)arg0;
- (char)isCurrentLocation;
- (void)setLocation:(CLLocation *)arg0;
- (double)distanceFromLocation:(NSObject *)arg0;

@end

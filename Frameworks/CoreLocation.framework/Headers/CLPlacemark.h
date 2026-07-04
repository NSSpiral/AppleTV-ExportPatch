/* Runtime dump - CLPlacemark
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLPlacemark : NSObject <NSCopying, NSSecureCoding>
{
    CLPlacemarkInternal * _internal;
}

@property (readonly, copy, nonatomic) CLLocation * location;
@property (readonly, copy, nonatomic) CLRegion * region;
@property (readonly, copy, nonatomic) NSDictionary * addressDictionary;
@property (readonly, copy, nonatomic) NSString * name;
@property (readonly, copy, nonatomic) NSString * thoroughfare;
@property (readonly, copy, nonatomic) NSString * subThoroughfare;
@property (readonly, copy, nonatomic) NSString * locality;
@property (readonly, copy, nonatomic) NSString * subLocality;
@property (readonly, copy, nonatomic) NSString * administrativeArea;
@property (readonly, copy, nonatomic) NSString * subAdministrativeArea;
@property (readonly, copy, nonatomic) NSString * postalCode;
@property (readonly, copy, nonatomic) NSString * ISOcountryCode;
@property (readonly, copy, nonatomic) NSString * country;
@property (readonly, copy, nonatomic) NSString * inlandWater;
@property (readonly, copy, nonatomic) NSString * ocean;
@property (readonly, copy, nonatomic) NSArray * areasOfInterest;

+ (CLPlacemark *)placemarkWithGEOMapItem:(NSObject *)arg0;
+ (char)supportsSecureCoding;

- (NSString *)postalCode;
- (NSObject *)_initWithGeoMapItem:(<GEOMapItemPrivate> *)arg0;
- (CLPlacemark *)initWithPlacemark:(CLPlacemark *)arg0;
- (CLPlacemark *)initWithLocation:(CLLocation *)arg0 addressDictionary:(NSDictionary *)arg1 region:(CLRegion *)arg2 areasOfInterest:(NSArray *)arg3;
- (NSString *)ISOcountryCode;
- (void)dealloc;
- (CLPlacemark *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSString *)name;
- (CLPlacemark *)copyWithZone:(struct _NSZone *)arg0;
- (CLLocation *)location;
- (CLRegion *)region;
- (NSMutableArray *)formattedAddressLines;
- (NSString *)fullThoroughfare;
- (NSString *)subThoroughfare;
- (NSString *)ocean;
- (NSString *)inlandWater;
- (NSDictionary *)addressDictionary;
- (NSArray *)areasOfInterest;
- (<GEOMapItemPrivate> *)_geoMapItem;
- (NSString *)subLocality;
- (NSString *)locality;
- (NSString *)subAdministrativeArea;
- (NSString *)administrativeArea;
- (NSString *)country;
- (NSString *)thoroughfare;

@end

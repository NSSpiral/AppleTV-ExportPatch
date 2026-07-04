/* Runtime dump - SALocation
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocation : SADomainObject

@property (copy, nonatomic) NSNumber * accuracy;
@property (copy, nonatomic) NSString * city;
@property (copy, nonatomic) NSString * countryCode;
@property (copy, nonatomic) NSArray * entryPoints;
@property (copy, nonatomic) NSData * forwardGeoData;
@property (copy, nonatomic) NSString * label;
@property (copy, nonatomic) NSNumber * latitude;
@property (copy, nonatomic) NSNumber * longitude;
@property (copy, nonatomic) NSString * postalCode;
@property (copy, nonatomic) NSString * regionType;
@property (retain, nonatomic) SADistance * relativeDistance;
@property (copy, nonatomic) NSString * stateCode;
@property (copy, nonatomic) NSString * street;
@property (copy, nonatomic) NSString * subThoroughfare;
@property (copy, nonatomic) NSString * thoroughfare;
@property (copy, nonatomic) NSString * timezoneId;
@property (copy, nonatomic) NSNumber * travelDistance;
@property (copy, nonatomic) NSNumber * travelTime;

+ (CLLocation *)location;
+ (NSDictionary *)locationWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)city;
- (NSString *)postalCode;
- (void)setCity:(NSString *)arg0;
- (void)setPostalCode:(NSString *)arg0;
- (NSString *)groupIdentifier;
- (void)setAccuracy:(NSNumber *)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (void)setLatitude:(NSNumber *)arg0;
- (void)setLongitude:(NSNumber *)arg0;
- (NSNumber *)latitude;
- (NSNumber *)longitude;
- (NSString *)subThoroughfare;
- (NSArray *)entryPoints;
- (void)setEntryPoints:(NSArray *)arg0;
- (void)setTravelTime:(NSNumber *)arg0;
- (void)setTravelDistance:(NSNumber *)arg0;
- (NSNumber *)travelTime;
- (NSNumber *)travelDistance;
- (void)setStreet:(NSString *)arg0;
- (void)setThoroughfare:(NSString *)arg0;
- (void)setSubThoroughfare:(NSString *)arg0;
- (void)setCountryCode:(NSString *)arg0;
- (NSString *)thoroughfare;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSString *)timezoneId;
- (void)setTimezoneId:(NSString *)arg0;
- (SADistance *)relativeDistance;
- (void)setRelativeDistance:(SADistance *)arg0;
- (NSData *)forwardGeoData;
- (void)setForwardGeoData:(NSData *)arg0;
- (NSString *)regionType;
- (void)setRegionType:(NSString *)arg0;
- (NSString *)stateCode;
- (void)setStateCode:(NSString *)arg0;
- (NSString *)countryCode;
- (NSNumber *)accuracy;
- (NSString *)street;

@end

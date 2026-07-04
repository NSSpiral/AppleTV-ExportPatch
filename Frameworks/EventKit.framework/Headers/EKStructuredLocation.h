/* Runtime dump - EKStructuredLocation
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKStructuredLocation : EKObject <NSCopying>

@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) CLLocation * geoLocation;
@property (nonatomic) double radius;
@property (copy, nonatomic) NSString * addressBookEntityID;
@property (readonly, nonatomic) char isStructured;
@property (retain, nonatomic) NSString * address;
@property (retain, nonatomic) NSString * routing;

+ (NSString *)locationWithTitle:(NSString *)arg0;

- (void)updatePersistentObject;
- (NSString *)routing;
- (char)isStructured;
- (CLLocation *)geoLocation;
- (NSString *)addressBookEntityID;
- (void)setAddressBookEntityID:(NSString *)arg0;
- (void)setRouting:(NSString *)arg0;
- (NSObject *)_persistentLocation;
- (void)setGeoLocation:(CLLocation *)arg0;
- (char)isEqualToLocation:(NSObject *)arg0;
- (NSObject *)_asCalLocation;
- (EKStructuredLocation *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)title;
- (EKStructuredLocation *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)cacheKey;
- (double)radius;
- (void)setRadius:(double)arg0;
- (void)setAddress:(NSString *)arg0;
- (NSString *)address;

@end

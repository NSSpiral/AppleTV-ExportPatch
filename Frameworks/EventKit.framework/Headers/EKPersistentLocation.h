/* Runtime dump - EKPersistentLocation
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentLocation : EKPersistentObject <NSCopying>

@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * address;
@property (copy, nonatomic) NSNumber * latitude;
@property (copy, nonatomic) NSNumber * longitude;
@property (copy, nonatomic) NSNumber * radius;
@property (copy, nonatomic) NSString * addressBookEntityID;
@property (copy, nonatomic) NSString * routing;

+ (EKPersistentLocation *)defaultPropertiesToLoad;
+ (NSMutableDictionary *)relations;

- (NSString *)routing;
- (NSString *)addressBookEntityID;
- (void)setAddressBookEntityID:(NSString *)arg0;
- (void)setRouting:(NSString *)arg0;
- (void)setCalendarItemOwner:(NSObject *)arg0;
- (NSObject *)calendarItemOwner;
- (void)setAlarmOwner:(NSObject *)arg0;
- (NSObject *)alarmOwner;
- (EKPersistentLocation *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)title;
- (EKPersistentLocation *)copyWithZone:(struct _NSZone *)arg0;
- (void)setLatitude:(NSNumber *)arg0;
- (void)setLongitude:(NSNumber *)arg0;
- (NSNumber *)latitude;
- (NSNumber *)longitude;
- (NSNumber *)radius;
- (void)setRadius:(NSNumber *)arg0;
- (void)setAddress:(NSString *)arg0;
- (NSString *)address;
- (int)entityType;

@end

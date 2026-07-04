/* Runtime dump - SANotificationObject
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANotificationObject : SADomainObject

@property (copy, nonatomic) NSString * applicationId;
@property (copy, nonatomic) NSDate * date;
@property (copy, nonatomic) NSNumber * dateIsAllDay;
@property (copy, nonatomic) NSDate * endDate;
@property (copy, nonatomic) NSDate * recencyDate;
@property (copy, nonatomic) NSString * timeZoneId;
@property (copy, nonatomic) NSString * type;

+ (NSObject *)object;
+ (NSDictionary *)objectWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (NSDate *)date;
- (void)setDate:(NSDate *)arg0;
- (NSDate *)recencyDate;
- (void)setRecencyDate:(NSDate *)arg0;
- (NSNumber *)dateIsAllDay;
- (void)setDateIsAllDay:(NSNumber *)arg0;
- (void)setEndDate:(NSDate *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSString *)timeZoneId;
- (void)setTimeZoneId:(NSString *)arg0;
- (NSString *)applicationId;
- (void)setApplicationId:(NSString *)arg0;
- (NSDate *)endDate;

@end

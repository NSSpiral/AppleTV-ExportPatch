/* Runtime dump - SACalendar
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendar : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSDate * date;
@property (copy, nonatomic) NSString * timeZoneId;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSCalendar *)calendar;
+ (NSDictionary *)calendarWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSDate *)date;
- (void)setDate:(NSDate *)arg0;
- (NSString *)encodedClassName;
- (NSString *)timeZoneId;
- (void)setTimeZoneId:(NSString *)arg0;

@end

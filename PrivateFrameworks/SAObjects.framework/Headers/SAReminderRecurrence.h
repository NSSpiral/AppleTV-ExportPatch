/* Runtime dump - SAReminderRecurrence
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderRecurrence : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSArray * daysOfTheMonth;
@property (copy, nonatomic) NSArray * daysOfTheWeek;
@property (copy, nonatomic) NSArray * daysOfTheYear;
@property (copy, nonatomic) NSString * frequencyTimeUnit;
@property (nonatomic) int interval;
@property (copy, nonatomic) NSArray * monthsOfTheYear;
@property (copy, nonatomic) NSArray * weeksOfTheYear;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDateComponents *)recurrence;
+ (NSDictionary *)recurrenceWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSArray *)monthsOfTheYear;
- (NSArray *)daysOfTheMonth;
- (void)setDaysOfTheWeek:(NSArray *)arg0;
- (void)setDaysOfTheMonth:(NSArray *)arg0;
- (void)setMonthsOfTheYear:(NSArray *)arg0;
- (void)setDaysOfTheYear:(NSArray *)arg0;
- (void)setWeeksOfTheYear:(NSArray *)arg0;
- (NSArray *)daysOfTheWeek;
- (NSArray *)daysOfTheYear;
- (NSArray *)weeksOfTheYear;
- (NSString *)groupIdentifier;
- (void)setInterval:(int)arg0;
- (int)interval;
- (NSString *)encodedClassName;
- (NSString *)frequencyTimeUnit;
- (void)setFrequencyTimeUnit:(NSString *)arg0;

@end

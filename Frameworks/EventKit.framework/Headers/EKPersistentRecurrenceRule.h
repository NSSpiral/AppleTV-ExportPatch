/* Runtime dump - EKPersistentRecurrenceRule
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentRecurrenceRule : EKPersistentObject <NSCopying>
{
    id _helper;
    EKRecurrenceEnd * _recurrenceEnd;
}

@property (readonly, nonatomic) NSString * UUID;
@property (readonly, nonatomic) NSString * calendarIdentifier;
@property (copy, nonatomic) NSDate * endDate;
@property (nonatomic) unsigned int count;
@property (nonatomic) int frequency;
@property (nonatomic) int interval;
@property (nonatomic) int firstDayOfTheWeek;
@property (copy, nonatomic) NSArray * daysOfTheWeek;
@property (copy, nonatomic) NSArray * daysOfTheMonth;
@property (copy, nonatomic) NSArray * daysOfTheYear;
@property (copy, nonatomic) NSArray * weeksOfTheYear;
@property (copy, nonatomic) NSArray * monthsOfTheYear;
@property (copy, nonatomic) NSArray * setPositions;
@property (readonly, nonatomic) NSDate * cachedEndDate;
@property (retain, nonatomic) EKPersistentCalendarItem * owner;
@property (readonly, nonatomic) char shouldPinMonthDays;

+ (EKPersistentRecurrenceRule *)defaultPropertiesToLoad;
+ (NSMutableDictionary *)relations;

- (NSArray *)monthsOfTheYear;
- (NSArray *)daysOfTheMonth;
- (struct ?)gregorianUnits;
- (void)setDaysOfTheWeek:(NSArray *)arg0;
- (void)setDaysOfTheMonth:(NSArray *)arg0;
- (void)setSetPositions:(NSArray *)arg0;
- (void)setMonthsOfTheYear:(NSArray *)arg0;
- (void)setDaysOfTheYear:(NSArray *)arg0;
- (void)setWeeksOfTheYear:(NSArray *)arg0;
- (NSArray *)daysOfTheWeek;
- (NSArray *)setPositions;
- (NSArray *)daysOfTheYear;
- (NSArray *)weeksOfTheYear;
- (void)setFirstDayOfTheWeek:(int)arg0;
- (NSDate *)cachedEndDate;
- (char)shouldPinMonthDays;
- (int)firstDayOfTheWeek;
- (NSObject *)_helper;
- (void)dealloc;
- (unsigned int)count;
- (EKPersistentRecurrenceRule *)init;
- (NSString *)description;
- (EKPersistentRecurrenceRule *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)UUID;
- (void)setCount:(unsigned int)arg0;
- (int)frequency;
- (void)setFrequency:(int)arg0;
- (NSString *)calendarIdentifier;
- (void)setInterval:(int)arg0;
- (int)interval;
- (EKPersistentCalendarItem *)owner;
- (char)validate:(id *)arg0;
- (int)entityType;
- (void)setEndDate:(NSDate *)arg0;
- (char)isDirty;
- (NSDate *)endDate;
- (void)setOwner:(EKPersistentCalendarItem *)arg0;

@end

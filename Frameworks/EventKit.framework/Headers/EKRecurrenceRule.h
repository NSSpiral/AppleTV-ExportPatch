/* Runtime dump - EKRecurrenceRule
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKRecurrenceRule : EKObject <NSCopying>
{
    char _usesEndDate;
    EKRecurrenceEnd * _cachedEnd;
}

@property (readonly, nonatomic) NSString * calendarIdentifier;
@property (copy, nonatomic) EKRecurrenceEnd * recurrenceEnd;
@property (readonly, nonatomic) int frequency;
@property (readonly, nonatomic) int interval;
@property (readonly, nonatomic) int firstDayOfTheWeek;
@property (readonly, nonatomic) NSArray * daysOfTheWeek;
@property (readonly, nonatomic) NSArray * daysOfTheMonth;
@property (readonly, nonatomic) NSArray * daysOfTheYear;
@property (readonly, nonatomic) NSArray * weeksOfTheYear;
@property (readonly, nonatomic) NSArray * monthsOfTheYear;
@property (readonly, nonatomic) NSArray * setPositions;
@property (readonly) char usesEndDate;
@property (readonly) struct ? gregorianUnits;
@property (retain, nonatomic) EKCalendarItem * owner;
@property (readonly, nonatomic) NSString * UUID;
@property (readonly, nonatomic) NSDate * cachedEndDate;
@property (readonly, nonatomic) char dirtyStateMayAffectExceptionDates;
@property (readonly, nonatomic) char shouldPinMonthDays;
@property (retain, nonatomic) EKRecurrenceEnd * cachedEnd;

+ (NSObject *)iCalendarValueFromRecurrenceType:(int)arg0;
+ (NSDate *)iCalendarValueFromDate:(NSDate *)arg0 isDateOnly:(char)arg1 isFloating:(char)arg2;
+ (EKRecurrenceRule *)recurrenceRuleWithType:(int)arg0 interval:(unsigned int)arg1 end:(id)arg2;
+ (EKRecurrenceRule *)iCalendarValueFromDayOfTheWeek:(unsigned int)arg0;

- (NSString *)lazyLoadRelationForKey:(NSString *)arg0;
- (char)dirtyStateMayAffectExceptionDates;
- (NSArray *)monthsOfTheYear;
- (NSArray *)daysOfTheMonth;
- (struct ?)gregorianUnits;
- (EKRecurrenceEnd *)recurrenceEnd;
- (void)setRecurrenceEnd:(EKRecurrenceEnd *)arg0;
- (NSObject *)_persistentRule;
- (EKRecurrenceRule *)initRecurrenceWithFrequency:(int)arg0 interval:(int)arg1 end:(id)arg2;
- (void)setDaysOfTheWeek:(NSArray *)arg0;
- (void)setDaysOfTheMonth:(NSArray *)arg0;
- (void)setSetPositions:(NSArray *)arg0;
- (void)setMonthsOfTheYear:(NSArray *)arg0;
- (void)setDaysOfTheYear:(NSArray *)arg0;
- (void)setWeeksOfTheYear:(NSArray *)arg0;
- (EKRecurrenceRule *)initRecurrenceWithFrequency:(int)arg0 interval:(int)arg1 daysOfTheWeek:(NSArray *)arg2 daysOfTheMonth:(NSArray *)arg3 monthsOfTheYear:(NSArray *)arg4 weeksOfTheYear:(NSArray *)arg5 daysOfTheYear:(NSArray *)arg6 setPositions:(NSArray *)arg7 end:(id)arg8;
- (id)stringValueAsDateOnly:(char)arg0 isFloating:(char)arg1;
- (NSArray *)daysOfTheWeek;
- (NSArray *)setPositions;
- (NSArray *)daysOfTheYear;
- (NSArray *)weeksOfTheYear;
- (void)setFirstDayOfTheWeek:(unsigned int)arg0;
- (EKRecurrenceEnd *)cachedEnd;
- (char)usesEndDate;
- (NSDate *)cachedEndDate;
- (void)setCachedEnd:(EKRecurrenceEnd *)arg0;
- (char)shouldPinMonthDays;
- (int)firstDayOfTheWeek;
- (char)mayOccurAfterDate:(NSDate *)arg0;
- (void)pinToEndsOfMonthsWithCalendarItem:(NSObject *)arg0;
- (char)isWeekdayRule;
- (char)isWeekendRule;
- (char)isAnyDayRule;
- (void)dealloc;
- (EKRecurrenceRule *)init;
- (NSString *)description;
- (void)reset;
- (EKRecurrenceRule *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)UUID;
- (int)frequency;
- (void)setFrequency:(int)arg0;
- (NSString *)calendarIdentifier;
- (void)setInterval:(unsigned int)arg0;
- (int)interval;
- (EKCalendarItem *)owner;

@end

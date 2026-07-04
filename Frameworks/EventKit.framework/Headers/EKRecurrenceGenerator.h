/* Runtime dump - EKRecurrenceGenerator
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKRecurrenceGenerator : NSObject
{
    NSCalendar * _calendar;
    NSDate * _eventStartDate;
    NSDate * _eventEndDate;
    NSTimeZone * _eventTimeZone;
    unsigned int _duration;
    char _allDay;
    long _interval;
    int _frequency;
    NSDate * _endDate;
    long _weekStart;
    char _shouldPinMonthDays;
    NSArray * _daysOfTheWeek;
    NSArray * _daysOfTheMonth;
    NSArray * _daysOfTheYear;
    NSArray * _weeksOfTheYear;
    NSArray * _monthsOfTheYear;
    NSArray * _setPositions;
}

@property (copy, nonatomic) NSDate * eventStartDate;
@property (copy, nonatomic) NSDate * eventEndDate;
@property (copy, nonatomic) NSTimeZone * eventTimeZone;
@property (nonatomic) char allDay;
@property (copy, nonatomic) NSDate * endDate;
@property (copy, nonatomic) NSArray * daysOfTheWeek;
@property (copy, nonatomic) NSArray * daysOfTheMonth;
@property (copy, nonatomic) NSArray * daysOfTheYear;
@property (copy, nonatomic) NSArray * weeksOfTheYear;
@property (copy, nonatomic) NSArray * monthsOfTheYear;
@property (copy, nonatomic) NSArray * setPositions;

+ (void *)generator;

- (NSObject *)computeRecurrenceEndDateForCalEvent:(void *)arg0 recurrenceRule:(void *)arg1 count:(unsigned int)arg2 locked:(char)arg3;
- (NSObject *)copyOccurrenceDatesWithCalEvent:(void *)arg0 startDate:(struct ?)arg1 endDate:(struct ?)arg2 timeZone:(NSTimeZone *)arg3 limit:(int)arg4 locked:(char)arg5;
- (NSDate *)copyOccurrenceDatesWithInitialDate:(NSDate *)arg0 calRecurrences:(id)arg1 rangeStart:(id)arg2 rangeEnd:(id)arg3 timeZone:(NSTimeZone *)arg4;
- (char)isOccurrenceDate:(NSDate *)arg0 validForEvent:(NSObject *)arg1;
- (id)nextOccurrenceDateWithEKRecurrences:(id)arg0 initialDate:(NSDate *)arg1 afterDate:(NSDate *)arg2;
- (NSArray *)monthsOfTheYear;
- (NSArray *)daysOfTheMonth;
- (id)nextOccurrenceDateWithEKRecurrences:(id)arg0 exceptionDates:(NSSet *)arg1 initialDate:(NSDate *)arg2 afterDate:(NSDate *)arg3;
- (NSObject *)copyOccurrenceDatesWithEKEvent:(NSObject *)arg0 recurrenceRule:(NSObject *)arg1 startDate:(struct ?)arg2 endDate:(struct ?)arg3 timeZone:(NSTimeZone *)arg4 exceptionDates:(NSSet *)arg5 limit:(int)arg6;
- (char)occurrenceDate:(NSDate *)arg0 matchesRecurrenceRule:(NSObject *)arg1 forEvent:(struct __GSEvent *)arg2 includeDetachedEventsInSeries:(char)arg3;
- (NSObject *)copyOccurrenceDatesWithEvent:(NSObject *)arg0 recurrenceRule:(NSObject *)arg1 startDate:(struct ?)arg2 endDate:(struct ?)arg3 timeZone:(NSTimeZone *)arg4 limit:(int)arg5;
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
- (void)setEventStartDate:(NSDate *)arg0;
- (void)setEventEndDate:(NSDate *)arg0;
- (void)setEventTimeZone:(NSTimeZone *)arg0;
- (NSDate *)eventEndDate;
- (NSDate *)eventStartDate;
- (void)_setupForEKEvent:(NSObject *)arg0;
- (void)_prepareForEKRecurrence:(id)arg0;
- (NSDate *)_copyOccurrenceDatesBetweenStartDate:(struct ?)arg0 endDate:(struct ?)arg1 timeZone:(NSTimeZone *)arg2 limit:(int)arg3;
- (void)_setupForCalEvent:(void *)arg0 locked:(char)arg1;
- (NSObject *)_copyOccurrenceDatesWithBirthdayEvent:(void *)arg0 startDate:(struct ?)arg1 endDate:(struct ?)arg2 timeZone:(NSTimeZone *)arg3 limit:(int)arg4 locked:(char)arg5;
- (void)_prepareForCalRecurrence:(void *)arg0 locked:(char)arg1;
- (void)_setupForPersistentEvent:(NSObject *)arg0;
- (void)_prepareForPersistentRecurrence:(id)arg0;
- (NSDate *)_computeRecurrenceEndDate:(unsigned int)arg0;
- (double)_convertAbsoluteTime:(double)arg0 fromTimeZone:(NSObject *)arg1 toTimeZone:(NSObject *)arg2;
- (NSDate *)_copyDailyOccurrencesWithInitialDate:(NSDate *)arg0 startDate:(NSDate *)arg1 endDate:(NSDate *)arg2 count:(unsigned int)arg3;
- (NSDate *)_copyWeeklyOccurrencesWithInitialDate:(NSDate *)arg0 startDate:(NSDate *)arg1 endDate:(NSDate *)arg2 count:(unsigned int)arg3;
- (NSDate *)_copyMonthlyOccurrencesWithInitialDate:(NSDate *)arg0 startDate:(NSDate *)arg1 endDate:(NSDate *)arg2 count:(unsigned int)arg3;
- (NSDate *)_copyYearlyOccurrencesWithInitialDate:(NSDate *)arg0 startDate:(NSDate *)arg1 endDate:(NSDate *)arg2 count:(unsigned int)arg3;
- (char)_validateCalDate:(struct ?)arg0 pinned:(char)arg1;
- (NSObject *)copyOccurrenceDatesWithEKEvent:(NSObject *)arg0 startDate:(struct ?)arg1 endDate:(struct ?)arg2 timeZone:(NSTimeZone *)arg3 limit:(int)arg4;
- (NSObject *)copyOccurrenceDatesWithEKEvent:(NSObject *)arg0 recurrenceRule:(NSObject *)arg1 startDate:(struct ?)arg2 endDate:(struct ?)arg3 timeZone:(NSTimeZone *)arg4 limit:(int)arg5;
- (NSObject *)copyOccurrenceDatesWithEvent:(NSObject *)arg0 startDate:(struct ?)arg1 endDate:(struct ?)arg2 timeZone:(NSTimeZone *)arg3 limit:(int)arg4;
- (char)_isSimpleYearlyRecurrence;
- (NSDate *)_copySimpleYearlyOccurrencesWithInitialDate:(NSDate *)arg0 startDate:(NSDate *)arg1 endDate:(NSDate *)arg2 count:(unsigned int)arg3;
- (NSTimeZone *)eventTimeZone;
- (void)dealloc;
- (EKRecurrenceGenerator *)init;
- (void)setAllDay:(char)arg0;
- (char)allDay;
- (void)setEndDate:(NSDate *)arg0;
- (NSDate *)endDate;

@end

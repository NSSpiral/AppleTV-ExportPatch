/* Runtime dump - EKCalendarDate
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying>
{
    struct ? _dateGr;
    double _dateAbs;
    EKTimeZone * _timeZone;
    unsigned int _flags;
}

+ (EKCalendarDate *)calendarDateWithDate:(NSDate *)arg0 timeZone:(EKTimeZone *)arg1;
+ (EKCalendarDate *)calendarDateWithGregorianDate:(struct ?)arg0 timeZone:(EKTimeZone *)arg1;
+ (EKCalendarDate *)calendarDateWithAbsoluteTime:(double)arg0 timeZone:(EKTimeZone *)arg1;
+ (EKCalendarDate *)calendarDateWithDateComponents:(NSDate *)arg0 timeZone:(EKTimeZone *)arg1;

- (id)calendarDateForDay;
- (id)calendarDateByAddingGregorianUnits:(struct ?)arg0;
- (double)absoluteTime;
- (EKCalendarDate *)initWithDate:(NSDate *)arg0 timeZone:(EKTimeZone *)arg1;
- (struct ?)gregorianDate;
- (id)calendarDateByAddingDays:(int)arg0;
- (EKCalendarDate *)initWithAbsoluteTime:(double)arg0 timeZone:(EKTimeZone *)arg1;
- (EKCalendarDate *)initWithGregorianDate:(struct ?)arg0 timeZone:(EKTimeZone *)arg1;
- (EKCalendarDate *)initWithDateComponents:(NSDate *)arg0 timeZone:(EKTimeZone *)arg1;
- (id)componentsIncludingTime:(char)arg0;
- (EKCalendarDate *)initWithGregorianDate:(struct ?)arg0 internalTimeZone:(NSObject *)arg1;
- (struct ?)differenceAsGregorianUnits:(id)arg0 flags:(unsigned long)arg1;
- (id)calendarDateForWeekWithWeekStart:(long)arg0 daysSinceWeekStart:(int *)arg1;
- (unsigned int)daysInMonth;
- (EKCalendarDate *)initWithAbsoluteTime:(double)arg0 internalTimeZone:(NSObject *)arg1;
- (id)componentsWithoutTime;
- (id)calendarDateByAddingWeeks:(int)arg0;
- (id)calendarDateByAddingMonths:(int)arg0;
- (id)calendarDateByAddingYears:(int)arg0;
- (NSObject *)calendarDateInTimeZone:(NSObject *)arg0;
- (NSDate *)calendarDateWithDate:(NSDate *)arg0;
- (int)differenceInYears:(id)arg0;
- (int)differenceInMonths:(id)arg0;
- (int)differenceInDays:(id)arg0;
- (long)dayOfWeek;
- (unsigned int)dayOfYear;
- (unsigned int)daysInYear;
- (unsigned int)weeksInYear;
- (id)calendarDateForEndOfDay;
- (id)calendarDateForWeekWithWeekStart:(long)arg0;
- (id)calendarDateForEndOfWeekWithWeekStart:(long)arg0;
- (id)calendarDateForMonth;
- (id)calendarDateForEndOfMonth;
- (id)calendarDateForYear;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (NSDate *)date;
- (EKCalendarDate *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)hour;
- (EKCalendarDate *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (EKTimeZone *)timeZone;
- (unsigned int)minute;
- (double)second;
- (unsigned int)year;
- (unsigned int)month;
- (unsigned int)day;
- (unsigned int)weekOfYear;
- (NSDate *)laterDate:(NSDate *)arg0;
- (NSDate *)earlierDate:(NSDate *)arg0;
- (NSArray *)components;
- (int)secondsFromGMT;

@end

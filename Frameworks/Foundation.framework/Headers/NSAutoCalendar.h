/* Runtime dump - NSAutoCalendar
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAutoCalendar : NSCalendar
{
    NSCalendar * cal;
    NSLocale * changedLocale;
    NSTimeZone * changedTimeZone;
    unsigned int changedFirstWeekday;
    unsigned int changedMinimumDaysinFirstWeek;
    NSDate * changedGregorianStartDate;
}

+ (char)supportsSecureCoding;

- (void)setFirstWeekday:(unsigned int)arg0;
- (void)setMinimumDaysInFirstWeek:(unsigned int)arg0;
- (struct _NSRange)minimumRangeOfUnit:(unsigned int)arg0;
- (unsigned int)ordinalityOfUnit:(unsigned int)arg0 inUnit:(unsigned int)arg1 forDate:(NSDate *)arg2;
- (char)nextWeekendStartDate:(id *)arg0 interval:(double *)arg1 options:(double *)arg2 afterDate:(double)arg3;
- (char)isDateInWeekend:(id)arg0;
- (void)enumerateDatesStartingAfterDate:(NSDate *)arg0 matchingComponents:(NSArray *)arg1 options:(unsigned int)arg2 usingBlock:(id /* block */)arg3;
- (NSDate *)gregorianStartDate;
- (void)setGregorianStartDate:(NSDate *)arg0;
- (void)dealloc;
- (NSAutoCalendar *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSAutoCalendar *)init;
- (NSString *)description;
- (void)setTimeZone:(NSTimeZone *)arg0;
- (NSAutoCalendar *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (NSString *)calendarIdentifier;
- (NSArray *)dateByAddingComponents:(NSArray *)arg0 toDate:(NSDate *)arg1 options:(unsigned int)arg2;
- (NSArray *)components:(unsigned int)arg0 fromDate:(NSDate *)arg1;
- (NSArray *)dateFromComponents:(NSArray *)arg0;
- (void)setLocale:(NSLocale *)arg0;
- (NSTimeZone *)timeZone;
- (NSLocale *)locale;
- (NSArray *)components:(unsigned int)arg0 fromDate:(NSDate *)arg1 toDate:(NSDate *)arg2 options:(unsigned int)arg3;
- (char)rangeOfUnit:(unsigned int)arg0 startDate:(id *)arg1 interval:(double *)arg2 forDate:(NSDate *)arg3;
- (void)_update:(NSDate *)arg0;
- (unsigned int)firstWeekday;
- (unsigned int)minimumDaysInFirstWeek;
- (NSAutoCalendar *)initWithCalendarIdentifier:(NSString *)arg0;
- (struct _NSRange)rangeOfUnit:(unsigned int)arg0 inUnit:(unsigned int)arg1 forDate:(NSDate *)arg2;
- (struct _NSRange)maximumRangeOfUnit:(unsigned int)arg0;

@end

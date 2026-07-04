/* Runtime dump - NSCalendarDate
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCalendarDate : NSDate
{
    unsigned int refCount;
    double _timeIntervalSinceReferenceDate;
    NSTimeZone * _timeZone;
    NSString * _formatString;
    void * _reserved;
}

+ (NSCalendarDate *)dateWithYear:(int)arg0 month:(unsigned int)arg1 day:(unsigned int)arg2 hour:(unsigned int)arg3 minute:(unsigned int)arg4 second:(unsigned int)arg5 timeZone:(NSTimeZone *)arg6;
+ (NSCalendarDate *)calendarDate;
+ (NSString *)dateWithString:(NSString *)arg0 calendarFormat:(NSString *)arg1;
+ (NSString *)dateWithString:(NSString *)arg0 calendarFormat:(NSString *)arg1 locale:(NSObject *)arg2;
+ (NSString *)dateWithNaturalLanguageString:(NSString *)arg0 date:(NSDate *)arg1 locale:(NSObject *)arg2;
+ (NSCalendarDate *)distantFuture;
+ (NSCalendarDate *)distantPast;
+ (NSCalendarDate *)allocWithZone:(struct _NSZone *)arg0;

- (NSObject *)ekmsuidGMTDateToDateInTimeZone:(NSObject *)arg0;
- (id)ekmsuidStringForYearMonthDay;
- (id)addTimeInterval:(double)arg0;
- (NSCoder *)replacementObjectForPortCoder:(NSCoder *)arg0;
- (int)yearOfCommonEra;
- (int)monthOfYear;
- (int)dayOfMonth;
- (int)hourOfDay;
- (int)minuteOfHour;
- (int)secondOfMinute;
- (NSCalendarDate *)initWithYear:(int)arg0 month:(unsigned int)arg1 day:(unsigned int)arg2 hour:(unsigned int)arg3 minute:(unsigned int)arg4 second:(unsigned int)arg5 timeZone:(NSTimeZone *)arg6;
- (NSDate *)dateByAddingYears:(int)arg0 months:(int)arg1 days:(int)arg2 hours:(int)arg3 minutes:(int)arg4 seconds:(int)arg5;
- (int)dayOfWeek;
- (int)dayOfYear;
- (void)setCalendarFormat:(NSString *)arg0;
- (NSString *)calendarFormat;
- (NSString *)descriptionWithCalendarFormat:(NSString *)arg0 locale:(NSObject *)arg1;
- (NSCalendarDate *)initWithString:(NSString *)arg0 calendarFormat:(NSString *)arg1 locale:(NSObject *)arg2;
- (id)timeZoneDetail;
- (int)dayOfCommonEra;
- (int)microsecondOfSecond;
- (void)years:(int *)arg0 months:(int *)arg1 days:(int *)arg2 hours:(int *)arg3 minutes:(int *)arg4 seconds:(int *)arg5 sinceDate:(NSDate *)arg6;
- (NSString *)descriptionWithCalendarFormat:(NSString *)arg0;
- (NSCalendarDate *)initWithString:(NSString *)arg0 calendarFormat:(NSString *)arg1;
- (void)release;
- (void)dealloc;
- (NSCalendarDate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSCalendarDate *)init;
- (NSString *)description;
- (double)timeIntervalSinceReferenceDate;
- (void)setTimeZone:(NSTimeZone *)arg0;
- (NSCalendarDate *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (NSCalendarDate *)initWithString:(NSString *)arg0;
- (NSTimeZone *)timeZone;
- (NSCalendarDate *)initWithTimeIntervalSinceReferenceDate:(double)arg0;
- (NSLocale *)descriptionWithLocale:(NSObject *)arg0;

@end

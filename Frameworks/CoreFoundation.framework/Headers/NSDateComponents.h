/* Runtime dump - NSDateComponents
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSDateComponents : NSObject <NSCopying, NSSecureCoding>

@property (copy) NSCalendar * calendar;
@property (copy) NSTimeZone * timeZone;
@property int era;
@property int year;
@property int month;
@property int day;
@property int hour;
@property int minute;
@property int second;
@property int nanosecond;
@property int weekday;
@property int weekdayOrdinal;
@property int quarter;
@property int weekOfMonth;
@property int weekOfYear;
@property int yearForWeekOfYear;
@property char leapMonth;
@property (readonly, copy) NSDate * date;
@property (readonly) char validDate;

+ (NSDateComponents *)componentForMinutes:(int)arg0;
+ (NSDateComponents *)componentForHours:(int)arg0;
+ (NSDateComponents *)componentForDays:(int)arg0;
+ (NSDateComponents *)componentForWeeks:(int)arg0;
+ (NSDateComponents *)componentForMonths:(int)arg0;
+ (NSDateComponents *)componentForYears:(int)arg0;
+ (unsigned int)smaller:(char)arg0 componentsRelativeToComponent:(unsigned int)arg1;
+ (unsigned int)_ui_smallerComponentsRelativeToComponent:(unsigned int)arg0;
+ (unsigned int)_ui_largerComponentsRelativeToComponent:(unsigned int)arg0;
+ (NSArray *)_ui_namesForComponents:(unsigned int)arg0;
+ (NSDateComponents *)allocWithZone:(struct _NSZone *)arg0;
+ (char)supportsSecureCoding;

- (char)isSameMonthAsComponents:(NSArray *)arg0;
- (char)isSameYearAsComponents:(NSArray *)arg0;
- (char)isSameDayAsComponents:(NSArray *)arg0;
- (char)isSameMonthAsComponents:(NSArray *)arg0;
- (char)isSameYearAsComponents:(NSArray *)arg0;
- (char)isSameDayAsComponents:(NSArray *)arg0;
- (NSDate *)representedDate;
- (int)_ui_valueForComponent:(unsigned int)arg0;
- (void)_ui_setValue:(int)arg0 forComponent:(unsigned int)arg1;
- (NSString *)_ui_conciseDescription;
- (void)_ui_setComponents:(NSArray *)arg0;
- (char)isSameMonthAsComponents:(NSArray *)arg0;
- (char)isSameYearAsComponents:(NSArray *)arg0;
- (char)isSameDayAsComponents:(NSArray *)arg0;
- (NSDateComponents *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (int)nanosecond;
- (int)valueForComponent:(unsigned int)arg0;
- (void)setNanosecond:(int)arg0;
- (void)setValue:(int)arg0 forComponent:(unsigned int)arg1;
- (char)isLeapMonthSet;
- (char)isValidDate;
- (char)isValidDateInCalendar:(NSObject *)arg0;
- (void)dealloc;
- (NSDateComponents *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSDateComponents *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setTimeZone:(NSTimeZone *)arg0;
- (NSDate *)date;
- (NSDateComponents *)copyWithZone:(struct _NSZone *)arg0;
- (void)setDay:(int)arg0;
- (void)setHour:(int)arg0;
- (int)hour;
- (void)setCalendar:(NSCalendar *)arg0;
- (NSTimeZone *)timeZone;
- (NSCalendar *)calendar;
- (int)minute;
- (int)second;
- (int)era;
- (int)year;
- (int)month;
- (int)day;
- (int)weekOfMonth;
- (int)weekOfYear;
- (int)yearForWeekOfYear;
- (int)weekday;
- (int)weekdayOrdinal;
- (int)quarter;
- (int)week;
- (void)setEra:(int)arg0;
- (void)setYear:(int)arg0;
- (void)setYearForWeekOfYear:(int)arg0;
- (void)setMonth:(int)arg0;
- (void)setMinute:(int)arg0;
- (void)setSecond:(int)arg0;
- (void)setWeek:(int)arg0;
- (void)setWeekOfYear:(int)arg0;
- (void)setWeekOfMonth:(int)arg0;
- (void)setWeekday:(int)arg0;
- (void)setWeekdayOrdinal:(int)arg0;
- (void)setQuarter:(int)arg0;
- (char)isLeapMonth;
- (void)setLeapMonth:(char)arg0;

@end

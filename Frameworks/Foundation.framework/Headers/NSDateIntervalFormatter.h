/* Runtime dump - NSDateIntervalFormatter
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDateIntervalFormatter : NSFormatter
{
    NSLocale * _locale;
    NSCalendar * _calendar;
    NSTimeZone * _timeZone;
    NSString * _dateTemplate;
    NSString * _dateTemplateFromStyles;
    void * _formatter;
    unsigned int _dateStyle;
    unsigned int _timeStyle;
    char _modified;
    char _useTemplate;
    NSObject<OS_dispatch_semaphore> * _lock;
    id _reserved;
}

@property (copy) NSLocale * locale;
@property (copy) NSCalendar * calendar;
@property (copy) NSTimeZone * timeZone;
@property (copy) NSString * dateTemplate;
@property unsigned int dateStyle;
@property unsigned int timeStyle;

- (NSDate *)stringFromDate:(NSDate *)arg0 toDate:(NSDate *)arg1;
- (NSString *)dateTemplate;
- (void)setDateTemplate:(NSString *)arg0;
- (unsigned int)dateStyle;
- (unsigned int)timeStyle;
- (NSAttributedString *)attributedStringForObjectValue:(id)arg0 withDefaultAttributes:(NSDictionary *)arg1;
- (id)editingStringForObjectValue:(id)arg0;
- (char)isPartialStringValid:(id *)arg0 newEditingString:(id *)arg1 errorDescription:(id *)arg2;
- (char)isPartialStringValid:(id *)arg0 proposedSelectedRange:(struct _NSRange *)arg1 originalString:(NSString *)arg2 originalSelectedRange:(struct _NSRange)arg3 errorDescription:(id *)arg4;
- (void)dealloc;
- (NSDateIntervalFormatter *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSDateIntervalFormatter *)init;
- (void)setTimeZone:(NSTimeZone *)arg0;
- (NSDateIntervalFormatter *)copyWithZone:(struct _NSZone *)arg0;
- (void)setLocale:(NSLocale *)arg0;
- (void)setDateStyle:(unsigned int)arg0;
- (void)setTimeStyle:(unsigned int)arg0;
- (void)setCalendar:(NSCalendar *)arg0;
- (NSTimeZone *)timeZone;
- (NSCalendar *)calendar;
- (NSLocale *)locale;
- (NSString *)stringForObjectValue:(id)arg0;
- (char)getObjectValue:(id *)arg0 forString:(NSString *)arg1 errorDescription:(NSString *)arg2;

@end

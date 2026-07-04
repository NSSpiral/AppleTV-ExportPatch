/* Runtime dump - NSDateComponentsFormatter
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDateComponentsFormatter : NSFormatter
{
    struct _opaque_pthread_mutex_t _lock;
    void * _fmt;
    void * _unused;
    NSString * _fmtLocaleIdent;
    NSCalendar * _calendar;
    NSDate * _referenceDate;
    NSNumberFormatter * _unitFormatter;
    unsigned int _allowedUnits;
    int _formattingContext;
    int _unitsStyle;
    unsigned int _zeroFormattingBehavior;
    int _maximumUnitCount;
    char _allowsFractionalUnits;
    char _collapsesLargestUnit;
    char _includesApproximationPhrase;
    char _includesTimeRemainingPhrase;
    void * _reserved;
}

@property int unitsStyle;
@property unsigned int allowedUnits;
@property unsigned int zeroFormattingBehavior;
@property (copy) NSCalendar * calendar;
@property char allowsFractionalUnits;
@property int maximumUnitCount;
@property char collapsesLargestUnit;
@property char includesApproximationPhrase;
@property char includesTimeRemainingPhrase;
@property int formattingContext;
@property (copy) NSDate * referenceDate;

+ (NSArray *)localizedStringFromDateComponents:(NSArray *)arg0 unitsStyle:(int)arg1;

- (void)setFormattingContext:(int)arg0;
- (int)formattingContext;
- (NSDate *)stringFromDate:(NSDate *)arg0 toDate:(NSDate *)arg1;
- (NSDate *)referenceDate;
- (void)_flushFormatterCache;
- (NSObject *)_calendarOrCanonicalCalendar;
- (NSArray *)_stringFromDateComponents:(NSArray *)arg0;
- (NSArray *)_calendarFromDateComponents:(NSArray *)arg0;
- (NSArray *)_canonicalizedDateComponents:(NSArray *)arg0 withCalendar:(NSCalendar *)arg1 usedUnits:(unsigned int *)arg2;
- (void)_ensureUnitFormatterWithLocale:(NSObject *)arg0;
- (void)setUnitsStyle:(int)arg0;
- (NSArray *)stringFromDateComponents:(NSArray *)arg0;
- (NSString *)_stringFromTimeInterval:(double)arg0;
- (NSString *)stringFromTimeInterval:(double)arg0;
- (void)setAllowedUnits:(unsigned int)arg0;
- (unsigned int)allowedUnits;
- (void)setMaximumUnitCount:(int)arg0;
- (int)maximumUnitCount;
- (void)setAllowsFractionalUnits:(char)arg0;
- (char)allowsFractionalUnits;
- (void)setCollapsesLargestUnit:(char)arg0;
- (char)collapsesLargestUnit;
- (int)unitsStyle;
- (void)setZeroFormattingBehavior:(unsigned int)arg0;
- (unsigned int)zeroFormattingBehavior;
- (void)setIncludesApproximationPhrase:(char)arg0;
- (char)includesApproximationPhrase;
- (void)setIncludesTimeRemainingPhrase:(char)arg0;
- (char)includesTimeRemainingPhrase;
- (void)setReferenceDate:(NSDate *)arg0;
- (void)dealloc;
- (NSDateComponentsFormatter *)init;
- (void)setCalendar:(NSCalendar *)arg0;
- (NSCalendar *)calendar;
- (NSString *)stringForObjectValue:(id)arg0;
- (char)getObjectValue:(id *)arg0 forString:(NSString *)arg1 errorDescription:(NSString *)arg2;
- (void)finalize;

@end

/* Runtime dump - OITSUDateFormatter
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUDateFormatter : NSObject
{
    NSString * mDateOnlyFormatString;
    NSString * mTimeOnlyFormatString;
    struct __CFDateFormatter * mFullDateFormatter;
}

+ (unsigned int)p_DateTimeSplitLocationInFormatString:(NSString *)arg0;
+ (OITSUDateFormatter *)defaultDateTimeFormat;
+ (NSArray *)supportedDateFormats;
+ (NSArray *)supportedTimeFormats;
+ (OITSUDateFormatter *)dateFormatStringSpecialSymbols;
+ (NSLocale *)shortMonthNamesForNonCachedCurrentLocale;
+ (NSString *)datePortionOfDateTimeFormatString:(NSString *)arg0;
+ (NSString *)timePortionOfDateTimeFormatString:(NSString *)arg0;

- (void)dealloc;
- (OITSUDateFormatter *)init;
- (NSString *)fullDateString:(NSString *)arg0;
- (NSString *)appropriateOutputFormatStringForInputFormatString:(NSString *)arg0;
- (NSDate *)stringFromDate:(NSDate *)arg0 format:(NSString *)arg1;

@end

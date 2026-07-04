/* Runtime dump - TSUDateFormatter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDateFormatter : NSObject
{
    NSString * mDateOnlyFormatString;
    NSString * mTimeOnlyFormatString;
    struct __CFDateFormatter * mFullDateFormatter;
}

+ (TSUDateFormatter *)defaultDateTimeFormatForLocale:(NSObject *)arg0;
+ (NSLocale *)supportedDateFormatsForLocale:(NSObject *)arg0;
+ (NSLocale *)supportedTimeFormatsForLocale:(NSObject *)arg0;
+ (unsigned int)p_DateTimeSplitLocationInFormatString:(NSString *)arg0;
+ (TSUDateFormatter *)dateFormatStringSpecialSymbols;
+ (NSLocale *)shortMonthNamesForNonCachedCurrentLocale;
+ (NSString *)datePortionOfDateTimeFormatString:(NSString *)arg0;
+ (NSString *)timePortionOfDateTimeFormatString:(NSString *)arg0;

- (void)dealloc;
- (TSUDateFormatter *)init;
- (TSUDateFormatter *)initWithLocale:(NSObject *)arg0;

@end

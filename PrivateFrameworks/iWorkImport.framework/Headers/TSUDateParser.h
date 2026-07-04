/* Runtime dump - TSUDateParser
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDateParser : NSObject
{
    NSMutableArray * mFormatCategories;
    TSULocale * mLocale;
    char mIsJapaneseLocale;
    struct __CFDateFormatter * mSpecialCaseFormatter;
}

- (NSDictionary *)formatStringsDictionary;
- (void)dealloc;
- (void)addFormat:(NSString *)arg0 locale:(struct __CFLocale *)arg1 formatCategoryMap:(NSObject *)arg2;
- (struct __CFDateFormatter *)specialCaseDateFormatterForLocale:(struct __CFLocale *)arg0;
- (struct __CFDate *)newDateFromStringTryingFormats:(struct __CFString *)arg0 locale:(struct __CFLocale *)arg1 formats:(NSArray *)arg2 outSuccessfulFormatString:(struct __CFString * *)arg3;
- (struct __CFDate *)newDateFromString:(struct __CFString *)arg0 preferredFormatString:(struct __CFString *)arg1 successfulFormatString:(struct __CFString * *)arg2 tryAggressiveFormats:(struct __CFString *)arg3;
- (TSUDateParser *)initWithLocale:(NSObject *)arg0;
- (struct __CFDate *)newDateFromString:(struct __CFString *)arg0 successfulFormatString:(struct __CFString * *)arg1;
- (void)parseFormat:(NSString *)arg0 initialPattern:(id *)arg1 separator:(unsigned short *)arg2;

@end

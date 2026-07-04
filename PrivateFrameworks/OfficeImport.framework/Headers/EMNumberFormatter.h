/* Runtime dump - EMNumberFormatter
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMNumberFormatter : NSObject
{
    struct __CFNumberFormatter * _genericFormatter;
    struct __CFNumberFormatter * _doubleFormatter;
    struct __CFNumberFormatter * _percentFormatter;
    struct __CFNumberFormatter * _bigNumberFormatter;
    struct __CFNumberFormatter * _smallNumberFormatter;
    struct __CFNumberFormatter * _currencyFormatter;
    struct __CFDateFormatter * _dateFormatter;
    NSString * _excelFormatString;
    NSString * _baseICUFormatString;
    BOOL _isNegativeRed;
    unsigned short _currencySymbol;
    int _formatType;
}

+ (NSString *)formatterForFormat:(NSString *)arg0;

- (void)dealloc;
- (struct __CFDateFormatter *)_dateFormatter;
- (id)formatDefault:(double)arg0;
- (int)formatType;
- (BOOL)isNegativeRed;
- (id)formatValue:(double)arg0 inWorkbook:(EBWorkbook *)arg1;
- (id)formatPercent:(double)arg0;
- (NSDate *)formatDate:(NSDate *)arg0;
- (EMNumberFormatter *)initWithExcelFormatString:(NSString *)arg0;
- (EMNumberFormatter *)initWithDefaultFormatString;
- (void)_parseExcelFormatString:(NSString *)arg0;
- (NSString *)convertedGenericNumberFormatWithFormat:(NSString *)arg0;
- (NSString *)_icuFormatStringForDateFormat;
- (NSString *)_icuFormatStringForCurrencyFormat;
- (void)convertGenericNumberFormat:(NSString *)arg0;
- (struct __CFNumberFormatter *)_doubleFormatter;
- (struct __CFNumberFormatter *)_percentFormatter;
- (struct __CFNumberFormatter *)_bigNumberFormatter;
- (struct __CFNumberFormatter *)_smallNumberFormatter;
- (struct __CFNumberFormatter *)_genericFormatter;
- (struct __CFNumberFormatter *)_currencyFormatter;
- (NSNumber *)formatPhoneNumber:(double)arg0;
- (id)formatCurrency:(double)arg0;
- (NSObject *)formatFraction:(double)arg0;
- (id)formatDoubleValue:(double)arg0;

@end

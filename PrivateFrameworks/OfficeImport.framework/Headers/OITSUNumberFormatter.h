/* Runtime dump - OITSUNumberFormatter
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUNumberFormatter : NSObject
{
    struct __CFLocale * mLocale;
    struct __CFArray * mDecimalFormatters;
    struct __CFArray * mCurrencyFormatters;
    struct __CFArray * mPercentageFormatters;
    struct __CFArray * mScientificFormatters;
    struct __CFNumberFormatter * mFractionFormatter;
    NSMutableDictionary * mCurrencyCodeToSymbolMap;
    NSMutableDictionary * mCurrencyCodeToHalfWidthSymbolMap;
    NSString * mCurrencyString;
    NSString * mPercentageString;
    NSString * mScientificString;
    NSString * mDecimalString;
    NSString * mPercentSymbol;
    NSMutableArray * mTransformedDecimalStrings;
    NSMutableArray * mTransformedCurrencyStrings;
    NSMutableArray * mTransformedPercentageStrings;
    NSMutableArray * mTransformedScientificStrings;
    struct __CFString * mAdditionalCurrencyCode;
    struct __CFArray * mAdditionalCurrencyCodeFormatters;
}

+ (void)initialize;
+ (NSString *)formatString:(NSString *)arg0 transformedForNegativeStyle:(int)arg1;
+ (OITSUNumberFormatter *)defaultFormatStringForValueType:(int)arg0 negativeStyle:(int)arg1;
+ (OITSUNumberFormatter *)currentLocaleCurrencyCode;
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg0;
+ (OITSUNumberFormatter *)currencySymbolForCurrencyCode:(id)arg0;
+ (OITSUNumberFormatter *)userVisibleCurrencyCodes;
+ (NSLocale *)formatterForLocale:(struct __CFLocale *)arg0;
+ (int)positionOfSymbol:(id)arg0 inNumberFormatSubpattern:(id)arg1;
+ (void)formatString:(NSString *)arg0 replaceOccurencesOfUnescapedString:(NSString *)arg1 withString:(NSString *)arg2;
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)arg0;
+ (OITSUNumberFormatter *)displayNameForCurrencyCode:(id)arg0;
+ (OITSUNumberFormatter *)defaultFormatStringForValueType:(int)arg0;
+ (OITSUNumberFormatter *)localizedPercentSymbol;
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg0;
+ (OITSUNumberFormatter *)availableCurrencyCodes;
+ (OITSUNumberFormatter *)currentNonCachedLocaleCurrencyCode;
+ (OITSUNumberFormatter *)currentLocaleDecimalSeparator;
+ (OITSUNumberFormatter *)currentNonCachedLocaleDecimalSeparator;
+ (OITSUNumberFormatter *)currentLocaleListSeparator;
+ (OITSUNumberFormatter *)numberFormatStringSpecialSymbols;

- (void)dealloc;
- (OITSUNumberFormatter *)initWithLocale:(struct __CFLocale *)arg0;
- (NSObject *)defaultFormatStringForValueType:(int)arg0 negativeStyle:(int)arg1;
- (id)currentLocaleCurrencyCode;
- (id)currencySymbolForCurrencyCode:(id)arg0;
- (char)decimalFromString:(struct __CFString *)arg0 value:(double *)arg1 formatString:(struct __CFString * *)arg2;
- (char)currencyFromString:(struct __CFString *)arg0 additionalCurrencyCode:(struct __CFString *)arg1 value:(double *)arg2 formatString:(struct __CFString * *)arg3 currencyCode:(struct __CFString *)arg4;
- (char)percentageFromString:(struct __CFString *)arg0 value:(double *)arg1 formatString:(struct __CFString * *)arg2;
- (char)scientificFromString:(struct __CFString *)arg0 value:(double *)arg1 formatString:(struct __CFString * *)arg2;
- (char)fractionFromString:(struct __CFString *)arg0 value:(double *)arg1;
- (NSString *)displayNameForCurrencyCode:(id)arg0;
- (NSObject *)defaultFormatStringForValueType:(int)arg0;
- (id)localizedPercentSymbol;
- (void)numberPreferencesChanged:(NSNotification *)arg0;
- (struct __CFArray *)p_decimalFormatters;
- (char)valueFromString:(struct __CFString *)arg0 formatters:(struct __CFArray *)arg1 value:(double *)arg2 formatString:(struct __CFString * *)arg3 currencyCode:(struct __CFString *)arg4;
- (char)findCurrencySymbolInString:(struct __CFString *)arg0 additionalCurrencyCode:(struct __CFString *)arg1 successTSUlString:(struct __CFString * *)arg2;
- (struct __CFArray *)p_currencyFormatters;
- (struct __CFArray *)p_percentageFormatters;
- (struct __CFArray *)p_scientificFormatters;
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)arg0;

@end

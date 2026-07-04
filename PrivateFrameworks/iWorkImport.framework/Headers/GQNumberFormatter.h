/* Runtime dump - GQNumberFormatter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQNumberFormatter : NSObject
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

+ (NSString *)formatString:(NSString *)arg0 transformedForNegativeStyle:(int)arg1;
+ (GQNumberFormatter *)defaultFormatStringForValueType:(int)arg0 negativeStyle:(int)arg1;
+ (GQNumberFormatter *)currentLocaleCurrencyCode;
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg0;
+ (GQNumberFormatter *)currencySymbolForCurrencyCode:(id)arg0;
+ (GQNumberFormatter *)userVisibleCurrencyCodes;
+ (NSLocale *)formatterForLocale:(struct __CFLocale *)arg0;
+ (int)positionOfSymbol:(id)arg0 inNumberFormatSubpattern:(id)arg1;
+ (void)formatString:(NSString *)arg0 replaceOccurencesOfUnescapedString:(NSString *)arg1 withString:(NSString *)arg2;
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)arg0;
+ (GQNumberFormatter *)displayNameForCurrencyCode:(id)arg0;
+ (GQNumberFormatter *)defaultFormatStringForValueType:(int)arg0;
+ (GQNumberFormatter *)localizedPercentSymbol;
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg0;
+ (GQNumberFormatter *)availableCurrencyCodes;
+ (GQNumberFormatter *)numberFormatStringSpecialSymbols;

- (char)findCurrencySymbolInString:(struct __CFString *)arg0 additionalCurrencyCode:(struct __CFString *)arg1 successfulString:(struct __CFString * *)arg2;
- (void)dealloc;
- (GQNumberFormatter *)initWithLocale:(struct __CFLocale *)arg0;
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
- (char)valueFromString:(struct __CFString *)arg0 formatters:(struct __CFArray *)arg1 value:(double *)arg2 formatString:(struct __CFString * *)arg3 currencyCode:(struct __CFString *)arg4;
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)arg0;

@end

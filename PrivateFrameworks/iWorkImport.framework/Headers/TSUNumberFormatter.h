/* Runtime dump - TSUNumberFormatter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUNumberFormatter : NSObject
{
    struct __CFLocale * mLocale;
    struct __CFArray * mDecimalFormatters;
    struct __CFArray * mCurrencyFormatters;
    struct __CFArray * mPercentageFormatters;
    struct __CFArray * mScientificFormatters;
    struct __CFNumberFormatter * mFractionFormatter;
    NSDictionary * mCurrencyCodeToSymbolMap;
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

+ (TSUNumberFormatter *)stringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand:(id)arg0;
+ (TSUNumberFormatter *)currencySymbolForCurrencyCode:(id)arg0 locale:(struct __CFLocale *)arg1;
+ (TSUNumberFormatter *)defaultCurrencyCodeForLocale:(struct __CFLocale *)arg0;
+ (NSLocale *)localizedPercentSymbolForLocale:(struct __CFLocale *)arg0;
+ (TSUNumberFormatter *)currentLocaleCurrencyDecimalSeparator;
+ (TSUNumberFormatter *)currentNonCachedLocaleCurrencyDecimalSeparator;
+ (void)initialize;
+ (NSString *)formatString:(NSString *)arg0 transformedForNegativeStyle:(int)arg1;
+ (TSUNumberFormatter *)defaultFormatStringForValueType:(int)arg0 negativeStyle:(int)arg1;
+ (TSUNumberFormatter *)currentLocaleCurrencyCode;
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg0;
+ (TSUNumberFormatter *)currencySymbolForCurrencyCode:(id)arg0;
+ (TSUNumberFormatter *)userVisibleCurrencyCodes;
+ (NSLocale *)formatterForLocale:(struct __CFLocale *)arg0;
+ (int)positionOfSymbol:(id)arg0 inNumberFormatSubpattern:(id)arg1;
+ (void)formatString:(NSString *)arg0 replaceOccurencesOfUnescapedString:(NSString *)arg1 withString:(NSString *)arg2;
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)arg0;
+ (TSUNumberFormatter *)displayNameForCurrencyCode:(id)arg0;
+ (TSUNumberFormatter *)defaultFormatStringForValueType:(int)arg0;
+ (TSUNumberFormatter *)localizedPercentSymbol;
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg0;
+ (TSUNumberFormatter *)availableCurrencyCodes;
+ (TSUNumberFormatter *)currentLocaleDecimalSeparator;
+ (TSUNumberFormatter *)currentNonCachedLocaleDecimalSeparator;
+ (TSUNumberFormatter *)currentLocaleListSeparator;
+ (TSUNumberFormatter *)numberFormatStringSpecialSymbols;

- (void)dealloc;
- (TSUNumberFormatter *)initWithLocale:(struct __CFLocale *)arg0;
- (NSObject *)defaultFormatStringForValueType:(int)arg0 negativeStyle:(int)arg1;
- (NSString *)currencyCode;
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

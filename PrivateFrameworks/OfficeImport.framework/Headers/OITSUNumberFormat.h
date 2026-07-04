/* Runtime dump - OITSUNumberFormat
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUNumberFormat : NSObject <TSUNumberFormatting, NSCopying, NSMutableCopying>
{
    int mValueType;
    NSString * mFormatString;
    unsigned short mDecimalPlaces;
    NSString * mCurrencyCode;
    char mUseAccountingStyle;
    int mNegativeStyle;
    char mShowThousandsSeparator;
    int mFractionAccuracy;
    char mFormatStringRequiresSuppressionOfMinusSign;
    char mUseScientificFormattingAutomatically;
    char mIgnoreDecimalPlacesForZeroValue;
    NSString * mPrefixString;
    NSString * mSuffixString;
    unsigned char mBase;
    unsigned short mBasePlaces;
    char mBaseUseMinusSign;
    char mIsCustom;
    double mScaleFactor;
    char mFormatStringContainsTabCharacter;
    char mFormatContainsSpecialTokens;
    char mFormatContainsIntegerToken;
    unsigned char mNumberOfHashDecimalPlaceholders;
    unsigned char mTotalNumberOfDecimalPlaceholdersInFormat;
    char mRequiresFractionReplacement;
    NSArray * mInterstitialStrings;
    NSIndexSet * mInterstitialStringInsertionIndexes;
    unsigned short mIndexFromRightOfLastDigitPlaceholder;
    char mIsTextFormat;
    unsigned char mMinimumIntegerWidth;
    unsigned char mDecimalWidth;
    unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
    NSString * mFormatName;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)numberFormatWithValueType:(int)arg0 formatString:(NSString *)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(struct __CFString *)arg3 useAccountingStyle:(char)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(char)arg6 fractionAccuracy:(int)arg7 prefixString:(NSString *)arg8 suffixString:(NSString *)arg9 scaleFactor:(double)arg10 base:(unsigned char)arg11 basePlaces:(unsigned short)arg12 baseUseMinusSign:(char)arg13 isCustom:(char)arg14 formatName:(NSString *)arg15;
+ (NSObject *)numberFormatWithValueType:(int)arg0 formatString:(NSString *)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(struct __CFString *)arg3 useAccountingStyle:(char)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(char)arg6 fractionAccuracy:(int)arg7 base:(unsigned char)arg8 basePlaces:(unsigned short)arg9 baseUseMinusSign:(char)arg10;
+ (NSObject *)numberFormatWithValueType:(int)arg0 formatString:(NSString *)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(struct __CFString *)arg3 useAccountingStyle:(char)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(char)arg6 fractionAccuracy:(int)arg7;
+ (NSObject *)numberFormatWithValueType:(int)arg0 formatString:(NSString *)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(struct __CFString *)arg3 useAccountingStyle:(char)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(char)arg6 fractionAccuracy:(int)arg7 suffixString:(NSString *)arg8;
+ (NSObject *)numberFormatWithValueType:(int)arg0 formatString:(NSString *)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(struct __CFString *)arg3 useAccountingStyle:(char)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(char)arg6 fractionAccuracy:(int)arg7 scaleFactor:(double)arg8 isCustom:(char)arg9 formatName:(NSString *)arg10;

- (char)isCustom;
- (void)dealloc;
- (OITSUNumberFormat *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (OITSUNumberFormat *)copyWithZone:(struct _NSZone *)arg0;
- (double)scaleFactor;
- (OITSUNumberFormat *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (unsigned short)base;
- (NSString *)formatString;
- (NSString *)stringFromString:(NSString *)arg0;
- (OITSUNumberFormat *)initWithValueType:(int)arg0 formatString:(NSString *)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(struct __CFString *)arg3 useAccountingStyle:(char)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(char)arg6 fractionAccuracy:(int)arg7;
- (OITSUNumberFormat *)initWithValueType:(int)arg0 formatString:(NSString *)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(struct __CFString *)arg3 useAccountingStyle:(char)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(char)arg6 fractionAccuracy:(int)arg7 suffixString:(NSString *)arg8;
- (OITSUNumberFormat *)initWithValueType:(int)arg0 formatString:(NSString *)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(struct __CFString *)arg3 useAccountingStyle:(char)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(char)arg6 fractionAccuracy:(int)arg7 base:(unsigned char)arg8 basePlaces:(unsigned short)arg9 baseUseMinusSign:(char)arg10;
- (OITSUNumberFormat *)initWithValueType:(int)arg0 formatString:(NSString *)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(struct __CFString *)arg3 useAccountingStyle:(char)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(char)arg6 fractionAccuracy:(int)arg7 prefixString:(NSString *)arg8 suffixString:(NSString *)arg9 scaleFactor:(double)arg10 base:(unsigned char)arg11 basePlaces:(unsigned short)arg12 baseUseMinusSign:(char)arg13 isCustom:(char)arg14 interstitialStrings:(NSArray *)arg15 interstitialStringInsertionIndexes:(NSIndexSet *)arg16 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg17 minimumIntegerWidth:(unsigned char)arg18 decimalWidth:(unsigned char)arg19 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg20 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg21 isTextFormat:(char)arg22 formatName:(NSString *)arg23;
- (unsigned short)decimalPlaces;
- (NSString *)currencyCode;
- (char)showThousandsSeparator;
- (char)usesAccountingStyle;
- (int)negativeStyle;
- (int)fractionAccuracy;
- (NSString *)stringFromDouble:(double)arg0 decimalPlaces:(unsigned short)arg1 minimumDecimalPlaces:(unsigned short)arg2 forceSuppressMinusSign:(char)arg3;
- (NSString *)stringFromDouble:(double)arg0 forceSuppressMinusSign:(char)arg1;
- (char)hasValidDecimalPlaces;
- (NSObject *)numberFormatBySettingValueType:(int)arg0;
- (NSNumber *)numberFormatBySettingDecimalPlaces:(unsigned short)arg0;
- (NSNumber *)numberFormatByIncrementingDecimalPlaces:(short)arg0;
- (NSNumber *)numberFormatBySettingCurrencyCode:(NSString *)arg0;
- (NSString *)numberFormatBySettingSuffixString:(NSString *)arg0;
- (NSObject *)numberFormatBySettingNegativeStyle:(int)arg0;
- (NSString *)numberFormatBySettingShowThousandsSeparator:(char)arg0;
- (NSNumber *)numberFormatBySettingFractionAccuracy:(int)arg0;
- (NSObject *)numberFormatBySettingUseAccountingStyle:(char)arg0;
- (NSNumber *)numberFormatBySettingDecimalPlaces:(unsigned short)arg0 andNegativeStyle:(int)arg1;
- (NSString *)formatName;
- (NSArray *)customNumberFormatTokens;
- (NSString *)suffixString;
- (char)isTextFormat;
- (char)canFormatText;
- (char)usesTextFormatForValue:(double)arg0;
- (char)customFormatShouldAutoInsertPercentSymbol;
- (unsigned short)basePlaces;
- (char)baseUseMinusSign;
- (void)setFormatName:(NSString *)arg0;
- (char)usesTabs;
- (char)requiresParensToBeReplacedWithSpacesForDouble:(double)arg0;
- (NSString *)stringFromDouble:(double)arg0;
- (NSString *)stringFromDouble:(double)arg0 minimumDecimalPlaces:(unsigned short)arg1;
- (NSString *)stringFromDouble:(double)arg0 decimalPlaces:(unsigned short)arg1 minimumDecimalPlaces:(unsigned short)arg2;
- (NSString *)chartLabelStringFromDouble:(double)arg0;
- (char)isEquivalent:(id)arg0;
- (OITSUNumberFormat *)initCustomFormatWithFormatString:(NSString *)arg0 currencyCode:(struct __CFString *)arg1 showThousandsSeparator:(char)arg2 fractionAccuracy:(int)arg3 scaleFactor:(double)arg4 interstitialStrings:(NSArray *)arg5 interstitialStringInsertionIndexes:(NSIndexSet *)arg6 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg7 minimumIntegerWidth:(unsigned char)arg8 decimalWidth:(unsigned char)arg9 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg10 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg11 isTextFormat:(char)arg12 formatName:(NSString *)arg13;
- (NSString *)numberFormatBySettingPrefixString:(NSString *)arg0;
- (NSNumber *)numberFormatBySettingBase:(unsigned char)arg0;
- (NSNumber *)numberFormatBySettingBasePlaces:(unsigned short)arg0;
- (NSNumber *)numberFormatBySettingBaseRepresentNegativeWithMinus:(char)arg0;
- (NSString *)prefixString;
- (char)useScientificFormattingAutomatically;
- (void)setUseScientificFormattingAutomatically:(char)arg0;
- (char)ignoreDecimalPlacesForZeroValue;
- (void)setIgnoreDecimalPlacesForZeroValue:(char)arg0;
- (id)chartLabelStringNofixFromDouble:(double)arg0;
- (id)chartLabelStringFromDouble:(double)arg0 forceSuppressMinusSign:(char)arg1;
- (NSString *)stringFromDouble:(double)arg0 minimumDecimalPlaces:(unsigned short)arg1 forceSuppressMinusSign:(char)arg2;
- (id)fractionStringFromDouble:(double)arg0;
- (id)baseStringFromDouble:(double)arg0;
- (int)valueType;

@end

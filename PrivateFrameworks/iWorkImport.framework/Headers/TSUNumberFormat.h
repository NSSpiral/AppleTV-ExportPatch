/* Runtime dump - TSUNumberFormat
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUNumberFormat : NSObject <TSUNumberFormatting, NSCopying, NSMutableCopying>
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
    NSUUID * mCustomFormatKey;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TSUNumberFormat *)instanceWithArchive:(struct FormatStructArchive *)arg0 unarchiver:(struct FormatStructArchive)arg1;
+ (TSUNumberFormat *)numberFormatFromFormatStruct:(struct ?)arg0;
+ (NSObject *)numberFormatWithValueType:(int)arg0 formatString:(NSString *)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(struct __CFString *)arg3 useAccountingStyle:(char)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(char)arg6 fractionAccuracy:(int)arg7 prefixString:(NSString *)arg8 suffixString:(NSString *)arg9 scaleFactor:(double)arg10 base:(unsigned char)arg11 basePlaces:(unsigned short)arg12 baseUseMinusSign:(char)arg13 isCustom:(char)arg14 formatName:(NSString *)arg15;
+ (NSObject *)numberFormatWithValueType:(int)arg0 formatString:(NSString *)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(struct __CFString *)arg3 useAccountingStyle:(char)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(char)arg6 fractionAccuracy:(int)arg7;

- (TSUNumberFormat *)initWithValueType:(int)arg0 formatString:(NSString *)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(struct __CFString *)arg3 useAccountingStyle:(char)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(char)arg6 fractionAccuracy:(int)arg7 prefixString:(NSString *)arg8 suffixString:(NSString *)arg9 scaleFactor:(double)arg10 base:(unsigned char)arg11 basePlaces:(unsigned short)arg12 baseUseMinusSign:(char)arg13 isCustom:(char)arg14 interstitialStrings:(NSArray *)arg15 interstitialStringInsertionIndexes:(NSIndexSet *)arg16 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg17 minimumIntegerWidth:(unsigned char)arg18 decimalWidth:(unsigned char)arg19 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg20 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg21 isTextFormat:(char)arg22 formatName:(NSString *)arg23 customFormatKey:(NSString *)arg24;
- (TSUNumberFormat *)initWithValueType:(int)arg0 formatString:(NSString *)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(struct __CFString *)arg3 useAccountingStyle:(char)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(char)arg6 fractionAccuracy:(int)arg7 prefixString:(NSString *)arg8 suffixString:(NSString *)arg9 isCustom:(char)arg10;
- (NSString *)stringFromDouble:(double)arg0 locale:(NSObject *)arg1 decimalPlaces:(unsigned short)arg2 minimumDecimalPlaces:(unsigned short)arg3 forceSuppressMinusSign:(char)arg4;
- (NSString *)stringFromDouble:(double)arg0 locale:(NSObject *)arg1;
- (NSString *)customFormatKey;
- (NSString *)stringFromDouble:(double)arg0 locale:(NSObject *)arg1 forceSuppressMinusSign:(char)arg2;
- (NSString *)stringFromDouble:(double)arg0 locale:(NSObject *)arg1 minimumDecimalPlaces:(unsigned short)arg2 forceSuppressMinusSign:(char)arg3;
- (NSString *)stringFromDouble:(double)arg0 locale:(NSObject *)arg1 minimumDecimalPlaces:(unsigned short)arg2;
- (NSString *)stringFromDouble:(double)arg0 locale:(NSObject *)arg1 decimalPlaces:(unsigned short)arg2 minimumDecimalPlaces:(unsigned short)arg3;
- (void)saveToArchive:(struct FormatStructArchive *)arg0 archiver:(struct /* ? */)arg1;
- (TSUNumberFormat *)initWithArchive:(struct FormatStructArchive *)arg0 unarchiver:(struct FormatStructArchive)arg1;
- (struct ?)formatStructAndCustomFormatData:(struct ?)arg0;
- (char)isCustom;
- (void)dealloc;
- (TSUNumberFormat *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSUNumberFormat *)copyWithZone:(struct _NSZone *)arg0;
- (double)scaleFactor;
- (TSUNumberFormat *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (unsigned short)base;
- (NSString *)formatString;
- (NSString *)stringFromString:(NSString *)arg0;
- (TSUNumberFormat *)initWithValueType:(int)arg0 formatString:(NSString *)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(struct __CFString *)arg3 useAccountingStyle:(char)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(char)arg6 fractionAccuracy:(int)arg7;
- (TSUNumberFormat *)initWithValueType:(int)arg0 formatString:(NSString *)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(struct __CFString *)arg3 useAccountingStyle:(char)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(char)arg6 fractionAccuracy:(int)arg7 suffixString:(NSString *)arg8;
- (TSUNumberFormat *)initWithValueType:(int)arg0 formatString:(NSString *)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(struct __CFString *)arg3 useAccountingStyle:(char)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(char)arg6 fractionAccuracy:(int)arg7 base:(unsigned char)arg8 basePlaces:(unsigned short)arg9 baseUseMinusSign:(char)arg10;
- (unsigned short)decimalPlaces;
- (NSString *)currencyCode;
- (char)showThousandsSeparator;
- (char)usesAccountingStyle;
- (int)negativeStyle;
- (int)fractionAccuracy;
- (char)hasValidDecimalPlaces;
- (NSObject *)numberFormatBySettingNegativeStyle:(int)arg0;
- (NSObject *)numberFormatBySettingUseAccountingStyle:(char)arg0;
- (NSString *)formatName;
- (id)customNumberFormatTokens;
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
- (char)isEquivalent:(id)arg0;
- (TSUNumberFormat *)initCustomFormatWithFormatString:(NSString *)arg0 currencyCode:(struct __CFString *)arg1 showThousandsSeparator:(char)arg2 fractionAccuracy:(int)arg3 scaleFactor:(double)arg4 interstitialStrings:(NSArray *)arg5 interstitialStringInsertionIndexes:(NSIndexSet *)arg6 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg7 minimumIntegerWidth:(unsigned char)arg8 decimalWidth:(unsigned char)arg9 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg10 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg11 isTextFormat:(char)arg12 formatName:(NSString *)arg13;
- (NSString *)prefixString;
- (char)useScientificFormattingAutomatically;
- (void)setUseScientificFormattingAutomatically:(char)arg0;
- (char)ignoreDecimalPlacesForZeroValue;
- (void)setIgnoreDecimalPlacesForZeroValue:(char)arg0;
- (id)fractionStringFromDouble:(double)arg0;
- (id)baseStringFromDouble:(double)arg0;
- (int)valueType;

@end

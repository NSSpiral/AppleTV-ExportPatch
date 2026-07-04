/* Runtime dump - GQDTNumberFormat
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTNumberFormat : NSObject <GQDNameMappable>
{
    char * mUid;
    struct __CFString * mFormatString;
    struct __CFString * mCurrencyCode;
    long mDecimalPlaces;
    char mUseAccountingStyle;
    char mShowThousandsSeparator;
    int mValueType;
    int mNegativeStyle;
    int mFractionAccuracy;
    char mFormatStringRequiresSuppressionOfMinusSign;
    double mScaleFactor;
    char mIsCustom;
    char mRequiresFractionReplacement;
    unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
    unsigned short mIndexFromRightOfLastDigitPlaceholder;
    unsigned char mBase;
    unsigned short mBasePlaces;
    char mBaseUsesMinusSign;
    char mUseScientificFormattingAutomatically;
    char mIgnoreDecimalPlacesForZeroValue;
    char mIsTextFormat;
    char mFormatContainsSpecialTokens;
    char mFormatContainsIntegerToken;
    NSArray * mInterstitialStrings;
    NSIndexSet * mInterstitialStringInsertionIndexes;
    unsigned char mMinimumIntegerWidth;
    unsigned char mDecimalWidth;
    struct __CFString * mSuffixString;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;
+ (char)needToSuppressMinusSignForFormatString:(struct __CFString *)arg0;
+ (NSObject *)numberFormatWithValueType:(int)arg0 formatString:(NSString *)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(struct __CFString *)arg3 useAccountingStyle:(char)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(char)arg6 fractionAccuracy:(int)arg7 suffixString:(struct __CFString *)arg8;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0;
- (struct __CFString *)createStringFromDouble:(double)arg0;
- (GQDTNumberFormat *)initWithValueType:(int)arg0 formatString:(NSString *)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(struct __CFString *)arg3 useAccountingStyle:(char)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(char)arg6 fractionAccuracy:(int)arg7 suffixString:(struct __CFString *)arg8 scaleFactor:(double)arg9 base:(unsigned short)arg10 basePlaces:(unsigned short)arg11 baseUseMinusSign:(char)arg12 isCustom:(char)arg13 interstitialStrings:(NSArray *)arg14 interstitialStringInsertionIndexes:(NSIndexSet *)arg15 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg16 minimumIntegerWidth:(unsigned char)arg17 decimalWidth:(unsigned char)arg18 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg19 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg20 isTextFormat:(char)arg21 formatName:(NSString *)arg22;
- (char)useAccountingStyle;
- (char)isCustom;
- (void)dealloc;
- (NSString *)formatString;
- (NSString *)currencyCode;
- (char)showThousandsSeparator;
- (int)fractionAccuracy;
- (char)hasValidDecimalPlaces;
- (NSObject *)numberFormatBySettingValueType:(int)arg0;
- (NSObject *)numberFormatBySettingNegativeStyle:(int)arg0;
- (id)customNumberFormatTokens;
- (char)isTextFormat;
- (NSString *)stringFromDouble:(double)arg0;
- (void)setUseScientificFormattingAutomatically:(char)arg0;
- (id)fractionStringFromDouble:(double)arg0;
- (id)baseStringFromDouble:(double)arg0;
- (int)valueType;

@end

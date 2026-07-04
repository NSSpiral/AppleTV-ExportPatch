/* Runtime dump - TSUCustomFormatData
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUCustomFormatData : NSObject <NSCopying, NSMutableCopying>
{
    unsigned char mMinimumIntegerWidth;
    unsigned char mDecimalWidth;
    unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
    unsigned char mIndexFromRightOfLastDigitPlaceholder;
    unsigned char mNumberOfHashDecimalPlaceholders;
    unsigned char mTotalNumberOfDecimalPlaceholdersInFormat;
    char mShowThousandsSeparator;
    char mUseAccountingStyle;
    char mRequiresFractionReplacement;
    char mIsConditional;
    char mFormatContainsIntegerToken;
    char mIsComplexFormat;
    unsigned short mCurrencyCodeIndex;
    NSString * mFormatString;
    NSArray * mInterstitialStrings;
    NSIndexSet * mInterstitialStringInsertionIndexes;
    int mFractionAccuracy;
    double mScaleFactor;
}

@property (copy, nonatomic) NSString * formatString;
@property (copy, nonatomic) NSArray * interstitialStrings;
@property (copy, nonatomic) NSIndexSet * interstitialStringInsertionIndexes;
@property (nonatomic) double scaleFactor;
@property (nonatomic) int fractionAccuracy;
@property (nonatomic) unsigned char minimumIntegerWidth;
@property (nonatomic) unsigned char decimalWidth;
@property (nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits;
@property (nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits;
@property (nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder;
@property (nonatomic) unsigned char numberOfHashDecimalPlaceholders;
@property (nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat;
@property (nonatomic) unsigned short currencyCodeIndex;
@property (nonatomic) char showThousandsSeparator;
@property (nonatomic) char useAccountingStyle;
@property (nonatomic) char requiresFractionReplacement;
@property (nonatomic) char isConditional;
@property (nonatomic) char formatContainsIntegerToken;
@property (nonatomic) char isComplexFormat;

+ (NSData *)customFormatData;

- (char)useAccountingStyle;
- (char)isComplexFormat;
- (char)isConditional;
- (unsigned short)currencyCodeIndex;
- (NSArray *)interstitialStrings;
- (NSIndexSet *)interstitialStringInsertionIndexes;
- (unsigned char)minimumIntegerWidth;
- (unsigned char)decimalWidth;
- (unsigned char)numberOfNonSpaceIntegerPlaceholderDigits;
- (unsigned char)numberOfNonSpaceDecimalPlaceholderDigits;
- (unsigned char)numberOfHashDecimalPlaceholders;
- (unsigned char)totalNumberOfDecimalPlaceholdersInFormat;
- (unsigned char)indexFromRightOfLastDigitPlaceholder;
- (char)formatContainsIntegerToken;
- (char)requiresFractionReplacement;
- (void)p_copySelfTo:(id)arg0;
- (void)setFormatString:(NSString *)arg0;
- (void)setInterstitialStrings:(NSArray *)arg0;
- (void)setInterstitialStringInsertionIndexes:(NSIndexSet *)arg0;
- (void)setMinimumIntegerWidth:(unsigned char)arg0;
- (void)setDecimalWidth:(unsigned char)arg0;
- (void)setNumberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg0;
- (void)setNumberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg0;
- (void)setIndexFromRightOfLastDigitPlaceholder:(unsigned char)arg0;
- (void)setNumberOfHashDecimalPlaceholders:(unsigned char)arg0;
- (void)setTotalNumberOfDecimalPlaceholdersInFormat:(unsigned char)arg0;
- (void)setCurrencyCodeIndex:(unsigned short)arg0;
- (void)setRequiresFractionReplacement:(char)arg0;
- (void)setIsConditional:(char)arg0;
- (void)setFormatContainsIntegerToken:(char)arg0;
- (void)setIsComplexFormat:(char)arg0;
- (TSUCustomFormatData *)initWithCustomFormatData:(TSUCustomFormat *)arg0;
- (void)setScaleFactor:(double)arg0;
- (TSUCustomFormatData *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSUCustomFormatData *)copyWithZone:(struct _NSZone *)arg0;
- (double)scaleFactor;
- (TSUCustomFormatData *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSString *)formatString;
- (char)showThousandsSeparator;
- (int)fractionAccuracy;
- (void)setShowThousandsSeparator:(char)arg0;
- (void)setFractionAccuracy:(int)arg0;
- (void)setUseAccountingStyle:(char)arg0;

@end

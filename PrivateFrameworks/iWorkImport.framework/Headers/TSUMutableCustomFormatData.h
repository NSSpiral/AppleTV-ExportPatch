/* Runtime dump - TSUMutableCustomFormatData
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUMutableCustomFormatData : TSUCustomFormatData

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

- (TSUMutableCustomFormatData *)copyWithZone:(struct _NSZone *)arg0;

@end

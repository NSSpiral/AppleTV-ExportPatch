/* Runtime dump - TSCHNumberFormat
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHNumberFormat : NSObject <NSCopying, NSMutableCopying, TSCHDataFormatter, TSCHCustomFormatSupport, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject>
{
    struct ? mFormatStruct;
    NSString * mPrefixString;
    NSString * mSuffixString;
}

@property (readonly, nonatomic) int formatType;
@property (readonly, nonatomic) unsigned int decimalPlaces;
@property (readonly, copy, nonatomic) NSString * currencyCode;
@property (readonly, nonatomic) char useAccountingStyle;
@property (readonly, nonatomic) int negativeStyle;
@property (readonly, nonatomic) char showThousandsSeparator;
@property (readonly, nonatomic) int fractionAccuracy;
@property (readonly, copy, nonatomic) NSString * prefixString;
@property (readonly, copy, nonatomic) NSString * suffixString;
@property (readonly, nonatomic) double scaleFactor;
@property (readonly, nonatomic) unsigned int base;
@property (readonly, nonatomic) unsigned int basePlaces;
@property (readonly, nonatomic) char baseUseMinusSign;
@property (readonly, nonatomic) char usesNumberFormatStruct;
@property (readonly, nonatomic) char isCurrency;
@property (readonly, nonatomic) char isPercentage;
@property (readonly, nonatomic) char isFraction;
@property (readonly, nonatomic) char isBase;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TSCHNumberFormat *)instanceWithArchive:(struct FormatStructArchive *)arg0 unarchiver:(struct FormatStructArchive)arg1;
+ (NSObject *)numberFormatWithFormatType:(int)arg0 decimalPlaces:(unsigned int)arg1 showThousandsSeparator:(char)arg2;
+ (TSCHNumberFormat *)defaultDecimalNumberFormat;
+ (TSCHNumberFormat *)numberFormatWithFormatStruct:(struct ?)arg0 prefixString:(struct ?)arg1 suffixString:(struct ?)arg2;
+ (int)labelFormatTypeFromTSUFormatType:(int)arg0;
+ (int)defaultFractionAccuracy;
+ (TSCHNumberFormat *)defaultCurrencyCode;
+ (char)supportsFormatType:(int)arg0;
+ (int)defaultNegativeNumberStyle;
+ (unsigned int)defaultBase;
+ (unsigned int)defaultBasePlaces;
+ (char)defaultBaseUseMinusSign;
+ (TSCHNumberFormat *)automaticDecimalPlaces;

- (char)useAccountingStyle;
- (NSString *)customFormatKey;
- (void)saveToArchive:(struct FormatStructArchive *)arg0 archiver:(struct /* ? */)arg1;
- (TSCHNumberFormat *)initWithArchive:(struct FormatStructArchive *)arg0 unarchiver:(struct FormatStructArchive)arg1;
- (NSString *)customFormatListKey;
- (NSNumber *)numberFormatByResettingToDefaultNegativeStyleIfAvailable;
- (NSObject *)dataFormatterForDocumentRoot:(NSObject *)arg0;
- (id)chartFormattedStringForValue:(id)arg0 locale:(NSObject *)arg1;
- (id)chartFormattedInspectorStringForValue:(id)arg0 locale:(NSObject *)arg1;
- (char)isCompatibleWithDataFormatter:(NSObject *)arg0;
- (NSObject *)convertToPersistableStyleObject;
- (NSLocale *)convertToSupportedClientFormatObjectWithLocale:(NSObject *)arg0;
- (int)numberOfDecimalPlaces;
- (id)upgradedNumberFormatFromPreUFFOrUnity1_0;
- (TSCHNumberFormat *)initWithFormatStruct:(struct ?)arg0 prefixString:(struct ?)arg1 suffixString:(struct ?)arg2;
- (id)p_initWithFormatStruct:(struct ?)arg0 prefixString:(struct ?)arg1 suffixString:(struct ?)arg2;
- (char)usesNumberFormatStruct;
- (char)isFraction;
- (char)isCurrency;
- (char)isScientific;
- (unsigned int)p_decimalPlacesIfAvailable;
- (unsigned int)p_decimalPlaces;
- (id)p_currencyCode;
- (id)p_currencyCodeIfAvailable;
- (char)p_useAccountingStyle;
- (char)p_useAccountingStyleIfAvailable;
- (int)p_negativeStyle;
- (int)p_negativeStyleIfAvailable;
- (char)p_showThousandsSeparator;
- (char)p_showThousandsSeparatorIfAvailable;
- (int)p_fractionAccuracy;
- (int)p_fractionAccuracyIfAvailable;
- (char)isBase;
- (unsigned int)p_base;
- (unsigned int)p_basePlaces;
- (char)p_baseUseMinusSign;
- (int)negativeStyleForNumberFormatter;
- (id)p_formattedBodyStringForDouble:(double)arg0 locale:(NSObject *)arg1;
- (char)isPercentage;
- (NSString *)p_formatTypeDescription;
- (char)p_hasValidDecimalPlaces;
- (unsigned int)p_baseIfAvailable;
- (unsigned int)p_basePlacesIfAvailable;
- (char)p_baseUseMinusSignIfAvailable;
- (char)supportsAutoMinMax;
- (char)isCustom;
- (void)dealloc;
- (TSCHNumberFormat *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSCHNumberFormat *)copyWithZone:(struct _NSZone *)arg0;
- (double)scaleFactor;
- (void).cxx_construct;
- (TSCHNumberFormat *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (unsigned int)base;
- (int)formatType;
- (unsigned int)decimalPlaces;
- (NSString *)currencyCode;
- (char)showThousandsSeparator;
- (int)negativeStyle;
- (int)fractionAccuracy;
- (NSString *)suffixString;
- (unsigned int)basePlaces;
- (char)baseUseMinusSign;
- (NSString *)prefixString;
- (struct ?)formatStruct;
- (int)valueType;

@end

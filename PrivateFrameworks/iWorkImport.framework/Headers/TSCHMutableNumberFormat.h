/* Runtime dump - TSCHMutableNumberFormat
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMutableNumberFormat : TSCHNumberFormat <TSCHCustomFormatUpdateSupport>

@property (nonatomic) int formatType;
@property (nonatomic) unsigned int decimalPlaces;
@property (copy, nonatomic) NSString * currencyCode;
@property (nonatomic) char useAccountingStyle;
@property (nonatomic) int negativeStyle;
@property (nonatomic) char showThousandsSeparator;
@property (nonatomic) int fractionAccuracy;
@property (copy, nonatomic) NSString * prefixString;
@property (copy, nonatomic) NSString * suffixString;
@property (nonatomic) unsigned int base;
@property (nonatomic) unsigned int basePlaces;
@property (nonatomic) char baseUseMinusSign;

- (void)updateAfterPasteForDocumentRoot:(NSObject *)arg0 pasteboardCustomFormatList:(NSArray *)arg1;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(NSObject *)arg0;
- (NSArray *)p_formatTypeAffectedPropertyKeys;
- (void)p_setFractionAccuracy:(int)arg0;
- (void)setBaseUseMinusSign:(char)arg0;
- (TSCHMutableNumberFormat *)copyWithZone:(struct _NSZone *)arg0;
- (void)setBase:(unsigned int)arg0;
- (void)setDecimalPlaces:(unsigned int)arg0;
- (void)setPrefixString:(NSString *)arg0;
- (void)setSuffixString:(NSString *)arg0;
- (void)setCurrencyCode:(NSString *)arg0;
- (void)setNegativeStyle:(int)arg0;
- (void)setShowThousandsSeparator:(char)arg0;
- (void)setFractionAccuracy:(int)arg0;
- (void)setUseAccountingStyle:(char)arg0;
- (void)setBasePlaces:(unsigned int)arg0;
- (void)setFormatType:(int)arg0;
- (void)setValueType:(int)arg0;

@end

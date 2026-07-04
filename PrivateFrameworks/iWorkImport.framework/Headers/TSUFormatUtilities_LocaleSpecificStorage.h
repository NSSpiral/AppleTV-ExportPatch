/* Runtime dump - TSUFormatUtilities_LocaleSpecificStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUFormatUtilities_LocaleSpecificStorage : NSObject
{
    NSString * _formatDecimalString;
    NSString * _formatDecimalStringMinus;
    NSString * _formatDecimalStringRedOnly;
    NSString * _formatCurrencyString;
    NSString * _formatCurrencyStringMinus;
    NSString * _formatCurrencyStringRedOnly;
    NSString * _formatPercentageString;
    NSString * _formatPercentageStringMinus;
    NSString * _formatPercentageStringRedOnly;
    NSString * _formatScientificString;
    NSString * _formatScientificStringMinus;
    NSString * _formatScientificStringRedOnly;
    NSString * _formatDateTimeString;
    NSString * _formatDecimalStringWithParens;
    NSString * _formatScientificStringWithParens;
    NSString * _formatCurrencyStringWithParens;
    NSString * _formatPercentageStringWithParens;
}

@property (readonly) NSString * formatDecimalString;
@property (readonly) NSString * formatDecimalStringMinus;
@property (readonly) NSString * formatDecimalStringRedOnly;
@property (readonly) NSString * formatCurrencyString;
@property (readonly) NSString * formatCurrencyStringMinus;
@property (readonly) NSString * formatCurrencyStringRedOnly;
@property (readonly) NSString * formatPercentageString;
@property (readonly) NSString * formatPercentageStringMinus;
@property (readonly) NSString * formatPercentageStringRedOnly;
@property (readonly) NSString * formatScientificString;
@property (readonly) NSString * formatScientificStringMinus;
@property (readonly) NSString * formatScientificStringRedOnly;
@property (readonly) NSString * formatDateTimeString;
@property (readonly) NSString * formatDecimalStringWithParens;
@property (readonly) NSString * formatScientificStringWithParens;
@property (readonly) NSString * formatCurrencyStringWithParens;
@property (readonly) NSString * formatPercentageStringWithParens;

+ (NSLocale *)localeSpecificStorageForLocale:(NSObject *)arg0;

- (NSString *)formatDecimalString;
- (NSString *)formatDecimalStringMinus;
- (NSString *)formatDecimalStringRedOnly;
- (NSString *)formatCurrencyString;
- (NSString *)formatCurrencyStringMinus;
- (NSString *)formatCurrencyStringRedOnly;
- (NSString *)formatPercentageString;
- (NSString *)formatPercentageStringMinus;
- (NSString *)formatPercentageStringRedOnly;
- (NSString *)formatScientificString;
- (NSString *)formatScientificStringMinus;
- (NSString *)formatScientificStringRedOnly;
- (NSString *)formatDateTimeString;
- (NSString *)formatDecimalStringWithParens;
- (NSString *)formatScientificStringWithParens;
- (NSString *)formatCurrencyStringWithParens;
- (NSString *)formatPercentageStringWithParens;
- (void)dealloc;
- (TSUFormatUtilities_LocaleSpecificStorage *)initWithLocale:(NSObject *)arg0;

@end

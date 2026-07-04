/* Runtime dump - ECCurrencyConverter
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ECCurrencyConverter : NSObject
{
    NSMutableDictionary * mXlToLassoCurrencyCode;
    NSMutableDictionary * mLassoToXlCurrencyCode;
    NSMutableDictionary * mXlAccountingFormat;
    NSMutableDictionary * mXlToLassoCurrencyCodeBySymbol;
}

+ (ECCurrencyConverter *)currencyConverter;

- (void)dealloc;
- (void)populateDictionaries;
- (id)lassoCurrencyCodeForDollar;
- (id)lassoCurrencyCodeFromXl:(id)arg0;
- (id)xlCurrencyCodeFromLasso:(id)arg0;
- (int)xlAccountFormatFromLasso:(id)arg0;

@end

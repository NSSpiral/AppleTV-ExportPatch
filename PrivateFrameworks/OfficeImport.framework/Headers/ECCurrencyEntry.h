/* Runtime dump - ECCurrencyEntry
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ECCurrencyEntry : NSObject
{
    NSString * mLassoCurrencyCode;
    NSString * mXlLangId;
    NSString * mXlCurrencySymbol;
    BOOL mAppliesToExport;
    int mXlAccountingFormat;
}

+ (ECCurrencyEntry *)currencyWithLassoCode:(id)arg0 langId:(int)arg1 xlSymbol:(id)arg2;
+ (ECCurrencyEntry *)currencyWithLassoCode:(id)arg0 langId:(int)arg1 xlSymbol:(id)arg2 accountingFormat:(int)arg3;
+ (ECCurrencyEntry *)currencyWithLassoCode:(id)arg0 langId:(int)arg1 xlSymbol:(id)arg2 isExport:(BOOL)arg3;
+ (ECCurrencyEntry *)currencyWithLassoCode:(id)arg0 langId:(int)arg1 xlSymbol:(id)arg2 isExport:(BOOL)arg3 accountingFormat:(int)arg4;

- (void)dealloc;
- (ECCurrencyEntry *)initWithLassoCode:(id)arg0 langId:(int)arg1 xlSymbol:(id)arg2 isExport:(BOOL)arg3 accountingFormat:(int)arg4;

@end

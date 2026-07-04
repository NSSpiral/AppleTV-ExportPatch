/* Runtime dump - EFormula
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EFormula : NSObject
{
    <EFHelper> * mHelper;
    struct EFLexer * mYylex;
    Class mFormulaClass;
    EDFormula * mFormula;
    EFTableData * mTableData;
    NSString * mErrMsg;
}

+ (EFormula *)singletonEFormula;
+ (EFormula *)stringToFormula:(id)arg0 formulaHelper:(NSObject *)arg1 formulaClass:(Class)arg2;

- (void)dealloc;
- (void)setFormula:(EDArrayedFormula *)arg0;
- (void)setFormulaClass:(Class)arg0;
- (void)setFormulaHelper:(NSObject *)arg0;
- (id)stringToTokens:(id)arg0;
- (unsigned int)resolveName:(char *)arg0;
- (unsigned int)resolveFirstSheet:(NSString *)arg0 lastSheet:(NSString *)arg1;
- (NSObject *)formulaHelper;
- (Class)formulaClass;
- (unsigned int)resolveSheet:(char *)arg0 isCurrentSheet:(char *)arg1;
- (id)resolveTable:(char *)arg0 sheetIndex:(unsigned int *)arg1;
- (NSData *)tableData;
- (void)setTableData:(NSData *)arg0;

@end

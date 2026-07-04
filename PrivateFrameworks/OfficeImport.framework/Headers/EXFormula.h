/* Runtime dump - EXFormula
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXFormula : NSObject

+ (NSObject *)edFormulaFromXmlFormulaElement:(struct _xmlNode *)arg0 formulaClass:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (Class)formulaClassFromXmlFormulaElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (NSObject *)readFrom:(struct _xmlNode *)arg0 formulaClass:(struct _xmlNode *)arg1 rowNumber:(struct _xmlNode *)arg2 columnNumber:(struct _xmlNode *)arg3 edCell:(struct _xmlNode *)arg4 edRowBlocks:(struct _xmlDoc *)arg5 state:(struct _xmlNs *)arg6;
+ (void)applyArrayedFormula:(id)arg0 edReference:(NSObject *)arg1 edWorksheet:(EDWorksheet *)arg2 state:(NSObject *)arg3;
+ (NSString *)edTokensForFormulaString:(NSString *)arg0 formulaClass:(Class)arg1 rowNumber:(int)arg2 columnNumber:(int)arg3 sheet:(NSObject *)arg4 workbook:(EDWorkbook *)arg5;
+ (NSObject *)edFormulaFromXmlFormulaElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)readFrom:(struct _xmlNode *)arg0 rowNumber:(struct _xmlNode *)arg1 columnNumber:(struct _xmlNode *)arg2 edCell:(struct _xmlNode *)arg3 edRowBlocks:(struct _xmlNode *)arg4 state:(struct _xmlDoc *)arg5;
+ (void)applyArrayedFormulasToSheet:(NSObject *)arg0 state:(NSObject *)arg1;
+ (NSString *)edTokensForFormulaString:(NSString *)arg0 sheet:(NSObject *)arg1 workbook:(EDWorkbook *)arg2;

@end

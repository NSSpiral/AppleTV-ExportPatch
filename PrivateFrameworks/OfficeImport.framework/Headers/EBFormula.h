/* Runtime dump - EBFormula
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBFormula : NSObject

+ (NSObject *)edFormulaFromXlFmlaDefinition:(void *)arg0 withFormulaLength:(void)arg1 formulaClass:(int)arg2 state:(Class)arg3;
+ (void)readFormulaFromXlCell:(struct XlCell *)arg0 edCell:(int)arg1 edRowBlocks:(struct XlFormulaInfo *)arg2 state:(BOOL)arg3;
+ (void)setupTokensInEDFormulaFromXlFormulaProcessor:(struct XlFormulaProcessor *)arg0 length:(struct XlBaseFormulaTable *)arg1 edFormula:(struct ChVector<CsString *>)arg2 edSheet:(struct CsString * *)arg3;
+ (NSObject *)edFormulaFromXlFmlaDefinition:(void *)arg0 withTokenLength:(void)arg1 formulaLength:(int)arg2 formulaClass:(int)arg3 edSheet:(Class)arg4 state:(NSObject *)arg5;
+ (struct XlFormulaInfo *)xlFormulaInfoFromEDSharedFormula:(short)arg0 state:(struct XlShrFmla *)arg1;
+ (char *)edFormulaToParsedExpression:(NSObject *)arg0 tokenLength:(unsigned short *)arg1 formulaLength:(unsigned short *)arg2 state:(NSObject *)arg3;
+ (NSObject *)edFormulaFromXlFmlaDefinition:(void *)arg0 withFormulaLength:(void)arg1 state:(int)arg2;
+ (struct XlFormulaInfo *)xlFormulaInfoFromEDFormula:(short)arg0 state:(struct XlShrFmla *)arg1;
+ (unsigned int)writeToken:(NSString *)arg0 tokenIndex:(unsigned int)arg1 tokenStream:(struct XLFormulaStream *)arg2 extendedStream:(struct XLFormulaStream *)arg3 state:(NSObject *)arg4;
+ (void)setupFormulaDataForSharedFormula:(id)arg0 xlFormulaInfo:(struct XlFormulaInfo *)arg1 state:(char *)arg2;

@end

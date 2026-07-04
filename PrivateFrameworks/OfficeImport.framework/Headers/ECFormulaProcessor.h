/* Runtime dump - ECFormulaProcessor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ECFormulaProcessor : NSObject
{
    struct XlFormulaProcessor * mXlFormulaProcessorLasso;
    struct XlFormulaProcessor * mXlFormulaProcessorXl;
    struct XlNameTable * mXlNameTable;
    struct ChVector<OcText> * mLassoSheetNames;
    struct ChVector<OcText> * mXlSheetNames;
    struct XlLinkTable * mXlLinkTable;
}

+ (ECFormulaProcessor *)formulaStringForEDFormula:(id)arg0 edWorksheet:(EDWorksheet *)arg1 xlFormulaProcessor:(struct XlFormulaProcessor *)arg2;

- (void)dealloc;
- (ECFormulaProcessor *)init;
- (struct ChVector<OcText> *)sheetNamesFromWorkbook:(unsigned int)arg0;
- (struct XlFormulaProcessor *)setupWithWorkbook:(struct CsString * *)arg0 xlNameTable:(struct CsString)arg1 sheetNames:(unsigned int)arg2 xlLinkTable:(unsigned int)arg3 lassoSyntax:(unsigned int)arg4;
- (void)setupWithWorkbook:(EDWorkbook *)arg0;
- (struct XlFormulaProcessor *)xlFormulaProcessorLasso;
- (struct XlFormulaProcessor *)xlFormulaProcessorXl;

@end

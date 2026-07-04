/* Runtime dump - TNChartFormulaWrapper
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNChartFormulaWrapper : NSObject
{
    struct TSCEFormula * mPtrToFormula;
    int mCachedNumberOfValues;
    struct TSCEVector * mCachedOuputValueVector;
}

@property (readonly) struct TSCEFormula * formula;

+ (TNChartFormulaWrapper *)chartFormulaWithCopyOfTSCEFormula:(struct TSCEFormula *)arg0;
+ (NSObject *)chartFormulaForCellReference:(struct ?)arg0;
+ (NSObject *)chartFormulaForRangeReference:(struct ?)arg0;
+ (TNChartFormulaWrapper *)emptyChartFormula;
+ (NSString *)chartFormulaForString:(NSString *)arg0;
+ (NSObject *)chartFormulaForCellRegion:(NSObject *)arg0 inTable:(struct __CFUUID *)arg1;

- (TNChartFormulaWrapper *)initWithCopyOfTSCEFormula:(struct TSCEFormula *)arg0;
- (struct TSCEVector *)outputValueVectorWithCalcEngine:(TSCECalculationEngine *)arg0 inTable:(struct TSUFormat)arg1;
- (id)argumentCollectionWithCalcEngine:(TSCECalculationEngine *)arg0 inTable:(struct __CFUUID *)arg1;
- (char)formulaIsEqualTo:(id)arg0;
- (void)clearCacheForCalculationEngine:(id)arg0;
- (unsigned int)numberOfValuesWithCalcEngine:(TSCECalculationEngine *)arg0 inTable:(struct __CFUUID *)arg1;
- (struct TSCEValue)valueAtIndex:(unsigned int)arg0 withCalcEngine:(TSCECalculationEngine *)arg1 inTable:(struct __CFUUID *)arg2;
- (id)stringValueForFormulaWithCalcEngine:(TSCECalculationEngine *)arg0 inOwner:(struct __CFUUID *)arg1;
- (struct ?)rangeCircumscribingPrecedentsWithCalcEngine:(struct __CFUUID *)arg0 inOwner:(struct __CFUUID *)arg1;
- (char)isAllStaticValuesWithCalcEngine:(TSCECalculationEngine *)arg0 inOwner:(struct __CFUUID *)arg1;
- (id)formulaByProcessingArgumentsWithCalcEngine:(TSCECalculationEngine *)arg0 inOwner:(struct __CFUUID *)arg1 usingBlock:(id /* block */)arg2;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (struct TSCEFormula *)formula;

@end

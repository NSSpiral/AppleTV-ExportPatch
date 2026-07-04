/* Runtime dump - TNMutableChartFormulaStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNMutableChartFormulaStorage : TNChartFormulaStorage

- (TNMutableChartFormulaStorage *)initWithChartFormulaStorage:(TNChartFormulaStorage *)arg0;
- (void)addFormula:(struct TSCEFormula *)arg0 withFormulaID:(struct ?)arg1;
- (unsigned int)numberOfGroupsWithCalcEngine:(TSCECalculationEngine *)arg0 inEntity:(struct __CFUUID *)arg1;
- (void)setFormulaList:(NSArray *)arg0 forKey:(unsigned int)arg1;
- (NSObject *)mutableFormulaListForType:(unsigned int)arg0;
- (void)clearFormulaListForKey:(unsigned int)arg0;
- (void)setDirection:(int)arg0;

@end

/* Runtime dump - TNMutableChartFormulaArgumentCollection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNMutableChartFormulaArgumentCollection : TNChartFormulaArgumentCollection

- (void)removeLastElement;
- (TNMutableChartFormulaArgumentCollection *)initWithArray:(NSArray *)arg0;
- (void)addElement:(NSObject *)arg0;
- (void)removeElementAtIndex:(unsigned int)arg0;
- (void)replaceElementAtIndex:(unsigned int)arg0 withElement:(NSObject *)arg1;
- (void)insertElement:(NSObject *)arg0 atIndex:(unsigned int)arg1;

@end

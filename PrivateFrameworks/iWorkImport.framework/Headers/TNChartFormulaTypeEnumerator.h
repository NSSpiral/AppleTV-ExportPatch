/* Runtime dump - TNChartFormulaTypeEnumerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNChartFormulaTypeEnumerator : NSObject
{
    unsigned int * * _keys;
    unsigned int _count;
    unsigned int _index;
}

- (TNChartFormulaTypeEnumerator *)initWithChartFormulaStorage:(TNChartFormulaStorage *)arg0;
- (unsigned int)nextFormulaType;
- (void)dealloc;

@end

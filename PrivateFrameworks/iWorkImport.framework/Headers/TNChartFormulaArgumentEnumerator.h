/* Runtime dump - TNChartFormulaArgumentEnumerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNChartFormulaArgumentEnumerator : NSObject <NSFastEnumeration>
{
    NSEnumerator * mUnderlyingEnumerator;
}

- (unsigned int)nextElement;
- (TNChartFormulaArgumentEnumerator *)initWithEnumerator:(NSEnumerator *)arg0;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (NSObject *)nextObject;

@end

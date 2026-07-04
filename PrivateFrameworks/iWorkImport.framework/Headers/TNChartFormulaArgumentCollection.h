/* Runtime dump - TNChartFormulaArgumentCollection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNChartFormulaArgumentCollection : NSObject <NSFastEnumeration, NSCopying, NSMutableCopying>
{
    NSArray * mArray;
}

+ (TNChartFormulaArgumentCollection *)argumentCollectionFromFormula:(struct TSCEFormula *)arg0 inOwner:(struct TSCEFormulaTranslationFlags)arg1 usingCalcEngine:(struct UUIDData<TSP::UUIDData>)arg2;

- (NSEnumerator *)elementEnumerator;
- (TNChartFormulaArgumentCollection *)initWithFormula:(struct TSCEFormula *)arg0 inOwner:(struct TSCEFormulaTranslationFlags)arg1 usingCalcEngine:(struct UUIDData<TSP::UUIDData>)arg2;
- (NSObject *)wrappedChartFormulaWithID:(struct ?)arg0 andLocale:(NSObject *)arg1;
- (NSEnumerator *)reverseElementEnumerator;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (unsigned int)count;
- (NSString *)description;
- (TNChartFormulaArgumentCollection *)copyWithZone:(struct _NSZone *)arg0;
- (TNChartFormulaArgumentCollection *)initWithArray:(NSArray *)arg0;
- (TNChartFormulaArgumentCollection *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSObject *)firstElement;
- (NSObject *)lastElement;
- (NSObject *)elementAtIndex:(unsigned int)arg0;

@end

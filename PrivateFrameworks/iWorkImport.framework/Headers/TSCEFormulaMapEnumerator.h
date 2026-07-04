/* Runtime dump - TSCEFormulaMapEnumerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFormulaMapEnumerator : NSObject
{
    TSCEFormulaMap * mFormulaMap;
    struct /* ? */ mOwnersToFormulasIterator;
    struct __wrap_iter<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula> *> mFormulasForAnOwnerIterator;
}

- (TSCEFormulaMapEnumerator *)initWithFormulaMap:(NSObject *)arg0;
- (struct TSCEFormula)nextFormulaGettingOwner:(struct ?)arg0 cellCoordinate:(id)arg1;
- (void)dealloc;
- (void).cxx_construct;
- (char)hasNext;

@end

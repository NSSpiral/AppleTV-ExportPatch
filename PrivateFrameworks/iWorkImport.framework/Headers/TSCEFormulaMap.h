/* Runtime dump - TSCEFormulaMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFormulaMap : NSObject
{
    struct /* ? */ mOwnerToFormulasMap;
    int mCount;
}

- (void)addFormula:(struct TSCEFormula *)arg0 inOwner:(struct TSCEFormulaTranslationFlags)arg1 atCellCoordinate:(struct UUIDData<TSP::UUIDData>)arg2;
- (NSEnumerator *)formulaEnumerator;
- (int)count;
- (void).cxx_construct;
- (void).cxx_destruct;

@end

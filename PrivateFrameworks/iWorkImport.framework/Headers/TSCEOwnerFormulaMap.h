/* Runtime dump - TSCEOwnerFormulaMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEOwnerFormulaMap : NSObject
{
    struct vector<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula> > > mFormulas;
    struct vector<TSUColumnRowCoordinate, std::__1::allocator<TSUColumnRowCoordinate> > mNonFormulaCells;
}

- (void)saveToArchive:(struct OwnerFormulaMapArchive *)arg0 archiver:(NSObject *)arg1;
- (void)addFormula:(struct TSCEFormula *)arg0 atCellCoordinate:(struct TSCEFormulaTranslationFlags)arg1;
- (struct TSCEFormula *)formulaAtIndex:(struct ?)arg0 outCellCoordinate:(id)arg1;
- (unsigned int)count;
- (void).cxx_construct;
- (void).cxx_destruct;
- (TSCEOwnerFormulaMap *)initWithArchive:(struct OwnerFormulaMapArchive *)arg0;

@end

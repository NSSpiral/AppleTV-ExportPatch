/* Runtime dump - EDRowBlocks
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDRowBlocks : NSObject <TSUFlushable>
{
    EDWorksheet * mWorksheet;
    NSMutableArray * mRowBlocks;
    EDCollection * mFormulas;
    unsigned int mMaxPopulatedRow;
    unsigned int mMaxPopulatedColumn;
    NSString * mFileName;
    int mLockCount;
    NSRecursiveLock * mSaveLoadLock;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)save;
- (void)dealloc;
- (void)flush;
- (void)lock;
- (void)unlock;
- (void)load;
- (struct EDCellHeader *)cellWithRowNumber:(unsigned int)arg0 columnNumber:(int)arg1;
- (unsigned int)rowBlockCount;
- (unsigned int)maxPopulatedRow;
- (NSNumber *)rowBlockForRowNumber:(unsigned int)arg0 currentRowBlock:(id /* block */)arg1 createIfNil:(BOOL)arg2;
- (BOOL)spaceForRowNumber:(unsigned int)arg0 rowBlock:(id /* block */)arg1;
- (NSNumber *)rowBlockForRowNumber:(unsigned int)arg0 currentRowBlock:(id /* block */)arg1;
- (void)removeRowBlockAtIndex:(unsigned int)arg0;
- (unsigned int)indexOfRowBlockForRowNumber:(unsigned int)arg0;
- (unsigned int)maxPopulatedColumn;
- (id)fileNameForPersistingRowBlocks;
- (Class)classForFormulaType:(unsigned char)arg0;
- (unsigned char)formulaTypeForFormula:(id)arg0;
- (void)updateMaxPopulatedRow:(unsigned int)arg0 column:(unsigned int)arg1;
- (EDRowBlocks *)initWithWorksheet:(EDWorksheet *)arg0;
- (TSUSparseArray *)formulas;
- (unsigned int)expectedIndexOfRowBlockForRowNumber:(unsigned int)arg0;
- (NSObject *)rowBlockAtIndex:(unsigned int)arg0;

@end

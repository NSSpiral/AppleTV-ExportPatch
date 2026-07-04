/* Runtime dump - TSTMergeOwner
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTMergeOwner : NSObject <TSCEFormulaOwning>
{
    TSTTableModel * _tableModel;
    TSCECalculationEngine * _calculationEngine;
    struct __CFUUID * _ownerID;
    TSTFormulaStore * _mergeRangeStorage;
    TSTMergeRangeCache * _mergeRangeCache;
}

@property (readonly, nonatomic) TSTMergeRangeCache * mergeRangeCache;
@property (readonly, nonatomic) TSTFormulaStore * formulaStore;
@property (readonly, nonatomic) TSTTableModel * tableModel;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)stringForMergeRange:(struct TSUColumnRowRect *)arg0 priority:(struct TSUColumnRowRect)arg1;
+ (struct TSUColumnRowRect)rangeFromMergeFormula:(id)arg0 priority:(SEL)arg1 atCoord:(struct TSCEFormula *)arg2;
+ (struct TSUColumnRowRect)rangeFromMergeFormula:(id)arg0 atCoord:(SEL)arg1;
+ (NSObject *)stringForMergeRange:(struct TSUColumnRowRect *)arg0;
+ (NSObject *)mergeActionForInsertingRange:(struct TSTCellUIDRange *)arg0;

- (unsigned int)maxMergeFormulaIndex;
- (void)saveToArchive:(struct MergeOwnerArchive *)arg0 archiver:(NSObject *)arg1;
- (void)releaseForCalculationEngine:(id)arg0;
- (void)retainForCalculationEngine:(id)arg0;
- (struct ?)recalculateForCalculationEngine:(id)arg0 formulaID:(struct ?)arg1 isInCycle:(char)arg2 hasCalculatedPrecedents:(char)arg3;
- (void)writeResultsForCalculationEngine:(id)arg0;
- (void)invalidateForCalculationEngine:(id)arg0;
- (struct TSUColumnRowRect)expandCellRangeToCoverMergedCells:(id)arg0;
- (void)unregisterFromCalculationEngine;
- (void)rewriteForCalculationEngine:(id)arg0 formulaID:(struct ?)arg1 rewriteSpec:(NSObject *)arg2;
- (void)beginRewriteForCalculationEngine:(id)arg0 spec:(NSObject *)arg1;
- (TSTTableModel *)tableModel;
- (TSTMergeOwner *)initWithTableModel:(TSTTableModel *)arg0;
- (struct vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> >)mergeRangesIntersectingCellRegion:(NSObject *)arg0;
- (TSTMergeOwner *)initWithArchive:(struct MergeOwnerArchive *)arg0 unarchiver:(struct MergeOwnerArchive)arg1 forTableModel:(NSObject *)arg2;
- (void)enumerateMergesIntersectingCellRegion:(NSObject *)arg0 usingBlock:(id /* block */)arg1;
- (struct vector<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate> > >)mergeOriginRelocationListForRowRange:(NSObject *)arg0;
- (struct vector<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate> > >)mergeOriginRelocationListForColumnRange:(NSObject *)arg0;
- (id)insertReturningInverse:(struct TSUColumnRowRect)arg0;
- (id)unmergeReturningInverse:(struct TSUColumnRowRect)arg0;
- (struct TSUColumnRowRect)mergedRangeForCellID:(NSObject *)arg0;
- (char)partiallyIntersectsCellRange:(struct TSUColumnRowRect)arg0;
- (id)mergedGridIndicesForDimension:(int)arg0;
- (struct vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> >)mergeRangesIntersectingRange:(NSObject *)arg0;
- (id)expandCellRegionToCoverMergedCells:(id)arg0;
- (void)setOwnerID:(struct __CFUUID *)arg0;
- (void)remapTableUIDsInFormulasWithMap:(struct TSUUuidMap *)arg0 calcEngine:(struct TSUUuidMap)arg1;
- (void)enumerateMergeFormulasUsingBlock:(id /* block */)arg0;
- (unsigned int)markForRollback;
- (void)rollbackToMark:(unsigned int)arg0;
- (NSObject *)mergeIndexesForRange:(struct TSUColumnRowRect)arg0;
- (NSObject *)mergeIndexesForCellRegion:(NSObject *)arg0;
- (struct vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> >)mergeRanges;
- (char)partiallyIntersectsCellRegion:(NSObject *)arg0;
- (char)hasRangeSpanningRowsForCellRange:(struct TSUColumnRowRect)arg0;
- (TSTMergeOwner *)initWithTableModel:(TSTTableModel *)arg0 ownerID:(struct __CFUUID *)arg1;
- (void)loadMergeCache;
- (NSIndexSet *)p_shrinkMergesAtIndexes:(NSArray *)arg0 intersectedByRegion:(NSObject *)arg1 withWriteBack:(char)arg2;
- (BOOL)isValidMergeRange:(struct TSUColumnRowRect)arg0;
- (void)dropCoveredMergesForIndexes:(NSArray *)arg0;
- (void)createMergeRangeStorage;
- (void)reloadMergeCacheForIndexes:(NSArray *)arg0;
- (id)removeReturningInverse:(struct TSUColumnRowRect)arg0;
- (NSObject *)p_shrinkReturningInverseForAction:(NSObject *)arg0;
- (NSObject *)p_growReturningInverseForAction:(NSObject *)arg0;
- (NSObject *)shrinkReturningInverseForRegion:(NSObject *)arg0;
- (TSTMergeRangeCache *)mergeRangeCache;
- (void)enumerateMergesIntersectingRange:(struct TSUColumnRowRect)arg0 usingBlock:(struct ?)arg1;
- (void)resetMergeCache;
- (void)upgradeFromMergeRegionMap;
- (id)performActionReturningInverse:(id)arg0;
- (char)find:(struct TSUColumnRowRect)arg0;
- (void)enumerateMergesUsingBlock:(id /* block */)arg0;
- (void)insertAll:(id)arg0;
- (char)hasMergeRangesIntersectingCellRegion:(NSObject *)arg0;
- (NSObject *)regionForMergeRangesIntersectingRegion:(NSObject *)arg0;
- (void)removeMergesContainedInRows:(NSArray *)arg0;
- (void)removeMergesContainedInColumns:(NSArray *)arg0;
- (struct TSUColumnRowRect)rewroteFormula:(id)arg0 atCoordinate:(SEL)arg1 withRewriteSpec:(struct TSCEFormula)arg2 isUndo:(struct TSCEFormulaTranslationFlags)arg3 notifyTable:(struct UUIDData<TSP::UUIDData>)arg4;
- (int)registerWithCalculationEngineChoosingUniqueID:(NSObject *)arg0;
- (TSTFormulaStore *)formulaStore;
- (struct __CFUUID *)ownerID;
- (void)dealloc;
- (unsigned int)count;
- (NSString *)description;

@end

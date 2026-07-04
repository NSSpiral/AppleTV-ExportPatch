/* Runtime dump - TSTMergeRangeCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTMergeRangeCache : NSObject
{
    TSTMergeOwner * _mergeOwner;
    TSUSparseArray * _mergeRanges;
    NSMutableIndexSet * _mergeIndexes;
}

@property (readonly, nonatomic) NSIndexSet * mergeIndexes;
@property (readonly, nonatomic) TSTMergeOwner * mergeOwner;
@property (readonly, nonatomic) unsigned int count;

- (struct TSUColumnRowRect)expandCellRangeToCoverMergedCells:(id)arg0;
- (TSTMergeOwner *)mergeOwner;
- (struct vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> >)mergeRangesIntersectingCellRegion:(NSObject *)arg0;
- (struct TSUColumnRowRect)mergedRangeForCellID:(NSObject *)arg0;
- (char)partiallyIntersectsCellRange:(struct TSUColumnRowRect)arg0;
- (id)mergedGridIndicesForDimension:(int)arg0;
- (struct vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> >)mergeRangesIntersectingRange:(NSObject *)arg0;
- (id)expandCellRegionToCoverMergedCells:(id)arg0;
- (NSIndexSet *)mergeIndexes;
- (NSObject *)mergeRangeAtIndex:(unsigned int)arg0;
- (void)setItem:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)enumerateCacheItemsUsingBlock:(id /* block */)arg0;
- (void)enumerateCacheItemsIntersectingRange:(struct TSUColumnRowRect)arg0 usingBlock:(struct ?)arg1;
- (void)enumerateCacheItemsIntersectingCellRegion:(NSObject *)arg0 usingBlock:(id /* block */)arg1;
- (TSTMergeRangeCache *)initWithMergeOwner:(TSTMergeOwner *)arg0;
- (void)setMergeRange:(struct TSUColumnRowRect)arg0 withPriority:(struct ?)arg1 atIndex:(NSObject *)arg2;
- (void)removeMergeRangeAtIndex:(unsigned int)arg0;
- (struct vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> >)mergeRanges;
- (char)partiallyIntersectsCellRegion:(NSObject *)arg0;
- (char)hasRangeSpanningRowsForCellRange:(struct TSUColumnRowRect)arg0;
- (void)dealloc;
- (unsigned int)count;
- (NSString *)description;

@end

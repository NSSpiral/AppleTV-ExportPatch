/* Runtime dump - TSTMergeRegionMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTMergeRegionMap : TSPObject
{
    struct /* ? */ mCellIDToMergeOrigin;
    struct /* ? */ mMergeOriginToSize;
    struct TSUColumnRowRect mUnionedMergeRange;
}

+ (NSString *)mergeRegionMapWithContext:(NSObject *)arg0 andCellRangesSet:(struct unordered_set<TSUColumnRowRect, std::__1::hash<TSUColumnRowRect>, std::__1::equal_to<TSUColumnRowRect>, std::__1::allocator<TSUColumnRowRect> > *)arg1;
+ (NSString *)mergeRegionMapWithContext:(NSObject *)arg0 andCellRanges:(struct vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> > *)arg1;
+ (NSObject *)mergeRegionMapFromMap:(NSObject *)arg0 intersectingRange:(struct TSUColumnRowRect)arg1;

- (TSTMergeRegionMap *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (struct TSUColumnRowRect)mergedRangeForCellID:(NSObject *)arg0;
- (void *)iterator;
- (TSTMergeRegionMap *)initRegionMapFromMap:(NSObject *)arg0 intersectingRange:(struct TSUColumnRowRect)arg1;
- (char)find:(struct TSUColumnRowRect)arg0;
- (struct /* ? */ *)mergeOriginToSize;
- (TSTMergeRegionMap *)initRegionMapFromMap:(NSObject *)arg0 rowRemapping:(id)arg1;
- (char)hasRangeSpanningRows;
- (struct /* ? */ *)cellIDToMergeOrigin;
- (char)insert:(struct TSUColumnRowRect)arg0;
- (unsigned int)count;
- (NSString *)description;
- (TSTMergeRegionMap *)initWithContext:(TSPObjectContext *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateRangesUsingBlock:(id /* block */)arg0;
- (char)remove:(struct TSUColumnRowRect)arg0;

@end

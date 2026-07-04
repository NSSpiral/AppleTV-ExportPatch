/* Runtime dump - TSTPasteMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTPasteMap : NSObject
{
    struct set<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> > mRowTgtToPbMaps;
    struct set<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> > mColumnTgtToPbMaps;
}

- (struct _NSRange)p_tgtRangeFromPbRange:(struct TSTColumnOrRowMap *)arg0 andMap:(struct TSTColumnOrRowMap)arg1;
- (struct TSUColumnRowRect)p_tgtRangeForPbRange:(NSObject *)arg0 givenColumnMaps:(SEL)arg1 rowMaps:(struct TSUColumnRowRect)arg2;
- (unsigned short)p_indexForTgtToPbMaps:(struct set<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> > *)arg0 andMap:(struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > >)arg1;
- (struct ?)p_tgtCellIDForPbCellID:(struct ?)arg0 givenColumnMaps:(struct multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > *)arg1 rowMaps:(struct multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> >)arg2;
- (struct TSUColumnRowRect)pbRangeForTgtRange:(NSObject *)arg0;
- (struct ?)pbCellIDForTgtCellID:(struct ?)arg0;
- (struct vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> > *)p_tgtRangesForPbRange:(NSObject *)arg0 givenColumnMaps:(id)arg1 rowMaps:(id)arg2;
- (TSTPasteMap *)initWithPbRange:(struct TSUColumnRowRect)arg0 tgtRange:(struct ?)arg1;
- (TSTPasteMap *)initWithPbTable:(id)arg0 pbRange:(struct TSUColumnRowRect)arg1 tgtTable:(struct ?)arg2 tgtRange:(NSObject *)arg3 flag:(id)arg4;
- (NSObject *)createTgtRegionFromPbRegion:(NSObject *)arg0;
- (NSObject *)createTgtRegionByIntersectingPbRegion:(NSObject *)arg0 andTgtRegion:(NSObject *)arg1;
- (NSObject *)createTgtMergeMapFromPbMergeMap:(NSObject *)arg0 andTgtRegion:(id *)arg1 andTgtBodyRange:(struct TSUColumnRowRect)arg2;
- (void).cxx_construct;
- (void).cxx_destruct;

@end

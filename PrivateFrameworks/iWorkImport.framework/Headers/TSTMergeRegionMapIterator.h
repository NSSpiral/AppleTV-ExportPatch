/* Runtime dump - TSTMergeRegionMapIterator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTMergeRegionMapIterator : NSObject
{
    TSTMergeRegionMap * mMergeRegionMap;
    struct __hash_map_const_iterator<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> > mMergeRegionIterator;
}

- (TSTMergeRegionMapIterator *)initWithMergeRegionMap:(TSCEFormulaRewrite_RegionInfo *)arg0;
- (char)hasNextMergeRegion;
- (struct TSUColumnRowRect)nextMergeRegion;
- (void)dealloc;
- (void)reset;
- (void).cxx_construct;

@end

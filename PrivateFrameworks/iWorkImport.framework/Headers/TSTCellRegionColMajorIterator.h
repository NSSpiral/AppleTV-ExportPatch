/* Runtime dump - TSTCellRegionColMajorIterator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellRegionColMajorIterator : NSObject <TSTCellRegionIterating>
{
    struct set<TSUColumnRowRect, TSTCellRangeColumnMajorLess, std::__1::allocator<TSUColumnRowRect> > mCellRangeSet;
    struct ? mCellID;
    struct TSUColumnRowRect mBoundingCellRange;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (struct ?)getNext;
- (TSTCellRegionColMajorIterator *)initWithCellRegion:(TSTCellRegion *)arg0;
- (void)terminate;
- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;

@end

/* Runtime dump - TSCECellCoordinateVector
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCECellCoordinateVector : NSObject
{
    struct vector<TSUColumnRowCoordinate, std::__1::allocator<TSUColumnRowCoordinate> > mCellCoordinates;
    NSObject<OS_dispatch_semaphore> * mSem;
}

- (void)saveToArchive:(struct CellCoordinateVectorArchive *)arg0;
- (void)addCellCoordinate:(struct ?)arg0;
- (struct vector<TSUColumnRowCoordinate, std::__1::allocator<TSUColumnRowCoordinate> > *)cellCoordinates;
- (void)removeAllCellCoordinates;
- (void)dealloc;
- (TSCECellCoordinateVector *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (TSCECellCoordinateVector *)initWithArchive:(struct CellCoordinateVectorArchive *)arg0;

@end

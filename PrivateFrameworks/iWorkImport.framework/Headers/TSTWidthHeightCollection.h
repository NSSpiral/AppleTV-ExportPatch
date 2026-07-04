/* Runtime dump - TSTWidthHeightCollection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTWidthHeightCollection : NSObject
{
    struct vector<std::__1::pair<TSUColumnRowCoordinate, float>, std::__1::allocator<std::__1::pair<TSUColumnRowCoordinate, float> > > mFittingHeights;
    struct vector<TSUColumnRowCoordinate, std::__1::allocator<TSUColumnRowCoordinate> > mResetHeights;
}

- (void)addFittingHeight:(float)arg0 forCellID:(struct ?)arg1;
- (void)enumerateFittingHeightsUsingBlock:(id /* block */)arg0;
- (void)enumerateResetHeightsUsingBlock:(id /* block */)arg0;
- (void)addResetHeightForCellID:(struct ?)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;

@end

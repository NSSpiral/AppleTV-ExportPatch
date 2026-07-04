/* Runtime dump - TSTWidthHeightCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTWidthHeightCache : NSObject
{
    struct vector<TSTWidthHeightCache_Private::WHCCol, std::__1::allocator<TSTWidthHeightCache_Private::WHCCol> > mFittingColumnWidth;
    struct vector<TSTWidthHeightCache_Private::WHCRow, std::__1::allocator<TSTWidthHeightCache_Private::WHCRow> > mFittingRowHeight;
    struct vector<float, std::__1::allocator<float> > mModelColumnWidth;
    struct vector<float, std::__1::allocator<float> > mModelRowHeight;
    struct _opaque_pthread_rwlock_t mLock;
}

- (TSTWidthHeightCache *)initWithNumRows:(unsigned short)arg0 andNumCols:(unsigned short)arg1;
- (char)resetModelCache;
- (char)resetModelCacheRange:(struct TSUColumnRowRect)arg0;
- (float)getModelWidthForColumn:(unsigned char)arg0;
- (char)setModelWidth:(float)arg0 forColumn:(unsigned char)arg1;
- (float)getModelHeightForRow:(unsigned short)arg0;
- (char)setModelHeight:(float)arg0 forRow:(unsigned short)arg1;
- (float)getFitWidthForCol:(unsigned char)arg0;
- (void)resetColWidthsStartingWith:(unsigned char)arg0 upToColumn:(unsigned char)arg1;
- (void)resetAllCol;
- (float)getFitHeightForRow:(unsigned short)arg0;
- (void)resetRowHeightsStartingWith:(unsigned short)arg0 upToRow:(unsigned short)arg1;
- (NSArray *)validateChangeDescriptors:(NSArray *)arg0;
- (char)setFitHeight:(float)arg0 forCellID:(struct ?)arg1;
- (void)setFittingHeightsFromCollection:(id)arg0;
- (char)setFitWidth:(float)arg0 forCellID:(struct ?)arg1;
- (void)_increaseRowCapacity:(unsigned int)arg0;
- (void)_increaseColCapacity:(unsigned int)arg0;
- (char)deleteRowsStartingWith:(unsigned short)arg0 upToRow:(unsigned short)arg1;
- (char)insertRows:(unsigned short)arg0 atRow:(unsigned short)arg1;
- (char)deleteColsStartingWith:(unsigned char)arg0 upToColumn:(unsigned char)arg1;
- (char)insertCols:(unsigned short)arg0 atColumn:(unsigned char)arg1;
- (char)moveRowsFrom:(struct TSUColumnRowRect)arg0 toRow:(struct ?)arg1;
- (char)moveColsFrom:(struct TSUColumnRowRect)arg0 toCol:(struct ?)arg1;
- (void)p_resetFittingWidthsHeightsForRange:(struct TSUColumnRowRect)arg0;
- (char)setFitDims:(struct CGSize)arg0 forCellID:(struct ?)arg1;
- (void)resetAllRow;
- (void)resetFittingHeightsFromCollection:(id)arg0;
- (char)verifyDims:(struct CGSize)arg0 forCellID:(struct ?)arg1;
- (void)logInternalState;
- (void)dealloc;
- (TSTWidthHeightCache *)init;
- (void).cxx_construct;
- (void).cxx_destruct;

@end

/* Runtime dump - GQSSpiceTable
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQSSpiceTable : GQSTable
{
    struct __CFDictionary * mVectorUidToAlongMap;
    char mReadingRowVectors;
    struct vector<float, std::__1::allocator<float> > * mRowPositions;
    struct vector<float, std::__1::allocator<float> > * mColumnPositions;
    float mCurrentCellMinX;
    float mCurrentCellMaxX;
    float mCurrentCellMinY;
    float mCurrentCellMaxY;
    id mCurrentCellStorage;
    id mCurrentCellStyle;
}

- (float)alongValueForVectorUid:(char *)arg0;
- (void)aboutToReadCells;
- (void)setAlongValue:(float)arg0 forOwnedVectorUid:(char *)arg1;
- (void)aboutToReadRowVectors;
- (void)aboutToReadColumnVectors;
- (void)dealloc;
- (GQSSpiceTable *)init;

@end

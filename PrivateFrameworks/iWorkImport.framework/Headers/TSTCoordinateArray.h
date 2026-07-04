/* Runtime dump - TSTCoordinateArray
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCoordinateArray : NSObject
{
    unsigned int mOffset;
    unsigned int mCount;
    float * mCoordinates;
    float mAverage;
    NSMutableIndexSet * mVisibleIndices;
    char mLayoutDirectionIsLeftToRight;
    float mTableWidth;
}

- (void)hasRightToLeftOrderingWithWidth:(float)arg0;
- (TSTCoordinateArray *)initWithCount:(unsigned int)arg0 atOffset:(unsigned int)arg1;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;

@end

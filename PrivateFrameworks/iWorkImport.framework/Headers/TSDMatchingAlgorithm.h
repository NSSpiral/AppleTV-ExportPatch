/* Runtime dump - TSDMatchingAlgorithm
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMatchingAlgorithm : NSObject
{
    int * mCostMatrix;
    char * mMaskMatrix;
    char * mIsStarInColumn;
    char * mIsStarInRow;
    char * mIsColCovered;
    char * mIsRowCovered;
    id * mObjectMapping;
    int mMatrixDimension;
    int mZ0Row;
    int mZ0Col;
    NSMutableArray * mResults;
}

+ (NSArray *)bestMatchesFromArray:(NSArray *)arg0;

- (char)p_step4FindAZeroAndReturnRow:(int *)arg0 column:(int *)arg1;
- (int)p_step4IndexOfStarredZeroInRow:(int)arg0;
- (void)p_allocateMatrices;
- (int)p_doStep1;
- (int)p_doStep2;
- (int)p_doStep3;
- (int)p_doStep4;
- (int)p_doStep5;
- (int)p_doStep6;
- (void)p_deallocateMatrices;
- (NSArray *)p_bestMatchesFromArray:(NSArray *)arg0;

@end

/* Runtime dump - EDReferenceIterator
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDReferenceIterator : NSObject
{
    EDWorkbook * mWorkbook;
    EDWorksheet * mCurrentSheet;
    EDCollection * mReferences;
    EDReference * mReference;
    EDRowBlocks * mRowBlocks;
    EDRowBlock * mRowBlock;
    unsigned int mRowBlockIndex;
    struct EDRowInfo * mRowInfo;
    unsigned int mRowInfoIndex;
    unsigned int mCellIndex;
    unsigned int mNextArrayIndex;
    int mCurrentCellIndex;
    unsigned int mPreviousColumnNumber;
}

+ (NSArray *)referenceIteratorWithReferenceArray:(NSArray *)arg0 workbook:(EDWorkbook *)arg1;
+ (NSObject *)referenceIteratorWithReference:(NSObject *)arg0 workbook:(EDWorkbook *)arg1;

- (void)dealloc;
- (void)setCurrentSheet:(EDSheet *)arg0;
- (struct EDCellHeader *)nextCell;
- (unsigned int)currentCellIndex;
- (void)setReference:(NSObject *)arg0;
- (EDReferenceIterator *)initWithReferenceArray:(NSArray *)arg0 reference:(NSObject *)arg1 workbook:(EDWorkbook *)arg2;
- (EDReferenceIterator *)initWithReference:(NSObject *)arg0 workbook:(EDWorkbook *)arg1;
- (EDReferenceIterator *)initWithReferenceArray:(NSArray *)arg0 workbook:(EDWorkbook *)arg1;
- (BOOL)nextRow;
- (BOOL)nextReference;

@end

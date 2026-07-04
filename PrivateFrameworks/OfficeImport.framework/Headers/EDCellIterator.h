/* Runtime dump - EDCellIterator
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDCellIterator : NSObject
{
    EDRowBlocks * mRowBlocks;
    EDRowBlock * mCurrentRowBlock;
    struct EDRowInfo * mCurrentRowInfo;
    unsigned int mCurrentRowInfoIndex;
    struct EDCellHeader * mCurrentCell;
    unsigned int mCurrentCellIndex;
    unsigned int mDesiredRowNumber;
    unsigned int mDesiredColumnNumber;
}

- (void)dealloc;
- (EDCellIterator *)initWithWorksheet:(EDWorksheet *)arg0;
- (struct EDCellHeader *)adjacentCell:(int)arg0;
- (struct EDCellHeader *)adjacentCellLeft;
- (struct EDCellHeader *)adjacentCellRight;
- (struct EDCellHeader *)scanToRowNumber:(unsigned int)arg0 columnNumber:(unsigned int)arg1;

@end

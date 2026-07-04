/* Runtime dump - EDRowBlock
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDRowBlock : NSObject
{
    struct __CFData * mPackedData;
    struct __CFData * mCellOffsets;
}

@property (readonly, nonatomic) unsigned int rowCount;
@property (readonly, nonatomic) unsigned int firstRowNumber;
@property (readonly, nonatomic) unsigned int lastRowNumber;
@property (readonly, nonatomic) unsigned int minRowNumber;
@property (readonly, nonatomic) unsigned int maxRowNumber;

+ (id /* block */)rowBlock;

- (void)dealloc;
- (EDRowBlock *)init;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg0;
- (unsigned int)rowCount;
- (unsigned int)maxRowNumber;
- (struct EDCellHeader *)cellAtIndex:(unsigned int)arg0 rowInfo:(struct EDRowInfo *)arg1;
- (struct EDCellHeader *)cellWithColumnNumber:(unsigned int)arg0 rowInfo:(struct EDRowInfo *)arg1;
- (struct EDRowInfo *)rowInfoWithRowNumber:(unsigned int)arg0;
- (struct EDRowInfo *)addRowInfoWithRowNumber:(unsigned int)arg0 cellCountHint:(unsigned int)arg1;
- (void)doneWithContent;
- (unsigned int)firstRowNumber;
- (unsigned int)indexOfRowInfoWithRowNumber:(unsigned int)arg0;
- (unsigned int)indexOfCellWithColumnNumber:(unsigned int)arg0 rowInfo:(struct EDRowInfo *)arg1;
- (unsigned int)lastRowNumber;
- (void)removeCellAtIndex:(unsigned int)arg0 rowInfo:(struct EDRowInfo * *)arg1;
- (unsigned long)startOfCellsOrThrow;
- (void)checkCellOffsetOrThrow:(unsigned long)arg0;
- (unsigned int)minRowNumber;
- (void)incrementIndex;
- (void)unarchiveFromData:(struct __CFData *)arg0 offset:(unsigned int *)arg1;
- (void)archiveByAppendingToMutableData:(struct __CFData *)arg0;
- (struct EDRowInfo *)rowInfoWithRowNumber:(unsigned int)arg0 createIfNil:(BOOL)arg1;
- (struct EDRowInfo *)rowInfoAtIndex:(unsigned int)arg0;
- (unsigned int)expectedIndexOfCellWithColumnNumber:(unsigned int)arg0 rowInfo:(struct EDRowInfo *)arg1;
- (struct EDCellHeader *)addCellWithColumnNumber:(unsigned int)arg0 type:(int)arg1 isFormulaCell:(BOOL)arg2 rowInfo:(struct EDRowInfo * *)arg3 rowBlocks:(struct EDRowInfo)arg4;

@end

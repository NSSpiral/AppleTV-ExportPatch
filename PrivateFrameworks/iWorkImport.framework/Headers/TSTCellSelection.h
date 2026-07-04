/* Runtime dump - TSTCellSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellSelection : TSKSelection <TSDTextSelection>
{
    int mSelectionType;
    struct ? mAnchorCellID;
    TSTCellRegion * mCellRegion;
    TSTCellRegion * mBaseRegion;
    struct ? mCursorCellID;
    struct _NSRange mSearchReferenceRange;
}

@property (readonly, nonatomic) TSTCellRegion * cellRegion;
@property (readonly, nonatomic) int selectionType;
@property (readonly, nonatomic) struct ? anchorCellID;
@property (readonly, nonatomic) TSTCellRegion * baseRegion;
@property (readonly, nonatomic) struct ? cursorCellID;
@property (readonly, nonatomic) unsigned int cellCount;
@property (nonatomic) struct _NSRange searchReferenceRange;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) struct _NSRange range;
@property (readonly, nonatomic) char isAtEndOfLine;

+ (Class)archivedSelectionClass;
+ (NSObject *)selectionWithTableModel:(TSTTableModel *)arg0 cellRegion:(TSTCellRegion *)arg1;
+ (NSObject *)selectionWithTableModel:(TSTTableModel *)arg0 rowIndices:(id)arg1;
+ (NSObject *)selectionWithTableModel:(TSTTableModel *)arg0 cellID:(struct ?)arg1;

- (void)saveToArchive:(struct SelectionArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTCellSelection *)initWithArchive:(struct SelectionArchive *)arg0 unarchiver:(struct SelectionArchive)arg1;
- (TSTCellRegion *)cellRegion;
- (void)setCellRange:(struct TSUColumnRowRect)arg0;
- (TSTCellSelection *)initWithTableModel:(TSTTableModel *)arg0 cellRegion:(TSTCellRegion *)arg1 anchorCellID:(struct ?)arg2 cursorCellID:(struct ?)arg3 baseRegion:(TSTCellRegion *)arg4 selectionType:(int)arg5;
- (TSTCellSelection *)initWithTableModel:(TSTTableModel *)arg0 cellRegion:(TSTCellRegion *)arg1 anchorCellID:(struct ?)arg2 cursorCellID:(struct ?)arg3 baseRegion:(TSTCellRegion *)arg4;
- (TSTCellSelection *)initWithTableModel:(TSTTableModel *)arg0 cellRegion:(TSTCellRegion *)arg1 anchorCellID:(struct ?)arg2 cursorCellID:(struct ?)arg3 selectionType:(int)arg4;
- (TSTCellSelection *)initWithTableModel:(TSTTableModel *)arg0 cellRange:(struct TSUColumnRowRect)arg1 type:(struct ?)arg2 anchorCellID:(struct ?)arg3 cursorCellID:(int)arg4;
- (TSTCellSelection *)initWithTableModel:(TSTTableModel *)arg0 startingRowIndex:(unsigned short)arg1 numberOfRows:(unsigned short)arg2;
- (TSTCellSelection *)initWithTableModel:(TSTTableModel *)arg0 startingColumnIndex:(unsigned short)arg1 numberOfColumns:(unsigned short)arg2;
- (struct ?)anchorCellID;
- (struct ?)cursorCellID;
- (TSTCellRegion *)baseRegion;
- (TSTCellSelection *)initWithTableModel:(TSTTableModel *)arg0 andCellID:(struct ?)arg1;
- (TSTCellSelection *)initWithTableModel:(TSTTableModel *)arg0 cellRegion:(TSTCellRegion *)arg1;
- (TSTCellSelection *)initWithTableModel:(TSTTableModel *)arg0 rowIndices:(id)arg1;
- (void)enumerateSelectedCellsInTable:(id)arg0 withFlags:(unsigned long)arg1 usingBlock:(id /* block */)arg2;
- (char)selectsSingleLogicalControlCellInTable:(id)arg0 outShowsChrome:(char *)arg1;
- (char)selectsSingleLogicalCellInTable:(id)arg0;
- (char)isAtEndOfLine;
- (TSTCellSelection *)initWithTableModel:(TSTTableModel *)arg0 cellRegion:(TSTCellRegion *)arg1 anchorCellID:(struct ?)arg2 cursorCellID:(struct ?)arg3;
- (TSTCellSelection *)initWithTableModel:(TSTTableModel *)arg0 selectionType:(int)arg1;
- (TSTCellSelection *)initWithTableModel:(TSTTableModel *)arg0 andCellRange:(struct TSUColumnRowRect)arg1;
- (TSTCellSelection *)initWithTableModel:(TSTTableModel *)arg0 cellID:(struct ?)arg1 selectionType:(int)arg2;
- (TSTCellSelection *)initWithTableModel:(TSTTableModel *)arg0 rowOrColumn:(int)arg1 index:(unsigned int)arg2 count:(unsigned int)arg3;
- (TSTCellSelection *)initWithTableModel:(TSTTableModel *)arg0 andPreviousSelection:(id)arg1 offsetBy:(struct ?)arg2;
- (NSObject *)selectionByExtendingWithCellRange:(struct TSUColumnRowRect)arg0 inTable:(struct ?)arg1 selectionType:(int)arg2 cursorCell:(NSObject *)arg3;
- (NSObject *)selectionByAddingCellRange:(struct TSUColumnRowRect)arg0 inTable:(struct ?)arg1 withAnchor:(PLImageViewWithAnimatedAnchor *)arg2 cursor:(unsigned int *)arg3 selectionType:(struct ?)arg4;
- (NSObject *)selectionByRemovingCellRange:(struct TSUColumnRowRect)arg0 inTable:(struct ?)arg1 withAnchor:(PLImageViewWithAnimatedAnchor *)arg2 cursor:(unsigned int *)arg3 selectionType:(struct ?)arg4;
- (NSDictionary *)selectionAdjustedForRowVisibilityInTableInfo:(NSDictionary *)arg0;
- (void)enumerateSelectedCellsInTable:(id)arg0 usingBlock:(id /* block */)arg1;
- (void)insert:(int)arg0 atIndex:(unsigned short)arg1 count:(unsigned short)arg2;
- (void)remove:(int)arg0 atIndex:(unsigned short)arg1 count:(unsigned short)arg2;
- (char)areCellsInTheSameRegionInTable:(id)arg0;
- (char)containsSelection:(id)arg0;
- (char)containsCell:(struct ?)arg0;
- (char)selectsSingleLogicalControlCellInTable:(id)arg0;
- (char)intersectsPartialMergeRangeInTable:(id)arg0;
- (struct _NSRange)searchReferenceRange;
- (void)setSearchReferenceRange:(struct _NSRange)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (TSTCellSelection *)copyWithZone:(struct _NSZone *)arg0;
- (struct _NSRange)range;
- (void).cxx_construct;
- (char)isEqualToSelection:(id)arg0;
- (unsigned int)cellCount;
- (int)selectionType;

@end

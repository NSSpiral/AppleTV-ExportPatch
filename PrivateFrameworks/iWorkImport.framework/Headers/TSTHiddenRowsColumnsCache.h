/* Runtime dump - TSTHiddenRowsColumnsCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTHiddenRowsColumnsCache : NSObject <TSTTableHiddenRowColumnProviding>
{
    TSTHiddenStateIndexSet * _rowsVisible;
    TSTHiddenStateIndexSet * _rowsUserVisible;
    NSMutableIndexSet * _rowsInvalid;
    unsigned int _rowMarkIndex;
    TSTHiddenStateIndexSet * _columnsVisible;
    NSMutableIndexSet * _columnsInvalid;
}

@property (readonly, nonatomic) NSIndexSet * visibleRowIndices;
@property (readonly, nonatomic) NSIndexSet * userVisibleRowIndices;
@property (readonly, nonatomic) NSIndexSet * visibleColumnIndices;
@property (retain, nonatomic) TSTHiddenStateIndexSet * rowsVisible;
@property (retain, nonatomic) TSTHiddenStateIndexSet * rowsUserVisible;
@property (retain, nonatomic) NSMutableIndexSet * rowsInvalid;
@property (nonatomic) unsigned int rowMarkIndex;
@property (retain, nonatomic) TSTHiddenStateIndexSet * columnsVisible;
@property (retain, nonatomic) NSMutableIndexSet * columnsInvalid;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (unsigned char)visibleColumnBeforeColumn:(unsigned char)arg0;
- (unsigned char)visibleColumnAfterColumn:(unsigned char)arg0;
- (unsigned short)visibleRowBeforeRow:(unsigned short)arg0;
- (unsigned short)visibleRowAfterRow:(unsigned short)arg0;
- (char)isRowHidden:(unsigned short)arg0;
- (unsigned short)numberRowsHiddenInCellRange:(struct TSUColumnRowRect)arg0;
- (unsigned short)numberColumnsHiddenInCellRange:(struct TSUColumnRowRect)arg0;
- (unsigned short)visibleRowBeforeAndIncludingRow:(unsigned short)arg0;
- (unsigned short)visibleRowAfterAndIncludingRow:(unsigned short)arg0;
- (unsigned char)visibleColumnBeforeAndIncludingColumn:(unsigned char)arg0;
- (unsigned char)visibleColumnAfterAndIncludingColumn:(unsigned char)arg0;
- (char)anyRowsHiddenInCellRange:(struct TSUColumnRowRect)arg0;
- (char)anyColumnsHiddenInCellRange:(struct TSUColumnRowRect)arg0;
- (unsigned short)numberRowsVisibleInCellRange:(struct TSUColumnRowRect)arg0;
- (unsigned short)numberOfVisibleRowsFromHeader:(unsigned short)arg0;
- (char)isRowUserHidden:(unsigned short)arg0;
- (unsigned short)numberColumnsVisibleInCellRange:(struct TSUColumnRowRect)arg0;
- (char)anyRowsUserHiddenInCellRange:(struct TSUColumnRowRect)arg0;
- (unsigned short)nonUserHiddenRowAfterAndIncludingRow:(unsigned short)arg0;
- (NSIndexSet *)visibleRowIndices;
- (NSIndexSet *)visibleColumnIndices;
- (void)validateChangeDescriptors:(NSArray *)arg0;
- (TSTHiddenStateIndexSet *)rowsVisible;
- (TSTHiddenStateIndexSet *)rowsUserVisible;
- (TSTHiddenStateIndexSet *)columnsVisible;
- (unsigned int)rowMarkIndex;
- (void)setRowMarkIndex:(unsigned int)arg0;
- (NSMutableIndexSet *)rowsInvalid;
- (NSMutableIndexSet *)columnsInvalid;
- (unsigned short)numberRowsUserHiddenInCellRange:(struct TSUColumnRowRect)arg0;
- (unsigned short)previousNthVisibleRow:(unsigned short)arg0 fromRowIndex:(unsigned short)arg1;
- (unsigned char)previousNthVisibleColumn:(unsigned short)arg0 fromColumnIndex:(unsigned char)arg1;
- (struct ?)visibleCellOffsetBy:(struct ?)arg0 fromCellID:(struct ?)arg1;
- (NSIndexSet *)userVisibleRowIndices;
- (void)setRowsVisible:(TSTHiddenStateIndexSet *)arg0;
- (void)setRowsUserVisible:(TSTHiddenStateIndexSet *)arg0;
- (void)setRowsInvalid:(NSMutableIndexSet *)arg0;
- (void)setColumnsVisible:(TSTHiddenStateIndexSet *)arg0;
- (void)setColumnsInvalid:(NSMutableIndexSet *)arg0;
- (void)dealloc;
- (TSTHiddenRowsColumnsCache *)init;
- (void)validate:(NSDate *)arg0;
- (char)isColumnHidden:(unsigned char)arg0;

@end

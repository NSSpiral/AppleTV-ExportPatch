/* Runtime dump - OADTable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTable : OADDrawable
{
    OADTableGrid * mGrid;
    NSMutableArray * mRows;
}

+ (void)applyTextStyle:(NSObject *)arg0 toParagraphProperties:(NSDictionary *)arg1;

- (NSObject *)rowAtIndex:(unsigned int)arg0;
- (void)dealloc;
- (OADTable *)init;
- (unsigned int)rowCount;
- (TSCHChartGrid *)grid;
- (NSDictionary *)tableProperties;
- (id)addRow;
- (id)cellAtPos:(struct OADTMatrixPos)arg0;
- (struct OADTMatrixPos)masterPosOfPos:(struct OADTMatrixPos)arg0;
- (id)masterCellOfPos:(struct OADTMatrixPos)arg0;
- (void)flattenStyle;
- (void)setParentTextListStyle:(NSObject *)arg0;

@end

/* Runtime dump - EMCellMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMCellMapper : CMMapper
{
    struct EDCellHeader * edCell;
    EDReference * edMergedCellReference;
    int rowNumber;
    int firstColumn;
    int lastColumn;
    int columnSpan;
    char firstCellFlag;
    char spreadLeftFlag;
    double columnWidth;
}

+ (char)isCellEmpty:(struct EDCellHeader *)arg0;

- (double)columnWidth;
- (int)lastColumn;
- (int)firstColumn;
- (void)mapRowColSpansAt:(id)arg0 withState:(NSObject *)arg1;
- (EMCellMapper *)initWithEDCell:(struct EDCellHeader *)arg0 rowInfo:(struct EDRowInfo *)arg1 parent:(NSObject *)arg2 state:(NSObject *)arg3;
- (void)setLastColumn:(int)arg0;
- (void)setFirstColumn:(int)arg0;
- (void)resetColumnSpan:(int)arg0;
- (char)isCellEmpty;
- (void)setFirstCellFlag;
- (char)isFirstCell;
- (char)isCellSpreading:(id)arg0;
- (char)isCellMerged;
- (void)adjustColumnSpanForGrid:(double *)arg0 columnCount:(unsigned int)arg1 nextCell:(struct EDCellHeader *)arg2 withState:(NSObject *)arg3;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1 height:(double)arg2 nextCell:(struct EDCellHeader *)arg3;
- (id)mapHyperlinkAt:(id)arg0;
- (int)columnSpan;
- (EMCellMapper *)initWithParent:(NSObject *)arg0;

@end

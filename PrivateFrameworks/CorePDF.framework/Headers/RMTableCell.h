/* Runtime dump - RMTableCell
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface RMTableCell : NSObject
{
    NSString * _contents;
    RMTableCell * _nextCellInColumn;
    RMTableCell * _nextCellInRow;
    RMTable * _table;
    struct CGPDFNode * _tableCellNode;
}

@property (readonly) struct CGPDFPage * page;
@property (retain) RMTableCell * nextCellInColumn;
@property (retain) RMTableCell * nextCellInRow;
@property RMTable * table;
@property struct CGPDFNode * tableCellNode;

- (void)dealloc;
- (struct CGRect)bounds;
- (struct CGColor *)backgroundColor;
- (unsigned int)row;
- (NSString *)contents;
- (RMTable *)table;
- (struct CGPDFPage *)page;
- (void)setTableCellNode:(struct CGPDFNode *)arg0;
- (void)setNextCellInRow:(RMTableCell *)arg0;
- (void)setNextCellInColumn:(RMTableCell *)arg0;
- (struct CGPDFNode *)tableCellNode;
- (RMTableCell *)nextCellInRow;
- (RMTableCell *)nextCellInColumn;
- (unsigned int)column;
- (void)setTable:(RMTable *)arg0;

@end

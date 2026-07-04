/* Runtime dump - UISectionRowData
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISectionRowData : NSObject <NSCopying>
{
    char _valid;
    float _headerHeight;
    float _maxHeaderTitleWidth;
    float _footerHeight;
    float _maxFooterTitleWidth;
    float _headerOffset;
    float _footerOffset;
    unsigned int _numRows;
    unsigned int _arrayLength;
    float * _rowHeights;
    NSMutableIndexSet * _forcedNegativeRows;
    float * _rowOffsets;
    char _estimatesRowHeights;
    float _sectionHeight;
    int _headerAlignment;
    int _footerAlignment;
    UITableViewRowData * _rowData;
    char _sectionOffsetValid;
    float _sectionOffset;
    int _sectionRowOffset;
}

- (void)dealloc;
- (void)invalidate;
- (UISectionRowData *)copyWithZone:(struct _NSZone *)arg0;
- (float)heightForHeaderInSection:(int)arg0 canGuess:(char)arg1;
- (float)heightForFooterInSection:(int)arg0 canGuess:(char)arg1;
- (float)heightForRow:(int)arg0 inSection:(int)arg1 canGuess:(char)arg2;
- (void)invalidateSectionOffset;
- (void)updateSectionHeightWithDelta:(float)arg0 section:(int)arg1 updateFooterOffset:(char)arg2;
- (float)_headerOrFooterSizeForTable:(id)arg0 title:(NSString *)arg1 detailText:(NSString *)arg2 isHeader:(char)arg3 stripPaddingForAbuttingView:(char)arg4 isTopHeader:(char)arg5;
- (float)heightForEmptySection:(int)arg0 inTableView:(NSObject *)arg1 rowData:(UITableViewRowData *)arg2;
- (float)_defaultSectionHeaderHeightForSection:(int)arg0 tableView:(UITableView *)arg1 tableViewRowData:(NSData *)arg2;
- (float)_defaultSectionFooterHeightForSection:(int)arg0 tableView:(UITableView *)arg1 tableViewRowData:(NSData *)arg2;
- (void)deleteRowAtIndex:(int)arg0;
- (void)addOffset:(float)arg0 fromRow:(int)arg1;
- (float)offsetForRow:(int)arg0;
- (int)_rowForPoint:(struct CGPoint)arg0 beginningWithRow:(int)arg1 numberOfRows:(int)arg2;
- (UISectionRowData *)initWithRowData:(UITableViewRowData *)arg0;
- (void)setHeight:(float)arg0 forRow:(int)arg1;
- (void)refreshWithSection:(int)arg0 tableView:(UITableView *)arg1 tableViewRowData:(NSData *)arg2;
- (void)insertRowAtIndex:(int)arg0 inSection:(int)arg1 rowHeight:(float)arg2 tableViewRowData:(NSData *)arg3;
- (int)sectionLocationForRow:(int)arg0;
- (int)sectionLocationForReorderedRow:(int)arg0;
- (int)rowForPoint:(struct CGPoint)arg0;

@end

/* Runtime dump - UITableViewRowData
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewRowData : NSObject <NSCopying>
{
    UITableView * _tableView;
    int _numSections;
    int _sectionRowDataCapacity;
    id * _sectionRowData;
    float _minimumRowHeight;
    float _tableViewWidth;
    char _tableHeaderHeightValid;
    float _tableHeaderHeight;
    char _tableFooterHeightValid;
    float _tableFooterHeight;
    float _heightForTableHeaderViewHiding;
    float _tableTopPadding;
    float _tableBottomPadding;
    char _tableSidePaddingValid;
    float _tableSidePadding;
    NSIndexPath * _reorderedIndexPath;
    NSIndexPath * _gapIndexPath;
    float _reorderedRowHeight;
    char _estimatesRowHeights;
}

@property (readonly, nonatomic) NSIndexPath * reorderGapIndexPath;
@property (readonly, nonatomic) float reorderedRowHeight;
@property (readonly, nonatomic) float heightForAutohidingTableHeaderView;
@property (readonly, nonatomic) float heightForTableHeaderViewHiding;
@property (nonatomic) float minimumRowHeight;
@property (nonatomic) float tableTopPadding;
@property (nonatomic) float tableBottomPadding;
@property (nonatomic) float tableSidePadding;
@property (nonatomic) char estimatesRowHeights;

- (void)dealloc;
- (int)numberOfRowsInSection:(int)arg0;
- (int)numberOfSections;
- (UITableViewRowData *)copyWithZone:(struct _NSZone *)arg0;
- (int)numberOfRows;
- (UITableViewRowData *)initWithTableView:(UITableView *)arg0;
- (NSIndexPath *)indexPathForRowAtGlobalRow:(int)arg0;
- (void)invalidateAllSections;
- (void)setEstimatesRowHeights:(char)arg0;
- (struct CGRect)rectForTableHeaderView;
- (struct CGRect)rectForTableFooterView;
- (void)setHeightForTableHeaderViewHiding:(float)arg0;
- (float)heightForAutohidingTableHeaderView;
- (float)heightForTableHeaderViewHiding;
- (void)tableHeaderHeightDidChangeToHeight:(float)arg0;
- (float)heightForTable;
- (void)ensureAllSectionsAreValid;
- (struct _NSRange)sectionsInRect:(struct CGRect)arg0;
- (struct CGRect)rectForHeaderInSection:(id)arg0 heightCanBeGuessed:(SEL)arg1;
- (struct CGRect)rectForFooterInSection:(id)arg0 heightCanBeGuessed:(SEL)arg1;
- (struct CGRect)floatingRectForHeaderInSection:(id)arg0 visibleRect:(SEL)arg1;
- (float)maxHeaderTitleWidthForSection:(int)arg0;
- (struct CGRect)floatingRectForFooterInSection:(id)arg0 visibleRect:(SEL)arg1;
- (float)maxFooterTitleWidthForSection:(int)arg0;
- (struct CGRect)rectForGlobalRow:(id)arg0 heightCanBeGuessed:(SEL)arg1;
- (struct _NSRange)globalRowsInRect:(struct CGRect)arg0 canGuess:(struct CGSize)arg1;
- (int)globalRowForRowAtIndexPath:(NSIndexPath *)arg0;
- (int)headerAlignmentForSection:(int)arg0;
- (int)footerAlignmentForSection:(int)arg0;
- (float)minimumRowHeight;
- (struct CGRect)rectForTable;
- (void)tableViewWidthDidChangeToWidth:(float)arg0;
- (void)setReorderedIndexPath:(NSIndexPath *)arg0;
- (struct CGRect)rectForRow:(id)arg0 inSection:(SEL)arg1 heightCanBeGuessed:(int)arg2;
- (struct CGRect)rectForSection:(id)arg0;
- (NSObject *)indexPathsForRowsInRect:(struct CGRect)arg0;
- (float)heightForHeaderInSection:(int)arg0 canGuess:(char)arg1;
- (float)heightForFooterInSection:(int)arg0 canGuess:(char)arg1;
- (float)heightForTableHeaderView;
- (float)tableSidePadding;
- (void)invalidateAllSectionOffsetsAndUpdatePadding;
- (void)tableFooterHeightDidChangeToHeight:(float)arg0;
- (int)sectionLocationForRow:(int)arg0 inSection:(int)arg1;
- (void)setHeight:(float)arg0 forRowAtIndexPath:(NSIndexPath *)arg1;
- (void)addReorderGapFromIndexPath:(NSIndexPath *)arg0;
- (void)removeReorderGapFromIndexPath:(NSIndexPath *)arg0;
- (void)moveRowAtIndexPathFrom:(NSObject *)arg0 toIndexPath:(NSIndexPath *)arg1;
- (NSObject *)targetIndexPathForPoint:(struct CGPoint)arg0;
- (char)shouldStripHeaderTopPaddingForSection:(int)arg0;
- (char)hasHeaderForSection:(int)arg0;
- (int)sectionLocationForReorderedRow:(int)arg0 inSection:(int)arg1;
- (float)heightForRow:(int)arg0 inSection:(int)arg1 canGuess:(char)arg2;
- (void)adjustSectionOffsetsBeginningAtIndex:(int)arg0 count:(int)arg1 delta:(float)arg2 rowDelta:(int)arg3;
- (void)setTableTopPadding:(float)arg0;
- (void)setTableBottomPadding:(float)arg0;
- (char)estimatesRowHeights;
- (void)setMinimumRowHeight:(float)arg0;
- (NSIndexPath *)reorderedIndexPath;
- (NSIndexPath *)reorderGapIndexPath;
- (float)reorderedRowHeight;
- (int)sectionForSectionRowData:(NSData *)arg0;
- (float)offsetForSection:(id)arg0;
- (void)_updateSectionRowDataArrayForNumSections:(int)arg0;
- (void)_ensureSectionOffsetIsValidForSection:(int)arg0;
- (void)_updateNumSections;
- (void)_updateTopAndBottomPadding;
- (float)heightForRow:(int)arg0 inSection:(int)arg1 canGuess:(char)arg2 adjustForReorderedRow:(char)arg3;
- (float)heightForTableFooterView;
- (char)hasFooterForSection:(int)arg0;
- (int)_sectionRowForGlobalRow:(int)arg0 inSection:(int *)arg1;
- (int)sectionForPoint:(struct CGPoint)arg0;
- (int)_sectionForPoint:(struct CGPoint)arg0 beginningWithSection:(int)arg1 numberOfSections:(int)arg2;
- (void)invalidateSection:(int)arg0;
- (int)numberOfRowsBeforeSection:(int)arg0;
- (float)heightForSection:(int)arg0;
- (void)setTableSidePadding:(float)arg0;
- (float)tableTopPadding;
- (float)tableBottomPadding;

@end

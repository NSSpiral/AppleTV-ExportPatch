/* Runtime dump - UIPickerTableView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPickerTableView : UITableView <UITableViewDelegate>
{
    struct CGRect _selectionBarRect;
    int _selectionBarRow;
    NSMutableIndexSet * _checkedRows;
    float _lastClickedOffset;
    int _lastSelectedRow;
    char _usesModernStyle;
    UIColor * _textColor;
    struct CGRect _visibleRect;
    NSMutableArray * _referencingCells;
    struct ? _pickerTableFlags;
}

@property (nonatomic) struct CGRect selectionBarRect;
@property (nonatomic) int selectionBarRow;
@property (nonatomic) int lastSelectedRow;
@property char _usesModernStyle;
@property (retain, nonatomic) UIColor * _textColor;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (UIView *)_pickerView;
- (void)setFrame:(struct CGRect)arg0;
- (void)_setTextColor:(UIColor *)arg0;
- (UIPickerTableView *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1 visibleRect:(struct CGRect)arg2;
- (void)layoutSubviews;
- (int)selectionBarRow;
- (char)_usesModernStyle;
- (void)setSelectionBarRect:(struct CGRect)arg0;
- (char)selectRow:(int)arg0 animated:(char)arg1 notify:(char)arg2;
- (void)setBounds:(struct CGRect)arg0;
- (char)isRowChecked:(int)arg0;
- (UIColor *)_textColor;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (NSObject *)tableView:(UITableView *)arg0 willSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg0;
- (void)scrollViewWillEndDragging:(UIScrollView *)arg0 withVelocity:(struct CGPoint)arg1 targetContentOffset:(struct CGPoint *)arg2;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg0 willDecelerate:(char)arg1;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)arg0;
- (void)scrollViewDidEndScrollingAnimation:(NSObject *)arg0;
- (char)scrollViewShouldScrollToTop:(UIScrollView *)arg0;
- (void)_setUsesModernStyle:(char)arg0;
- (void)setContentOffset:(struct CGPoint)arg0;
- (char)_beginTrackingWithEvent:(NSObject *)arg0;
- (void)_scrollViewAnimationEnded:(id)arg0 finished:(char)arg1;
- (void)_updateContentInsets;
- (struct CGRect)_visibleBounds;
- (char)_shouldWrapCells;
- (void)_rectChangedWithNewSize:(struct CGSize)arg0 oldSize:(struct CGSize)arg1;
- (UIView *)_containerView;
- (NSString *)_anyDateLabel;
- (void)_setSelectionBarRow:(int)arg0;
- (struct CGPoint)contentOffsetForRowAtIndexPath:(NSIndexPath *)arg0;
- (void)_notifyContentOffsetChange;
- (NSMutableIndexSet *)_checkedRows;
- (char)_scrollRowAtIndexPathToSelectionBar:(id)arg0 animated:(char)arg1;
- (float)_yRangingFromZeroTo:(float)arg0 forUnitY:(float)arg1;
- (float)_viewYForUnitY:(float)arg0;
- (float)_rotationForCellCenterY:(float)arg0;
- (float)_distanceToCenterForY:(float)arg0;
- (float)_yForY:(float)arg0;
- (float)_unitYForViewY:(float)arg0;
- (float)_zForUnitY:(float)arg0;
- (void)_setContentOffset:(struct CGPoint)arg0 notify:(char)arg1;
- (struct CATransform3D)_transformForCellAtY:(float)arg0;
- (void)_playClickIfNecessary;
- (struct CGRect)selectionBarRect;
- (char)didSelectDisabled:(char)arg0;
- (void)_scrollingFinished;
- (struct CGRect)_selectionBarRectForBounds:(id)arg0;
- (float)_zCoordinateForYCoordinate:(float)arg0;
- (int)lastSelectedRow;
- (void)setLastSelectedRow:(int)arg0;

@end

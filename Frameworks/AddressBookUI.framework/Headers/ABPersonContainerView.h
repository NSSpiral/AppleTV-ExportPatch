/* Runtime dump - ABPersonContainerView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonContainerView : UIView <ABPersonTabsLayoutManager>
{
    UISegmentedControl * _contentSwitchingTabs;
    char _hidesContentSwitchingTabs;
    UIView * _nonScrollableHeaderView;
    ABPersonTableView * _tableView;
    ABPersonTableViewDataSource * _dataSource;
    ABPersonOverlayingContainerView * _overlayingContainerView;
    UIImageView * _contentSwitchingTabsPocketShadow;
    UIImageView * _contentSwitchingTabsBorder;
}

@property (retain, nonatomic) ABPersonOverlayingContainerView * overlayingContainerView;
@property (retain, nonatomic) UISegmentedControl * contentSwitchingTabs;
@property (retain, nonatomic) UIImageView * contentSwitchingTabsPocketShadow;
@property (retain, nonatomic) UIImageView * contentSwitchingTabsBorder;
@property (nonatomic) char hidesContentSwitchingTabs;
@property (retain, nonatomic) ABPersonTableView * tableView;
@property (retain, nonatomic) UIView * nonScrollableHeaderView;
@property (nonatomic) ABPersonTableViewDataSource * dataSource;
@property (readonly, nonatomic) UIScrollView<ABPersonTabsScrollView> * currentScrollView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)didChangeContentOffset:(struct CGPoint)arg0 inScrollView:(NSObject *)arg1;
- (void)moveContentSwitchingTabsAboveView:(NSObject *)arg0 inScrollView:(NSObject *)arg1;
- (void)repositionContentSwitchingTabs;
- (float)heightForHeaderAndContentSwitchingTabs;
- (UIScrollView<ABPersonTabsScrollView> *)currentScrollView;
- (NSObject *)viewContainingHeaderView;
- (UISegmentedControl *)contentSwitchingTabs;
- (char)hidesContentSwitchingTabs;
- (float)heightNeededForContentSwitchingTabs;
- (ABPersonOverlayingContainerView *)overlayingContainerView;
- (void)setContentSwitchingTabs:(UISegmentedControl *)arg0;
- (void)setContentSwitchingTabsPocketShadow:(UIImageView *)arg0;
- (void)setContentSwitchingTabsBorder:(UIImageView *)arg0;
- (void)setHidesContentSwitchingTabs:(char)arg0;
- (void)setOverlayingContainerView:(ABPersonOverlayingContainerView *)arg0;
- (void)setNonScrollableHeaderView:(UIView *)arg0;
- (NSObject *)prepareToRestoreTabsPosition;
- (void)restoreTabsPosition:(NSObject *)arg0;
- (UIView *)nonScrollableHeaderView;
- (UIImageView *)contentSwitchingTabsPocketShadow;
- (UIImageView *)contentSwitchingTabsBorder;
- (void)dealloc;
- (void)setDataSource:(ABPersonTableViewDataSource *)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (ABPersonTableViewDataSource *)dataSource;
- (void)setTableView:(ABPersonTableView *)arg0;
- (ABPersonTableView *)tableView;

@end

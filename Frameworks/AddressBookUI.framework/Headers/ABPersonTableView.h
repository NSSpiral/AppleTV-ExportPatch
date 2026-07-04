/* Runtime dump - ABPersonTableView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonTableView : UITableView <ABPersonTabsScrollView>
{
    float _minimumBottomInset;
    struct UIEdgeInsets _savedContentInset;
    ABPersonViewControllerHelper * _helper;
    <ABPersonTabsLayoutManager> * _tabsLayoutManager;
}

@property (nonatomic) ABPersonViewControllerHelper * helper;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) float minimumBottomInset;
@property (retain, nonatomic) UIView * backgroundView;
@property (retain, nonatomic) <ABPersonTabsLayoutManager> * tabsLayoutManager;

- (ABPersonViewControllerHelper *)helper;
- (void)setHelper:(ABPersonViewControllerHelper *)arg0;
- (float)minimumBottomInset;
- (void)setMinimumBottomInset:(float)arg0;
- (<ABPersonTabsLayoutManager> *)tabsLayoutManager;
- (void)setTabsLayoutManager:(<ABPersonTabsLayoutManager> *)arg0;
- (void)layoutSubviews;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)setContentOffset:(struct CGPoint)arg0;
- (void)setContentInset:(struct UIEdgeInsets)arg0;
- (char)touchesShouldCancelInContentView:(NSObject *)arg0;

@end

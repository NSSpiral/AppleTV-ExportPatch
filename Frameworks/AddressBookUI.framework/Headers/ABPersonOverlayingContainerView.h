/* Runtime dump - ABPersonOverlayingContainerView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonOverlayingContainerView : UIScrollView <ABPersonTabsScrollView>
{
    float _minimumBottomInset;
    struct UIEdgeInsets _savedContentInset;
    UIView * _backgroundView;
    UIView * _abContentView;
    <ABPersonTabsLayoutManager> * _tabsLayoutManager;
}

@property (retain, nonatomic) UIView * contentView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) float minimumBottomInset;
@property (retain, nonatomic) UIView * backgroundView;
@property (retain, nonatomic) <ABPersonTabsLayoutManager> * tabsLayoutManager;

- (float)minimumBottomInset;
- (void)setMinimumBottomInset:(float)arg0;
- (<ABPersonTabsLayoutManager> *)tabsLayoutManager;
- (void)setTabsLayoutManager:(<ABPersonTabsLayoutManager> *)arg0;
- (void)_updateContentFrameAndSize;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)setContentOffset:(struct CGPoint)arg0;
- (UIView *)contentView;
- (void)setContentView:(UIView *)arg0;
- (void)setContentInset:(struct UIEdgeInsets)arg0;
- (void)setBackgroundView:(UIView *)arg0;
- (UIView *)backgroundView;

@end

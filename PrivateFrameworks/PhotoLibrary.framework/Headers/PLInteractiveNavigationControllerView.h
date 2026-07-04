/* Runtime dump - PLInteractiveNavigationControllerView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLInteractiveNavigationControllerView : UIView <UINavigationBarDelegate>
{
    UIView * _top;
    UIView * _bottom;
    UIView * _interactive;
    UIView * _overlay;
    UINavigationBar * _navBar;
    UIView * _header;
    UIView * _footer;
    int _orientation;
    struct ? _controllerViewFlags;
}

@property (readonly, nonatomic) UINavigationBar * navigationBar;
@property (retain, nonatomic) UIView * topView;
@property (retain, nonatomic) UIView * bottomView;
@property (retain, nonatomic) UIView * headerView;
@property (retain, nonatomic) UIView * footerView;
@property (nonatomic) char headerViewHidden;
@property (nonatomic) char footerViewHidden;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setOverlayView:(NSObject *)arg0;
- (PLInteractiveNavigationControllerView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (UINavigationBar *)navigationBar;
- (void)setInterfaceOrientation:(int)arg0;
- (UIView *)headerView;
- (void)setHeaderView:(UIView *)arg0;
- (UIView *)topView;
- (UIView *)bottomView;
- (UIView *)footerView;
- (void)setFooterView:(UIView *)arg0;
- (void)transitionWillBegin;
- (void)setTopView:(UIView *)arg0;
- (void)setBottomView:(UIView *)arg0;
- (void)setInteractiveView:(UIView *)arg0;
- (void)setTopViewAlpha:(float)arg0;
- (void)transitionDidEnd;
- (void)setInteractiveView:(UIView *)arg0 removePrevious:(char)arg1;
- (char)footerViewIsHidden;
- (char)headerViewIsHidden;
- (void)setHeaderViewHidden:(char)arg0 animated:(char)arg1;
- (void)setFooterViewHidden:(char)arg0 animated:(char)arg1;
- (void)setHeaderViewHidden:(char)arg0;
- (void)setFooterViewHidden:(char)arg0;
- (void)_adjustViewFrame:(NSObject *)arg0;
- (UIView *)interactiveView;

@end

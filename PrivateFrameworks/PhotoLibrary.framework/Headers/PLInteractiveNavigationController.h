/* Runtime dump - PLInteractiveNavigationController
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLInteractiveNavigationController : UIViewController <UINavigationBarDelegate, PLExpandableViewDelegate>
{
    NSMutableArray * _stack;
    PLInteractiveNavigationControllerView * _contentView;
    UIView * _interactiveView;
    UIView * _overlayView;
    UIView * _headerView;
    UIViewController * _previousViewController;
    UIViewController * _expandedController;
    PLExpandableView * _expandingView;
    NSMutableArray * _navBarPushPopQueue;
    double _lastAlphaTime;
    struct ? _stackFlags;
    struct ? _appearanceFlags;
    <PLInteractiveNavigationControllerDelegate> * delegate;
}

@property (nonatomic) <PLInteractiveNavigationControllerDelegate> * delegate;
@property (retain, nonatomic) UIView * footerView;
@property (nonatomic) char footerViewHidden;
@property (retain, nonatomic) UIView * headerView;
@property (nonatomic) char headerViewHidden;
@property (nonatomic) char shouldPropagateEditingMode;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<PLInteractiveNavigationControllerDelegate> *)arg0;
- (PLInteractiveNavigationController *)init;
- (_UIPageViewControllerContentView *)_contentView;
- (<PLInteractiveNavigationControllerDelegate> *)delegate;
- (UINavigationBar *)navigationBar;
- (UIViewController *)topViewController;
- (void)navigationBar:(UINavigationBar *)arg0 didPushItem:(UINavigationItem *)arg1;
- (char)navigationBar:(UINavigationBar *)arg0 shouldPopItem:(UINavigationItem *)arg1;
- (void)navigationBar:(UINavigationBar *)arg0 didPopItem:(UINavigationItem *)arg1;
- (void)loadView;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (char)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)viewDidAppear:(char)arg0;
- (void)didRotateFromInterfaceOrientation:(int)arg0;
- (NSObject *)rotatingHeaderView;
- (NSObject *)rotatingFooterView;
- (void)_getRotationContentSettings:(struct ? *)arg0;
- (UIViewController *)bottomViewController;
- (NSArray *)viewControllers;
- (PLInteractiveNavigationController *)initWithRootViewController:(UIView *)arg0;
- (UIView *)headerView;
- (void)setHeaderView:(UIView *)arg0;
- (void)_setPreviousViewController:(BRController *)arg0;
- (UIView *)footerView;
- (void)setFooterView:(UIView *)arg0;
- (void)expandableViewDidCompleteCollapsing:(PLExpandableView *)arg0;
- (void)expandableViewWillBeginExpanding:(PLExpandableView *)arg0;
- (void)expandableView:(PLExpandableView *)arg0 willCancelCollapsingWithDuration:(double)arg1;
- (void)expandableView:(PLExpandableView *)arg0 willCompleteCollapsingWithDuration:(double)arg1;
- (void)expandableView:(PLExpandableView *)arg0 willCompleteExpandingWithDuration:(double)arg1;
- (void)expandableView:(PLExpandableView *)arg0 willCancelExpandingWithDuration:(double)arg1;
- (void)expandableViewDidCompleteExpanding:(PLExpandableView *)arg0;
- (void)expandableViewDidBeginCollapsing:(PLExpandableView *)arg0;
- (void)expandableViewDidCancelExpanding:(PLExpandableView *)arg0;
- (void)expandableViewDidCancelCollapsing:(PLExpandableView *)arg0;
- (void)expandableView:(PLExpandableView *)arg0 expansionFractionChanged:(float)arg1;
- (void)replaceTopViewControllerWithViewController:(BRController *)arg0;
- (void)_removeTopViewController;
- (NSArray *)viewControllerNavigationItems;
- (void)cancelPushingViewController;
- (void)finishPoppingViewController;
- (void)_finishCurrentOperationBeforePushingViewController:(BRController *)arg0;
- (char)shouldPropagateEditingMode;
- (void)_addViewController:(BRController *)arg0;
- (void)_setInteractiveView:(NSObject *)arg0;
- (void)_setOverlayView:(NSObject *)arg0;
- (void)_finishCurrentOperation;
- (char)isPushingViewController;
- (void)_finishedAnimatingTopAlpha:(id)arg0 finished:(id /* block */)arg1 topItem:(UINavigationItem *)arg2;
- (void)_performNavBarPushPop:(int)arg0 transition:(int)arg1;
- (char)_validateOperation:(int)arg0 errorString:(NSString *)arg1;
- (char)isPoppingViewController;
- (void)popViewController;
- (void)popToRootViewController;
- (char)footerViewIsHidden;
- (void)_setInteractiveController:(BRController *)arg0 interactiveView:(UIView *)arg1;
- (void)_notifyAction:(SEL)arg0 expandableView:(PLExpandableView *)arg1;
- (void)beginPushingViewController:(BRController *)arg0 interactivelyUsingView:(NSObject *)arg1;
- (void)setTopViewControllerAlpha:(float)arg0;
- (char)headerViewIsHidden;
- (void)_notifyAction:(SEL)arg0 expandableView:(PLExpandableView *)arg1 duration:(double)arg2;
- (void)setTransitionProgress:(float)arg0 withDuration:(double)arg1;
- (void)finishPushingViewController;
- (void)beginPoppingViewControllerInteractivelyUsingView:(NSObject *)arg0;
- (void)cancelPoppingViewController;
- (void)_processNavBarPushPopQueue;
- (void)setHeaderViewHidden:(char)arg0 animated:(char)arg1;
- (void)setFooterViewHidden:(char)arg0 animated:(char)arg1;
- (char)pl_behavesLikeNavigationControllerForNotifications;
- (void)popToViewController:(BRController *)arg0;
- (void)popViewControllerAnimated:(char)arg0 completion:(id /* block */)arg1;
- (void)popToRootViewControllerAnimated:(char)arg0 completion:(id /* block */)arg1;
- (void)setHeaderViewHidden:(char)arg0;
- (void)setFooterViewHidden:(char)arg0;
- (void)setShouldPropagateEditingMode:(char)arg0;

@end

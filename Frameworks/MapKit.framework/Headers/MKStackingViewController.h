/* Runtime dump - MKStackingViewController
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKStackingViewController : UIViewController <UIScrollViewDelegate>
{
    _MKStackView * _stackView;
    _MKStackingPlaceholderView * _headerPlaceholderView;
    _MKStackingPlaceholderView * _selectorPlaceholderView;
    _MKStackingContentView * _contentView;
    NSLayoutConstraint * _heightCompressionResistanceConstraint;
    NSLayoutConstraint * _heightHuggingConstraint;
    NSLayoutConstraint * _widthConstraint;
    char _isScrollingProgrammaticallyToViewController;
    unsigned int _countOfCurrentLayoutInvocations;
    UIScrollView * _scrollView;
    NSMapTable * _viewControllersToPreferredHeightConstraints;
    NSArray * _titleViewConstraints;
    NSMutableSet * _viewControllersWithObservedTitles;
    NSMapTable * _titleHeaderViewsByViewController;
    char _willRelayoutForPreferredContentSizeChange;
    char _isComputingInitialViewControllerPreferredHeight;
    char _isBuildingView;
    UIView * _titleView;
    UIView * _headerView;
    UIView * _selectorView;
    NSArray * _viewControllers;
    UIViewController * _selectedViewController;
    <MKStackingViewControllerDelegate> * _stackingDelegate;
}

@property (retain, nonatomic) UIView * titleView;
@property (retain, nonatomic) UIView * headerView;
@property (retain, nonatomic) UIView * selectorView;
@property (copy, nonatomic) NSArray * viewControllers;
@property (weak, nonatomic) UIViewController * selectedViewController;
@property (weak, nonatomic) <MKStackingViewControllerDelegate> * stackingDelegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setStackingDelegate:(<MKStackingViewControllerDelegate> *)arg0;
- (void)setSelectorViewNeedsUpdate;
- (void)performUserSelectionForViewControllerAtIndex:(unsigned int)arg0;
- (float)_headerHeight;
- (void)_updateStackViewSubviewsAndChildVCsEntering:(id)arg0 exiting:(id)arg1;
- (void)_addTitleViewToHierarchyIfPossible;
- (float)_titleHeight;
- (<MKStackingViewControllerDelegate> *)stackingDelegate;
- (float)_fittingHeightForView:(NSObject *)arg0;
- (UIView *)selectorView;
- (float)_selectorHeight;
- (void)_setUpEnteringViewController:(BRController *)arg0;
- (void)_tearDownExitingViewController:(BRController *)arg0;
- (void)_addPreferredHeightConstraintForViewControllerIfNeeded:(id)arg0;
- (void)_removePreferredHeightConstraintFromViewController:(BRController *)arg0;
- (void)_setPreferredHeight:(float)arg0 forViewController:(BRController *)arg1;
- (void)_repositionNonstackedSubviews;
- (void)_updateSelectedViewControllerAfterPositionChange;
- (void)_updateSelectorView;
- (void)_setSelectedViewController:(BRController *)arg0 animated:(char)arg1;
- (void)_scrollToViewControllerAtIndex:(unsigned int)arg0 animated:(char)arg1;
- (void)setSelectorView:(UIView *)arg0;
- (void)setSelectedViewController:(UIViewController *)arg0 animated:(char)arg1;
- (void)dealloc;
- (void)scrollViewDidScroll:(UIScrollView *)arg0;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg0;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg0 willDecelerate:(char)arg1;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)arg0;
- (void)_didScroll;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (UIView *)titleView;
- (void)setTitleView:(UIView *)arg0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(NSObject *)arg0;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)viewDidAppear:(char)arg0;
- (float)_topLayoutGuide;
- (void)updateViewConstraints;
- (NSArray *)viewControllers;
- (void)setViewControllers:(NSArray *)arg0;
- (UIViewController *)selectedViewController;
- (void)setSelectedViewController:(UIViewController *)arg0;
- (UIView *)headerView;
- (void)setHeaderView:(UIView *)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void).cxx_destruct;

@end

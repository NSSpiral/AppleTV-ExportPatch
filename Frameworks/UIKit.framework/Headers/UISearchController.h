/* Runtime dump - UISearchController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISearchController : UIViewController <UIViewControllerPresenting, _UIScrollNotification, NSCoding, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    UISearchBar * _searchBar;
    int _barPresentationStyle;
    <UIViewControllerAnimatedTransitioning> * _animator;
    id _windowWillAnimateToken;
    _UISearchControllerDidScrollDelegate * _didScrollDelegate;
    struct ? _controllerFlags;
    char _dimsBackgroundDuringPresentation;
    char _hidesNavigationBarDuringPresentation;
    char __showResultsForEmptySearch;
    UIView * _resultsControllerViewContainer;
    <UISearchResultsUpdating> * _searchResultsUpdater;
    <UISearchControllerDelegate> * _delegate;
    UIViewController * _searchResultsController;
    int __previousSearchBarPosition;
    float __resultsContentScrollViewPresentationOffset;
}

@property (nonatomic) <UISearchResultsUpdating> * searchResultsUpdater;
@property (nonatomic) char active;
@property (nonatomic) <UISearchControllerDelegate> * delegate;
@property (nonatomic) char dimsBackgroundDuringPresentation;
@property (nonatomic) char hidesNavigationBarDuringPresentation;
@property (readonly, retain, nonatomic) UIViewController * searchResultsController;
@property (readonly, retain, nonatomic) UISearchBar * searchBar;
@property (nonatomic) char _showResultsForEmptySearch;
@property (readonly, nonatomic) int _barPresentationStyle;
@property (nonatomic) int _previousSearchBarPosition;
@property (retain, nonatomic) UIView * _resultsControllerViewContainer;
@property (nonatomic) float _resultsContentScrollViewPresentationOffset;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)_shouldForwardViewWillTransitionToSize;

- (void)dealloc;
- (UISearchController *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(<UISearchControllerDelegate> *)arg0;
- (<UISearchControllerDelegate> *)delegate;
- (double)transitionDuration:(double)arg0;
- (void)animateTransition:(NSObject *)arg0;
- (char)isActive;
- (void)_commonInit;
- (void)_updateBackdropMaskViewsInScrollView:(NSObject *)arg0;
- (void)_didScroll;
- (void)_presentingViewControllerDidChange:(NSDictionary *)arg0;
- (void)_presentingViewControllerWillChange:(NSDictionary *)arg0;
- (void)viewWillTransitionToSize:(struct CGSize)arg0 withTransitionCoordinator:(NSObject *)arg1;
- (void)loadView;
- (void)setModalPresentationStyle:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (NSObject *)_presentationControllerForPresentedController:(BRController *)arg0 presentingController:(BRController *)arg1 sourceController:(BRController *)arg2;
- (NSObject *)animationControllerForPresentedController:(BRController *)arg0 presentingController:(BRController *)arg1 sourceController:(BRController *)arg2;
- (NSObject *)animationControllerForDismissedController:(BRController *)arg0;
- (char)_requiresCustomPresentationController;
- (void)_keyboardWillShow:(NSNotification *)arg0;
- (void)_keyboardWillHide:(NSNotification *)arg0;
- (UISearchBar *)searchBar;
- (void)setActive:(char)arg0;
- (char)dimsBackgroundDuringPresentation;
- (char)_showResultsForEmptySearch;
- (int)_barPresentationStyle;
- (char)hidesNavigationBarDuringPresentation;
- (UIViewController *)searchResultsController;
- (void)_updateSearchBarMaskIfNecessary;
- (void)_searchBarSuperviewChanged;
- (void)_searchBar:(UISearchBar *)arg0 textDidChange:(char)arg1;
- (void)_searchBarCancelButtonClicked:(id)arg0;
- (void)_searchBarTextDidBeginEditing:(id)arg0;
- (void)_searchBarSearchButtonClicked:(id)arg0;
- (char)_searchBarShouldFinalizeBecomingFirstResponder;
- (void)_updateTableHeaderBackgroundViewInTableView:(NSObject *)arg0 amountScrolledUnder:(float)arg1;
- (char)_resultsControllerWillLayoutVisibleUnderContainerView;
- (void)set_resultsContentScrollViewPresentationOffset:(float)arg0;
- (void)_dismissPresentation:(char)arg0;
- (NSObject *)_searchPresentationController;
- (void)set_previousSearchBarPosition:(int)arg0;
- (float)_resultsContentScrollViewPresentationOffset;
- (UIView *)_resultsControllerViewContainer;
- (int)_previousSearchBarPosition;
- (UISearchController *)initWithSearchResultsController:(UIViewController *)arg0;
- (void)_updateSearchResultsControllerWithDelta:(struct CGSize)arg0;
- (void)_connectSearchBar:(id)arg0;
- (void)_adjustSearchBarSizeForOrientation:(int)arg0;
- (NSObject *)_createAnimationCoordinator;
- (void)_resizeResultsControllerWithDelta:(struct CGSize)arg0;
- (void)_performAutomaticPresentation;
- (NSObject *)_locatePresentingViewController;
- (void)_updateVisibilityOfSearchResultsForSearchBar:(id)arg0;
- (<UISearchResultsUpdating> *)searchResultsUpdater;
- (void)_watchScrollView:(NSObject *)arg0 forScrolling:(char)arg1;
- (void)_sizeSearchViewToPresentingViewController:(BRController *)arg0;
- (void)_willPresentFromViewController:(BRController *)arg0;
- (void)_didPresentFromViewController:(BRController *)arg0;
- (void)_willDismissSearchController;
- (void)_didDismissSearchController;
- (char)_allowFormSheetStylePresentation;
- (NSObject *)_animatorForBarPresentationStyle:(int)arg0 dismissing:(char)arg1;
- (void)_updateSearchResultsContentScrollViewWithDelta:(struct CGSize)arg0;
- (void)_updateSearchResultsPositionWithDelta:(struct CGSize)arg0;
- (void)_beginWatchingPresentingController;
- (void)_endWatchingPresentingController;
- (void)_navigationControllerWillShowViewController:(BRController *)arg0;
- (void)set_resultsControllerViewContainer:(UIView *)arg0;
- (void)setSearchResultsUpdater:(<UISearchResultsUpdating> *)arg0;
- (void)setDimsBackgroundDuringPresentation:(char)arg0;
- (void)setHidesNavigationBarDuringPresentation:(char)arg0;
- (void)_setShowResultsForEmptySearch:(char)arg0;

@end

/* Runtime dump - UIPageController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPageController : UIViewController
{
    NSMutableArray * _viewControllers;
    id _wrapperViews;
    id _notificationState;
    UIScrollView * _scrollView;
    UIPageControl * _pageControl;
    <UIPageControllerDelegate> * _delegate;
    int _pageSpacing;
    int _visibleIndex;
    int _pageCount;
    struct ? _pageControllerFlags;
}

@property (nonatomic) <UIPageControllerDelegate> * delegate;
@property (nonatomic) float pageSpacing;
@property (nonatomic) char displaysPageControl;
@property (readonly, retain, nonatomic) UIViewController * visibleViewController;
@property (nonatomic) int pageCount;
@property (nonatomic) int visibleIndex;
@property (nonatomic) char wraps;

- (NSObject *)pl_existingViewControllerAtIndex:(unsigned int)arg0;
- (void)dealloc;
- (void)setDelegate:(<UIPageControllerDelegate> *)arg0;
- (<UIPageControllerDelegate> *)delegate;
- (void)loadView;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidUnload;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)viewDidDisappear:(char)arg0;
- (char)_isSupportedInterfaceOrientation:(int)arg0;
- (NSObject *)_nextViewController;
- (void)willRotateToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg0;
- (char)_allowsAutorotation;
- (NSObject *)rotatingHeaderView;
- (NSObject *)rotatingFooterView;
- (char)_shouldUseOnePartRotation;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (void)_getRotationContentSettings:(struct ? *)arg0;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg0;
- (UIViewController *)visibleViewController;
- (_UIQueuingScrollView *)_scrollView;
- (int)pageCount;
- (void)_scrollView:(_UIQueuingScrollView *)arg0 boundsDidChangeToSize:(struct CGSize)arg1;
- (void)_scrollViewDidScroll:(id)arg0 forceUpdate:(char)arg1;
- (void)_scrollViewWillBeginPaging;
- (void)_scrollViewDidEndPaging;
- (int)visibleIndex;
- (struct CGRect)_scrollViewFrame;
- (void)_createPageControl;
- (char)_isViewControllerBeingUnloaded:(id)arg0 atIndex:(int)arg1;
- (void)_adjustScrollViewContentInsets;
- (void)_replaceViewControllerAtIndex:(int)arg0 withViewController:(BRController *)arg1;
- (UIViewController *)_visibleViewController;
- (void)_setPreviousViewController:(BRController *)arg0;
- (void)_setVisibleViewController:(BRController *)arg0;
- (void)_notifyVisibleViewController:(int)arg0 animated:(char)arg1;
- (void)_setNextViewController:(BRController *)arg0;
- (NSObject *)_loadPreviousViewController;
- (id)_loadVisibleViewControllerAndNotify:(char)arg0;
- (NSObject *)_loadNextViewController;
- (UIViewController *)_previousViewController;
- (void)_notifyViewController:(BRController *)arg0 ofState:(int)arg1 previousState:(int)arg2 animated:(char)arg3;
- (int)_previousViewControllerNotificationState;
- (int)_visibleViewControllerNotificationState;
- (int)_nextViewControllerNotificationState;
- (void)_notifyPreviousViewController:(int)arg0 animated:(char)arg1;
- (void)_notifyNextViewController:(int)arg0 animated:(char)arg1;
- (char)_hasPreviousViewController;
- (char)_hasNextViewController;
- (void)_setNextViewControllerNotificationState:(int)arg0;
- (void)_setVisibleViewControllerNotificationState:(int)arg0;
- (void)_setPreviousViewControllerNotificationState:(int)arg0;
- (void)setVisibleIndex:(int)arg0 preservingLoadedViewControllers:(char)arg1 animated:(char)arg2;
- (void)setVisibleIndex:(int)arg0;
- (void)reloadViewControllerAtIndex:(int)arg0;
- (char)_needToLoadPrevious;
- (char)_needToLoadNext;
- (void)setVisibleIndex:(int)arg0 animated:(char)arg1;
- (void)_pageChanged:(NSNotification *)arg0;
- (char)_doesVisibleViewControllerSupportInterfaceOrientation:(int)arg0;
- (void)setPageSpacing:(float)arg0;
- (float)pageSpacing;
- (char)_needToLoadVisible;
- (char)_hasVisibleViewController;
- (void)setPageCount:(int)arg0;
- (char)wraps;
- (void)setWraps:(char)arg0;
- (char)displaysPageControl;
- (void)setDisplaysPageControl:(char)arg0;
- (int)indexOfViewController:(BRController *)arg0;
- (UIScrollView *)_pageControllerScrollView;

@end

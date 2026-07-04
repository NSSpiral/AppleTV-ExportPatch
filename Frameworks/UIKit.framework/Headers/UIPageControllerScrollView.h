/* Runtime dump - UIPageControllerScrollView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPageControllerScrollView : UIScrollView
{
    UIPageController * _pageController;
}

@property (nonatomic) UIPageController * pageController;

- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg0;
- (void)_scrollViewWillBeginDragging;
- (void)_scrollViewDidEndDraggingWithDeceleration:(char)arg0;
- (void)_scrollViewDidEndDecelerating;
- (unsigned int)_abuttedPagingEdges;
- (void)_scrollViewAnimationEnded:(id)arg0 finished:(char)arg1;
- (UIPageController *)pageController;
- (void)setPageController:(UIPageController *)arg0;

@end

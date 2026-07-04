/* Runtime dump - UIWebOverflowScrollListener
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebOverflowScrollListener : NSObject <UIScrollViewDelegate>
{
    UIWebOverflowScrollView * _scrollView;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)scrollViewWillBeginDragging:(UIScrollView *)arg0;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg0 willDecelerate:(char)arg1;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)arg0;
- (void)scrollViewDidScrollToTop:(UIScrollView *)arg0;
- (void)_didCompleteScrolling;
- (UIWebOverflowScrollListener *)initWithScrollView:(UIWebOverflowScrollView *)arg0;

@end

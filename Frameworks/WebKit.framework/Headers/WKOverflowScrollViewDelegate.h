/* Runtime dump - WKOverflowScrollViewDelegate
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKOverflowScrollViewDelegate : NSObject <UIScrollViewDelegate>
{
    struct ScrollingTreeOverflowScrollingNodeIOS * _scrollingTreeNode;
    char _inUserInteraction;
}

@property (nonatomic) char inUserInteraction;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)scrollViewDidScroll:(UIScrollView *)arg0;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg0;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg0 willDecelerate:(char)arg1;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)arg0;
- (WKOverflowScrollViewDelegate *)initWithScrollingTreeNode:(struct ScrollingTreeOverflowScrollingNodeIOS *)arg0;
- (char)_isInUserInteraction;
- (void)setInUserInteraction:(char)arg0;

@end

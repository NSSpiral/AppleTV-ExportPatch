/* Runtime dump - UIWebOverflowScrollView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebOverflowScrollView : UIScrollView
{
    UIWebBrowserView * _webBrowserView;
    UIWebOverflowScrollListener * _scrollListener;
    UIWebOverflowContentView * _overflowContentView;
    DOMNode * _node;
    char _beingRemoved;
}

@property (nonatomic) UIWebBrowserView * webBrowserView;
@property (retain, nonatomic) UIWebOverflowScrollListener * scrollListener;
@property (retain, nonatomic) UIWebOverflowContentView * overflowContentView;
@property (retain, nonatomic) DOMNode * node;
@property (nonatomic) char beingRemoved;

- (void)dealloc;
- (id)superview;
- (void)setContentOffset:(struct CGPoint)arg0;
- (DOMNode *)node;
- (void)setNode:(DOMNode *)arg0;
- (UIWebOverflowScrollView *)initWithLayer:(CALayer *)arg0 node:(DOMNode *)arg1 webBrowserView:(UIWebBrowserView *)arg2;
- (void)setOverflowContentView:(UIWebOverflowContentView *)arg0;
- (UIWebOverflowContentView *)overflowContentView;
- (void)_replaceLayer:(id)arg0;
- (void)setBeingRemoved:(char)arg0;
- (char)fixUpViewAfterInsertion;
- (UIWebBrowserView *)webBrowserView;
- (void)prepareForRemoval;
- (void)setWebBrowserView:(UIWebBrowserView *)arg0;
- (UIWebOverflowScrollListener *)scrollListener;
- (void)setScrollListener:(UIWebOverflowScrollListener *)arg0;
- (char)isBeingRemoved;

@end

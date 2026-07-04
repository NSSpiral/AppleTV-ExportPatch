/* Runtime dump - WKScrollView
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKScrollView : UIWebScrollView
{
    <UIScrollViewDelegate> * _externalDelegate;
    WKScrollViewDelegateForwarder * _delegateForwarder;
    WKWebView<UIScrollViewDelegate> * _internalDelegate;
}

@property (nonatomic) WKWebView<UIScrollViewDelegate> * internalDelegate;

- (void)dealloc;
- (void)setDelegate:(<UIScrollViewDelegate> *)arg0;
- (<UIScrollViewDelegate> *)delegate;
- (float)_rubberBandOffsetForOffset:(float)arg0 maxOffset:(float)arg1 minOffset:(float)arg2 range:(float)arg3 outside:(char *)arg4;
- (void)setContentInset:(struct UIEdgeInsets)arg0;
- (void)_setContentSizePreservingContentOffsetDuringRubberband:(struct CGSize)arg0;
- (void)_updateDelegate;
- (struct CGSize)_currentTopLeftRubberbandAmount;
- (void)_restoreContentOffsetWithRubberbandAmount:(struct CGSize)arg0;
- (void)setInternalDelegate:(WKWebView<UIScrollViewDelegate> *)arg0;
- (WKWebView<UIScrollViewDelegate> *)internalDelegate;

@end

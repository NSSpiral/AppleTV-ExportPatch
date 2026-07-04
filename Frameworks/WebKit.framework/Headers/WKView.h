/* Runtime dump - WKView
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKView : UIView <UIScrollViewDelegate>
{
    WKViewData * _data;
    unsigned int _unused;
    struct RetainPtr<WKScrollView> _scrollView;
    struct RetainPtr<WKContentView> _contentView;
    char _isWaitingForNewLayerTreeAfterDidCommitLoad;
    struct unique_ptr<WebKit::ViewGestureController, std::__1::default_delete<WebKit::ViewGestureController> > _gestureController;
    char _allowsBackForwardNavigationGestures;
    char _hasStaticMinimumLayoutSize;
    struct CGSize _minimumLayoutSizeOverride;
    struct UIEdgeInsets _obscuredInsets;
    BOOL _isChangingObscuredInsetsInteractively;
    float _lastAdjustmentForScroller;
    char _drawsBackground;
    char _drawsTransparentBackground;
}

@property (readonly) struct OpaqueWKPage * pageRef;
@property (nonatomic) struct CGSize minimumLayoutSizeOverride;
@property (nonatomic) struct UIEdgeInsets _obscuredInsets;
@property (nonatomic) char _backgroundExtendsBeyondPage;
@property (readonly) UIColor * _pageExtendedBackgroundColor;
@property (readonly) WKBrowsingContextController * browsingContextController;
@property char drawsBackground;
@property char drawsTransparentBackground;
@property (readonly, nonatomic) UIScrollView * scrollView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (WKView *)initWithCoder:(NSCoder *)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)setBounds:(struct CGRect)arg0;
- (void)scrollViewDidScroll:(UIScrollView *)arg0;
- (void)scrollViewDidZoom:(UIScrollView *)arg0;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg0;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg0 willDecelerate:(char)arg1;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)arg0;
- (NSObject *)viewForZoomingInScrollView:(NSObject *)arg0;
- (void)scrollViewWillBeginZooming:(UIScrollView *)arg0 withView:(UIView *)arg1;
- (void)scrollViewDidEndZooming:(UIScrollView *)arg0 withView:(UIView *)arg1 atScale:(float)arg2;
- (void)scrollViewDidScrollToTop:(UIScrollView *)arg0;
- (void)_keyboardWillShow:(NSNotification *)arg0;
- (void)_keyboardWillHide:(NSNotification *)arg0;
- (UIScrollView *)scrollView;
- (void)setDrawsBackground:(char)arg0;
- (void)_frameOrBoundsChanged;
- (void).cxx_construct;
- (void)_keyboardDidChangeFrame:(NSObject *)arg0;
- (char)drawsBackground;
- (void).cxx_destruct;
- (void)_keyboardWillChangeFrame:(NSObject *)arg0;
- (WKView *)initWithFrame:(struct CGRect)arg0 processGroup:(struct CGSize)arg1 browsingContextGroup:(NSObject *)arg2 relatedToView:(NSObject *)arg3;
- (struct OpaqueWKPage *)pageRef;
- (void)_commonInitializationWithContextRef:(struct OpaqueWKContext *)arg0 pageGroupRef:(struct OpaqueWKPageGroup *)arg1 relatedToPage:(struct OpaqueWKPage *)arg2;
- (WKBrowsingContextController *)browsingContextController;
- (void)_updateVisibleContentRects;
- (void)_didFinishScrolling;
- (void)_keyboardChangedWithInfo:(NSDictionary *)arg0 adjustScrollView:(char)arg1;
- (WKView *)initWithFrame:(struct CGRect)arg0 processGroup:(struct CGSize)arg1 browsingContextGroup:(NSObject *)arg2;
- (void)setAllowsBackForwardNavigationGestures:(char)arg0;
- (char)allowsBackForwardNavigationGestures;
- (char)drawsTransparentBackground;
- (void)setDrawsTransparentBackground:(char)arg0;
- (struct UIEdgeInsets)_obscuredInsets;
- (WKView *)initWithFrame:(struct CGRect)arg0 contextRef:(struct CGSize)arg1 pageGroupRef:(id)arg2 relatedToPage:(struct OpaqueWKContext *)arg3;
- (WKView *)initWithFrame:(struct CGRect)arg0 contextRef:(struct CGSize)arg1 pageGroupRef:(id)arg2;
- (struct CGSize)minimumLayoutSizeOverride;
- (void)setMinimumLayoutSizeOverride:(struct CGSize)arg0;
- (void)_setObscuredInsets:(struct UIEdgeInsets)arg0;
- (void)_beginInteractiveObscuredInsetsChange;
- (void)_endInteractiveObscuredInsetsChange;
- (UIColor *)_pageExtendedBackgroundColor;
- (void)_setBackgroundExtendsBeyondPage:(char)arg0;
- (char)_backgroundExtendsBeyondPage;

@end

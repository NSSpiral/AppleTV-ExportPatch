/* Runtime dump - WebFrameView
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebFrameView : WAKView <WebCoreFrameView>
{
    WebFrameViewPrivate * _private;
}

@property (readonly, nonatomic) WebFrame * webFrame;
@property (readonly, nonatomic) WAKView<WebDocumentView> * documentView;
@property (nonatomic) char allowsScrolling;
@property (readonly, nonatomic) char documentViewShouldHandlePrint;

+ (WebFrameView *)_viewTypesAllowImageTypeOmission:(char)arg0;
+ (Class)_viewClassForMIMEType:(NSObject *)arg0 allowingPlugins:(char)arg1;
+ (char)_canShowMIMETypeAsHTML:(id)arg0;

- (WebFrameView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (_UIPageViewControllerContentView *)_contentView;
- (char)becomeFirstResponder;
- (char)isOpaque;
- (struct CGRect)visibleRect;
- (WAKView<WebDocumentView> *)documentView;
- (void)setAllowsScrolling:(char)arg0;
- (void)setFrameSize:(struct CGSize)arg0;
- (void)viewDidMoveToWindow;
- (void)mouseDown:(struct ?)arg0;
- (void)mouseUp:(struct ?)arg0;
- (_UIQueuingScrollView *)_scrollView;
- (WebFrame *)webFrame;
- (char)acceptsFirstResponder;
- (void)finalize;
- (void)_setDocumentView:(NSObject *)arg0;
- (void)keyDown:(char)arg0;
- (char)scrollView:(NSObject *)arg0 shouldScrollToPoint:(struct CGPoint)arg1;
- (void)frameSizeChanged;
- (void)setNextKeyView:(NSObject *)arg0;
- (struct Frame *)_web_frame;
- (char)allowsScrolling;
- (NSObject *)_webView;
- (void)_setWebFrame:(NSObject *)arg0;
- (Class)_viewClassForMIMEType:(NSObject *)arg0;
- (NSObject *)_makeDocumentViewForDataSource:(NSObject *)arg0;
- (void)_install;
- (float)_verticalKeyboardScrollDistance;
- (float)_verticalPageScrollDistance;
- (void)_frameSizeChanged;
- (char)_scrollOverflowInDirection:(unsigned long long)arg0 granularity:(unsigned long long)arg1;
- (char)_isScrollable;
- (char)_isVerticalDocument;
- (char)_isFlippedDocument;
- (char)_scrollToBeginningOfDocument;
- (NSObject *)_largestScrollableChild;
- (void)scrollToBeginningOfDocument:(NSObject *)arg0;
- (char)_scrollToEndOfDocument;
- (void)scrollToEndOfDocument:(NSObject *)arg0;
- (char)_pageVertically:(char)arg0;
- (char)_scrollVerticallyBy:(float)arg0;
- (char)_pageHorizontally:(char)arg0;
- (float)_horizontalPageScrollDistance;
- (char)_scrollHorizontallyBy:(float)arg0;
- (char)_scrollLineVertically:(char)arg0;
- (char)_scrollLineHorizontally:(char)arg0;
- (float)_horizontalKeyboardScrollDistance;
- (char)_pageInBlockProgressionDirection:(char)arg0;
- (void)scrollPageUp:(id)arg0;
- (void)scrollPageDown:(id)arg0;
- (void)scrollLineUp:(id)arg0;
- (void)scrollLineDown:(id)arg0;
- (void)_forwardMouseEvent:(NSObject *)arg0;
- (void)_goForward;
- (void)_goBack;
- (char)_firstResponderIsFormControl;
- (NSObject *)_webcore_effectiveFirstResponder;
- (char)documentViewShouldHandlePrint;
- (void)printDocumentView;
- (char)_hasScrollBars;
- (float)_area;
- (id)_largestChildWithScrollBars;
- (Class)_customScrollViewClass;

@end

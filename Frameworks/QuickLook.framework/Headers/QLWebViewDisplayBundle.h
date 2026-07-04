/* Runtime dump - QLWebViewDisplayBundle
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLWebViewDisplayBundle : QLDisplayBundle <UIWebViewDelegate, UIScrollViewDelegate, QLScrubViewDataSource, UIWebPDFViewHandlerDelegate>
{
    UIWebView * _webView;
    UIView * _accessoryView;
    QLPreviewConverter * _previewConverter;
    NSURLRequest * _previewRequest;
    id _isLoadedDuringZoom;
    id _isHTMLContent;
    id _isXMLContent;
    id _isPDFContent;
    id _isSpreadsheetContent;
    id _isPlainText;
    id _isRTFContent;
    id _isCSVContent;
    id _loadStarted;
    float _defaultZoom;
    QLScrubView * _scrubView;
    int _lastPage;
    char _inScroll;
    char _webViewReadyForThumbnailing;
    NSMutableArray * _htmlSlideNodes;
    NSData * _pdfPreviewData;
    QLPDFHanderDelegateForwarder * _forwarder;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setPreviewItem:(<QLPreviewItem> *)arg0;
- (void)setOverlayHidden:(char)arg0 duration:(double)arg1;
- (void)loadWithHints:(NSDictionary *)arg0;
- (char)needsContentInset;
- (char)needsContentInsetEvenIfNavigationBarIsHidden;
- (char)acceptControllerTouch:(id)arg0 fromGestureRecognizer:(NSObject *)arg1;
- (int)airPlayMode;
- (NSData *)pdfPreviewData;
- (<QLRemotePrintPageHelper> *)printPageHelper;
- (NSMutableSet *)gestureRecognizersForFullScreenDisplay;
- (void)_tearDownWebView;
- (void)_showScrubberIfNeeded:(double)arg0;
- (void)_hideScrubberIfNeeded:(double)arg0;
- (NSObject *)_getWebView:(char)arg0;
- (NSObject *)_copyPreviewConverterForPreviewItem:(NSObject *)arg0;
- (struct CGPDFDocument *)_getCGPDFDocumentRef;
- (NSObject *)_scrubView:(char)arg0;
- (void)_hideOverlayDidEnd:(id)arg0 finished:(id /* block */)arg1 context:(void *)arg2;
- (QLPreviewConverter *)previewConverter;
- (NSMutableArray *)_htmlSlideNodes;
- (struct CGSize)pageSizeAtIndex:(int)arg0;
- (NSString *)_htmlPageXPath;
- (void)scrollToPage:(unsigned int)arg0;
- (int)numberOfPagesInScrubView:(NSObject *)arg0;
- (NSObject *)scrubView:(QLScrubView *)arg0 thumbnailOperationForPageAtIndex:(unsigned int)arg1;
- (struct CGSize)scrubView:(QLScrubView *)arg0 pageSizeAtIndex:(unsigned int)arg1;
- (void)scrubView:(QLScrubView *)arg0 didSelectPageAtIndex:(unsigned int)arg1;
- (void)userInteractedWithScrubView:(QLScrubView *)arg0;
- (void)dealloc;
- (void)scrollViewDidScroll:(UIScrollView *)arg0;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willRotateToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg0;
- (UIScrollView *)scrollView;
- (int)pageCount;
- (char)webView:(UIWebView *)arg0 shouldStartLoadWithRequest:(NSURLRequest *)arg1 navigationType:(int)arg2;
- (void)uiWebView:(UIWebView *)arg0 decidePolicyForMIMEType:(NSObject *)arg1 request:(NSURLRequest *)arg2 frame:(struct CGRect)arg3 decisionListener:(WebPolicyDecisionListener *)arg4;
- (NSObject *)uiWebView:(UIWebView *)arg0 resource:(NSObject *)arg1 willSendRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3 fromDataSource:(NSObject *)arg4;
- (void)webViewDidFinishLoad:(UIWebView *)arg0;
- (void)uiWebView:(UIWebView *)arg0 didFirstLayoutInFrame:(NSObject *)arg1;
- (void)uiWebView:(UIWebView *)arg0 resource:(NSObject *)arg1 didFinishLoadingFromDataSource:(NSObject *)arg2;
- (void)uiWebView:(UIWebView *)arg0 resource:(NSObject *)arg1 didFailLoadingWithError:(NSError *)arg2 fromDataSource:(NSObject *)arg3;
- (id)alertViewForUIWebPDFViewHandler:(id /* block */)arg0;
- (void)pdfViewHandlerCompletedLayoutAndIsUnlocked:(id)arg0;
- (struct CGPoint)originForPDFPageLabelViewWithHandler:(id /* block */)arg0 proposedOrigin:(struct CGPoint)arg1;
- (unsigned int)currentPageNumber;
- (void)setPreviewMode:(int)arg0;
- (void)cancelLoad;

@end

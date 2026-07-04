/* Runtime dump - WKPDFView
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKPDFView : UIView <WKWebViewContentProvider, UIPDFPageViewDelegate, UIPDFAnnotationControllerDelegate, WKActionSheetAssistantDelegate>
{
    struct RetainPtr<UIPDFDocument> _pdfDocument;
    struct RetainPtr<NSString> _suggestedFilename;
    struct RetainPtr<WKPDFPageNumberIndicator> _pageNumberIndicator;
    struct Vector<PDFPageInfo, 0, WTF::CrashOnOverflow> _pages;
    unsigned int _centerPageNumber;
    struct CGSize _minimumSize;
    struct CGSize _overlaidAccessoryViewsInset;
    WKWebView * _webView;
    UIScrollView * _scrollView;
    UIView * _fixedOverlayView;
    char _isStartingZoom;
    char _isPerformingSameDocumentNavigation;
    struct RetainPtr<WKActionSheetAssistant> _actionSheetAssistant;
    struct InteractionInformationAtPosition _positionInformation;
}

@property (readonly, nonatomic) NSString * suggestedFilename;
@property (readonly, nonatomic) struct CGPDFDocument * pdfDocument;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)suggestedFilename;
- (void)dealloc;
- (void)scrollViewDidScroll:(UIScrollView *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)resetZoom:(id)arg0;
- (void)zoom:(id)arg0 to:(struct CGRect)arg1 atPoint:(struct CGSize)arg2 kind:(TSCH3DAxisLabelKind *)arg3;
- (void)annotation:(NSObject *)arg0 wasTouchedAtPoint:(struct CGPoint)arg1 controller:(BRController *)arg2;
- (void)annotation:(NSObject *)arg0 isBeingPressedAtPoint:(struct CGPoint)arg1 controller:(BRController *)arg2;
- (void)_clearPages;
- (void)_computePageAndDocumentFrames;
- (void)_revalidateViews;
- (void)_scrollToFragment:(id)arg0;
- (void)_updatePageNumberIndicator;
- (struct CGPoint)_offsetForPageNumberIndicator;
- (void)_resetZoomAnimated:(char)arg0;
- (NSObject *)_URLForLinkAnnotation:(NSObject *)arg0;
- (void)_highlightLinkAnnotation:(NSObject *)arg0 forDuration:(double)arg1 completionHandler:(id /* block */)arg2;
- (NSObject *)web_initWithFrame:(struct CGRect)arg0 webView:(struct CGSize)arg1;
- (void)web_setContentProviderData:(NSData *)arg0 suggestedFilename:(NSString *)arg1;
- (void)web_setMinimumSize:(struct CGSize)arg0;
- (void)web_setOverlaidAccessoryViewsInset:(struct CGSize)arg0;
- (void)web_computedContentInsetDidChange;
- (void)web_setFixedOverlayView:(NSObject *)arg0;
- (void)web_didSameDocumentNavigation:(unsigned int)arg0;
- (struct InteractionInformationAtPosition *)positionInformationForActionSheetAssistant:(BOOL)arg0;
- (void)actionSheetAssistant:(struct RetainPtr<WKActionSheetAssistant>)arg0 performAction:(int)arg1;
- (void)actionSheetAssistant:(struct RetainPtr<WKActionSheetAssistant>)arg0 openElementAtLocation:(struct CGPoint)arg1;
- (struct RetainPtr<NSArray>)actionSheetAssistant:(struct RetainPtr<WKActionSheetAssistant>)arg0 decideActionsForElement:(NSObject *)arg1 defaultActions:(struct RetainPtr<NSArray>)arg2;
- (struct CGPDFDocument *)pdfDocument;

@end

/* Runtime dump - QLWebViewPrintPageHelper
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLWebViewPrintPageHelper : NSObject <QLRemotePrintPageHelper>
{
    UIWebBrowserView * _browserView;
    NSURLRequest * _request;
    NSString * _documentType;
    QLPreviewConverter * _previewConverter;
    struct CGSize _printableSize;
}

@property (retain) QLPreviewConverter * previewConverter;
@property (nonatomic) struct CGSize printableSize;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)printPageRendererWithBrowserView:(UIWebBrowserView *)arg0 request:(NSURLRequest *)arg1 documentType:(NSString *)arg2;
+ (char)_isXPathType:(NSObject *)arg0;

- (QLPreviewConverter *)previewConverter;
- (void)setPreviewConverter:(QLPreviewConverter *)arg0;
- (QLWebViewPrintPageHelper *)initWithWebBrowserView:(NSObject *)arg0 request:(NSURLRequest *)arg1 documentType:(NSString *)arg2;
- (NSObject *)pdfDataForPageAtIndex:(int)arg0 printingDone:(char *)arg1;
- (struct CGSize)printableSize;
- (void)setPrintableSize:(struct CGSize)arg0;
- (void)_waitForPreview;
- (void)dealloc;
- (int)numberOfPages;
- (void)prepareForDrawingPages:(struct _NSRange)arg0;

@end

/* Runtime dump - QLSpreadsheetPrintPageRenderer
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLSpreadsheetPrintPageRenderer : QLWebViewPrintPageHelper
{
    UIWebBrowserView * _printView;
    UIWebPaginationInfo * _paginationInfo;
    char _frameLoaded;
    NSMutableArray * _urls;
    unsigned int _currentURLIndex;
    unsigned int _currentPageIndex;
    int _totalPagesPrinted;
    char _printingDone;
}

- (QLSpreadsheetPrintPageRenderer *)initWithWebBrowserView:(NSObject *)arg0 request:(NSURLRequest *)arg1 documentType:(NSString *)arg2;
- (NSObject *)pdfDataForPageAtIndex:(int)arg0 printingDone:(char *)arg1;
- (id)_documentURLs;
- (char)_loadURLAtIndex:(unsigned int)arg0;
- (char)_loadNextURL;
- (void)dealloc;
- (void)webView:(NSObject *)arg0 didFinishLoadForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didFailLoadWithError:(NSError *)arg1 forFrame:(NSObject *)arg2;
- (int)numberOfPages;
- (void)prepareForDrawingPages:(struct _NSRange)arg0;

@end

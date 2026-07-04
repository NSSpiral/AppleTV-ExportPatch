/* Runtime dump - QLLayoutedPrintPageRenderer
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLLayoutedPrintPageRenderer : QLWebViewPrintPageHelper
{
    NSMutableArray * _nodes;
    UIWebPaginationInfo * _paginationInfo;
}

- (NSString *)_htmlPageXPath;
- (NSObject *)pdfDataForPageAtIndex:(int)arg0 printingDone:(char *)arg1;
- (id)_currentNodes;
- (void)dealloc;
- (int)numberOfPages;
- (void)prepareForDrawingPages:(struct _NSRange)arg0;

@end

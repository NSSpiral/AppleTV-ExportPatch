/* Runtime dump - QLWordProcessorPrintPageRenderer
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLWordProcessorPrintPageRenderer : QLWebViewPrintPageHelper
{
    UIWebPaginationInfo * _paginationInfo;
}

- (NSObject *)pdfDataForPageAtIndex:(int)arg0 printingDone:(char *)arg1;
- (NSDictionary *)_paginationInfo;
- (void)dealloc;
- (int)numberOfPages;

@end

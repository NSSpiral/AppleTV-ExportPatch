/* Runtime dump - UIWebDocumentViewPrintFormatter
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebDocumentViewPrintFormatter : UIViewPrintFormatter
{
    UIWebPaginationInfo * _paginationInfo;
}

- (void)dealloc;
- (UIWebDocumentViewPrintFormatter *)copyWithZone:(struct _NSZone *)arg0;
- (UIWebDocumentView *)_webDocumentView;
- (int)_recalcPageCount;
- (void)removeFromPrintPageRenderer;
- (struct CGRect)rectForPageAtIndex:(NSObject *)arg0;
- (void)drawInRect:(struct CGRect)arg0 forPageAtIndex:(struct CGSize)arg1;

@end

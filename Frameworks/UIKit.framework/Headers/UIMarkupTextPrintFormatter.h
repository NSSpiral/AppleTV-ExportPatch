/* Runtime dump - UIMarkupTextPrintFormatter
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMarkupTextPrintFormatter : UIPrintFormatter
{
    UIWebDocumentView * _webDocumentView;
    UIWebPaginationInfo * _paginationInfo;
    NSString * _markupText;
}

@property (copy, nonatomic) NSString * markupText;

- (void)dealloc;
- (UIMarkupTextPrintFormatter *)copyWithZone:(struct _NSZone *)arg0;
- (int)_recalcPageCount;
- (void)removeFromPrintPageRenderer;
- (struct CGRect)rectForPageAtIndex:(NSObject *)arg0;
- (void)drawInRect:(struct CGRect)arg0 forPageAtIndex:(struct CGSize)arg1;
- (void)setMarkupText:(NSString *)arg0;
- (UIMarkupTextPrintFormatter *)initWithMarkupText:(NSString *)arg0;
- (NSString *)markupText;

@end

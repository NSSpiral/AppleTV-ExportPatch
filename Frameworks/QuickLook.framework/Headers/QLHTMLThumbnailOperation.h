/* Runtime dump - QLHTMLThumbnailOperation
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLHTMLThumbnailOperation : QLThumbnailOperation
{
    UIWebBrowserView * _browserView;
    DOMNode * _node;
}

- (QLHTMLThumbnailOperation *)initWithBrowserView:(UIWebBrowserView *)arg0 andNode:(NSObject *)arg1;
- (void)dealloc;
- (void)main;

@end

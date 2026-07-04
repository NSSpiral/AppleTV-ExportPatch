/* Runtime dump - QLPDFHanderDelegateForwarder
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPDFHanderDelegateForwarder : NSObject <UIWebPDFViewHandlerDelegate>
{
    <NSObject><UIWebPDFViewHandlerDelegate> * _delegate;
    UIWebView * _webView;
}

@property (nonatomic) <NSObject><UIWebPDFViewHandlerDelegate> * delegate;
@property (nonatomic) UIWebView * webView;

- (void)setDelegate:(<NSObject><UIWebPDFViewHandlerDelegate> *)arg0;
- (char)respondsToSelector:(SEL)arg0;
- (<NSObject><UIWebPDFViewHandlerDelegate> *)delegate;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (UIWebView *)webView;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (void)setWebView:(UIWebView *)arg0;

@end

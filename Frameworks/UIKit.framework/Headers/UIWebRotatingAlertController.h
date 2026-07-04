/* Runtime dump - UIWebRotatingAlertController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebRotatingAlertController : _UIRotatingAlertController
{
    char _wasDeferringCallbacks;
    UIWebDocumentView * _webBrowserView;
}

- (void)dealloc;
- (void)doneWithSheet;
- (UIWebRotatingAlertController *)initWithUIWebDocumentView:(NSObject *)arg0;
- (char)presentSheet;
- (void)_enableWebView;
- (void)_disableWebView;

@end

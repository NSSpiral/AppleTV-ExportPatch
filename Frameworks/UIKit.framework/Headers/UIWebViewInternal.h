/* Runtime dump - UIWebViewInternal
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebViewInternal : NSObject
{
    UIScrollView * scroller;
    UIWebBrowserView * browserView;
    UICheckeredPatternView * checkeredPatternView;
    <UIWebViewDelegate> * delegate;
    id scalesPageToFit;
    id isLoading;
    id hasOverriddenOrientationChangeEventHandling;
    id drawsCheckeredPattern;
    id webSelectionEnabled;
    id drawInWebThread;
    id inRotation;
    id didRotateEnclosingScrollView;
    NSURLRequest * request;
    int clickedAlertButtonIndex;
    UIWebViewWebViewDelegate * webViewDelegate;
    UIWebPDFViewHandler * pdfHandler;
}

@end

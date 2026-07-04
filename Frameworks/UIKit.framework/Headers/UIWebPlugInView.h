/* Runtime dump - UIWebPlugInView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebPlugInView : WAKView
{
    UIWebDocumentView * _webView;
    CALayer * _hostingLayer;
    UIView * _uiView;
    struct __CFRunLoopObserver * _mainRunLoopDrawObserver;
    char _isFullScreen;
    char _parentedInLayer;
    char _isQuickTimePlugIn;
    char _isMapViewPlugIn;
    char _isiAdPlugIn;
}

@property (nonatomic) char parentedInLayer;
@property (nonatomic) char isQuickTimePlugIn;
@property (nonatomic) char isMapViewPlugIn;
@property (nonatomic) char isiAdPlugIn;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (char)respondsToSelector:(SEL)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)layout;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (void)reshape;
- (void)setFrameSize:(struct CGSize)arg0;
- (void)viewDidMoveToWindow;
- (void)_viewDidMoveToWindowOnMainThread;
- (void)invalidateGState;
- (void)_reshapeOnMainThread;
- (char)isParented;
- (void)webPlugInInitialize;
- (void)webPlugInStart;
- (void)webPlugInStop;
- (void)webPlugInDestroy;
- (id)objectForWebScript;
- (char)isParentedInLayer;
- (void)setParentedInLayer:(char)arg0;
- (void)_connectPluginLayers;
- (void)_disconnectPluginLayers;
- (char)willProvidePluginLayer;
- (void)_attachPluginLayerOnMainThread;
- (void)_detachPluginLayerOnMainThread;
- (UIWebPlugInView *)initWithWebView:(UIWebDocumentView *)arg0 plugInView:(NSObject *)arg1;
- (NSObject *)plugInView;
- (void)mouseDown:(struct ?)arg0;
- (void)mouseUp:(struct ?)arg0;
- (void)setWebView:(UIWebDocumentView *)arg0;
- (CALayer *)pluginLayer;
- (void)attachPluginLayer;
- (void)detachPluginLayer;
- (char)isQuickTimePlugIn;
- (void)setIsQuickTimePlugIn:(char)arg0;
- (char)isMapViewPlugIn;
- (void)setIsMapViewPlugIn:(char)arg0;
- (char)isiAdPlugIn;
- (void)setIsiAdPlugIn:(char)arg0;

@end

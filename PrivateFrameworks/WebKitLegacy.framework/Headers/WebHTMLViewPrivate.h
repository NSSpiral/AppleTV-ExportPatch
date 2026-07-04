/* Runtime dump - WebHTMLViewPrivate
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebHTMLViewPrivate : NSObject
{
    char closed;
    char ignoringMouseDraggedEvents;
    char printing;
    char paginateScreenContent;
    WAKView * layerHostingView;
    char drawingIntoLayer;
    WebEvent * mouseDownEvent;
    char handlingMouseDownEvent;
    WebEvent * keyDownEvent;
    char exposeInputContext;
    struct CGPoint lastScrollPosition;
    char inScrollPositionChanged;
    WebPluginController * pluginController;
    NSString * toolTip;
    id trackingRectOwner;
    void * trackingRectUserData;
    NSTimer * autoscrollTimer;
    WebEvent * autoscrollTriggerEvent;
    NSArray * pageRects;
    char transparentBackground;
    struct WebHTMLViewInterpretKeyEventsParameters * interpretKeyEventsParameters;
    WebDataSource * dataSource;
    SEL selectorForDoCommandBySelector;
}

+ (void)initialize;

- (void)dealloc;
- (void).cxx_construct;
- (void)clear;
- (void)finalize;

@end

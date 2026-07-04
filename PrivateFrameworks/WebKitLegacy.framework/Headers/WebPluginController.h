/* Runtime dump - WebPluginController
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebPluginController : NSObject <WebPluginManualLoader, WebPluginContainerCheckController>
{
    WAKView * _documentView;
    WebDataSource * _dataSource;
    NSMutableArray * _views;
    char _started;
    NSMutableSet * _checksInProgress;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)isPlugInView:(NSObject *)arg0;
+ (void)addPlugInView:(NSObject *)arg0;

- (void)dealloc;
- (void)setDataSource:(WebDataSource *)arg0;
- (UIWebView *)webView;
- (WebFrame *)webFrame;
- (WebPluginController *)initWithDocumentView:(WAKView *)arg0;
- (NSArray *)plugInViewWithArguments:(NSDictionary *)arg0 fromPluginPackage:(WebBasePluginPackage *)arg1;
- (void)pluginView:(WAKView *)arg0 receivedResponse:(NSURLResponse *)arg1;
- (void)pluginView:(WAKView *)arg0 receivedData:(NSMutableData *)arg1;
- (void)pluginView:(WAKView *)arg0 receivedError:(NSError *)arg1;
- (void)pluginViewFinishedLoading:(id)arg0;
- (void)destroyAllPlugins;
- (void)stopAllPlugins;
- (void)startAllPlugins;
- (void)addPlugin:(PLSlideshowPlugin *)arg0;
- (void)destroyPlugin:(id)arg0;
- (void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(NSURLRequest *)arg0;
- (void)stopOnePlugin:(id)arg0;
- (void)stopOnePluginForPageCache:(NSObject *)arg0;
- (void)destroyOnePlugin:(id)arg0;
- (void)_cancelOutstandingChecks;
- (void)webPlugInContainerShowStatus:(id)arg0;
- (char)plugInsAreRunning;
- (NSObject *)superlayerForPluginView:(NSObject *)arg0;
- (void)stopPluginsForPageCache;
- (void)restorePluginsFromCache;
- (char)processingUserGesture;
- (NSURLRequest *)_webPluginContainerCheckIfAllowedToLoadRequest:(NSURLRequest *)arg0 inFrame:(char)arg1 resultObject:(NSObject *)arg2 selector:(SEL)arg3;
- (void)webPlugInContainerLoadRequest:(NSURLRequest *)arg0 inFrame:(char)arg1;
- (void)webPlugInContainerWillShowFullScreenForView:(NSObject *)arg0;
- (void)webPlugInContainerDidHideFullScreenForView:(NSObject *)arg0;
- (void)showStatus:(id)arg0;
- (id)URLPolicyCheckReferrer;

@end

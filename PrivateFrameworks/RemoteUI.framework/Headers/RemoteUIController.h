/* Runtime dump - RemoteUIController
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RemoteUIController : NSObject <RUILoaderDelegate, RUIObjectModelDelegate, RUIParserDelegate>
{
    UINavigationController * _modalNavigationController;
    NSMutableArray * _objectModels;
    NSMutableArray * _modalObjectModels;
    NSMutableDictionary * _elementChangeHandlers;
    RUIPage * _pageOriginatingLoad;
    UINavigationController * _navigationController;
    RUILoader * _loader;
    NSString * _userAgentString;
    <RemoteUIControllerDelegate> * _delegate;
    id _loadCompletion;
}

@property (weak, nonatomic) UINavigationController * navigationController;
@property (retain, nonatomic) RUILoader * loader;
@property (copy, nonatomic) NSString * userAgentString;
@property (weak, nonatomic) <RemoteUIControllerDelegate> * delegate;
@property (copy, nonatomic) id loadCompletion;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<RemoteUIControllerDelegate> *)arg0;
- (RemoteUIController *)init;
- (<RemoteUIControllerDelegate> *)delegate;
- (UINavigationController *)navigationController;
- (void)loadRequest:(NSURLRequest *)arg0;
- (void).cxx_destruct;
- (void)setNavigationController:(UINavigationController *)arg0;
- (void)removeHandlerForKey:(NSString *)arg0;
- (NSObject *)parentViewControllerForObjectModel:(NSObject *)arg0;
- (id)viewControllerForAlertPresentation;
- (void)objectModel:(NSObject *)arg0 didNavigateBackFromController:(BRController *)arg1 withGesture:(char)arg2;
- (void)objectModel:(NSObject *)arg0 elementDidChange:(NSDictionary *)arg1;
- (void)objectModel:(NSObject *)arg0 pressedLink:(id)arg1 httpMethod:(NSString *)arg2 completion:(id /* block */)arg3;
- (unsigned int)supportedInterfaceOrientationsForObjectModel:(NSObject *)arg0 page:(id)arg1;
- (void)loader:(RUILoader *)arg0 receivedObjectModel:(NSObject *)arg1 actionSignal:(int)arg2;
- (void)loader:(RUILoader *)arg0 didFailWithError:(char)arg1;
- (void)loader:(RUILoader *)arg0 didReceiveHTTPResponse:(NSURLResponse *)arg1;
- (id)loader:(RUILoader *)arg0 connection:(NSURLConnection *)arg1 willSendRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
- (void)loadRequest:(NSURLRequest *)arg0 completion:(id /* block */)arg1;
- (void)setLoader:(RUILoader *)arg0;
- (NSString *)userAgentString;
- (void)setLoadCompletion:(id /* block */)arg0;
- (void)loadURL:(NSURL *)arg0 postBody:(NSObject *)arg1;
- (void)_willPresentObjectModel:(NSObject *)arg0 modally:(char)arg1;
- (void)_didRemoveObjectModel:(NSObject *)arg0;
- (void)_setHandlerWithKey:(NSString *)arg0 forElementsMatching:(id)arg1 handler:(/* block */ id)arg2;
- (id)setHandlerForElementsMatching:(id)arg0 handler:(/* block */ id)arg1;
- (void)setHandlerForElementName:(NSString *)arg0 handler:(id /* block */)arg1;
- (id /* block */)loadCompletion;
- (void)pushObjectModel:(NSObject *)arg0 animated:(char)arg1;
- (id)popObjectModelAnimated:(char)arg0;
- (void)loadURL:(NSURL *)arg0 postBody:(NSObject *)arg1 completion:(id /* block */)arg2;
- (NSObject *)parser:(NSXMLParser *)arg0 createPageWithName:(NSString *)arg1 attributes:(NSDictionary *)arg2;
- (void)loadData:(NSData *)arg0 baseURL:(NSURL *)arg1;
- (id)dismissObjectModelsAnimated:(char)arg0 completion:(id /* block */)arg1;
- (void)setHandlerForButtonsMatching:(id)arg0 handler:(/* block */ id)arg1;
- (void)setHandlerForButtonName:(NSString *)arg0 handler:(id /* block */)arg1;
- (void)setUserAgentString:(NSString *)arg0;
- (RUILoader *)loader;

@end

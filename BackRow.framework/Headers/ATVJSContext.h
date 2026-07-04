/* Runtime dump - ATVJSContext
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVFeedDocument, ATVJSPopUpMenuControl, ATVJSStorage, ATVMerchant, BRControllerStack;
@interface ATVJSContext : ATVJavaScriptContext
{
    ATVMerchant * _merchant;
    ATVFeedDocument * _feedDocument;
    ATVJSStorage * _atvLocalStorage;
    ATVJSStorage * _atvSessionStorage;
    int _configuration;
    BRControllerStack * _applicationStack;
    ATVJSPopUpMenuControl * _contextMenu;
}

@property (readonly, retain, nonatomic) ATVMerchant * merchant;
@property (nonatomic) ATVFeedDocument * feedDocument;
@property (nonatomic) int configuration;
@property (readonly, nonatomic) BRControllerStack * applicationStack;
@property (retain, nonatomic) ATVJSStorage * atvLocalStorage;
@property (retain, nonatomic) ATVJSStorage * atvSessionStorage;
@property (retain, nonatomic) ATVJSPopUpMenuControl * contextMenu;

+ (NSDictionary *)contextWithConfiguration:(int)arg0 merchant:(ATVMerchant *)arg1 feedDocument:(ATVFeedDocument *)arg2;
+ (NSDictionary *)contextWithConfiguration:(int)arg0 merchant:(ATVMerchant *)arg1;
+ (void)initialize;

- (ATVMerchant *)merchant;
- (ATVFeedDocument *)feedDocument;
- (void)pageLoad:(id)arg0;
- (void)pageUnload:(id)arg0;
- (void)pageBuried:(id)arg0;
- (void)pageExhumed:(id)arg0;
- (void)endContextMenuSessionByDismissing:(char)arg0;
- (void)beginContextMenuSession;
- (void)setFeedDocument:(ATVFeedDocument *)arg0;
- (void)evaluateScriptAtURL:(NSURL *)arg0 completionHandler:(id /* block */)arg1;
- (void)pruneUndefinedFunctions:(id)arg0 completionHandler:(id /* block */)arg1;
- (char)evaluateSynchronously:(id)arg0;
- (char)callSynchronousFunction:(id)arg0 withArguments:(NSDictionary *)arg1 returnValue:(id *)arg2;
- (BRControllerStack *)applicationStack;
- (void)_setupGlobalObjects:(struct OpaqueJSContext *)arg0;
- (ATVJSContext *)initWithConfiguration:(int)arg0 merchant:(ATVMerchant *)arg1 feedDocument:(ATVFeedDocument *)arg2;
- (ATVJSPopUpMenuControl *)contextMenu;
- (void)setAtvLocalStorage:(ATVJSStorage *)arg0;
- (void)setAtvSessionStorage:(ATVJSStorage *)arg0;
- (void)evaluateScript:(id)arg0 sourceURL:(NSURL *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionHandler:(id /* block */)arg3;
- (ATVJSStorage *)atvLocalStorage;
- (ATVJSStorage *)atvSessionStorage;
- (void)setContextMenu:(ATVJSPopUpMenuControl *)arg0;
- (void)onNowPlayingStopped;
- (char)_isContextMenuSessionValid;
- (void)_onContextMenuDismiss;
- (void)dealloc;
- (void)setConfiguration:(int)arg0;
- (int)configuration;
- (void)destroy:(id)arg0;

@end

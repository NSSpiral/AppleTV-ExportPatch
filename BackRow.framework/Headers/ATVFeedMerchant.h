/* Runtime dump - ATVFeedMerchant
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVMerchant.h>

@protocol ATVJSContextProvider;

@class ATVJSContext, BRAccountType, BRController;
@interface ATVFeedMerchant : ATVMerchant <ATVJSContextProvider>
{
    ATVJSContext * _javaScriptContext;
    char _applicationBackgrounded;
}

@property (readonly, retain) ATVJSContext * javaScriptContext;
@property (readonly, nonatomic) char applicationBackgrounded;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)decorateRequestProperties:(NSDictionary *)arg0;
- (void)startApplicationWithPreflightScript:(NSString *)arg0 completion:(id /* block */)arg1;
- (NSURL *)generateRequestForURL:(NSURL *)arg0 headers:(NSDictionary *)arg1 method:(NSString *)arg2 body:(id /* block */)arg3;
- (Class)catalogAgent;
- (id)controllerForScreensaverPhotosSelection;
- (void)_accountRemovedNotification:(NSNotification *)arg0;
- (void)_tearDownApp;
- (void)_runJavaScriptEntryWithCompletionHandler:(id /* block */)arg0;
- (void)_installJavascriptWithConfiguration:(int)arg0 completionHandler:(id /* block */)arg1;
- (void)_removeJavaScript;
- (void)_removePaymentQueue;
- (void)_callJSAppDidBecomeActiveWithCompletionHandler:(id /* block */)arg0;
- (void)_runJavaScriptPreflight:(id)arg0 withCompleletionHandler:(id /* block */)arg1;
- (void)_installBootstrapResources:(NSArray *)arg0;
- (void)_playerStateChangedWhileAppIsBackgrounded:(id)arg0;
- (void)_callJSAppDidEnterBackground;
- (void)stopApplication;
- (<BRPlayerDelegate> *)playerDelegate;
- (char)isApplicationBackgrounded;
- (void)dealloc;
- (NSString *)localizedStringForKey:(NSString *)arg0;
- (ATVFeedMerchant *)initWithIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (ATVJSContext *)javaScriptContext;
- (BRAccountType *)accountType;
- (BRController *)rootController;

@end

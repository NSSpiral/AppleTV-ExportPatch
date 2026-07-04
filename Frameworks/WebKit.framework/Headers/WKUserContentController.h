/* Runtime dump - WKUserContentController
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKUserContentController : NSObject
{
    struct RefPtr<WebKit::WebUserContentControllerProxy> _userContentControllerProxy;
    struct RetainPtr<NSMutableArray> _userScripts;
}

@property (readonly, copy, nonatomic) NSArray * userScripts;

- (WKUserContentController *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (NSArray *)userScripts;
- (void)addUserScript:(WKUserScript *)arg0;
- (void)removeAllUserScripts;
- (void)addScriptMessageHandler:(id /* block */)arg0 name:(NSString *)arg1;
- (void)removeScriptMessageHandlerForName:(NSString *)arg0;

@end

/* Runtime dump - WKScriptMessage
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKScriptMessage : NSObject
{
    struct RetainPtr<id> _body;
    struct WeakObjCPtr<WKWebView> _webView;
    struct RetainPtr<WKFrameInfo> _frameInfo;
    struct RetainPtr<NSString> _name;
}

@property (readonly, copy, nonatomic) id body;
@property (readonly, weak, nonatomic) WKWebView * webView;
@property (readonly, copy, nonatomic) WKFrameInfo * frameInfo;
@property (readonly, copy, nonatomic) NSString * name;

- (NSString *)name;
- (WKWebView *)webView;
- (struct RetainPtr<id>)body;
- (void).cxx_construct;
- (void).cxx_destruct;
- (NSObject *)_initWithBody:(struct RetainPtr<id>)arg0 webView:(WKWebView *)arg1 frameInfo:(WKFrameInfo *)arg2 name:(NSString *)arg3;
- (WKFrameInfo *)frameInfo;

@end

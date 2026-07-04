/* Runtime dump - WKReloadFrameErrorRecoveryAttempter
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKReloadFrameErrorRecoveryAttempter : NSObject <_WKErrorRecoveryAttempting>
{
    struct WeakObjCPtr<WKWebView> _webView;
    struct RetainPtr<_WKFrameHandle> _frameHandle;
    struct String _urlString;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void).cxx_construct;
- (void).cxx_destruct;
- (char)attemptRecovery;
- (WKReloadFrameErrorRecoveryAttempter *)initWithWebView:(struct WeakObjCPtr<WKWebView>)arg0 frameHandle:(struct RetainPtr<_WKFrameHandle>)arg1 urlString:(struct String *)arg2;

@end

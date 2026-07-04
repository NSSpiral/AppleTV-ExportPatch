/* Runtime dump - WebGeolocationPolicyListener
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener>
{
    struct RefPtr<WebCore::Geolocation> _geolocation;
    struct RetainPtr<WebView *> _webView;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void).cxx_construct;
- (void).cxx_destruct;
- (void)allow;
- (void)deny;
- (char)shouldClearCache;
- (void)denyOnlyThisRequest;
- (WebGeolocationPolicyListener *)initWithGeolocation:(struct Geolocation *)arg0 forWebView:(unsigned int)arg1;

@end

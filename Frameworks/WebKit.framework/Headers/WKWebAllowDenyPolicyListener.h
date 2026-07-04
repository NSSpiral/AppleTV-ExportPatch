/* Runtime dump - WKWebAllowDenyPolicyListener
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebAllowDenyPolicyListener : NSObject <WebAllowDenyPolicyListener>
{
    struct RefPtr<WebKit::GeolocationPermissionRequestProxy> _permissionRequestProxy;
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
- (WKWebAllowDenyPolicyListener *)initWithPermissionRequestProxy:(struct PassRefPtr<WebKit::GeolocationPermissionRequestProxy>)arg0;
- (void)denyOnlyThisRequest;

@end

/* Runtime dump - WKProcessGroup
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKProcessGroup : NSObject
{
    struct RefPtr<WebKit::WebContext> _context;
    struct WeakObjCPtr<id<WKProcessGroupDelegate> > _delegate;
    struct RetainPtr<WKGeolocationProviderIOS> _geolocationProvider;
}

@property (readonly) struct OpaqueWKContext * _contextRef;
@property (readonly) WKGeolocationProviderIOS * _geolocationProvider;
@property <WKProcessGroupDelegate> * delegate;

- (void)setDelegate:(<WKProcessGroupDelegate> *)arg0;
- (WKProcessGroup *)init;
- (<WKProcessGroupDelegate> *)delegate;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct OpaqueWKContext *)_contextRef;
- (WKGeolocationProviderIOS *)_geolocationProvider;
- (void)_setAllowsSpecificHTTPSCertificate:(NSObject *)arg0 forHost:(NSString *)arg1;
- (WKProcessGroup *)initWithInjectedBundleURL:(NSURL *)arg0;

@end

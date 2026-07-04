/* Runtime dump - WKWebProcessPlugInController
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebProcessPlugInController : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::InjectedBundle> _bundle;
    struct RetainPtr<id<WKWebProcessPlugIn> > _principalClassInstance;
}

@property (readonly) struct OpaqueWKBundle * _bundleRef;
@property (readonly) WKConnection * connection;
@property (readonly) id parameters;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) struct Object * _apiObject;

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (WKConnection *)connection;
- (struct Object *)_apiObject;
- (void)_setPrincipalClassInstance:(id)arg0;
- (struct OpaqueWKBundle *)_bundleRef;
- (NSDictionary *)parameters;

@end

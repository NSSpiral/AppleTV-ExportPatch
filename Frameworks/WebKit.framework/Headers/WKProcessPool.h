/* Runtime dump - WKProcessPool
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKProcessPool : NSObject <WKObject>
{
    struct RetainPtr<_WKProcessPoolConfiguration> _configuration;
    struct ObjectStorage<WebKit::WebContext> _context;
    struct WeakObjCPtr<id<_WKDownloadDelegate> > _downloadDelegate;
    struct RetainPtr<WKGeolocationProviderIOS> _geolocationProvider;
}

@property (readonly, nonatomic) _WKProcessPoolConfiguration * _configuration;
@property (weak, nonatomic) <_WKDownloadDelegate> * _downloadDelegate;
@property (readonly) WKGeolocationProviderIOS * _geolocationProvider;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) struct Object * _apiObject;

+ (NSURL *)_websiteDataURLForContainerWithURL:(NSString *)arg0 bundleIdentifierIfNotInContainer:(NSObject *)arg1;
+ (NSURL *)_websiteDataURLForContainerWithURL:(NSString *)arg0;

- (_WKProcessPoolConfiguration *)_configuration;
- (void)dealloc;
- (WKProcessPool *)init;
- (NSString *)description;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct Object *)_apiObject;
- (NSDictionary *)_initWithConfiguration:(struct RetainPtr<_WKProcessPoolConfiguration>)arg0;
- (WKGeolocationProviderIOS *)_geolocationProvider;
- (<_WKDownloadDelegate> *)_downloadDelegate;
- (void)_setAllowsSpecificHTTPSCertificate:(NSObject *)arg0 forHost:(NSString *)arg1;
- (void)_setCookieAcceptPolicy:(unsigned int)arg0;
- (id)_objectForBundleParameter:(id)arg0;
- (void)_setObject:(NSObject *)arg0 forBundleParameter:(id)arg1;
- (void)_setDownloadDelegate:(NSObject *)arg0;

@end

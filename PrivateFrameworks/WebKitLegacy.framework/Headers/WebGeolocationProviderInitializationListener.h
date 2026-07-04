/* Runtime dump - WebGeolocationProviderInitializationListener
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebGeolocationProviderInitializationListener : NSObject <WebGeolocationProviderInitializationListener>
{
    struct RefPtr<WebCore::Geolocation> m_geolocation;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void).cxx_construct;
- (void).cxx_destruct;
- (WebGeolocationProviderInitializationListener *)initWithGeolocation:(struct Geolocation *)arg0;
- (void)initializationAllowedWebView:(NSObject *)arg0;
- (void)initializationDeniedWebView:(NSObject *)arg0;

@end

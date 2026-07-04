/* Runtime dump - WKWebViewContentProviderRegistry
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebViewContentProviderRegistry : NSObject
{
    struct HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider> > > _contentProviderForMIMEType;
    struct HashCountedSet<WebKit::WebPageProxy *, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *> > _pages;
}

- (WKWebViewContentProviderRegistry *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)registerProvider:(Class)arg0 forMIMEType:(struct String *)arg1;
- (void)addPage:(struct WebPageProxy *)arg0;
- (void)removePage:(struct WebPageProxy *)arg0;
- (Class)providerForMIMEType:(struct String *)arg0;
- (struct Vector<WTF::String, 0, WTF::CrashOnOverflow>)_mimeTypesWithCustomContentProviders;

@end

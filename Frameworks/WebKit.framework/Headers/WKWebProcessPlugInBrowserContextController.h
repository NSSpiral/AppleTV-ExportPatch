/* Runtime dump - WKWebProcessPlugInBrowserContextController
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebProcessPlugInBrowserContextController : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebPage> _page;
    struct WeakObjCPtr<id<WKWebProcessPlugInLoadDelegate> > _loadDelegate;
    struct WeakObjCPtr<id<WKWebProcessPlugInFormDelegatePrivate> > _formDelegate;
    struct RetainPtr<_WKRemoteObjectRegistry> _remoteObjectRegistry;
}

@property (readonly, nonatomic) struct OpaqueWKBundlePage * _bundlePageRef;
@property (readonly, nonatomic) WKBrowsingContextHandle * handle;
@property (readonly, nonatomic) _WKRemoteObjectRegistry * _remoteObjectRegistry;
@property (weak) <WKWebProcessPlugInFormDelegatePrivate> * _formDelegate;
@property (nonatomic) char _defersLoading;
@property (readonly, nonatomic) char _usesNonPersistentWebsiteDataStore;
@property (readonly) WKDOMDocument * mainFrameDocument;
@property (readonly) WKDOMRange * selectedRange;
@property (readonly) WKWebProcessPlugInFrame * mainFrame;
@property (readonly) WKWebProcessPlugInPageGroup * pageGroup;
@property (weak) <WKWebProcessPlugInLoadDelegate> * loadDelegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) struct Object * _apiObject;

+ (WKWebProcessPlugInBrowserContextController *)lookUpBrowsingContextFromHandle:(id)arg0;

- (void)dealloc;
- (WKDOMRange *)selectedRange;
- (WKWebProcessPlugInFrame *)mainFrame;
- (<WKWebProcessPlugInFormDelegatePrivate> *)_formDelegate;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)_setFormDelegate:(NSObject *)arg0;
- (struct Object *)_apiObject;
- (_WKRemoteObjectRegistry *)_remoteObjectRegistry;
- (struct OpaqueWKBundlePage *)_bundlePageRef;
- (<WKWebProcessPlugInLoadDelegate> *)loadDelegate;
- (void)setLoadDelegate:(<WKWebProcessPlugInLoadDelegate> *)arg0;
- (WKDOMDocument *)mainFrameDocument;
- (WKWebProcessPlugInPageGroup *)pageGroup;
- (char)_defersLoading;
- (void)_setDefersLoading:(char)arg0;
- (char)_usesNonPersistentWebsiteDataStore;
- (WKBrowsingContextHandle *)handle;

@end

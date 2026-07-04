/* Runtime dump - WKBrowsingContextController
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKBrowsingContextController : NSObject
{
    struct WeakObjCPtr<id<WKBrowsingContextHistoryDelegate> > _historyDelegate;
    struct RefPtr<WebKit::WebPageProxy> _page;
    struct unique_ptr<PageLoadStateObserver, std::__1::default_delete<PageLoadStateObserver> > _pageLoadStateObserver;
    struct WeakObjCPtr<id<WKBrowsingContextLoadDelegate> > _loadDelegate;
    struct WeakObjCPtr<id<WKBrowsingContextPolicyDelegate> > _policyDelegate;
    struct RetainPtr<_WKRemoteObjectRegistry> _remoteObjectRegistry;
    unsigned int _observedRenderingProgressEvents;
}

@property (readonly) struct OpaqueWKPage * _pageRef;
@property (readonly) char hasOnlySecureContent;
@property unsigned int paginationMode;
@property char paginationBehavesLikeColumns;
@property float pageLength;
@property float gapBetweenPages;
@property (readonly) unsigned int pageCount;
@property (readonly, nonatomic) WKBrowsingContextHandle * handle;
@property (readonly, nonatomic) _WKRemoteObjectRegistry * _remoteObjectRegistry;
@property (readonly, nonatomic) int processIdentifier;
@property (weak) <WKBrowsingContextLoadDelegate> * loadDelegate;
@property (weak) <WKBrowsingContextPolicyDelegate> * policyDelegate;
@property (weak) <WKBrowsingContextHistoryDelegate> * historyDelegate;
@property (copy) NSString * applicationNameForUserAgent;
@property (copy) NSString * customUserAgent;
@property (readonly) char canGoForward;
@property (readonly) char canGoBack;
@property (readonly) WKBackForwardList * backForwardList;
@property (readonly) char loading;
@property (readonly) NSURL * activeURL;
@property (readonly) NSURL * provisionalURL;
@property (readonly) NSURL * committedURL;
@property (readonly) NSURL * unreachableURL;
@property (readonly) double estimatedProgress;
@property (nonatomic) unsigned int observedRenderingProgressEvents;
@property (readonly) NSString * title;
@property (readonly) NSArray * certificateChain;
@property float textZoom;
@property float pageZoom;

+ (WKBrowsingContextController *)_browsingContextControllerForPageRef:(struct OpaqueWKPage *)arg0;
+ (void)registerSchemeForCustomProtocol:(NSObject *)arg0;
+ (void)unregisterSchemeForCustomProtocol:(NSObject *)arg0;
+ (WKBrowsingContextController *)customSchemes;

- (void)dealloc;
- (void)reload;
- (NSString *)title;
- (void)setPolicyDelegate:(<WKBrowsingContextPolicyDelegate> *)arg0;
- (void)setCustomUserAgent:(NSString *)arg0;
- (void)loadRequest:(NSURLRequest *)arg0;
- (void)loadHTMLString:(NSString *)arg0 baseURL:(NSURL *)arg1;
- (void)loadData:(NSData *)arg0 MIMEType:(NSString *)arg1 textEncodingName:(NSString *)arg2 baseURL:(NSURL *)arg3;
- (WKBackForwardList *)backForwardList;
- (unsigned int)pageCount;
- (char)isLoading;
- (char)canGoBack;
- (char)canGoForward;
- (unsigned int)paginationMode;
- (void)setPaginationMode:(unsigned int)arg0;
- (float)pageLength;
- (void)setPageLength:(float)arg0;
- (float)gapBetweenPages;
- (void)setGapBetweenPages:(float)arg0;
- (NSString *)customUserAgent;
- (void)stopLoading;
- (void)goBack;
- (void)goForward;
- (void).cxx_construct;
- (void).cxx_destruct;
- (int)processIdentifier;
- (double)estimatedProgress;
- (_WKRemoteObjectRegistry *)_remoteObjectRegistry;
- (struct OpaqueWKPage *)_pageRef;
- (void)goToBackForwardListItem:(NSObject *)arg0;
- (char)hasOnlySecureContent;
- (void)reloadFromOrigin;
- (WKBrowsingContextController *)_initWithPageRef:(struct OpaqueWKPage *)arg0;
- (void)loadRequest:(NSURLRequest *)arg0 userData:(void *)arg1;
- (void)loadFileURL:(NSURL *)arg0 restrictToFilesWithin:(id)arg1 userData:(void *)arg2;
- (void)loadHTMLString:(NSString *)arg0 baseURL:(NSURL *)arg1 userData:(void *)arg2;
- (void)loadData:(NSData *)arg0 MIMEType:(NSString *)arg1 textEncodingName:(NSString *)arg2 baseURL:(NSURL *)arg3 userData:(void *)arg4;
- (void)loadFileURL:(NSURL *)arg0 restrictToFilesWithin:(id)arg1;
- (void)loadAlternateHTMLString:(NSString *)arg0 baseURL:(NSURL *)arg1 forUnreachableURL:(NSURL *)arg2;
- (NSString *)applicationNameForUserAgent;
- (void)setApplicationNameForUserAgent:(NSString *)arg0;
- (NSURL *)activeURL;
- (NSURL *)provisionalURL;
- (NSURL *)committedURL;
- (NSURL *)unreachableURL;
- (void)setObservedRenderingProgressEvents:(unsigned int)arg0;
- (NSArray *)certificateChain;
- (float)textZoom;
- (void)setTextZoom:(float)arg0;
- (float)pageZoom;
- (void)setPageZoom:(float)arg0;
- (<WKBrowsingContextLoadDelegate> *)loadDelegate;
- (void)setLoadDelegate:(<WKBrowsingContextLoadDelegate> *)arg0;
- (<WKBrowsingContextPolicyDelegate> *)policyDelegate;
- (<WKBrowsingContextHistoryDelegate> *)historyDelegate;
- (void)setHistoryDelegate:(<WKBrowsingContextHistoryDelegate> *)arg0;
- (unsigned int)observedRenderingProgressEvents;
- (void)setPaginationBehavesLikeColumns:(char)arg0;
- (char)paginationBehavesLikeColumns;
- (WKBrowsingContextHandle *)handle;

@end

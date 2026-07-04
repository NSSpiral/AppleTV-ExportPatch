/* Runtime dump - WKWebViewConfiguration
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebViewConfiguration : NSObject <NSCopying>
{
    struct LazyInitialized<WKProcessPool> _processPool;
    struct LazyInitialized<WKPreferences> _preferences;
    struct LazyInitialized<WKUserContentController> _userContentController;
    struct LazyInitialized<_WKVisitedLinkProvider> _visitedLinkProvider;
    struct LazyInitialized<_WKWebsiteDataStore> _websiteDataStore;
    struct WeakObjCPtr<WKWebView> _relatedWebView;
    struct WeakObjCPtr<WKWebView> _alternateWebViewForNavigationGestures;
    struct RetainPtr<NSString> _groupIdentifier;
    struct LazyInitialized<WKWebViewContentProviderRegistry> _contentProviderRegistry;
    char _featureCounterEnabled;
    char _suppressesIncrementalRendering;
    char _allowsInlineMediaPlayback;
    char _mediaPlaybackRequiresUserAction;
    char _mediaPlaybackAllowsAirPlay;
    int _selectionGranularity;
}

@property (weak, nonatomic) WKWebView * _relatedWebView;
@property (copy, nonatomic) NSString * _groupIdentifier;
@property (retain, nonatomic) _WKVisitedLinkProvider * _visitedLinkProvider;
@property (retain, nonatomic) _WKWebsiteDataStore * _websiteDataStore;
@property (weak, nonatomic) WKWebView * _alternateWebViewForNavigationGestures;
@property (nonatomic) char _featureCounterEnabled;
@property (retain, nonatomic) WKProcessPool * processPool;
@property (retain, nonatomic) WKPreferences * preferences;
@property (retain, nonatomic) WKUserContentController * userContentController;
@property (nonatomic) char suppressesIncrementalRendering;
@property (nonatomic) char allowsInlineMediaPlayback;
@property (nonatomic) char mediaPlaybackRequiresUserAction;
@property (nonatomic) char mediaPlaybackAllowsAirPlay;
@property (nonatomic) int selectionGranularity;
@property (nonatomic) WKWebViewContentProviderRegistry * _contentProviderRegistry;

- (void)_setGroupIdentifier:(NSString *)arg0;
- (WKWebViewConfiguration *)init;
- (NSString *)description;
- (WKWebViewConfiguration *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPreferences:(WKPreferences *)arg0;
- (int)selectionGranularity;
- (void)setSelectionGranularity:(int)arg0;
- (WKPreferences *)preferences;
- (void)setMediaPlaybackAllowsAirPlay:(char)arg0;
- (char)mediaPlaybackAllowsAirPlay;
- (char)suppressesIncrementalRendering;
- (void)setSuppressesIncrementalRendering:(char)arg0;
- (void)setAllowsInlineMediaPlayback:(char)arg0;
- (char)allowsInlineMediaPlayback;
- (void)setMediaPlaybackRequiresUserAction:(char)arg0;
- (char)mediaPlaybackRequiresUserAction;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)_setRelatedWebView:(NSObject *)arg0;
- (WKWebView *)_relatedWebView;
- (WKProcessPool *)processPool;
- (void)setProcessPool:(WKProcessPool *)arg0;
- (void)_validate;
- (WKUserContentController *)userContentController;
- (_WKVisitedLinkProvider *)_visitedLinkProvider;
- (_WKWebsiteDataStore *)_websiteDataStore;
- (NSString *)_groupIdentifier;
- (char)_featureCounterEnabled;
- (WKWebViewContentProviderRegistry *)_contentProviderRegistry;
- (WKWebView *)_alternateWebViewForNavigationGestures;
- (void)setUserContentController:(WKUserContentController *)arg0;
- (void)_setVisitedLinkProvider:(NSObject *)arg0;
- (void)_setWebsiteDataStore:(NSObject *)arg0;
- (void)_setAlternateWebViewForNavigationGestures:(id)arg0;
- (void)_setContentProviderRegistry:(WKWebViewContentProviderRegistry *)arg0;
- (void)_setFeatureCounterEnabled:(char)arg0;

@end

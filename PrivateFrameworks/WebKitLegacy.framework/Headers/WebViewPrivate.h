/* Runtime dump - WebViewPrivate
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebViewPrivate : NSObject
{
    struct Page * page;
    struct RefPtr<WebViewGroup> group;
    id UIDelegate;
    id UIDelegateForwarder;
    id resourceProgressDelegate;
    id downloadDelegate;
    id policyDelegate;
    id policyDelegateForwarder;
    id frameLoadDelegate;
    id frameLoadDelegateForwarder;
    <WebFormDelegate> * formDelegate;
    id editingDelegate;
    id editingDelegateForwarder;
    id scriptDebugDelegate;
    id historyDelegate;
    id resourceProgressDelegateForwarder;
    id formDelegateForwarder;
    WebInspector * inspector;
    WebNodeHighlight * currentNodeHighlight;
    char allowsUndo;
    float zoomMultiplier;
    char zoomsTextOnly;
    NSString * applicationNameForUserAgent;
    struct String userAgent;
    char userAgentOverridden;
    WebPreferences * preferences;
    char useSiteSpecificSpoofing;
    NSURL * userStyleSheetLocation;
    WAKWindow * hostWindow;
    int programmaticFocusCount;
    struct WebResourceDelegateImplementationCache resourceLoadDelegateImplementations;
    struct WebFrameLoadDelegateImplementationCache frameLoadDelegateImplementations;
    struct WebScriptDebugDelegateImplementationCache scriptDebugDelegateImplementations;
    struct WebHistoryDelegateImplementationCache historyDelegateImplementations;
    void * observationInfo;
    char closed;
    char closing;
    char shouldCloseWithWindow;
    char mainFrameDocumentReady;
    char drawsBackground;
    char tabKeyCyclesThroughElementsChanged;
    char becomingFirstResponder;
    char becomingFirstResponderFromOutside;
    char usesPageCache;
    struct CGColor * backgroundColor;
    NSString * mediaStyle;
    char hasSpellCheckerDocumentTag;
    int spellCheckerDocumentTag;
    char isStopping;
    id UIKitDelegate;
    id UIKitDelegateForwarder;
    id WebMailDelegate;
    char allowsMessaging;
    NSMutableSet * _caretChangeListeners;
    <WebCaretChangeListener> * _caretChangeListener;
    struct CGSize fixedLayoutSize;
    char mainViewIsScrollingOrZooming;
    int didDrawTiles;
    struct Mutex pendingFixedPositionLayoutRectMutex;
    struct CGRect pendingFixedPositionLayoutRect;
    struct HashMap<unsigned long, WTF::RetainPtr<id>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id> > > identifierMap;
    char _keyboardUIModeAccessed;
    int _keyboardUIMode;
    char shouldUpdateWhileOffscreen;
    char includesFlattenedCompositingLayersWhenDrawingToBitmap;
    char needsOneShotDrawingSynchronization;
    char postsAcceleratedCompositingNotifications;
    struct RefPtr<LayerFlushController> layerFlushController;
    struct CGSize lastLayoutSize;
    WebVideoFullscreenController * fullscreenController;
    WebIndicateLayer * indicateLayer;
    <WebGeolocationProvider> * _geolocationProvider;
    <WebDeviceOrientationProvider> * m_deviceOrientationProvider;
    <WebNotificationProvider> * _notificationProvider;
    struct RefPtr<WebCore::HistoryItem> _globalHistoryItem;
    char interactiveFormValidationEnabled;
    int validationMessageTimerMagnification;
    float customDeviceScaleFactor;
    WebFixedPositionContent * _fixedPositionContent;
    struct RetainPtr<NSData> sourceApplicationAuditData;
    char _didPerformFirstNavigation;
}

+ (void)initialize;

- (void)dealloc;
- (WebViewPrivate *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)finalize;

@end

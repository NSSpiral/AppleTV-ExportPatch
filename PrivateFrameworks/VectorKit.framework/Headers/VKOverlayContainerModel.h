/* Runtime dump - VKOverlayContainerModel
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKOverlayContainerModel : VKMapTileModel <VKRouteMatchedAnnotationPresentationObserver, VKMapLayer, VKStyleManagerObserver>
{
    NSMutableSet * _visibleOverlays;
    NSMutableArray * _overlayPainters;
    NSMapTable * _overlaysToPainters;
    NSMutableSet * _overlaysToAdd;
    NSMutableSet * _overlaysToRemove;
    <VKOverlayContainerDelegate> * _delegate;
    char _shouldCheckForOcclusion;
    char _shouldOccludeTraffic;
    char _shouldShowTraffic;
    char _isShowingRouteInStandardMode;
    NSMapTable * _persistentOverlaysToPainters;
    NSMutableSet * _persistentOverlays;
    <VKRouteMatchedAnnotationPresentation> * _routeLineSplitAnnotation;
    VKSkyModel * _skyModel;
    <VKOverlayContainerRouteDelegate> * _routeDelegate;
    struct ClearItem * _clearItem;
    unsigned int _applicationState;
    struct ? _puckPosition;
}

@property (nonatomic) char shouldCheckForOcclusion;
@property (nonatomic) <VKOverlayContainerDelegate> * delegate;
@property (readonly, nonatomic) struct ? puckPosition;
@property (readonly, nonatomic) char inRealisticMode;
@property (nonatomic) char shouldShowTraffic;
@property (nonatomic) char shouldOccludeTraffic;
@property (readonly, nonatomic) char isShowingRouteInStandardMode;
@property (retain, nonatomic) <VKRouteMatchedAnnotationPresentation> * routeLineSplitAnnotation;
@property (readonly, nonatomic) NSSet * persistentOverlays;
@property (retain, nonatomic) VKSkyModel * skyModel;
@property (nonatomic) <VKOverlayContainerRouteDelegate> * routeDelegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) VKStyleManager * styleManager;

+ (char)reloadOnStylesheetChange;

- (void)dealloc;
- (void)setDelegate:(<VKOverlayContainerDelegate> *)arg0;
- (VKOverlayContainerModel *)init;
- (<VKOverlayContainerDelegate> *)delegate;
- (void)reset;
- (void).cxx_construct;
- (void)didReceiveMemoryWarning:(char)arg0;
- (struct ?)puckPosition;
- (void)setApplicationState:(unsigned int)arg0;
- (VKStyleManager *)styleManager;
- (NSSet *)persistentOverlays;
- (void)removePersistentOverlay:(NSObject *)arg0;
- (void)addPersistentOverlay:(NSObject *)arg0;
- (<VKRouteMatchedAnnotationPresentation> *)routeLineSplitAnnotation;
- (void)setRouteLineSplitAnnotation:(<VKRouteMatchedAnnotationPresentation> *)arg0;
- (void)layoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1;
- (void)updatedMatchedSection:(struct fast_shared_ptr<vk::RouteLineSection>)arg0 index:(NSObject *)arg1;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (<VKOverlayContainerRouteDelegate> *)routeDelegate;
- (void)setRouteDelegate:(<VKOverlayContainerRouteDelegate> *)arg0;
- (void)setShouldShowTraffic:(char)arg0;
- (void)setShouldCheckForOcclusion:(char)arg0;
- (void)stylesheetDidChange;
- (void)setShouldOccludeTraffic:(char)arg0;
- (void)setSkyModel:(VKSkyModel *)arg0;
- (unsigned long long)mapLayerPosition;
- (VKSkyModel *)skyModel;
- (char)isInRealisticMode;
- (char)shouldShowTraffic;
- (void)_updatePainterOrdering;
- (void)annotationPresentationDidChangePresentationCoordinate:(id)arg0;
- (char)shouldCheckForOcclusion;
- (char)shouldOccludeTraffic;
- (char)isShowingRouteInStandardMode;

@end

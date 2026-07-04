/* Runtime dump - VKGlobeLineContainer
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGlobeLineContainer : NSObject <VKPolylineGroupOverlayObserver, VKPolylineObserver>
{
    char _trafficEnabled;
    <VKRouteMatchedAnnotationPresentation> * _routeLineSplitAnnotation;
    <VKGlobeLineContainerDelegate> * _delegate;
    NSMutableArray * _overlays;
    struct GlobeView * _globeView;
    struct /* ? */ _polylinesToRoutes;
    VKPolylineOverlay * _selectedPolyline;
    NSMutableSet * _persistentOverlays;
    struct VKGlobeRouteSplit * _routeSplit;
    struct RouteStyle * _routeStyle;
}

@property (retain, nonatomic) <VKRouteMatchedAnnotationPresentation> * routeLineSplitAnnotation;
@property (nonatomic) <VKGlobeLineContainerDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<VKGlobeLineContainerDelegate> *)arg0;
- (<VKGlobeLineContainerDelegate> *)delegate;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)setTrafficEnabled:(char)arg0;
- (NSMutableSet *)persistentOverlays;
- (void)removePersistentOverlay:(NSObject *)arg0;
- (void)addPersistentOverlay:(NSObject *)arg0;
- (NSMutableArray *)overlays;
- (void)removeOverlay:(NSObject *)arg0;
- (void)addOverlay:(NSObject *)arg0;
- (<VKRouteMatchedAnnotationPresentation> *)routeLineSplitAnnotation;
- (void)setRouteLineSplitAnnotation:(<VKRouteMatchedAnnotationPresentation> *)arg0;
- (void)polylineGroup:(VKPolylineGroupOverlay *)arg0 didAddPolyline:(VKPolylineOverlay *)arg1;
- (void)polylineGroup:(VKPolylineGroupOverlay *)arg0 didRemovePolyline:(VKPolylineOverlay *)arg1;
- (void)polylineGroup:(VKPolylineGroupOverlay *)arg0 didSelectPolyline:(VKPolylineOverlay *)arg1;
- (void)setNeedsLayoutForPolyline:(VKPolylineOverlay *)arg0;
- (void)polyline:(VKPolylineOverlay *)arg0 selectedSections:(NSArray *)arg1 deselectedSections:(NSArray *)arg2;
- (VKGlobeLineContainer *)initWithGlobeView:(struct GlobeView *)arg0 stylesheet:(TSSStylesheet *)arg1;
- (void)setStylesheet:(TSSStylesheet *)arg0;
- (void)updateWithContext:(NSObject *)arg0;
- (void)addLine:(struct __CFString *)arg0;
- (void)removeLine:(id)arg0;
- (void)setSelected:(NSNumber *)arg0 selected:(char)arg1;
- (void)_recreateLinesIfNeeded;
- (void)_updateRouteSplit;
- (void)clearLineSelection;

@end

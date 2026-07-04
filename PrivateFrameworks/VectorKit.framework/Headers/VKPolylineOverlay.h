/* Runtime dump - VKPolylineOverlay
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolylineOverlay : NSObject <VKOverlay, GEOComposedRouteObserver>
{
    struct __CFSet * _observers;
    GEOComposedRoute * _composedRoute;
    char _isReadyForSnapping;
    double _trafficTimeStamp;
    VKTrafficSegmentsAlongRoute * _trafficSegments;
}

@property (readonly, nonatomic) GEOComposedRoute * composedRoute;
@property (readonly, nonatomic) VKTrafficSegmentsAlongRoute * trafficSegments;
@property (readonly, nonatomic) double trafficTimeStamp;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) struct ? coordinate;
@property (readonly, nonatomic) GEOMapRegion * boundingMapRegion;

- (void)dealloc;
- (void)removeObserver:(NSObject *)arg0;
- (void)addObserver:(NSObject *)arg0;
- (struct ?)coordinate;
- (GEOMapRegion *)boundingMapRegion;
- (GEOComposedRoute *)composedRoute;
- (id)getPathsForPainter:(id)arg0 renderRegion:(VKPolylineOverlayRenderRegion *)arg1 shouldSnapToRoads:(char)arg2 snappingCompletionHandler:(id /* block */)arg3;
- (double)trafficTimeStamp;
- (VKTrafficSegmentsAlongRoute *)trafficSegments;
- (void)_updateTraffic;
- (void)_setNeedsLayout;
- (void)composedRouteUpdatedSnappedPaths:(GEOComposedRoute *)arg0;
- (void)composedRouteUpdatedTraffic:(GEOComposedRoute *)arg0;
- (void)composedRoute:(GEOComposedRoute *)arg0 selectedSections:(NSArray *)arg1 deselectedSections:(NSArray *)arg2;
- (VKPolylineOverlay *)initWithComposedRoute:(GEOComposedRoute *)arg0;
- (struct _NSRange)sectionRangeForBounds:(struct ?)arg0;
- (void)updateLabelExternalObjectsInRenderRegion:(NSObject *)arg0;
- (char)isSnappingForSceneTiles;

@end

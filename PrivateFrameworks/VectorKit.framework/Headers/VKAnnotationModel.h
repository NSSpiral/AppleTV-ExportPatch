/* Runtime dump - VKAnnotationModel
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAnnotationModel : VKModelObject <VKMapLayer, VKStyleManagerObserver>
{
    NSMutableArray * _annotationMarkers;
    VKAnnotationMarker * _selectedAnnotationMarker;
    NSMutableSet * _animatingMarkers;
    NSMutableArray * _markersToAnimate;
    VKAnnotationMarker * _draggingAnnotationMarker;
    char _didDragMarker;
    char _hasEverDrawnSomething;
    struct ? _styleTransitionState;
    id _annotationMarkerDeselectionCallback;
    VKMapModel * _mapModel;
}

@property (nonatomic) struct ? styleTransitionState;
@property (readonly, nonatomic) NSArray * annotationMarkers;
@property (readonly, nonatomic) VKAnnotationMarker * selectedAnnotationMarker;
@property (readonly, nonatomic) char needsLayout;
@property (copy, nonatomic) id annotationMarkerDeselectionCallback;
@property (nonatomic) VKMapModel * mapModel;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) VKStyleManager * styleManager;

+ (char)reloadOnStylesheetChange;

- (void)dealloc;
- (VKAnnotationModel *)init;
- (char)needsLayout;
- (void).cxx_construct;
- (id /* block */)annotationRectTest;
- (id /* block */)annotationCoordinateTest;
- (VKStyleManager *)styleManager;
- (NSArray *)annotationMarkers;
- (id /* block */)annotationMarkerDeselectionCallback;
- (void)setAnnotationMarkerDeselectionCallback:(id /* block */)arg0;
- (VKAnnotationMarker *)selectedAnnotationMarker;
- (void)removeAnnotationMarker:(VKAnnotationMarker *)arg0;
- (void)addAnnotationMarker:(VKAnnotationMarker *)arg0 allowAnimation:(char)arg1;
- (void)selectAnnotationMarker:(VKAnnotationMarker *)arg0;
- (void)deselectAnnotationMarker:(VKAnnotationMarker *)arg0;
- (void)setMapModel:(VKMapModel *)arg0;
- (NSObject *)annotationMarkerForSelectionAtPoint:(struct VKPoint)arg0 avoidCurrent:(char)arg1 canvasSize:(struct CGSize)arg2;
- (char)shouldLayoutWithoutStyleManager;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (void)setStyleTransitionState:(struct ?)arg0;
- (struct ?)styleTransitionState;
- (void)stylesheetDidChange;
- (unsigned long long)mapLayerPosition;
- (VKMapModel *)mapModel;
- (void)anchorPositionChangedForMarker:(NSObject *)arg0;

@end

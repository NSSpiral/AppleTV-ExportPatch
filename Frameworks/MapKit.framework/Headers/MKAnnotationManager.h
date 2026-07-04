/* Runtime dump - MKAnnotationManager
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAnnotationManager : NSObject
{
    <MKAnnotationMarkerContainer> * _container;
    <MKAnnotationManagerDelegate> * _delegate;
    char _annotationRepresentationsAreAddedImmediately;
    NSTimer * _updateVisibleTimer;
    MKQuadTrie * _annotations;
    NSMutableSet * _visibleAnnotations;
    NSMutableSet * _pendingAnnotations;
    NSMutableSet * _disallowAnimationAnnotations;
    NSMutableSet * _invalidCoordinateAnnotations;
    <MKAnnotation> * _selectedAnnotation;
    <MKAnnotation> * _draggedAnnotation;
    NSMapTable * _annotationsToRepresentations;
    NSMutableSet * _annotationRepresentations;
    NSMapTable * _reusableAnnotationRepresentations;
    NSMutableSet * _managedAnnotations;
    NSMutableSet * _managedAnnotationsObservingCoordinate;
    char _isChangingCoordinate;
}

@property (weak, nonatomic) <MKAnnotationMarkerContainer> * container;
@property (weak, nonatomic) <MKAnnotationManagerDelegate> * delegate;
@property (nonatomic) char annotationRepresentationsAreAddedImmediately;
@property (weak, nonatomic) <MKAnnotation> * draggedAnnotation;
@property (readonly, weak, nonatomic) <MKAnnotationRepresentation> * selectedAnnotationRepresentation;
@property (readonly, nonatomic) NSArray * annotationRepresentations;
@property (readonly, nonatomic) NSArray * annotations;

- (char)annotationRepresentationsAreAddedImmediately;
- (void)setAnnotationRepresentationsAreAddedImmediately:(char)arg0;
- (void)updateVisibleAnnotations;
- (void)selectAnnotation:(NSObject *)arg0 animated:(char)arg1;
- (void)deselectAnnotation:(NSObject *)arg0 animated:(char)arg1;
- (void)selectAnnotation:(NSObject *)arg0 animated:(char)arg1 avoid:(struct CGRect)arg2;
- (<MKAnnotationRepresentation> *)selectedAnnotationRepresentation;
- (void)showAnnotationsInMapRect:(struct ?)arg0;
- (void)addAnnotations:(NSArray *)arg0;
- (NSArray *)annotations;
- (NSObject *)annotationsInMapRect:(struct ?)arg0;
- (NSArray *)annotationRepresentations;
- (void)addAnnotation:(NSObject *)arg0 allowAnimation:(char)arg1;
- (void)removeAnnotation:(NSObject *)arg0;
- (void)removeAnnotations:(NSArray *)arg0;
- (void)replaceAnnotation:(NSObject *)arg0 withAnnotation:(NSObject *)arg1;
- (void)addRepresentationsForAnnotations:(NSArray *)arg0;
- (NSString *)dequeueReusableAnnotationRepresentationWithIdentifier:(NSString *)arg0;
- (NSObject *)representationForAnnotation:(NSObject *)arg0;
- (char)containsAnnotation:(NSObject *)arg0;
- (char)internalAnnotationAllowsCustomRepresentation:(NSDictionary *)arg0;
- (NSObject *)newDefaultAnnotationRepresentationForAnnotation:(NSObject *)arg0 reuseIdentifier:(NSString *)arg1;
- (void)configureDefaultAnnotationRepresentation:(NSDictionary *)arg0 forAnnotation:(NSObject *)arg1;
- (void)configureAnnotationRepresentation:(NSDictionary *)arg0 forAnnotation:(NSObject *)arg1;
- (void)cleanUpAnnotationRepresentationForRemoval:(id)arg0;
- (char)annotationIsInternal:(id)arg0;
- (NSObject *)newInternalAnnotationRepresentationForInternalAnnotation:(NSObject *)arg0;
- (void)addManagedAnnotation:(NSObject *)arg0 observeCoordinateChanges:(char)arg1;
- (void)_setupUpdateVisibleAnnotationsTimer;
- (void)_addAnnotation:(NSObject *)arg0 updateVisible:(char)arg1;
- (void)_removeRepresentationForAnnotation:(NSObject *)arg0 fromCull:(char)arg1;
- (void)_removeAnnotation:(NSObject *)arg0 updateVisible:(char)arg1 removeFromContainer:(char)arg2;
- (NSObject *)_addRepresentationForAnnotation:(NSObject *)arg0;
- (void)addManagedAnnotation:(NSObject *)arg0;
- (NSObject *)addRepresentationForManagedAnnotation:(NSObject *)arg0 notifyDelegate:(char)arg1;
- (void)removeRepresentationForManagedAnnotation:(NSObject *)arg0;
- (<MKAnnotation> *)draggedAnnotation;
- (void)setDraggedAnnotation:(<MKAnnotation> *)arg0;
- (void)dealloc;
- (void)setDelegate:(<MKAnnotationManagerDelegate> *)arg0;
- (MKAnnotationManager *)init;
- (<MKAnnotationManagerDelegate> *)delegate;
- (void)setContainer:(<MKAnnotationMarkerContainer> *)arg0;
- (<MKAnnotationMarkerContainer> *)container;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void).cxx_destruct;
- (void)addAnnotation:(NSObject *)arg0;

@end

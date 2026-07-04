/* Runtime dump - MKUserLocationAnnotationViewProxy
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKUserLocationAnnotationViewProxy : NSObject <VKPuckAnimatorTarget, VKTrackableAnnotationPresentation, VKRouteMatchedAnnotationPresentation>
{
    MKAnnotationView * _annotationView;
    NSHashTable * _presentationCoordinateObservers;
}

@property (weak, nonatomic) MKAnnotationView * annotationView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) double presentationCourse;
@property (nonatomic) struct ? presentationCoordinate;
@property (nonatomic) char tracking;
@property (retain, nonatomic) GEORouteMatch * routeMatch;

- (void)setAnnotationView:(MKAnnotationView *)arg0;
- (MKAnnotationView *)annotationView;
- (char)isTracking;
- (void)setTracking:(char)arg0;
- (void).cxx_destruct;
- (struct ?)presentationCoordinate;
- (void)setAnimatingToCoordinate:(char)arg0;
- (void)setPresentationCoordinate:(struct ?)arg0;
- (double)presentationCourse;
- (void)setPresentationCourse:(double)arg0;
- (void)removePresentationCoordinateChangedObserver:(NSObject *)arg0;
- (void)addPresentationCoordinateChangedObserver:(NSObject *)arg0;
- (GEORouteMatch *)routeMatch;
- (void)setRouteMatch:(GEORouteMatch *)arg0;

@end

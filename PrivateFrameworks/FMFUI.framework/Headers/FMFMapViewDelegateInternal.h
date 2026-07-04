/* Runtime dump - FMFMapViewDelegateInternal
 * Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFMapViewDelegateInternal : NSObject <MKMapViewDelegate>
{
    char _respondingToUserTouch;
    <FMFMapViewDelegateInternalDelegate> * _delegate;
    FMFWildcardGestureRecognizer * _gr;
}

@property (weak, nonatomic) <FMFMapViewDelegateInternalDelegate> * delegate;
@property (nonatomic) char respondingToUserTouch;
@property (retain, nonatomic) FMFWildcardGestureRecognizer * gr;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)mapView:(MKMapView *)arg0 regionWillChangeAnimated:(char)arg1;
- (void)mapView:(MKMapView *)arg0 regionDidChangeAnimated:(char)arg1;
- (void)mapViewDidFinishRenderingMap:(MKMapView *)arg0 fullyRendered:(char)arg1;
- (MKAnnotationView *)mapView:(MKMapView *)arg0 viewForAnnotation:(NSObject *)arg1;
- (void)mapView:(MKMapView *)arg0 didSelectAnnotationView:(MKAnnotationView *)arg1;
- (void)mapView:(MKMapView *)arg0 didDeselectAnnotationView:(MKAnnotationView *)arg1;
- (void)mapView:(MKMapView *)arg0 didUpdateUserLocation:(MKUserLocation *)arg1;
- (MKOverlayRenderer *)mapView:(MKMapView *)arg0 rendererForOverlay:(NSObject *)arg1;
- (void)setDelegate:(<FMFMapViewDelegateInternalDelegate> *)arg0;
- (<FMFMapViewDelegateInternalDelegate> *)delegate;
- (void).cxx_destruct;
- (void)zoomToFitAnnotationsForMapView:(NSObject *)arg0 includeMe:(char)arg1 disallowAnimation:(char)arg2;
- (FMFMapViewDelegateInternal *)initWithDelegate:(<FMFMapViewDelegateInternalDelegate> *)arg0 mapView:(MKMapView *)arg1;
- (void)updateOverlaysForAnnotationMove:(id)arg0 mapView:(MKMapView *)arg1;
- (void)zoomToFitLocation:(NSObject *)arg0 forMapView:(NSObject *)arg1;
- (void)setGr:(FMFWildcardGestureRecognizer *)arg0;
- (void)setRespondingToUserTouch:(char)arg0;
- (void)endTouches;
- (NSObject *)accuracyCircleForLocation:(NSObject *)arg0;
- (void)slideAnnotation:(NSObject *)arg0 intoViewIfNeededForMapView:(NSObject *)arg1;
- (char)respondingToUserTouch;
- (id)fmfOverlayColorSatellite;
- (UIColor *)fmfOverlayColor;
- (void)_moveCenterByOffset:(struct CGPoint)arg0 from:(struct ?)arg1 mapView:(MKMapView *)arg2;
- (char)regionIsValid:(struct ?)arg0;
- (struct UIEdgeInsets)edgeInsetsWithMinApplied:(struct UIEdgeInsets)arg0;
- (FMFWildcardGestureRecognizer *)gr;

@end

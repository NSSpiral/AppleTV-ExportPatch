/* Runtime dump - MKPlaceHeaderBackgroundView_Flyover
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceHeaderBackgroundView_Flyover : MKPlaceHeaderBackgroundView
{
    char _animationPaused;
    UITapGestureRecognizer * _interactionTapRecognizer;
    MKMapView * _mapView;
    GEOPDFlyover * _flyover;
}

- (MKMapView *)mapView;
- (void)prepareForPresentation;
- (void)setMapView:(MKMapView *)arg0;
- (MKPlaceHeaderBackgroundView_Flyover *)initWithFrame:(struct CGRect)arg0 mapItem:(struct CGSize)arg1;
- (void)_pauseTour;
- (void)setFrame:(struct CGRect)arg0;
- (void)reset;
- (void)resume;
- (void)present;
- (void).cxx_destruct;
- (void)pause;
- (GEOPDFlyover *)flyover;
- (void)setFlyover:(GEOPDFlyover *)arg0;

@end

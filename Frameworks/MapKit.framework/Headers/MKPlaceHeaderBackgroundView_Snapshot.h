/* Runtime dump - MKPlaceHeaderBackgroundView_Snapshot
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceHeaderBackgroundView_Snapshot : MKPlaceHeaderBackgroundView <MKMapViewDelegate>
{
    MKMapView * _mapView;
    char _orbiting;
    char _settingUpOrbitAnimation;
    char _showsPin;
    MKMapCamera * _orbitCamera;
    float _zoomLevel;
    unsigned int _pinColor;
    CLLocation * _location;
}

@property (nonatomic) unsigned int pinColor;
@property (retain, nonatomic) MKMapCamera * orbitCamera;
@property (nonatomic) char orbiting;
@property (retain, nonatomic) CLLocation * location;
@property (nonatomic) char settingUpOrbitAnimation;
@property (nonatomic) float zoomLevel;
@property (nonatomic) char showsPin;
@property (readonly, nonatomic) char useSatellite;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)mapView:(MKMapView *)arg0 regionDidChangeAnimated:(char)arg1;
- (void)mapViewDidFinishLoadingMap:(MKMapView *)arg0;
- (void)mapViewDidFinishRenderingMap:(MKMapView *)arg0 fullyRendered:(char)arg1;
- (MKAnnotationView *)mapView:(MKMapView *)arg0 viewForAnnotation:(NSObject *)arg1;
- (void)prepareForPresentation;
- (unsigned int)pinColor;
- (void)setPinColor:(unsigned int)arg0;
- (MKPlaceHeaderBackgroundView_Snapshot *)initWithFrame:(struct CGRect)arg0 mapItem:(struct CGSize)arg1;
- (char)useSatellite;
- (void)setOrbitCamera:(MKMapCamera *)arg0;
- (void)pauseOrbit;
- (void)requestSnapshot;
- (void)mapFinishedLoading:(char)arg0;
- (char)orbiting;
- (char)settingUpOrbitAnimation;
- (void)_orbitNextThird;
- (void)setOrbiting:(char)arg0;
- (void)setSettingUpOrbitAnimation:(char)arg0;
- (MKMapCamera *)orbitCamera;
- (void)setShowsPin:(char)arg0;
- (void)beginOrbit;
- (char)showsPin;
- (void)dealloc;
- (void)reset;
- (void)resume;
- (void)present;
- (CLLocation *)location;
- (void).cxx_destruct;
- (void)pause;
- (void)setMapItem:(MKMapItem *)arg0;
- (void)setLocation:(CLLocation *)arg0;
- (void)setZoomLevel:(float)arg0;
- (float)zoomLevel;

@end

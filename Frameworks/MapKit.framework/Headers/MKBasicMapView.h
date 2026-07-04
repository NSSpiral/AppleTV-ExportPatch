/* Runtime dump - MKBasicMapView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKBasicMapView : UIView
{
    UIView * _hostView;
    VKMapView * _mapView;
    double _mapModeStartTime;
    double _trafficStartTime;
    char _changingViewSize;
}

@property (readonly, nonatomic) VKMapView * mapView;
@property (readonly, nonatomic) struct UIEdgeInsets edgeInsets;
@property (nonatomic) char rendersInBackground;
@property (nonatomic) double mapModeStartTime;
@property (nonatomic) double trafficStartTime;
@property (readonly, nonatomic) char changingViewSize;

- (MKBasicMapView *)initWithFrame:(struct CGRect)arg0 andGlobe:(struct CGSize)arg1 shouldRasterize:(char)arg2;
- (VKMapView *)mapView;
- (void)updateStatsForTrafficEnabledTime;
- (void)updateStatsForEnablingTraffic:(char)arg0;
- (void)updateStatsForSwitchingToMapType:(int)arg0;
- (void)updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(char)arg0;
- (char)isChangingViewSize;
- (struct CGPoint)convertCoordinate:(struct ?)arg0 toPointToView:(UIView *)arg1;
- (struct ?)convertPoint:(struct CGPoint)arg0 toCoordinateFromView:(UIView *)arg1;
- (void)setMapModeStartTime:(double)arg0;
- (void)setTrafficStartTime:(double)arg0;
- (struct CGPoint)convertCoordinate:(struct ?)arg0 toCameraModelPointToView:(NSObject *)arg1;
- (void)_finishedSnapshot:(NSObject *)arg0;
- (void)_updateMapViewHidden;
- (void)_animateCanvasForBounds:(struct CGRect)arg0;
- (void)_updateForCurrentScreen;
- (void)_updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(char)arg0 ignoreIfViewInWindow:(char)arg1;
- (void)_updateStatsForTrafficEnabledTime:(char)arg0;
- (void)addCalloutSubview:(id)arg0;
- (struct CGSize)calloutContainerCanvasSize;
- (float)calloutContainerCanvasScale;
- (double)mapModeStartTime;
- (double)trafficStartTime;
- (void)_enterForeground:(NSNotification *)arg0;
- (void)_enterBackground:(NSNotification *)arg0;
- (void)dealloc;
- (void)setHidden:(char)arg0;
- (void)didMoveToWindow;
- (void)setFrame:(struct CGRect)arg0;
- (void)setBounds:(struct CGRect)arg0;
- (struct UIEdgeInsets)edgeInsets;
- (void)willMoveToWindow:(NSObject *)arg0;
- (void).cxx_destruct;
- (char)rendersInBackground;
- (void)setRendersInBackground:(char)arg0;
- (char)isPointValidForGesturing:(struct CGPoint)arg0;

@end

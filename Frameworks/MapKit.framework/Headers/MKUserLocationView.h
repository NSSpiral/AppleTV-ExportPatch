/* Runtime dump - MKUserLocationView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKUserLocationView : MKAnnotationView <VKPuckAnimatorTarget>
{
    VKAnnotationMarker * _marker;
    int _zoomDirection;
    CALayer * _pulseLayer;
    CALayer * _accuracyLayer;
    char _allowsPulse;
    char _shouldPulse;
    char _allowsHeadingIndicator;
    char _shouldDisplayHeading;
    double _headingAccuracy;
    CALayer * _headingLayer;
    char _allowsAccuracyRing;
    char _stale;
    char _effectsEnabled;
    double _presentationCourse;
    double _locationAccuracy;
    CLLocation * _lastLocation;
}

@property (readonly, nonatomic) char stale;
@property (nonatomic) char allowsPulse;
@property (nonatomic) char allowsAccuracyRing;
@property (nonatomic) char allowsHeadingIndicator;
@property (nonatomic) char shouldDisplayHeading;
@property (nonatomic) double headingAccuracy;
@property (readonly, nonatomic) double locationAccuracy;
@property (nonatomic) float opacity;
@property (nonatomic) char effectsEnabled;
@property (nonatomic) int zoomDirection;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) double presentationCourse;

+ (float)accuracyDiameter:(float)arg0;
+ (MKUserLocationView *)allocWithZone:(struct _NSZone *)arg0;
+ (unsigned int)_zIndex;
+ (unsigned int)_selectedZIndex;

- (void)setShouldDisplayHeading:(char)arg0;
- (void)setZoomDirection:(int)arg0;
- (void)setEffectsEnabled:(char)arg0;
- (void)setZoomDirection:(int)arg0 deltaScale:(float)arg1;
- (void)updateStateFromLocation:(NSObject *)arg0 duration:(double)arg1;
- (NSObject *)_vkMarker;
- (void)locationManagerFailedToUpdateLocation;
- (void)setHeadingAccuracy:(double)arg0;
- (void)_updateFromMap;
- (void)_setPresentationCoordinate:(struct ?)arg0;
- (void)_setAnimatingToCoordinate:(char)arg0;
- (void)_setTracking:(char)arg0;
- (struct CGRect)_mapkit_visibleRect;
- (void)_setMapPitchRadians:(float)arg0;
- (char)_tracking;
- (id)_layerToMatchAccuracyRing;
- (void)_resetLayerToMatchAccuracyRing;
- (CALayer *)_pulseLayer;
- (NSObject *)_pulseAnimation;
- (id)_animationToSynchronizePulse:(id *)arg0;
- (char)isEffectsEnabled;
- (void)_pausePulse;
- (void)_resumePulse;
- (void)_updatePulse;
- (struct UIImage *)_headingImageForAccuracy:(SEL)arg0 anchorPoint:(double)arg1;
- (void)_updateHeadingLayer;
- (CALayer *)_baseLayer;
- (void)setLocationAccuracy:(double)arg0 duration:(double)arg1;
- (void)_updateLayers;
- (UIColor *)_pulseTintColor;
- (void)setAllowsPulse:(char)arg0;
- (void)setAllowsAccuracyRing:(char)arg0;
- (void)setAllowsHeadingIndicator:(char)arg0;
- (NSObject *)_accuracyAnimation:(float)arg0;
- (int)zoomDirection;
- (char)allowsPulse;
- (char)allowsHeadingIndicator;
- (char)shouldDisplayHeading;
- (char)allowsAccuracyRing;
- (double)locationAccuracy;
- (void)didMoveToWindow;
- (MKUserLocationView *)init;
- (void)layoutSubviews;
- (float)opacity;
- (void)setOpacity:(float)arg0;
- (void)setSelected:(char)arg0 animated:(char)arg1;
- (void).cxx_destruct;
- (double)headingAccuracy;
- (void)setAnimatingToCoordinate:(char)arg0;
- (void)setPresentationCoordinate:(struct ?)arg0;
- (MKUserLocationView *)initWithAnnotation:(<MKAnnotation> *)arg0 reuseIdentifier:(NSString *)arg1;
- (double)presentationCourse;
- (void)setPresentationCourse:(double)arg0;
- (char)isStale;

@end

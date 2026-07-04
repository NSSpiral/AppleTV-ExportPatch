/* Runtime dump - MKModernUserLocationView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKModernUserLocationView : MKUserLocationView
{
    CALayer * _innerCircleLayer;
    char _shouldInnerPulse;
    struct UIImage * _innerImageMask;
    char _rotateInnerImageToMatchCourse;
    CALayer * _baseLayer;
    CALayer * _baseDimmingLayer;
}

@property (nonatomic) char shouldInnerPulse;
@property (retain, nonatomic) UIImage * innerImageMask;
@property (nonatomic) char rotateInnerImageToMatchCourse;

+ (float)baseDiameter;
+ (float)innerDiameter;

- (void)setEffectsEnabled:(char)arg0;
- (void)_setMapDisplayStyle:(unsigned int)arg0;
- (void)_setMapRotationRadians:(float)arg0;
- (void)_setMapType:(unsigned int)arg0;
- (void)_setPresentationCourse:(double)arg0;
- (id)_layerToMatchAccuracyRing;
- (void)_resetLayerToMatchAccuracyRing;
- (CALayer *)_pulseLayer;
- (NSObject *)_pulseAnimation;
- (id)_animationToSynchronizePulse:(id *)arg0;
- (struct UIImage *)_headingImageForAccuracy:(SEL)arg0 anchorPoint:(double)arg1;
- (CALayer *)_baseLayer;
- (void)_updateLayers;
- (void)_setupLayers;
- (void)_updateInnerMaskLayer;
- (void)setShouldInnerPulse:(char)arg0;
- (void)_updateAccuracyColors;
- (NSObject *)_innerPulseAnimation;
- (void)_updatePulseAnimation;
- (void)_updateBaseImage;
- (void)_updateInnerImage;
- (void)_updatePulseColor;
- (CALayer *)_baseDimmingLayer;
- (struct CGColor *)_accuracyFillColor;
- (void)_updateInnerCourseRotation;
- (void)setInnerImageMask:(struct UIImage *)arg0;
- (void)setRotateInnerImageToMatchCourse:(char)arg0;
- (char)shouldInnerPulse;
- (UIImage *)innerImageMask;
- (char)rotateInnerImageToMatchCourse;
- (void)didMoveToWindow;
- (void)tintColorDidChange;
- (void)_dealloc;
- (void).cxx_destruct;
- (MKModernUserLocationView *)initWithAnnotation:(<MKAnnotation> *)arg0 reuseIdentifier:(NSString *)arg1;

@end

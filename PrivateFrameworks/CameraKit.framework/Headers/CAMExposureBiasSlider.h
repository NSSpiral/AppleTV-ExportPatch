/* Runtime dump - CAMExposureBiasSlider
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMExposureBiasSlider : UIView
{
    char _suspendTrackFadeOut;
    float _exposureBiasMin;
    float _exposureBiasMax;
    float _exposureBiasValue;
    CAMExposureBiasSliderThumb * __thumbView;
    UIView * __minTrackView;
    UIView * __maxTrackView;
    UIView * __minTrackMaskView;
    UIView * __maxTrackMaskView;
    double __lastInteractionTime;
}

@property (nonatomic) float exposureBiasMin;
@property (nonatomic) float exposureBiasMax;
@property (nonatomic) float exposureBiasValue;
@property (nonatomic) char suspendTrackFadeOut;
@property (readonly, nonatomic) float thumbMaxExtension;
@property (readonly, retain, nonatomic) CAMExposureBiasSliderThumb * _thumbView;
@property (readonly, retain, nonatomic) UIView * _minTrackView;
@property (readonly, retain, nonatomic) UIView * _maxTrackView;
@property (readonly, retain, nonatomic) UIView * _minTrackMaskView;
@property (readonly, retain, nonatomic) UIView * _maxTrackMaskView;
@property (readonly, nonatomic) double _lastInteractionTime;

- (CAMExposureBiasSlider *)initWithFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (UIView *)_minTrackView;
- (UIView *)_maxTrackView;
- (void).cxx_destruct;
- (float)_normalizedExposureValue;
- (void)updateLastInteractionTime;
- (void)_cancelDelayedDim;
- (void)_scheduleDelayedDim;
- (double)_lastInteractionTime;
- (void)setExposureBiasMin:(float)arg0;
- (void)setExposureBiasMax:(float)arg0;
- (void)setExposureBiasValue:(float)arg0;
- (void)_updateForChangedNormalizedExposureValue;
- (struct CGPoint)_sunCenterForNormalizedValue:(float)arg0;
- (float)exposureBiasMin;
- (float)exposureBiasMax;
- (float)exposureBiasValue;
- (void)_animateTrackAlpha:(float)arg0 withDuration:(double)arg1;
- (float)_trackAlpha;
- (char)suspendTrackFadeOut;
- (void)_dimTrackForInactivity;
- (float)thumbMaxExtension;
- (void)setSuspendTrackFadeOut:(char)arg0;
- (void)forceTrackDimmed;
- (CAMExposureBiasSliderThumb *)_thumbView;
- (UIView *)_minTrackMaskView;
- (UIView *)_maxTrackMaskView;

@end

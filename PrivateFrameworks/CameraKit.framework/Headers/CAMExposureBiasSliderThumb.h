/* Runtime dump - CAMExposureBiasSliderThumb
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMExposureBiasSliderThumb : UIView
{
    float _normalizedExposureValue;
}

@property (nonatomic) float normalizedExposureValue;
@property (readonly, nonatomic) float maxRadius;

- (CAMExposureBiasSliderThumb *)initWithFrame:(struct CGRect)arg0;
- (void)drawRect:(struct CGRect)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (float)_sunRadius;
- (float)_sunRaySpacing;
- (float)_sunRayLength;
- (float)_interpolatedValueWithMin:(float)arg0 mid:(float)arg1 max:(float)arg2;
- (void)setNormalizedExposureValue:(float)arg0;
- (float)maxRadius;
- (float)normalizedExposureValue;

@end

/* Runtime dump - BLUnderwaterBalanceFilter
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLUnderwaterBalanceFilter : CIFilter
{
    char _needsReprocess;
    float _lastDepthStrength;
    float _lastWaterBlend;
    CIImage * _inputImage;
    NSNumber * _inputDepthStrength;
    NSNumber * _inputWaterBlend;
    CIVector * _inputAverageLinearColor;
    CIFilter * _underwaterBalanceFilter;
    CIFilter * _underwaterGamma1Filter;
    CIFilter * _underwaterGamma2Filter;
    CIFilter * _underwaterColorMatrixRGB2YIQFilter;
    CIFilter * _underwaterColorMatrixYFilter;
    CIFilter * _underwaterColorMatrixIQFilter;
    CIFilter * _underwaterColorMatrixScaleFilter;
    CIFilter * _underwaterAdditionFilter;
    CIFilter * _underwaterColorMatrixYIQ2RGBFilter;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (copy, nonatomic) NSNumber * inputDepthStrength;
@property (copy, nonatomic) NSNumber * inputWaterBlend;
@property (copy, nonatomic) CIVector * inputAverageLinearColor;
@property (retain, nonatomic) CIFilter * underwaterBalanceFilter;
@property (retain, nonatomic) CIFilter * underwaterGamma1Filter;
@property (retain, nonatomic) CIFilter * underwaterGamma2Filter;
@property (retain, nonatomic) CIFilter * underwaterColorMatrixRGB2YIQFilter;
@property (retain, nonatomic) CIFilter * underwaterColorMatrixYFilter;
@property (retain, nonatomic) CIFilter * underwaterColorMatrixIQFilter;
@property (retain, nonatomic) CIFilter * underwaterColorMatrixScaleFilter;
@property (retain, nonatomic) CIFilter * underwaterAdditionFilter;
@property (retain, nonatomic) CIFilter * underwaterColorMatrixYIQ2RGBFilter;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setDefaults;
- (BLUnderwaterBalanceFilter *)init;
- (void).cxx_destruct;
- (void)setInputDepthStrength:(NSNumber *)arg0;
- (void)setInputWaterBlend:(NSNumber *)arg0;
- (CIFilter *)underwaterBalanceFilter;
- (void)setUnderwaterBalanceFilter:(CIFilter *)arg0;
- (CIFilter *)underwaterGamma1Filter;
- (void)setUnderwaterGamma1Filter:(CIFilter *)arg0;
- (void)setUnderwaterGamma2Filter:(CIFilter *)arg0;
- (CIFilter *)underwaterGamma2Filter;
- (void)setUnderwaterColorMatrixRGB2YIQFilter:(CIFilter *)arg0;
- (CIFilter *)underwaterColorMatrixRGB2YIQFilter;
- (void)setUnderwaterColorMatrixYFilter:(CIFilter *)arg0;
- (CIFilter *)underwaterColorMatrixYFilter;
- (void)setUnderwaterColorMatrixIQFilter:(CIFilter *)arg0;
- (CIFilter *)underwaterColorMatrixIQFilter;
- (void)setUnderwaterAdditionFilter:(CIFilter *)arg0;
- (void)setUnderwaterColorMatrixScaleFilter:(CIFilter *)arg0;
- (CIFilter *)underwaterColorMatrixScaleFilter;
- (void)setUnderwaterColorMatrixYIQ2RGBFilter:(CIFilter *)arg0;
- (CIFilter *)underwaterColorMatrixYIQ2RGBFilter;
- (CIFilter *)underwaterAdditionFilter;
- (void)setInputAverageLinearColor:(CIVector *)arg0;
- (NSNumber *)inputDepthStrength;
- (NSNumber *)inputWaterBlend;
- (CIVector *)inputAverageLinearColor;
- (CIImage *)outputImage;

@end

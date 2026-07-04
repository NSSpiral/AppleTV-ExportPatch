/* Runtime dump - BLPhotoFiltersFilter
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLPhotoFiltersFilter : CIFilter
{
    char _needsReprocess;
    int _lastAmount;
    float _lastStrength;
    CIImage * _inputImage;
    NSNumber * _inputAmount;
    NSNumber * _inputStrength;
    CIFilter * _ciPhotoEffectFilter;
    CIFilter * _ciMatrix;
    CIFilter * _maskFilter;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (copy, nonatomic) NSNumber * inputAmount;
@property (copy, nonatomic) NSNumber * inputStrength;
@property (retain, nonatomic) CIFilter * ciPhotoEffectFilter;
@property (retain, nonatomic) CIFilter * ciMatrix;
@property (retain, nonatomic) CIFilter * maskFilter;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (void)setInputAmount:(NSNumber *)arg0;
- (NSNumber *)inputAmount;
- (NSNumber *)inputStrength;
- (void)setInputStrength:(NSNumber *)arg0;
- (void)setDefaults;
- (BLPhotoFiltersFilter *)init;
- (void).cxx_destruct;
- (void)setMaskFilter:(CIFilter *)arg0;
- (CIFilter *)maskFilter;
- (CIFilter *)ciMatrix;
- (void)setCiMatrix:(CIFilter *)arg0;
- (void)setCiPhotoEffectFilter:(CIFilter *)arg0;
- (CIFilter *)ciPhotoEffectFilter;
- (CIImage *)outputImage;

@end

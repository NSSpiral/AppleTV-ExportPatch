/* Runtime dump - CIRedEyeCorrections
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIRedEyeCorrections : CIFilter <_CIFilterProperties>
{
    CIImage * inputImage;
    NSString * inputCameraModel;
    NSArray * inputCorrectionInfo;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (copy, nonatomic) NSString * inputCameraModel;
@property (copy, nonatomic) NSArray * inputCorrectionInfo;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (char)_isIdentity;
- (void)setInputCorrectionInfo:(NSArray *)arg0;
- (void)setInputCameraModel:(NSString *)arg0;
- (NSString *)inputCameraModel;
- (NSArray *)inputCorrectionInfo;
- (void)setDefaults;
- (NSDictionary *)_outputProperties;
- (NSDictionary *)_initFromProperties:(NSDictionary *)arg0;
- (CIImage *)outputImage;

@end

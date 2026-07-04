/* Runtime dump - CIToneCurve
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIToneCurve : CIFilter <_CIFilterProperties>
{
    CIImage * inputImage;
    CIVector * inputPoint0;
    CIVector * inputPoint1;
    CIVector * inputPoint2;
    CIVector * inputPoint3;
    CIVector * inputPoint4;
    CIImage * _curveImage;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (copy, nonatomic) CIVector * inputPoint0;
@property (copy, nonatomic) CIVector * inputPoint1;
@property (copy, nonatomic) CIVector * inputPoint2;
@property (copy, nonatomic) CIVector * inputPoint3;
@property (copy, nonatomic) CIVector * inputPoint4;

+ (NSArray *)customAttributes;
+ (CIToneCurve *)curveImageFromPoints:(struct CGPoint *)arg0;
+ (void)splineCurveTable:(float *)arg0 tableSize:(int)arg1 gamma:(float)arg2 from:(struct CGPoint *)arg3;
+ (CIToneCurve *)curveImageFromPoints:(struct CGPoint *)arg0 linear:(struct CGPoint)arg1;

- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (char)_isIdentity;
- (void)setInputPoint0:(CIVector *)arg0;
- (void)setInputPoint1:(CIVector *)arg0;
- (void)setInputPoint2:(CIVector *)arg0;
- (void)setInputPoint3:(CIVector *)arg0;
- (void)setInputPoint4:(CIVector *)arg0;
- (id)_kernel16;
- (CIVector *)inputPoint0;
- (CIVector *)inputPoint1;
- (CIVector *)inputPoint2;
- (CIVector *)inputPoint3;
- (CIVector *)inputPoint4;
- (void)setDefaults;
- (void)dealloc;
- (NSDictionary *)_outputProperties;
- (NSDictionary *)_initFromProperties:(NSDictionary *)arg0;
- (CIImage *)outputImage;

@end

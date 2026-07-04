/* Runtime dump - CIGlassDistortion
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIGlassDistortion : CIFilter
{
    CIImage * inputImage;
    CIImage * inputTexture;
    CIVector * inputCenter;
    NSNumber * inputScale;
}

@property (retain, nonatomic) CIImage * inputImage;
@property (retain, nonatomic) CIImage * inputTexture;
@property (retain, nonatomic) CIVector * inputCenter;
@property (retain, nonatomic) NSNumber * inputScale;

+ (NSArray *)customAttributes;

- (NSArray *)customAttributes;
- (CIImage *)inputImage;
- (void)setInputImage:(CIImage *)arg0;
- (struct CGRect)regionOf:(GEORegionalResourceRegion *)arg0 destRect:(SEL)arg1 userInfo:(int)arg2;
- (CIKernel *)_kernel;
- (CIVector *)inputCenter;
- (void)setInputCenter:(CIVector *)arg0;
- (CIImage *)inputTexture;
- (void)setInputTexture:(CIImage *)arg0;
- (void)setDefaults;
- (NSNumber *)inputScale;
- (void)setInputScale:(NSNumber *)arg0;
- (CIImage *)outputImage;

@end

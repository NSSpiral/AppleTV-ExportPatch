/* Runtime dump - CIImage
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIImage : NSObject <NSCoding, NSCopying>
{
    void * _priv;
}

+ (NSData *)imageWithBitmapData:(NSData *)arg0 bytesPerRow:(unsigned long)arg1 size:(struct CGSize)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4;
+ (NSDictionary *)imageWithInternalRepresentation:(void *)arg0;
+ (NSObject *)imageWithIOSurface:(struct __IOSurface *)arg0 options:(NSDictionary *)arg1;
+ (UIImage *)imageWithCGImage:(struct CGImage *)arg0 options:(NSDictionary *)arg1;
+ (NSObject *)imageWithCVPixelBuffer:(struct __CVBuffer *)arg0 options:(NSDictionary *)arg1;
+ (NSURL *)imageWithContentsOfURL:(NSURL *)arg0 options:(NSDictionary *)arg1;
+ (NSString *)imageWithContentsOfFile:(NSString *)arg0 options:(NSDictionary *)arg1;
+ (UIImage *)emptyImage;
+ (NSObject *)imageWithIOSurface:(struct __IOSurface *)arg0;
+ (NSData *)imageWithBitmapData:(NSData *)arg0 bytesPerRow:(unsigned long)arg1 size:(struct CGSize)arg2 format:(int)arg3 options:(NSDictionary *)arg4;
+ (NSObject *)imageWithTexture:(unsigned int)arg0 size:(struct CGSize)arg1 flipped:(char)arg2 colorSpace:(struct CGColorSpace *)arg3;
+ (NSObject *)imageWithTexture:(unsigned int)arg0 size:(struct CGSize)arg1 options:(NSDictionary *)arg2;
+ (NSObject *)imageWithCVPixelBuffer:(struct __CVBuffer *)arg0;
+ (UIColor *)imageWithColor:(UIColor *)arg0;
+ (UIImage *)noiseImage;
+ (CIImage *)noiseImagePadded;
+ (NSData *)imageWithData:(NSData *)arg0 options:(NSDictionary *)arg1;
+ (UIImage *)imageWithCGImage:(struct CGImage *)arg0;
+ (NSString *)imageWithContentsOfFile:(NSString *)arg0;
+ (NSData *)imageWithData:(NSData *)arg0;
+ (NSURL *)imageWithContentsOfURL:(NSURL *)arg0;

- (id)bl_moveAlphaToBlue;
- (id)bl_moveBlueToAlpha;
- (NSObject *)bl_imageFromAlphaChannel;
- (NSObject *)bl_imageToAlphaChannel;
- (CIImage *)initWithImage:(UIImage *)arg0;
- (CIImage *)initWithImage:(UIImage *)arg0 options:(NSDictionary *)arg1;
- (UIImage *)filteredImage:(UIImage *)arg0 keysAndValues:(NSArray *)arg1;
- (void *)_internalRepresentation;
- (NSDictionary *)_initWithInternalRepresentation:(void *)arg0;
- (NSObject *)_imageByMatchingColorSpaceToWorkingSpace:(struct CGColorSpace *)arg0;
- (CIImage *)initWithIOSurface:(struct __IOSurface *)arg0 options:(NSDictionary *)arg1;
- (NSObject *)_initWithIOSurface:(struct __IOSurface *)arg0 options:(NSDictionary *)arg1;
- (UIImage *)_initNaiveWithCGImage:(struct CGImage *)arg0 options:(NSDictionary *)arg1;
- (CIImage *)initWithBitmapData:(NSData *)arg0 bytesPerRow:(unsigned long)arg1 size:(struct CGSize)arg2 format:(int)arg3 options:(NSDictionary *)arg4;
- (CIImage *)initWithBitmapData:(NSData *)arg0 bytesPerRow:(unsigned long)arg1 size:(struct CGSize)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (NSData *)_initWithBitmapData:(NSData *)arg0 bytesPerRow:(unsigned long)arg1 size:(struct CGSize)arg2 format:(int)arg3 options:(NSDictionary *)arg4;
- (CIImage *)initWithTexture:(unsigned int)arg0 size:(struct CGSize)arg1 options:(NSDictionary *)arg2;
- (CIImage *)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 options:(NSDictionary *)arg1;
- (CIImage *)initWithColorR:(float)arg0 G:(float)arg1 B:(float)arg2 A:(float)arg3;
- (struct CGAffineTransform)imageTransformForOrientation:(int)arg0;
- (CIImage *)initWithCGImageSource:(struct CGImageSource *)arg0 index:(unsigned long)arg1 options:(NSDictionary *)arg2;
- (CIImage *)initWithContentsOfURL:(NSURL *)arg0 options:(NSDictionary *)arg1;
- (CIImage *)initWithContentsOfFile:(NSString *)arg0 options:(NSDictionary *)arg1;
- (CIImage *)initWithCVPixelBuffer:(struct __CVBuffer *)arg0;
- (id)imageByClampingToExtent;
- (UIImage *)imageByCompositingOverImage:(UIImage *)arg0;
- (id)_imageByPremultiplying;
- (id)_imageByUnpremultiplying;
- (id)_imageByApplyingGamma:(double)arg0;
- (id)_imageByApplyingBlur:(double)arg0;
- (NSObject *)_imageByMatchingWorkingSpaceToColorSpace:(struct CGColorSpace *)arg0;
- (NSObject *)_imageByMatchingColorSpaceWorkingSpace:(struct CGColorSpace *)arg0;
- (id)_imageByRenderingToIntermediate;
- (NSObject *)imageByApplyingFilter:(NSObject *)arg0 withInputParameters:(NSDictionary *)arg1;
- (void)printTree;
- (NSDictionary *)TIFFRepresentation;
- (struct CGRect)regionOfInterestForImage:(UIImage *)arg0 inRect:(SEL)arg1;
- (id)_autoRedEyeFilterWithFeatures:(id)arg0 imageProperties:(NSDictionary *)arg1 context:(NSObject *)arg2 options:(NSDictionary *)arg3;
- (id)_scaleImageToMaxDimension:(unsigned int)arg0;
- (NSObject *)getAutoRotateFilter:(NSObject *)arg0 ciImage:(CIImage *)arg1 rgbRows:(NSArray *)arg2 inputRect:(struct CGRect)arg3 rotateCropRect:(struct CGSize)arg4;
- (void)getAutocropRect:(NSObject *)arg0 rotateXfrm:(struct CGAffineTransform)arg1 inputImageRect:(struct CGRect)arg2 clipRect:(struct CGSize)arg3;
- (NSDictionary *)autoAdjustmentFiltersWithOptions:(NSDictionary *)arg0;
- (NSDictionary *)autoAdjustmentFiltersWithImageProperties:(NSDictionary *)arg0 options:(NSDictionary *)arg1;
- (NSObject *)_dictForFeature:(NSObject *)arg0 scale:(float)arg1 imageHeight:(float)arg2;
- (NSArray *)autoAdjustmentFilters;
- (id)autoRedEyeFilterWithFeatures:(id)arg0 imageProperties:(NSDictionary *)arg1 options:(NSDictionary *)arg2;
- (id)autoRedEyeFilterWithFeatures:(id)arg0 options:(NSDictionary *)arg1;
- (NSObject *)smartBlackAndWhiteStatistics;
- (id)autoRotateFilterFFT:(id)arg0 image:(struct CGImage *)arg1 inputRect:(struct CGRect)arg2;
- (struct CGPoint)calcIntersection:(struct CGPoint)arg0 slope1:(struct CGPoint)arg1 pt2:(struct CGPoint)arg2 slope2:(struct CGPoint)arg3;
- (CIImage *)initWithTexture:(unsigned int)arg0 size:(struct CGSize)arg1 flipped:(char)arg2 colorSpace:(struct CGColorSpace *)arg3;
- (void)dealloc;
- (CIImage *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CIImage *)copyWithZone:(struct _NSZone *)arg0;
- (CIImage *)initWithContentsOfFile:(NSString *)arg0;
- (CIImage *)initWithData:(NSData *)arg0;
- (CIImage *)initWithCGImage:(struct CGImage *)arg0;
- (struct CGRect)extent;
- (CIImage *)initWithIOSurface:(struct __IOSurface *)arg0;
- (CIImage *)initWithCGImage:(struct CGImage *)arg0 options:(NSDictionary *)arg1;
- (CIImage *)initWithColor:(UIColor *)arg0;
- (CIImage *)initWithData:(NSData *)arg0 options:(NSDictionary *)arg1;
- (NSDictionary *)properties;
- (CIImage *)initWithContentsOfURL:(NSURL *)arg0;
- (id)imageByApplyingOrientation:(int)arg0;
- (NSString *)imageByApplyingTransform:(struct CGAffineTransform)arg0;
- (NSObject *)imageByCroppingToRect:(struct CGRect)arg0;
- (NSDictionary *)smartToneStatistics;
- (id)smartToneAdjustmentsForValue:(double)arg0 andStatistics:(NSObject *)arg1;
- (NSDictionary *)smartColorStatistics;
- (id)smartColorAdjustmentsForValue:(double)arg0 andStatistics:(NSObject *)arg1;
- (id)smartBlackAndWhiteAdjustmentsForValue:(double)arg0 andStatistics:(NSObject *)arg1;

@end

/* Runtime dump - AEVConversionUtils
 * Image: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

@interface AEVConversionUtils : NSObject

+ (char *)convertCGImageToGrayscale:(struct CGImage *)arg0 usingGCD:(char)arg1 dispatchQueue:(struct __shared_weak_count *)arg2;
+ (char *)convertCGImageToBufferUsingDataProvider:(struct CGImage *)arg0 usingGCD:(char)arg1 dispatchQueue:(struct __shared_weak_count *)arg2;
+ (char *)convertCGImageToBufferUsingGrayDevice:(struct CGImage *)arg0;
+ (char *)convertCGImageToGrayscale:(struct CGImage *)arg0;
+ (char *)convertCGImageToBufferUsingRGBDevice:(struct CGImage *)arg0 usingGCD:(char)arg1 dispatchQueue:(struct __shared_weak_count *)arg2;
+ (struct CGImage *)createImageFromGrayscaleData:(char *)arg0 ofWidth:(int)arg1 andHeight:(int)arg2;

@end

/* Runtime dump - FCRImageConversionUtils
 * Image: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

@interface FCRImageConversionUtils : NSObject

+ (char *)convertCGImageToBufferUsingDataProvider:(struct CGImage *)arg0 usingGCD:(char)arg1 dispatchQueue:(struct __shared_weak_count *)arg2;
+ (char *)convertCGImageToBufferUsingRGBDevice:(struct CGImage *)arg0 usingGCD:(char)arg1 dispatchQueue:(struct __shared_weak_count *)arg2 cacheContext:(char)arg3;
+ (char *)convertCGImageToBufferUsingGrayDevice:(struct CGImage *)arg0;
+ (char *)convertCGImageToGrayscale:(struct CGImage *)arg0 usingGCD:(char)arg1 cacheContext:(char)arg2;

@end

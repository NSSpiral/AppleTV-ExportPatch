/* Runtime dump - CAMTimelapseJPEGReader
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMTimelapseJPEGReader : NSObject

+ (NSString *)newDataFromFilePath:(NSString *)arg0;
+ (struct __CVBuffer *)createPixelBufferFromData:(NSData *)arg0 applyTransform:(char)arg1 maxPixelSize:(int)arg2 useBGRA:(char)arg3;
+ (NSObject *)_decodeOptionsWithMaxPixelSize:(int)arg0 applyTransform:(char)arg1 useBGRA:(char)arg2;
+ (struct CGImage *)createCGImageFromData:(NSData *)arg0 applyTransform:(char)arg1 maxPixelSize:(int)arg2 useBGRA:(char)arg3;

@end

/* Runtime dump - MFHardwareJPEGScaler
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFHardwareJPEGScaler : NSObject
{
    struct __IOSurface * _ioSurfaceRef;
    NSData * _imageData;
    struct __CFDictionary * _imageProperties;
    char _canHardwareScaleImage;
}

- (MFHardwareJPEGScaler *)initWithImageData:(NSData *)arg0 imageSource:(struct CGImageSource *)arg1;
- (char)_isJPEGImage:(struct CGImageSource *)arg0;
- (char)_decodeImageToIOSurface;
- (char)scaleImageToFitLargestDimension:(id)arg0 dataConsumer:(NSObject *)arg1;
- (void)dealloc;

@end

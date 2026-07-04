/* Runtime dump - CIBurstYUVImage
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstYUVImage : NSObject
{
    char * Ybuffer;
    char * Cbuffer;
    int width;
    int height;
    int bytesPerRow;
    struct __CFData * dataPtr;
    struct __CVBuffer * pixelBuffer;
    struct __IOSurface * ioSurf;
}

@property int width;
@property int height;
@property int bytesPerRow;
@property char * Ybuffer;
@property char * Cbuffer;

- (CIBurstYUVImage *)initWithCGImage:(struct CGImage *)arg0 maxDimension:(int)arg1;
- (char *)Ybuffer;
- (int)bytesPerRow;
- (char *)Cbuffer;
- (CIBurstYUVImage *)initWithIOSurface:(struct __IOSurface *)arg0 maxDimension:(int)arg1;
- (void)convertRGBAToYUV420:(char *)arg0 rgbaBytesPerRow:(int)arg1;
- (CIBurstYUVImage *)initWithCIImage:(UIImage *)arg0 ctx:(id)arg1 maxDimension:(int)arg2;
- (struct __CVBuffer *)pixelBuffer;
- (void)setYbuffer:(char *)arg0;
- (void)setCbuffer:(char *)arg0;
- (void)setBytesPerRow:(int)arg0;
- (void)dealloc;
- (int)width;
- (int)height;
- (void)setWidth:(int)arg0;
- (void)setHeight:(int)arg0;

@end

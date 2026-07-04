/* Runtime dump - FCRImage
 * Image: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

@interface FCRImage : NSObject
{
    unsigned int width;
    unsigned int height;
    unsigned int bytesPerRow;
    char * rawDataBuffer;
    char * alignedDataBuffer;
    char freeBufferWhenDone;
}

@property unsigned int width;
@property unsigned int height;
@property unsigned int bytesPerRow;

- (unsigned int)bytesPerRow;
- (void)setBytesPerRow:(unsigned int)arg0;
- (void)dealloc;
- (unsigned int)width;
- (unsigned int)height;
- (void)setWidth:(unsigned int)arg0;
- (void)setHeight:(unsigned int)arg0;
- (FCRImage *)initWithWidth:(unsigned int)arg0 height:(unsigned int)arg1 bytesPerRow:(unsigned int)arg2 buffer:(char *)arg3 freeBufferWhenDone:(char)arg4;
- (char *)getAlignedImageData;

@end

/* Runtime dump - VideoScaler
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VideoScaler : NSObject
{
    char * _tempBuffer1;
    char * _tempBuffer2;
    unsigned long _tempBufferWidth;
    unsigned long _tempBufferHeight;
    struct __IOSurfaceAccelerator * _ioSurfaceAccelerator;
}

- (void)dealloc;
- (VideoScaler *)init;
- (long)rotatePixelBuffer:(struct __CVBuffer *)arg0 withPixelFormat:(unsigned long)arg1 usingPixelBufferPool:(struct __CVPixelBufferPool *)arg2 andStoreTo:(struct __CVBuffer * *)arg3;
- (long)convertAndScalePixelBuffer:(struct __CVBuffer *)arg0 toWidth:(int)arg1 toHeight:(int)arg2 withPixelFormat:(unsigned long)arg3 usingPixelBufferPool:(struct __CVPixelBufferPool *)arg4 andStoreTo:(struct __CVBuffer * *)arg5;

@end

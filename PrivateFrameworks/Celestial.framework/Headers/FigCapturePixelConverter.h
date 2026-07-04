/* Runtime dump - FigCapturePixelConverter
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCapturePixelConverter : NSObject
{
    struct OpaqueVTPixelTransferSession * _transferSession;
    BWPixelBufferPool * _pool;
    BWVideoFormat * _outputFormat;
    struct opaqueCMFormatDescription * _outputFormatDescription;
    int _poolCapacity;
}

+ (void)initialize;

- (void)dealloc;
- (FigCapturePixelConverter *)init;
- (void)_purgeResources;
- (long)updateOutputPixelFormat:(unsigned long)arg0 dimensions:(struct ?)arg1 poolCapacity:(int)arg2;
- (long)convertSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 outputSampleBuffer:(struct opaqueCMSampleBuffer * *)arg1;
- (long)_buildBufferPoolWithFormat:(unsigned long)arg0 dimensions:(struct ?)arg1 poolCapacity:(int)arg2;
- (long)_buildTransferSession;

@end

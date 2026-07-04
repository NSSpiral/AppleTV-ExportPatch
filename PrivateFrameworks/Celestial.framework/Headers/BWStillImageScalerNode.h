/* Runtime dump - BWStillImageScalerNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageScalerNode : BWNode
{
    BWVideoFormat * _outputFormat;
    struct opaqueCMFormatDescription * _outputFormatDescription;
    int _poolCapacity;
    BWPixelBufferPool * _pool;
    struct OpaqueVTPixelTransferSession * _scalingSession;
    char _defersCropToJPEGEncoderWhenPossible;
}

+ (void)initialize;

- (void)dealloc;
- (BWStillImageScalerNode *)init;
- (NSString *)nodeType;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)didSelectFormat:(NSString *)arg0 forInput:(NSObject *)arg1;
- (BWStillImageScalerNode *)initWithPoolCapacity:(int)arg0;
- (void)_purgeResources;
- (char)_updatePoolWithSettings:(NSDictionary *)arg0 normalizedInputCropRect:(struct CGRect)arg1 scaledDenormalizedInputCropRectOut:(struct CGSize)arg2;
- (long)_rebuildBufferPoolWithWidth:(unsigned long)arg0 height:(unsigned long)arg1;
- (long)_buildScalingSession;
- (void)setDefersCropToJPEGEncoderWhenPossible:(char)arg0;
- (char)defersCropToJPEGEncoderWhenPossible;

@end

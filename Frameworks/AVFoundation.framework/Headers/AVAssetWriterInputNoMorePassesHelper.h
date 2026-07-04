/* Runtime dump - AVAssetWriterInputNoMorePassesHelper
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputNoMorePassesHelper : AVAssetWriterInputHelper
{
    AVAssetWriterInputWritingHelper * _writingHelper;
}

- (AVAssetWriterInputNoMorePassesHelper *)initWithConfigurationState:(AVAssetWriterInputConfigurationState *)arg0;
- (struct __CVPixelBufferPool *)pixelBufferPool;
- (char)isReadyForMoreMediaData;
- (char)canPerformMultiplePasses;
- (AVAssetWriterInputPassDescription *)currentPassDescription;
- (void)requestMediaDataWhenReadyOnQueue:(NSObject *)arg0 usingBlock:(id /* block */)arg1;
- (char)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg0;
- (char)appendPixelBuffer:(struct __CVBuffer *)arg0 withPresentationTime:(struct ?)arg1;
- (void)markCurrentPassAsFinished;
- (AVAssetWriterInputNoMorePassesHelper *)initWithWritingHelper:(AVAssetWriterInputWritingHelper *)arg0;
- (void)dealloc;
- (int)status;
- (void)markAsFinished;

@end

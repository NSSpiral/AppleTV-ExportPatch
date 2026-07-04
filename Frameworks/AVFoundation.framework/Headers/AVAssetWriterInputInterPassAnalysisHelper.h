/* Runtime dump - AVAssetWriterInputInterPassAnalysisHelper
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputInterPassAnalysisHelper : AVAssetWriterInputHelper
{
    AVAssetWriterInputWritingHelper * _writingHelper;
    AVAssetWriterInputPassDescription * _initialPassDescription;
}

- (AVAssetWriterInputInterPassAnalysisHelper *)initWithConfigurationState:(AVAssetWriterInputConfigurationState *)arg0;
- (struct __CVPixelBufferPool *)pixelBufferPool;
- (char)isReadyForMoreMediaData;
- (char)canPerformMultiplePasses;
- (AVAssetWriterInputPassDescription *)currentPassDescription;
- (char)shouldRespondToInitialPassDescription;
- (void)requestMediaDataWhenReadyOnQueue:(NSObject *)arg0 usingBlock:(id /* block */)arg1;
- (char)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg0;
- (char)appendPixelBuffer:(struct __CVBuffer *)arg0 withPresentationTime:(struct ?)arg1;
- (void)markCurrentPassAsFinished;
- (AVAssetWriterInputInterPassAnalysisHelper *)initWithWritingHelper:(AVAssetWriterInputWritingHelper *)arg0;
- (void)startPassAnalysis;
- (void)dealloc;
- (int)status;
- (void)markAsFinished;

@end

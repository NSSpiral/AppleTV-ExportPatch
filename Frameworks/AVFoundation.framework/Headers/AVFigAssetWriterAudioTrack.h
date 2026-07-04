/* Runtime dump - AVFigAssetWriterAudioTrack
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigAssetWriterAudioTrack : AVFigAssetWriterTrack
{
    NSMutableArray * _pendingAudioSampleBuffers;
}

- (void)prepareToEndSession;
- (char)addSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 error:(id *)arg1;
- (char)markEndOfDataReturningError:(id *)arg0;
- (AVFigAssetWriterAudioTrack *)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg0 mediaType:(NSObject *)arg1 mediaFileType:(NSObject *)arg2 formatSpecification:(AVFormatSpecification *)arg3 sourcePixelBufferAttributes:(NSDictionary *)arg4 multiPass:(char)arg5 error:(id *)arg6;
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg0 sourcePixelBufferAttributes:(NSDictionary *)arg1 multiPass:(char)arg2 error:(id *)arg3;
- (char)_flushPendingSampleBuffersReturningError:(id *)arg0;
- (void)dealloc;

@end

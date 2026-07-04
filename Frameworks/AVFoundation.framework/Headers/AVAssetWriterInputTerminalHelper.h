/* Runtime dump - AVAssetWriterInputTerminalHelper
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate>
{
    int _terminalStatus;
    char _didRequestMediaDataOnce;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (AVAssetWriterInputTerminalHelper *)initWithConfigurationState:(AVAssetWriterInputConfigurationState *)arg0;
- (AVAssetWriterInputTerminalHelper *)initWithConfigurationState:(NSObject *)arg0 terminalStatus:(int)arg1;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(int)arg0;
- (char)isReadyForMoreMediaData;
- (char)canStartRespondingToEachPassDescriptionReturningReason:(id *)arg0;
- (void)requestMediaDataWhenReadyOnQueue:(NSObject *)arg0 usingBlock:(id /* block */)arg1;
- (char)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg0;
- (char)appendPixelBuffer:(struct __CVBuffer *)arg0 withPresentationTime:(struct ?)arg1;
- (void)markCurrentPassAsFinished;
- (void)requestMediaDataOnceIfNecessaryWithMediaDataRequester:(id)arg0;
- (char)mediaDataRequesterShouldRequestMediaData:(NSData *)arg0;
- (int)status;
- (void)markAsFinished;

@end

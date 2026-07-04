/* Runtime dump - AVAssetWriterFailedTerminalHelper
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper
{
    NSError * _terminalError;
}

- (void)startSessionAtSourceTime:(struct ?)arg0;
- (void)endSessionAtSourceTime:(struct ?)arg0;
- (void)finishWriting;
- (void)finishWritingWithCompletionHandler:(id /* block */)arg0;
- (AVAssetWriterFailedTerminalHelper *)initWithConfigurationState:(AVAssetWriterConfigurationState *)arg0;
- (AVAssetWriterFailedTerminalHelper *)initWithConfigurationState:(NSObject *)arg0 terminalError:(NSError *)arg1;
- (void)dealloc;
- (int)status;
- (NSError *)error;

@end

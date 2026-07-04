/* Runtime dump - AVAssetWriterClientInitiatedTerminalHelper
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterClientInitiatedTerminalHelper : AVAssetWriterTerminalHelper
{
    int _terminalStatus;
}

- (AVAssetWriterClientInitiatedTerminalHelper *)initWithConfigurationState:(AVAssetWriterConfigurationState *)arg0;
- (AVAssetWriterClientInitiatedTerminalHelper *)initWithConfigurationState:(NSObject *)arg0 terminalStatus:(int)arg1;
- (int)status;

@end

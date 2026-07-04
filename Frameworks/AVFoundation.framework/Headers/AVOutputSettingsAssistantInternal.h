/* Runtime dump - AVOutputSettingsAssistantInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputSettingsAssistantInternal : NSObject
{
    <AVOutputSettingsAssistantBaseSettingsProvider> * baseSettingsProvider;
    <AVOutputSettingsAssistantVideoSettingsAdjuster> * videoSettingsAdjuster;
    struct opaqueCMFormatDescription * sourceVideoFormat;
    struct opaqueCMFormatDescription * sourceAudioFormat;
    struct ? sourceVideoAverageFrameDuration;
    struct ? sourceVideoMinFrameDuration;
}

@end

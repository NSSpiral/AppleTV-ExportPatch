/* Runtime dump - AVOutputSettingsAssistant
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputSettingsAssistant : NSObject
{
    AVOutputSettingsAssistantInternal * _internal;
}

@property (readonly, nonatomic) NSDictionary * audioSettings;
@property (readonly, nonatomic) NSDictionary * videoSettings;
@property (readonly, nonatomic) NSString * outputFileType;

+ (AVOutputSettingsAssistant *)_allOutputSettingsPresets;
+ (NSSet *)baseSettingsProviderForPreset:(NSSet *)arg0;
+ (NSSet *)videoSettingsAdjusterForPreset:(NSSet *)arg0;
+ (AVOutputSettingsAssistant *)videoEncoderCapabilities;
+ (char)validatesSourceVideoMinFrameDuration;
+ (AVOutputSettingsAssistant *)availableOutputSettingsPresets;
+ (AVOutputSettingsAssistant *)outputSettingsAssistantWithPreset:(NSSet *)arg0;

- (NSDictionary *)audioSettings;
- (NSDictionary *)videoSettings;
- (NSString *)outputFileType;
- (struct opaqueCMFormatDescription *)sourceVideoFormat;
- (struct opaqueCMFormatDescription *)sourceAudioFormat;
- (struct ?)sourceVideoAverageFrameDuration;
- (struct ?)sourceVideoMinFrameDuration;
- (AVOutputSettingsAssistant *)initWithPreset:(NSSet *)arg0;
- (void)setSourceAudioFormat:(struct opaqueCMFormatDescription *)arg0;
- (void)setSourceVideoFormat:(struct opaqueCMFormatDescription *)arg0;
- (void)setSourceVideoAverageFrameDuration:(struct ?)arg0;
- (void)setSourceVideoMinFrameDuration:(struct ?)arg0;
- (void)dealloc;
- (AVOutputSettingsAssistant *)init;
- (void)finalize;

@end

/* Runtime dump - AVAudioOutputSettings
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAudioOutputSettings : AVOutputSettings

@property (readonly, nonatomic) NSDictionary * audioSettingsDictionary;

+ (NSDictionary *)_outputSettingsWithOutputSettingsDictionary:(NSDictionary *)arg0 exceptionReason:(id *)arg1;
+ (NSDictionary *)_audioOutputSettingsWithAudioSettingsDictionary:(NSDictionary *)arg0 exceptionReason:(id *)arg1;
+ (NSArray *)registeredOutputSettingsClasses;
+ (AVAudioOutputSettings *)defaultAudioOutputSettings;
+ (AVAudioOutputSettings *)audioOutputSettingsWithAudioSettingsDictionary:(NSDictionary *)arg0;
+ (AVAudioOutputSettings *)audioOutputSettingsWithTrustedAudioSettingsDictionary:(NSDictionary *)arg0;
+ (NSDictionary *)audioConverterPropertiesForAudioSettingsDictionary:(NSDictionary *)arg0;

- (NSSet *)compatibleMediaTypes;
- (NSDictionary *)audioSettingsDictionary;
- (char)validateUsingOutputSettingsValidator:(NSObject *)arg0 reason:(id *)arg1;
- (AVAudioOutputSettings *)initWithAudioSettingsDictionary:(NSDictionary *)arg0 exceptionReason:(id *)arg1;

@end

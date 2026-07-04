/* Runtime dump - AVWAVEOutputSettingsValidator
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVWAVEOutputSettingsValidator : AVMediaFileOutputSettingsValidator

- (AVWAVEOutputSettingsValidator *)initWithFileType:(AVMediaFileType *)arg0;
- (char)validateAudioOutputSettings:(NSDictionary *)arg0 reason:(id *)arg1;

@end

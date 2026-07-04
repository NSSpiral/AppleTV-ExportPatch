/* Runtime dump - AVAVAudioSettingsAudioOutputSettings
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings <AVReencodedAudioSettingsForFig, AVDecodedAudioSettingsForFig>

+ (NSDictionary *)_audioOutputSettingsWithAudioSettingsDictionary:(NSDictionary *)arg0 exceptionReason:(id *)arg1;
+ (NSArray *)eligibleOutputSettingsDictionaryKeys;

- (char)willYieldCompressedSamples;
- (void)getAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg0 forAudioFileTypeID:(unsigned long)arg1 sourceFormatDescription:(struct opaqueCMFormatDescription *)arg2;
- (struct AudioChannelLayout *)copyAudioChannelLayoutForSourceFormatDescription:(NSString *)arg0 audioChannelLayoutSize:(SEL)arg1;
- (NSArray *)audioOptions;
- (char)canFullySpecifyOutputFormatReturningReason:(id *)arg0;
- (char)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg0;
- (AVAVAudioSettingsAudioOutputSettings *)initWithTrustedAVAudioSettingsDictionary:(NSDictionary *)arg0;
- (AVAVAudioSettingsAudioOutputSettings *)initWithAVAudioSettingsDictionary:(NSDictionary *)arg0 exceptionReason:(id *)arg1;

@end

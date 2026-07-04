/* Runtime dump - AVAudioUnitDistortion
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnitDistortion : AVAudioUnitEffect

@property (nonatomic) float preGain;
@property (nonatomic) float wetDryMix;

- (void)loadFactoryPreset:(int)arg0;
- (struct AUPreset)FillOutAUPreset:(SEL)arg0;
- (void)setPreGain:(float)arg0;
- (void)setWetDryMix:(float)arg0;
- (float)preGain;
- (float)wetDryMix;
- (AVAudioUnitDistortion *)init;

@end

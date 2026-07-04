/* Runtime dump - AVAudioUnitReverb
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnitReverb : AVAudioUnitEffect

@property (nonatomic) float wetDryMix;

- (void)loadFactoryPreset:(int)arg0;
- (void)setWetDryMix:(float)arg0;
- (float)wetDryMix;
- (AVAudioUnitReverb *)init;

@end

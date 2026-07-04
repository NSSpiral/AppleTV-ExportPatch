/* Runtime dump - AVAudioUnitDelay
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnitDelay : AVAudioUnitEffect

@property (nonatomic) double delayTime;
@property (nonatomic) float feedback;
@property (nonatomic) float lowPassCutoff;
@property (nonatomic) float wetDryMix;

- (void)setWetDryMix:(float)arg0;
- (float)wetDryMix;
- (void)setDelayTime:(double)arg0;
- (void)setLowPassCutoff:(float)arg0;
- (double)delayTime;
- (float)lowPassCutoff;
- (AVAudioUnitDelay *)init;
- (void)setFeedback:(float)arg0;
- (float)feedback;

@end

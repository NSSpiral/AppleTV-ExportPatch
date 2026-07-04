/* Runtime dump - AVAudioUnitTimePitch
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnitTimePitch : AVAudioUnitTimeEffect

@property (nonatomic) float rate;
@property (nonatomic) float pitch;
@property (nonatomic) float overlap;

- (AVAudioUnitTimePitch *)init;
- (void)setOverlap:(float)arg0;
- (float)overlap;
- (float)rate;
- (void)setRate:(float)arg0;
- (float)pitch;
- (void)setPitch:(float)arg0;

@end

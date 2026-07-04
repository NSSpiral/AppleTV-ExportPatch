/* Runtime dump - AVAudioUnitVarispeed
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnitVarispeed : AVAudioUnitTimeEffect

@property (nonatomic) float rate;

- (AVAudioUnitVarispeed *)init;
- (float)rate;
- (void)setRate:(float)arg0;

@end

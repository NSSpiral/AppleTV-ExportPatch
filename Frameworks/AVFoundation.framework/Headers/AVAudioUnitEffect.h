/* Runtime dump - AVAudioUnitEffect
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnitEffect : AVAudioUnit

@property (nonatomic) char bypass;

- (AVAudioUnitEffect *)initWithAudioComponentDescription:(struct AudioComponentDescription)arg0;
- (void)setBypass:(char)arg0;
- (char)bypass;

@end

/* Runtime dump - AVAudioUnitTimeEffect
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnitTimeEffect : AVAudioUnit

@property (nonatomic) char bypass;

- (AVAudioUnitTimeEffect *)initWithAudioComponentDescription:(struct AudioComponentDescription)arg0;
- (void)setBypass:(char)arg0;
- (char)bypass;

@end

/* Runtime dump - AVAudioUnitGenerator
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnitGenerator : AVAudioUnit <AVAudioMixing>

@property (nonatomic) char bypass;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) float volume;

- (AVAudioUnitGenerator *)initWithAudioComponentDescription:(struct AudioComponentDescription)arg0;
- (void)setBypass:(char)arg0;
- (char)bypass;

@end

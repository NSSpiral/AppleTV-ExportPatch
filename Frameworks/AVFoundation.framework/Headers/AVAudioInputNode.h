/* Runtime dump - AVAudioInputNode
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioInputNode : AVAudioIONode <AVAudioMixing>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) float volume;

- (AVAudioInputNode *)initWithIOUnit:(struct AVAudioIOUnit *)arg0;
- (float)rate;
- (void)setRate:(float)arg0;

@end

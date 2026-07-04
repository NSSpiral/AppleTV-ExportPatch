/* Runtime dump - AVAudioMixerNode
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioMixerNode : AVAudioNode <AVAudioMixing>

@property (nonatomic) float outputVolume;
@property (readonly, nonatomic) unsigned int nextAvailableInputBus;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) float volume;

- (void)didAttachToEngine:(id)arg0;
- (void)setOutputVolume:(float)arg0;
- (float)outputVolume;
- (void)setInputVolume:(float)arg0 bus:(unsigned int)arg1;
- (void)setInputPan:(float)arg0 bus:(unsigned int)arg1;
- (void)inputConnected:(unsigned int)arg0;
- (unsigned int)nextAvailableInputBus;
- (AVAudioMixerNode *)init;

@end

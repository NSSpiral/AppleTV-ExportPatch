/* Runtime dump - AVAudioEnvironmentNode
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioEnvironmentNode : AVAudioNode <AVAudioMixing>

@property (nonatomic) float outputVolume;
@property (readonly, nonatomic) unsigned int nextAvailableInputBus;
@property (nonatomic) struct AVAudio3DPoint listenerPosition;
@property (nonatomic) struct AVAudio3DVectorOrientation listenerVectorOrientation;
@property (nonatomic) struct AVAudio3DAngularOrientation listenerAngularOrientation;
@property (readonly, nonatomic) AVAudioEnvironmentDistanceAttenuationParameters * distanceAttenuationParameters;
@property (readonly, nonatomic) AVAudioEnvironmentReverbParameters * reverbParameters;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) float volume;

- (void)setOutputVolume:(float)arg0;
- (float)outputVolume;
- (unsigned int)nextAvailableInputBus;
- (id)applicableRenderingAlgorithms;
- (void)setListenerVectorOrientation:(struct AVAudio3DVectorOrientation)arg0;
- (struct AVAudio3DVectorOrientation)listenerVectorOrientation;
- (void)setListenerAngularOrientation:(struct AVAudio3DAngularOrientation)arg0;
- (struct AVAudio3DAngularOrientation)listenerAngularOrientation;
- (AVAudioEnvironmentDistanceAttenuationParameters *)distanceAttenuationParameters;
- (AVAudioEnvironmentReverbParameters *)reverbParameters;
- (struct AVAudio3DPoint)listenerPosition;
- (void)setListenerPosition:(struct AVAudio3DPoint)arg0;
- (AVAudioEnvironmentNode *)init;

@end

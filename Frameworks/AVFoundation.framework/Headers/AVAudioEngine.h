/* Runtime dump - AVAudioEngine
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioEngine : NSObject
{
    void * _impl;
}

@property (nonatomic) struct OpaqueMusicSequence * musicSequence;
@property (readonly, nonatomic) AVAudioOutputNode * outputNode;
@property (readonly, nonatomic) AVAudioInputNode * inputNode;
@property (readonly, nonatomic) AVAudioMixerNode * mainMixerNode;
@property (readonly, nonatomic) char running;

- (void)attachNode:(NSObject *)arg0;
- (void)detachNode:(NSObject *)arg0;
- (AVAudioOutputNode *)outputNode;
- (AVAudioInputNode *)inputNode;
- (AVAudioMixerNode *)mainMixerNode;
- (void)connect:(NEOnDemandRuleConnect *)arg0 to:(NSObject *)arg1 fromBus:(unsigned int)arg2 toBus:(unsigned int)arg3 format:(NSString *)arg4;
- (void)connect:(NEOnDemandRuleConnect *)arg0 to:(NSObject *)arg1 format:(NSString *)arg2;
- (void)disconnectNodeInput:(NSObject *)arg0 bus:(unsigned int)arg1;
- (void)disconnectNodeOutput:(NSObject *)arg0 bus:(unsigned int)arg1;
- (void)disconnectNodeInput:(NSObject *)arg0;
- (void)disconnectNodeOutput:(NSObject *)arg0;
- (char)startAndReturnError:(id *)arg0;
- (void)prepare;
- (void)setMusicSequence:(struct OpaqueMusicSequence *)arg0;
- (struct OpaqueMusicSequence *)musicSequence;
- (void)dealloc;
- (AVAudioEngine *)init;
- (NSString *)description;
- (void)reset;
- (void)stop;
- (char)isRunning;
- (void)pause;
- (struct AVAudioEngineImpl *)implementation;

@end

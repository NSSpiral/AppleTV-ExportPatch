/* Runtime dump - AVAudioNode
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioNode : NSObject <AVAudioMixing>
{
    void * _impl;
}

@property (readonly, nonatomic) AVAudioEngine * engine;
@property (readonly, nonatomic) unsigned int numberOfInputs;
@property (readonly, nonatomic) unsigned int numberOfOutputs;
@property (readonly, nonatomic) AVAudioTime * lastRenderTime;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) float volume;

- (AVAudioNode *)initWithImpl:(struct AVAudioNodeImplBase *)arg0;
- (void)didAttachToEngine:(id)arg0;
- (float)pan;
- (void)setPan:(float)arg0;
- (int)renderingAlgorithm;
- (void)setRenderingAlgorithm:(int)arg0;
- (float)reverbBlend;
- (void)setReverbBlend:(float)arg0;
- (float)obstruction;
- (void)setObstruction:(float)arg0;
- (float)occlusion;
- (void)setOcclusion:(float)arg0;
- (struct AVAudioNodeImplBase *)impl;
- (struct OpaqueAudioComponentInstance *)audioUnit;
- (void)didDetachFromEngine:(id)arg0;
- (id)outputFormatForBus:(unsigned int)arg0;
- (id)inputFormatForBus:(unsigned int)arg0;
- (char)setOutputFormat:(NSString *)arg0 forBus:(unsigned int)arg1;
- (id)nameForInputBus:(unsigned int)arg0;
- (id)nameForOutputBus:(unsigned int)arg0;
- (AVAudioTime *)lastRenderTime;
- (unsigned int)numberOfInputs;
- (unsigned int)numberOfOutputs;
- (void)setNumberOfInputs:(unsigned int)arg0;
- (void)setNumberOfOutputs:(unsigned int)arg0;
- (void)installTapOnBus:(unsigned int)arg0 bufferSize:(unsigned int)arg1 format:(NSString *)arg2 block:(id /* block */)arg3;
- (void)removeTapOnBus:(unsigned int)arg0;
- (void)dealloc;
- (AVAudioNode *)init;
- (void)reset;
- (void)setPosition:(struct AVAudio3DPoint)arg0;
- (struct AVAudio3DPoint)position;
- (AVAudioEngine *)engine;
- (float)rate;
- (void)setRate:(float)arg0;
- (SAClockObject *)clock;
- (float)volume;
- (void)setVolume:(float)arg0;

@end

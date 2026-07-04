/* Runtime dump - AVAudioPlayerNode
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioPlayerNode : AVAudioNode <AVAudioMixing>

@property (readonly, nonatomic) char playing;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) float volume;

- (void)didAttachToEngine:(id)arg0;
- (void)playAtTime:(id)arg0;
- (void)scheduleBuffer:(NSObject *)arg0 atTime:(struct ?)arg1 completionHandler:(id /* block */)arg2;
- (void)scheduleBuffer:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)scheduleBuffer:(NSObject *)arg0 atTime:(struct ?)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)scheduleFile:(NSString *)arg0 atTime:(struct ?)arg1 completionHandler:(id /* block */)arg2;
- (void)scheduleSegment:(id)arg0 startingFrame:(long long)arg1 frameCount:(unsigned int)arg2 atTime:(struct ?)arg3 completionHandler:(id /* block */)arg4;
- (void)prepareWithFrameCount:(unsigned int)arg0;
- (id)nodeTimeForPlayerTime:(id)arg0;
- (id)playerTimeForNodeTime:(id)arg0;
- (void)play;
- (AVAudioPlayerNode *)init;
- (void)stop;
- (void)pause;
- (char)isPlaying;

@end

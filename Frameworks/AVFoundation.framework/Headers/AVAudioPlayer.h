/* Runtime dump - AVAudioPlayer
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioPlayer : NSObject
{
    id _impl;
}

@property (readonly) char playing;
@property (readonly) unsigned int numberOfChannels;
@property (readonly) double duration;
@property <AVAudioPlayerDelegate> * delegate;
@property (readonly) NSURL * url;
@property (readonly) NSData * data;
@property float pan;
@property float volume;
@property char enableRate;
@property float rate;
@property double currentTime;
@property (readonly) double deviceCurrentTime;
@property int numberOfLoops;
@property (readonly) NSDictionary * settings;
@property char meteringEnabled;
@property (copy, nonatomic) NSArray * channelAssignments;

- (float)pan;
- (void)setPan:(float)arg0;
- (id)impl;
- (char)isMeteringEnabled;
- (void)setMeteringEnabled:(char)arg0;
- (void)updateMeters;
- (float)peakPowerForChannel:(unsigned int)arg0;
- (float)averagePowerForChannel:(unsigned int)arg0;
- (AVAudioPlayer *)initBase;
- (void)finishedPlaying:(id)arg0;
- (void)decodeError:(NSError *)arg0;
- (AVAudioPlayer *)initWithData:(NSData *)arg0 fileTypeHint:(id)arg1 error:(id *)arg2;
- (AVAudioPlayer *)initWithContentsOfURL:(NSURL *)arg0 fileTypeHint:(id)arg1 error:(id *)arg2;
- (AVAudioPlayer *)initWithContentsOfURL:(NSURL *)arg0 error:(id *)arg1;
- (char)playAtTime:(double)arg0;
- (void)setEnableRate:(char)arg0;
- (char)enableRate;
- (double)deviceCurrentTime;
- (NSArray *)channelAssignments;
- (void)setChannelAssignments:(NSArray *)arg0;
- (char)mixToUplink;
- (void)setMixToUplink:(char)arg0;
- (char)prepareToPlay;
- (char)play;
- (void)beginInterruption;
- (void)endInterruptionWithFlags:(id)arg0;
- (void)endInterruption;
- (void)setCurrentTime:(double)arg0;
- (void)dealloc;
- (void)setDelegate:(<AVAudioPlayerDelegate> *)arg0;
- (<AVAudioPlayerDelegate> *)delegate;
- (double)duration;
- (NSURL *)url;
- (NSDictionary *)settings;
- (void)stop;
- (NSData *)data;
- (void)pause;
- (int)numberOfLoops;
- (void)setNumberOfLoops:(int)arg0;
- (AVAudioPlayer *)initWithData:(NSData *)arg0 error:(id *)arg1;
- (unsigned int)numberOfChannels;
- (float)rate;
- (void)setRate:(float)arg0;
- (void)finalize;
- (float)volume;
- (void)setVolume:(float)arg0;
- (double)currentTime;
- (char)isPlaying;

@end

/* Runtime dump - AVAudioRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioRecorder : NSObject
{
    void * _impl;
}

@property (readonly) char recording;
@property (readonly) NSURL * url;
@property (readonly) NSDictionary * settings;
@property <AVAudioRecorderDelegate> * delegate;
@property (readonly) double currentTime;
@property (readonly) double deviceCurrentTime;
@property char meteringEnabled;
@property (copy, nonatomic) NSArray * channelAssignments;

- (char)isRecording;
- (struct AudioRecorderImpl *)impl;
- (void)finishedRecording;
- (char)isMeteringEnabled;
- (void)setMeteringEnabled:(char)arg0;
- (void)updateMeters;
- (float)peakPowerForChannel:(unsigned int)arg0;
- (float)averagePowerForChannel:(unsigned int)arg0;
- (double)deviceCurrentTime;
- (NSArray *)channelAssignments;
- (void)setChannelAssignments:(NSArray *)arg0;
- (void)privCommonCleanup;
- (AVAudioRecorder *)initWithURL:(NSString *)arg0 settings:(NSDictionary *)arg1 error:(id *)arg2;
- (char)prepareToRecord;
- (char)recordAtTime:(double)arg0;
- (char)recordForDuration:(double)arg0;
- (char)recordAtTime:(double)arg0 forDuration:(double)arg1;
- (char)deleteRecording;
- (void)endInterruptionWithFlags;
- (void)beginInterruption;
- (void)endInterruption;
- (void)dealloc;
- (void)setDelegate:(<AVAudioRecorderDelegate> *)arg0;
- (<AVAudioRecorderDelegate> *)delegate;
- (NSURL *)url;
- (NSDictionary *)settings;
- (void)stop;
- (void)pause;
- (id)baseInit;
- (char)record;
- (void)finalize;
- (double)currentTime;

@end

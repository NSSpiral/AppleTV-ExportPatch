/* Runtime dump - VoiceVerificationEndpointer
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface VoiceVerificationEndpointer : NSObject <Endpointer>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property int endpointMode;
@property double startWaitTime;
@property double interspeechWaitTime;
@property double endWaitTime;

- (void)setEndpointMode:(int)arg0;
- (void)setStartWaitTime:(double)arg0;
- (void)setInterspeechWaitTime:(double)arg0;
- (void)setEndWaitTime:(double)arg0;
- (char)configureWithSampleRate:(double)arg0 andFrameRate:(unsigned long)arg1;
- (char)configureWithASBD:(struct AudioStreamBasicDescription *)arg0 andFrameRate:(unsigned long)arg1;
- (int)getStatus:(struct AudioQueueBuffer *)arg0;
- (int)endpointMode;
- (double)startWaitTime;
- (double)interspeechWaitTime;
- (double)endWaitTime;
- (void)dealloc;
- (VoiceVerificationEndpointer *)init;
- (void)reset;

@end

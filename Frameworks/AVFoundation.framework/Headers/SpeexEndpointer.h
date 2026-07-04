/* Runtime dump - SpeexEndpointer
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface SpeexEndpointer : NSObject <Endpointer>
{
    double mStartWaitTime;
    double mInterspeechWaitTime;
    double mEndWaitTime;
    int mEndpointMode;
    unsigned long mFrameRate;
    int mLastStatus;
    void * _impl;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property int endpointMode;
@property double startWaitTime;
@property double interspeechWaitTime;
@property double endWaitTime;

- (int)getStatus:(float *)arg0 count:(unsigned long)arg1;
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
- (SpeexEndpointer *)init;
- (void)reset;

@end

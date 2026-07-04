/* Runtime dump - VCJitterBuffer
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCJitterBuffer : NSObject
{
    void * pRTPContext;
    struct tagHANDLE * rtpHandle;
    struct _opaque_pthread_mutex_t teardownMutex;
    double prevReceivedAudioTime;
}

- (void)dealloc;
- (char)pullAudioSamples:(char *)arg0 timestamp:(unsigned int *)arg1 byteCount:(int *)arg2 sampleCount:(int *)arg3 sampleRate:(int *)arg4 receivedBytes:(int *)arg5 lastReceivedAudioTime:(double *)arg6 padding:(char *)arg7 paddingLength:(char *)arg8 silence:(int *)arg9;
- (void)invalidateHandle;
- (VCJitterBuffer *)initWithRTPHandle:(struct tagHANDLE *)arg0;

@end

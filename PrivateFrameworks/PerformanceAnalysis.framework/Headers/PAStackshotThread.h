/* Runtime dump - PAStackshotThread
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAStackshotThread : NSObject
{
    struct thread_snapshot * thread_snap;
    PAStackshotTask * _task;
    void * _kernelFrames;
    void * _userFrames;
    unsigned long _kernelFrameSize;
    unsigned long _userFrameSize;
    unsigned long _bytesUsed;
}

@property (readonly) char isFromMicrostackshot;

- (PAStackshotThread *)initWithTask:(PAStackshotTask *)arg0;
- (char)hasDispatchQueue;
- (char)isFromMicrostackshot;
- (void *)firstFrame;
- (void)_calculateOffsets;
- (NSObject *)frameIterator;
- (unsigned long)_frameSize:(char)arg0;
- (char)isDarwinBG;
- (unsigned int)powerstatsFlags;
- (unsigned long)kernelFrameSize;
- (unsigned long)userFrameSize;
- (char)hasKernelContinuation;
- (unsigned long long)dispatchQueueId;
- (unsigned long)kernelFramesOffsetFromHeaderStart;
- (unsigned long)userFramesOffsetFromHeaderStart;
- (char)setBufferPosition:(char *)arg0 withRemainingBytes:(unsigned long)arg1;
- (void)iterateFrames:(id)arg0;
- (unsigned long)bytesUsedInBuffer;

@end

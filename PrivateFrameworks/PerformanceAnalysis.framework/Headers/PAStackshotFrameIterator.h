/* Runtime dump - PAStackshotFrameIterator
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAStackshotFrameIterator : NSObject
{
    void * curFrame;
    void * topFrame;
    struct thread_snapshot * snap;
    unsigned int curIndex;
    char currentFrameIsKernel;
}

- (void *)firstValidUserFrame;
- (char)is64bit;
- (PAStackshotFrameIterator *)initWithThreadSnapshot:(struct thread_snapshot *)arg0 frameStart:(void *)arg1;
- (void)getCurrentFrame:(struct pa_stack_frame *)arg0;
- (char)moveToNextFrame;

@end

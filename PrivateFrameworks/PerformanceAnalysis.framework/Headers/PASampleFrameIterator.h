/* Runtime dump - PASampleFrameIterator
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASampleFrameIterator : NSObject
{
    PAStackshotThread * _stackshotThread;
    PASampleKernelFrame * _kernel;
    PASampleUserFrame * _user;
}

@property PAStackshotThread * stackshotThread;

- (void)dealloc;
- (void)iterateFrames:(id)arg0;
- (PAStackshotThread *)stackshotThread;
- (void)setStackshotThread:(PAStackshotThread *)arg0;

@end

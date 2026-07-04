/* Runtime dump - PACountedSampleFrame
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PACountedSampleFrame : PACountedFrame
{
    PASampleFrame * _sampleFrame;
}

@property (readonly) PASampleFrame * sampleFrame;

- (void)dealloc;
- (NSString *)debugDescription;
- (PASampleFrame *)sampleFrame;
- (PACountedSampleFrame *)initWithSampleFrame:(PASampleFrame *)arg0;

@end

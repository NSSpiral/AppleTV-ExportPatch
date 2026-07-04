/* Runtime dump - PAProcessInstanceAggregator
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAProcessInstanceAggregator : PASampleAggregator
{
    unsigned int _timestampsDisplayOffset;
    NSString * _headerNote;
    unsigned long long _stackshotFrameAddress;
    unsigned long long _idleWorkQueueFrameAddress;
}

@property (copy) NSString * headerNote;
@property char printSpinSignatureStack;
@property char printHeavyStacks;
@property (readonly) char hasTargetProcess;
@property unsigned long long stackshotFrameAddress;
@property unsigned long long idleWorkQueueFrameAddress;

- (void)dealloc;
- (char)printSpinSignatureStack;
- (void)setPrintSpinSignatureStack:(char)arg0;
- (char)printHeavyStacks;
- (void)setPrintHeavyStacks:(char)arg0;
- (void)printHeaderToStream:(struct __sFILE *)arg0;
- (id)sortedTasks;
- (void)printFooterToStream:(struct __sFILE *)arg0;
- (NSURLSessionTask *)newAggregatedTaskForIdentificationPurposesWithSampleTask:(NSObject *)arg0;
- (NSURLSessionTask *)newAggregatedTaskForSampleTask:(NSObject *)arg0 atTimestampIndex:(unsigned int)arg1;
- (PAProcessInstanceAggregator *)initWithSampleStore:(PASampleTimeSeriesDataStore *)arg0;
- (id)sampleTaskWithPid:(int)arg0 atTimestampIndex:(unsigned int)arg1;
- (char)hasTargetProcess;
- (int)displayTimeIndexForTimestampIndex:(unsigned int)arg0;
- (NSObject *)kernelSampleTaskAtTimestampIndex:(unsigned int)arg0;
- (unsigned long long)stackshotFrameAddress;
- (void)setStackshotFrameAddress:(unsigned long long)arg0;
- (unsigned long long)idleWorkQueueFrameAddress;
- (void)setIdleWorkQueueFrameAddress:(unsigned long long)arg0;
- (unsigned int)sampleIndexForDisplayTimeIndex:(int)arg0;
- (void)filterToDisplayTimeIndexStart:(unsigned int)arg0 end:(unsigned int)arg1;
- (void)filterToMachTimeRangeStart:(double)arg0 end:(double)arg1;
- (NSString *)headerNote;
- (void)setHeaderNote:(NSString *)arg0;

@end

/* Runtime dump - PATimestampIndexedSampleThread
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PATimestampIndexedSampleThread : NSObject
{
    unsigned int _lastTimestampIndex;
    PASampleThreadData * _sampleThread;
}

@property unsigned int lastTimestampIndex;
@property (readonly) PASampleThreadData * sampleThread;

- (void)dealloc;
- (NSString *)debugDescription;
- (unsigned int)lastTimestampIndex;
- (void)setLastTimestampIndex:(unsigned int)arg0;
- (PATimestampIndexedSampleThread *)initWithSampleThread:(PASampleThreadData *)arg0 atTimestampIndex:(unsigned int)arg1;
- (PASampleThreadData *)sampleThread;

@end

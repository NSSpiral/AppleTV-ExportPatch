/* Runtime dump - PAContiguousThreadArray
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAContiguousThreadArray : NSObject
{
    NSMutableArray * _threads;
    unsigned int _firstTimestampIndex;
    unsigned long long _previousCpuTimeNs;
}

@property (readonly) unsigned long long threadId;
@property (readonly) unsigned long long dispatchQueueId;

- (void)dealloc;
- (unsigned int)count;
- (NSString *)debugDescription;
- (unsigned long long)dispatchQueueId;
- (unsigned long long)threadId;
- (unsigned int)firstTimestampIndex;
- (char)isProcessorIdleThread;
- (unsigned long long)cpuTimeNs;
- (NSObject *)sampleThreadAtTimestampIndex:(unsigned int)arg0;
- (char)isSingleStackWithLeafFrame:(PASampleFrame *)arg0;
- (PAContiguousThreadArray *)initWithTimestampIndex:(unsigned int)arg0 andPreviousCpuTimeNs:(unsigned long long)arg1;
- (void)addSampleThread:(NSObject *)arg0;
- (char)threadExistedPreviously;

@end

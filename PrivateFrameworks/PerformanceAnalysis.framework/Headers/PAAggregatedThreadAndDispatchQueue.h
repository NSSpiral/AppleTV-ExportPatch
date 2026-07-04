/* Runtime dump - PAAggregatedThreadAndDispatchQueue
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAAggregatedThreadAndDispatchQueue : NSObject <PAAggregatedStack>
{
    PAAggregatedProcessInstance * _aggregatedTask;
    NSMutableArray * _contiguousThreadArrays;
    int _minPriority;
    int _maxPriority;
    unsigned long long _dispatchQueueId;
    unsigned long long _threadId;
    unsigned long long _cpuTimeNsCached;
}

@property (readonly) PAAggregatedProcessInstance * aggregatedTask;
@property (readonly) PAProcessInstanceAggregator * aggregator;
@property (readonly) unsigned int firstTimestampIndex;
@property (readonly) unsigned int lastTimestampIndex;
@property unsigned long long dispatchQueueId;
@property unsigned long long threadId;
@property int minPriority;
@property int maxPriority;
@property (readonly) char isMainThread;
@property (readonly) char isProcessorIdleThread;
@property (readonly) char isIdleWorkQueueThread;
@property (readonly) NSMutableArray * contiguousThreadArrays;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (int)count;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)debugDescription;
- (int)compare:(NSObject *)arg0;
- (char)isMainThread;
- (unsigned long long)dispatchQueueId;
- (PASampleTimeSeriesDataStore *)sampleStore;
- (void)printHeaderToStream:(struct __sFILE *)arg0;
- (void)printToStream:(struct __sFILE *)arg0;
- (PAProcessInstanceAggregator *)aggregator;
- (void)addSampleThread:(PASampleThreadData *)arg0 atTimestampIndex:(unsigned int)arg1;
- (PAAggregatedThreadAndDispatchQueue *)initWithAggregatedTask:(PAAggregatedProcessInstance *)arg0 andThreadId:(unsigned long long)arg1 andDispatchQueueId:(unsigned long long)arg2;
- (unsigned long long)threadId;
- (unsigned int)firstTimestampIndex;
- (char)isProcessorIdleThread;
- (unsigned long long)cpuTimeNs;
- (unsigned int)lastTimestampIndex;
- (char)isIdleWorkQueueThread;
- (PAAggregatedProcessInstance *)aggregatedTask;
- (NSMutableArray *)contiguousThreadArrays;
- (int)minPriority;
- (void)setMinPriority:(int)arg0;
- (int)maxPriority;
- (void)setMaxPriority:(int)arg0;
- (unsigned int)numMissingSamplesBeforeContiguousThreadArrayIndex:(unsigned int)arg0;
- (NSObject *)copyDescriptionForSampleFrame:(NSObject *)arg0 atTimestampIndex:(unsigned int)arg1;
- (void)printHeavyStacksToStream:(struct __sFILE *)arg0 onlyPrintHeaviest:(int)arg1;
- (char)isSingleStack;
- (NSObject *)copyStringForMissingSamplesBeforeContiguousThreadArrayIndex:(unsigned int)arg0;
- (void)printStackToStream:(struct __sFILE *)arg0;
- (PAAggregatedThreadAndDispatchQueue *)initForIdentificationPurposesWithThreadId:(unsigned long long)arg0 andDispatchQueueId:(unsigned long long)arg1;
- (void)setDispatchQueueId:(unsigned long long)arg0;
- (void)setThreadId:(unsigned long long)arg0;

@end

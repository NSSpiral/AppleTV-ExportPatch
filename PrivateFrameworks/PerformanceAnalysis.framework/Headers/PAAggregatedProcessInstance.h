/* Runtime dump - PAAggregatedProcessInstance
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAAggregatedProcessInstance : PAAggregatedTask
{
    struct __CFDictionary * stacks;
    NSMutableArray * _sampleTasks;
    unsigned int _firstTimestampIndex;
    NSMutableSet * _concurrentDispatchQueueIds;
    NSArray * _threadsInPreviousSample;
    unsigned long long _mainThreadId;
    char _combinedStacks;
    unsigned int _countSuspended;
    unsigned int _countTerminated;
    unsigned long long _cpuTimeNsCached;
}

@property (readonly) PAProcessInstanceAggregator * aggregator;
@property (readonly) NSMutableArray * sampleTasks;
@property (readonly) NSMutableSet * concurrentDispatchQueueIds;
@property (readonly) unsigned int firstTimestampIndex;
@property (readonly) unsigned int lastTimestampIndex;
@property (retain) NSArray * threadsInPreviousSample;
@property (readonly) unsigned int countSuspended;
@property (readonly) unsigned int countTerminated;
@property (readonly) unsigned int count;
@property (readonly) int pid;
@property (readonly) int ppid;
@property (readonly) int rpid;
@property (readonly) unsigned int uid;
@property (readonly) unsigned long long uniqueId;
@property (readonly) NSString * name;
@property (readonly) NSString * mainBinaryPath;
@property (readonly) NSUUID * mainBinaryUuid;
@property (readonly) unsigned long long mainBinaryOffset;
@property (readonly) char isUnresponsive;
@property (readonly) double timeOfLastResponse;
@property (readonly) char usesSuddenTermination;
@property (readonly) char allowsIdleExit;
@property (readonly) char isDirty;
@property (readonly) char workQueueExceededConstrainedThreadLimit;
@property (readonly) char workQueueExceededTotalThreadLimit;
@property (readonly) char isThirdParty;

- (void)dealloc;
- (unsigned int)count;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)debugDescription;
- (NSString *)name;
- (int)compare:(NSObject *)arg0;
- (unsigned long long)uniqueId;
- (unsigned int)uid;
- (int)pid;
- (char)isUnresponsive;
- (void)printHeaderToStream:(struct __sFILE *)arg0;
- (void)printToStream:(struct __sFILE *)arg0;
- (void)addSampleTask:(NSObject *)arg0 atTimestampIndex:(unsigned int)arg1;
- (NSMutableArray *)sampleTasks;
- (PAProcessInstanceAggregator *)aggregator;
- (PAAggregatedProcessInstance *)initWithAggregator:(PAProcessInstanceAggregator *)arg0 andSampleTask:(NSObject *)arg1 atTimestampIndex:(unsigned int)arg2;
- (unsigned long long)mainBinaryOffset;
- (NSUUID *)mainBinaryUuid;
- (void)addSampleThread:(PASampleThreadData *)arg0 atTimestampIndex:(unsigned int)arg1;
- (NSMutableSet *)concurrentDispatchQueueIds;
- (void)setThreadsInPreviousSample:(NSArray *)arg0;
- (void)_combineMainThreadStacks;
- (void)_combineSerialDispatchQueueStacks;
- (unsigned int)firstTimestampIndex;
- (int)ppid;
- (int)rpid;
- (NSString *)mainBinaryPath;
- (NSString *)architectureString;
- (double)timeOfLastResponse;
- (char)usesSuddenTermination;
- (char)allowsIdleExit;
- (char)workQueueExceededConstrainedThreadLimit;
- (char)workQueueExceededTotalThreadLimit;
- (char)isThirdParty;
- (unsigned long long)cpuTimeNs;
- (NSObject *)sampleTaskAtTimestampIndex:(unsigned int)arg0;
- (unsigned int)countSuspended;
- (unsigned int)countTerminated;
- (unsigned int)lastTimestampIndex;
- (char)_shouldDisplayStacks;
- (void)combineStacks;
- (id)sortedStacks;
- (void)printStacksToStream:(struct __sFILE *)arg0;
- (PAAggregatedProcessInstance *)initForIdentificationPurposesWithSampleTask:(NSObject *)arg0;
- (NSArray *)threadsInPreviousSample;
- (char)isDirty;

@end

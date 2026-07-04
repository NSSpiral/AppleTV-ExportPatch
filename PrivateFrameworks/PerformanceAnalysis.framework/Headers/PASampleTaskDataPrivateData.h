/* Runtime dump - PASampleTaskDataPrivateData
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASampleTaskDataPrivateData : NSObject <PASerializable>
{
    int _suspend_count;
    int _task_size;
    int _faults;
    int _pageins;
    int _cow_faults;
    unsigned int _ss_flags;
    unsigned int _latency_qos;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) int suspendCount;
@property (readonly) int taskSizeInPages;
@property (readonly) int numberOfPageFaults;
@property (readonly) int numberOfPageIns;
@property (readonly) int numberOfCopyOnWritePageFaults;
@property (readonly) unsigned int latencyQos;
@property (readonly) unsigned int ss_flags;
@property (readonly) char isTaskResourceFlagged;
@property (readonly) char isTerminatedSnapshot;
@property (readonly) char isPidSuspended;
@property (readonly) char isFrozen;
@property (readonly) char isDarwinBG;
@property (readonly) char isDarwinExtBG;
@property (readonly) char isVisible;
@property (readonly) char isNonVisible;
@property (readonly) char isForeground;
@property (readonly) char isBoosted;
@property (readonly) char isSuppressed;
@property (readonly) char isTimerThrottled;

+ (NSString *)classDictionaryKey;
+ (NSObject *)newInstanceWithoutReferencesFromBufferPosition:(void *)arg0;

- (int)suspendCount;
- (char)isFrozen;
- (char)isVisible;
- (char)isForeground;
- (void)addSelfToSerializationDictionary:(NSDictionary *)arg0;
- (unsigned long)sizeInBytesForSerializedVersion;
- (char)addSelfToBufferAtPosition:(void *)arg0 withCompletedSerializationDictionary:(NSDictionary *)arg1;
- (void)populateReferencesUsingBufferPosition:(void *)arg0 andDeserializationDictionary:(void)arg1 andDataBufferDictionary:(NSDictionary *)arg2;
- (char)isDarwinBG;
- (char)isSuppressed;
- (unsigned int)ss_flags;
- (char)isTerminatedSnapshot;
- (int)taskSizeInPages;
- (int)numberOfPageIns;
- (char)isBoosted;
- (char)isTaskResourceFlagged;
- (char)isPidSuspended;
- (char)isDarwinExtBG;
- (char)isNonVisible;
- (char)isTimerThrottled;
- (char)correspondsToTaskSnapshot:(struct task_snapshot *)arg0;
- (PASampleTaskDataPrivateData *)initWithTaskSnapshot:(struct task_snapshot *)arg0;
- (int)numberOfPageFaults;
- (int)numberOfCopyOnWritePageFaults;
- (unsigned int)latencyQos;

@end

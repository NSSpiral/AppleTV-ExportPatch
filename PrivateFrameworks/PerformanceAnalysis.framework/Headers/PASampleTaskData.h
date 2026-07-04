/* Runtime dump - PASampleTaskData
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASampleTaskData : NSObject <PASerializable>
{
    NSArray * sampleThreadsArray;
    PASampleTimeInsensitiveTaskData * _timeInsensitiveTaskData;
    PASampleTaskDataPrivateData * _privateData;
    NSSet * _donatingPids;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) int pid;
@property (readonly) int ppid;
@property (readonly) int rpid;
@property (readonly) unsigned int uid;
@property (readonly) unsigned long long uniqueId;
@property (readonly) NSString * name;
@property (readonly) NSString * bundleName;
@property (readonly) NSString * mainBinaryPath;
@property (readonly) NSArray * imageInfos;
@property (readonly) NSUUID * mainBinaryUuid;
@property (readonly) unsigned long long mainBinaryOffset;
@property (readonly) NSUUID * sharedCacheUUID;
@property (readonly) unsigned long long sharedCacheOffset;
@property (readonly) unsigned long long sharedCacheStart;
@property (readonly) unsigned long long sharedCacheLength;
@property (readonly) char isUnresponsive;
@property (readonly) double timeOfLastResponse;
@property (readonly) char usesSuddenTermination;
@property (readonly) char allowsIdleExit;
@property (readonly) char isDirty;
@property (readonly) char workQueueExceededConstrainedThreadLimit;
@property (readonly) char workQueueExceededTotalThreadLimit;
@property (readonly) char isThirdParty;
@property (readonly) int suspendCount;
@property (readonly) int taskSizeInPages;
@property (readonly) int numberOfPageFaults;
@property (readonly) int numberOfPageIns;
@property (readonly) int numberOfCopyOnWritePageFaults;
@property (readonly) unsigned int latency_qos;
@property (retain) NSSet * donatingPids;
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
- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (char)isFrozen;
- (char)isVisible;
- (unsigned long long)uniqueId;
- (unsigned int)uid;
- (char)isForeground;
- (int)pid;
- (unsigned long long)sharedCacheStart;
- (unsigned long long)sharedCacheLength;
- (NSArray *)imageInfos;
- (unsigned long long)sharedCacheOffset;
- (NSUUID *)sharedCacheUUID;
- (char)isUnresponsive;
- (void)addSelfToSerializationDictionary:(NSDictionary *)arg0;
- (unsigned long)sizeInBytesForSerializedVersion;
- (char)addSelfToBufferAtPosition:(void *)arg0 withCompletedSerializationDictionary:(NSDictionary *)arg1;
- (void)populateReferencesUsingBufferPosition:(void *)arg0 andDeserializationDictionary:(void)arg1 andDataBufferDictionary:(NSDictionary *)arg2;
- (char)isDarwinBG;
- (char)isSuppressed;
- (unsigned int)ss_flags;
- (unsigned long long)mainBinaryOffset;
- (NSUUID *)mainBinaryUuid;
- (char)isTerminatedSnapshot;
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
- (int)taskSizeInPages;
- (int)numberOfPageIns;
- (char)isBoosted;
- (NSSet *)donatingPids;
- (unsigned int)latency_qos;
- (char)isTaskResourceFlagged;
- (char)isPidSuspended;
- (char)isDarwinExtBG;
- (char)isNonVisible;
- (char)isTimerThrottled;
- (int)numberOfPageFaults;
- (int)numberOfCopyOnWritePageFaults;
- (PASampleTimeInsensitiveTaskData *)timeInsensitiveTaskData;
- (PASampleTaskData *)initWithStackshotTask:(PAStackshot *)arg0 andTimeInsensitiveTaskData:(NSData *)arg1;
- (char)isSameAsTask:(NSObject *)arg0;
- (void)setDonatingPids:(NSSet *)arg0;
- (char)isDirty;
- (NSString *)bundleName;

@end

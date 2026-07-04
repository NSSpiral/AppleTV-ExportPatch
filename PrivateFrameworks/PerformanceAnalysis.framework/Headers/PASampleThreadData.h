/* Runtime dump - PASampleThreadData
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASampleThreadData : NSObject <PASerializable>
{
    PASampleFrame * leafFrame;
    unsigned long long dispatchQueueId;
    unsigned long long waitEvent;
    unsigned long long continuation;
    unsigned long long userTimeInNs;
    unsigned long long systemTimeInNs;
    unsigned long long threadId;
    int state;
    int staticPriority;
    int currentScheduledPriority;
    int schedulerFlags;
    unsigned int threadQos;
    unsigned char ioTier;
    char ioPassive;
    char isSuspended;
    char ss_flags;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) char hasDispatchQueue;
@property (readonly) char isWaiting;
@property (readonly) char isStopped;
@property (readonly) char isRunning;
@property (readonly) char isWaitingUninterruptibly;
@property (readonly) char isHaltedAtTermination;
@property (readonly) char isAbortingInterruptibleWaits;
@property (readonly) char isAbortingInterruptibleWaitsAtSafePoints;
@property (readonly) char isProcessorIdleThread;
@property (readonly) char hasDispatchSerial;
@property (readonly) char stackTracesHaveNoFramePointers;
@property (readonly) char isDarwinBG;
@property (readonly) char hasValidPowerstatsFlags;
@property (readonly) unsigned int powerstatsFlags;

+ (NSString *)classDictionaryKey;
+ (NSObject *)newInstanceWithoutReferencesFromBufferPosition:(void *)arg0;

- (BRControllerStack *)stack;
- (char)isStopped;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (char)isRunning;
- (void)addSelfToSerializationDictionary:(NSDictionary *)arg0;
- (unsigned long)sizeInBytesForSerializedVersion;
- (char)addSelfToBufferAtPosition:(void *)arg0 withCompletedSerializationDictionary:(NSDictionary *)arg1;
- (void)populateReferencesUsingBufferPosition:(void *)arg0 andDeserializationDictionary:(void)arg1 andDataBufferDictionary:(NSDictionary *)arg2;
- (char)hasDispatchQueue;
- (char)isDarwinBG;
- (unsigned int)powerstatsFlags;
- (char)isProcessorIdleThread;
- (char)isStackEqualTo:(id)arg0;
- (char)hasValidPowerstatsFlags;
- (char)isWaiting;
- (char)isWaitingUninterruptibly;
- (char)isHaltedAtTermination;
- (char)isAbortingInterruptibleWaits;
- (char)isAbortingInterruptibleWaitsAtSafePoints;
- (char)hasDispatchSerial;
- (char)stackTracesHaveNoFramePointers;
- (PASampleThreadData *)initWithStackshotThread:(PAStackshotThread *)arg0 andLeafFrame:(NSObject *)arg1;

@end

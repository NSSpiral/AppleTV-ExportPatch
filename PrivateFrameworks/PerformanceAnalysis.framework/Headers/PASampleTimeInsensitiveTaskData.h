/* Runtime dump - PASampleTimeInsensitiveTaskData
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASampleTimeInsensitiveTaskData : NSObject <PASerializable>
{
    int _pid;
    NSString * _name;
    NSString * _bundleName;
    unsigned long long _uniqueId;
    NSUUID * _sharedCacheUuid;
    unsigned long long _sharedCacheOffset;
    NSString * _mainBinaryPath;
    NSArray * _imageInfos;
    int _ppid;
    int _rpid;
    unsigned int _uid;
    struct _CSArchitecture _architecture;
    char _isUnresponsive;
    double _timeOfLastResponse;
    char _usesSuddenTermination;
    char _allowsIdleExit;
    char _isDirty;
    char _workQueueExceededConstrainedThreadLimit;
    char _workQueueExceededTotalThreadLimit;
    char _isThirdParty;
    char _gatheredNonTimeCriticalAuxiliaryInfoFromLiveSystem;
    char _didExec;
    NSMutableSet * _rootFrames;
    PASampleTaskDataPrivateData * _cachedPrivateData;
    NSSet * _cachedDonatingPids;
    PASampleTaskData * mostRecentTask;
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
@property (readonly) struct _CSArchitecture architecture;
@property (readonly) char isUnresponsive;
@property (readonly) double timeOfLastResponse;
@property (readonly) char usesSuddenTermination;
@property (readonly) char allowsIdleExit;
@property (readonly) char isDirty;
@property (readonly) char workQueueExceededConstrainedThreadLimit;
@property (readonly) char workQueueExceededTotalThreadLimit;
@property (readonly) char isThirdParty;
@property char didExec;
@property (readonly) NSArray * imageInfos;
@property (readonly) NSUUID * mainBinaryUuid;
@property (readonly) unsigned long long mainBinaryOffset;
@property (readonly) NSString * mainBinaryPath;
@property (readonly) NSUUID * sharedCacheUuid;
@property (readonly) unsigned long long sharedCacheOffset;
@property (retain) PASampleTaskDataPrivateData * cachedPrivateData;
@property (retain) NSSet * cachedDonatingPids;

+ (NSString *)classDictionaryKey;
+ (NSObject *)newInstanceWithoutReferencesFromBufferPosition:(void *)arg0;

- (void)dealloc;
- (NSString *)debugDescription;
- (NSString *)name;
- (unsigned long long)uniqueId;
- (unsigned int)uid;
- (int)pid;
- (NSArray *)imageInfos;
- (unsigned long long)sharedCacheOffset;
- (char)isUnresponsive;
- (void)addSelfToSerializationDictionary:(NSDictionary *)arg0;
- (unsigned long)sizeInBytesForSerializedVersion;
- (char)addSelfToBufferAtPosition:(void *)arg0 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg1;
- (void)populateReferencesUsingBufferPosition:(void *)arg0 andDeserializationDictionary:(void)arg1 andDataBufferDictionary:(NSDictionary *)arg2;
- (struct _CSArchitecture)architecture;
- (void)setArchitecture:(struct _CSArchitecture)arg0;
- (NSData *)_initWithSerializedTimeInsensitiveTaskData:(struct ? *)arg0;
- (unsigned long long)mainBinaryOffset;
- (NSUUID *)mainBinaryUuid;
- (id)addStack:(TSTStrokeLayerMergedStack *)arg0;
- (int)ppid;
- (int)rpid;
- (NSString *)mainBinaryPath;
- (double)timeOfLastResponse;
- (char)usesSuddenTermination;
- (char)allowsIdleExit;
- (char)workQueueExceededConstrainedThreadLimit;
- (char)workQueueExceededTotalThreadLimit;
- (char)isThirdParty;
- (NSMutableSet *)rootFrames;
- (PASampleTimeInsensitiveTaskData *)initWithStackshotTask:(PAStackshot *)arg0;
- (void)_gatherNonTimeCriticalAuxiliaryInfoFromLiveSystemWithSampleTimeSeriesDataStore:(NSObject *)arg0;
- (void)_gatherTimeCriticalAuxiliaryInfoFromLiveSystem;
- (char)correspondsToStackshotTask:(NSObject *)arg0;
- (PASampleTaskDataPrivateData *)cachedPrivateData;
- (void)setCachedPrivateData:(PASampleTaskDataPrivateData *)arg0;
- (NSSet *)cachedDonatingPids;
- (void)setCachedDonatingPids:(NSSet *)arg0;
- (NSUUID *)sharedCacheUuid;
- (char)didExec;
- (void)setDidExec:(char)arg0;
- (char)isDirty;
- (NSString *)bundleName;

@end

/* Runtime dump - CPLEngineStore
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineStore : NSObject <CPLAbstractObject, CPLEngineComponent>
{
    NSHashTable * _storages;
    NSObject<OS_dispatch_queue> * _batchedTransactionsQueue;
    NSMutableArray * _batchedTransactions;
    char _batchedTransactionDequeueIsScheduled;
    NSURL * _resetEventsURL;
    NSMutableArray * _resetEvents;
    CPLPlatformObject * _platformObject;
    CPLEngineLibrary * _engineLibrary;
    CPLEngineChangePipe * _pushQueue;
    CPLEngineChangePipe * _deletePushQueue;
    CPLEngineChangePipe * _pullQueue;
    CPLEngineIDMapping * _idMapping;
    CPLEngineClientCache * _clientCache;
    CPLEngineCloudCache * _cloudCache;
    CPLEngineTransientRepository * _transientPullRepository;
    CPLEngineResourceStorage * _resourceStorage;
    CPLEngineResourceDownloadQueue * _downloadQueue;
    CPLEngineResourceUploadQueue * _uploadQueue;
    CPLEngineRemappedDeletes * _remappedDeletes;
    unsigned int _state;
}

@property (readonly, weak, nonatomic) CPLEngineLibrary * engineLibrary;
@property (readonly, nonatomic) CPLEngineChangePipe * pushQueue;
@property (readonly, nonatomic) CPLEngineChangePipe * deletePushQueue;
@property (readonly, nonatomic) char pushQueuesAreFull;
@property (readonly, nonatomic) CPLEngineChangePipe * pullQueue;
@property (readonly, nonatomic) CPLEngineIDMapping * idMapping;
@property (readonly, nonatomic) CPLEngineClientCache * clientCache;
@property (readonly, nonatomic) CPLEngineCloudCache * cloudCache;
@property (readonly, nonatomic) CPLEngineTransientRepository * transientPullRepository;
@property (readonly, nonatomic) CPLEngineResourceStorage * resourceStorage;
@property (readonly, nonatomic) CPLEngineResourceDownloadQueue * downloadQueue;
@property (readonly, nonatomic) CPLEngineResourceUploadQueue * uploadQueue;
@property (readonly, nonatomic) CPLEngineRemappedDeletes * remappedDeletes;
@property (readonly) NSDate * libraryCreationDate;
@property (nonatomic) unsigned int state;
@property (readonly, nonatomic) NSArray * storages;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) CPLPlatformObject * platformObject;

+ (NSObject *)platformImplementationProtocol;
+ (NSObject *)stateDescriptionForState:(unsigned int)arg0;

- (NSString *)userIdentifier;
- (id)performReadTransactionWithBlock:(id /* block */)arg0;
- (void)dealloc;
- (NSString *)description;
- (unsigned int)state;
- (void)setState:(unsigned int)arg0;
- (NSString *)componentName;
- (void).cxx_destruct;
- (void)openWithCompletionHandler:(id /* block */)arg0;
- (CPLEngineLibrary *)engineLibrary;
- (CPLPlatformObject *)platformObject;
- (void)assertCanWrite;
- (void)assertCanRead;
- (NSString *)createNewLibraryVersion;
- (char)storeLibraryVersion:(NSString *)arg0 withError:(id *)arg1;
- (char)isClientInSyncWithClientCache;
- (void)_storeResetEvent:(NSObject *)arg0 cause:(int)arg1;
- (char)_resetLocalSyncStateWithError:(id *)arg0;
- (char)storeUserIdentifier:(NSString *)arg0 error:(id *)arg1;
- (void)_setTransactionOnCurrentThread:(NSObject *)arg0;
- (void)_removeTransactionOnCurrentThread:(NSObject *)arg0;
- (void)_performTransaction:(NSObject *)arg0 withBlock:(id /* block */)arg1;
- (void)_reallyPerformBatchedTransactionsLocked;
- (void)_scheduleBatchedTransactionsLocked;
- (id)performWriteTransactionWithBlock:(id /* block */)arg0 completionHandler:(/* block */ id)arg1;
- (char)resetCompleteSyncStateWithCause:(int)arg0 error:(id *)arg1;
- (NSString *)libraryVersion;
- (NSString *)libraryZoneName;
- (char)storeLibraryZoneName:(NSString *)arg0 error:(id *)arg1;
- (NSString *)clientCacheIdentifier;
- (char)storeClientIsInSyncWithClientCacheWithError:(id *)arg0;
- (NSDate *)libraryCreationDate;
- (SBKTransaction *)_currentTransaction;
- (char)_canWrite;
- (char)_canRead;
- (id)_resetEventsDescriptions;
- (void)closeAndDeactivate:(char)arg0 completionHandler:(id /* block */)arg1;
- (void)getStatusWithCompletionHandler:(id /* block */)arg0;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)arg0;
- (CPLEngineStore *)initWithEngineLibrary:(CPLEngineLibrary *)arg0;
- (NSArray *)storages;
- (void)registerStorage:(id)arg0;
- (char)resetLocalSyncStateWithCause:(int)arg0 error:(id *)arg1;
- (void)performBatchedWriteTransactionWithBlock:(id /* block */)arg0 completionHandler:(/* block */ id)arg1;
- (char)pushQueuesAreFull;
- (CPLEngineChangePipe *)pushQueue;
- (CPLEngineChangePipe *)deletePushQueue;
- (CPLEngineChangePipe *)pullQueue;
- (CPLEngineIDMapping *)idMapping;
- (CPLEngineClientCache *)clientCache;
- (CPLEngineCloudCache *)cloudCache;
- (CPLEngineTransientRepository *)transientPullRepository;
- (CPLEngineResourceStorage *)resourceStorage;
- (CPLEngineResourceDownloadQueue *)downloadQueue;
- (CPLEngineResourceUploadQueue *)uploadQueue;
- (CPLEngineRemappedDeletes *)remappedDeletes;

@end

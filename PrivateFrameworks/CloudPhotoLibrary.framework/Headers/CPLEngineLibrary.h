/* Runtime dump - CPLEngineLibrary
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineLibrary : NSObject <CPLAbstractObject>
{
    NSArray * _components;
    NSObject<OS_dispatch_queue> * _queue;
    NSHashTable * _attachedObjects;
    NSError * _openingError;
    CPLStatus * _status;
    char _closed;
    char _totalAssetCountHasBeenCalculated;
    unsigned int _totalAssetCount;
    CPLPlatformObject * _platformObject;
    NSURL * _clientLibraryBaseURL;
    NSURL * _cloudLibraryStateStorageURL;
    NSURL * _cloudLibraryResourceStorageURL;
    NSString * _libraryIdentifier;
    CPLEngineStore * _store;
    CPLEngineScheduler * _scheduler;
    CPLEngineSyncManager * _syncManager;
    CPLEngineTransport * _transport;
    CPLStatistics * _statistics;
    CPLEngineSystemMonitor * _systemMonitor;
    CPLConfiguration * _configuration;
}

@property (readonly, copy, nonatomic) NSURL * clientLibraryBaseURL;
@property (readonly, copy, nonatomic) NSURL * cloudLibraryStateStorageURL;
@property (readonly, copy, nonatomic) NSURL * cloudLibraryResourceStorageURL;
@property (readonly, copy, nonatomic) NSString * libraryIdentifier;
@property (readonly, nonatomic) CPLEngineStore * store;
@property (readonly, nonatomic) CPLEngineScheduler * scheduler;
@property (readonly, nonatomic) CPLEngineSyncManager * syncManager;
@property (readonly, nonatomic) CPLEngineTransport * transport;
@property (readonly, nonatomic) CPLStatistics * statistics;
@property (readonly, nonatomic) CPLEngineSystemMonitor * systemMonitor;
@property (readonly, nonatomic) CPLConfiguration * configuration;
@property (nonatomic) char hasChangesToProcess;
@property (nonatomic) char isExceedingQuota;
@property (nonatomic) char iCloudLibraryHasBeenWiped;
@property (nonatomic) char iCloudLibraryExists;
@property (retain, nonatomic) NSDate * exitDeleteTime;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) CPLPlatformObject * platformObject;

+ (NSObject *)platformImplementationProtocol;

- (CPLEngineStore *)store;
- (NSString *)description;
- (NSString *)componentName;
- (void).cxx_destruct;
- (void)openWithCompletionHandler:(id /* block */)arg0;
- (CPLConfiguration *)configuration;
- (CPLEngineScheduler *)scheduler;
- (NSURL *)cloudLibraryResourceStorageURL;
- (CPLPlatformObject *)platformObject;
- (NSURL *)clientLibraryBaseURL;
- (void)notifyAttachedObjectsSizeOfResourcesToUploadDidChangeToSize:(unsigned long long)arg0 numberOfImages:(unsigned int)arg1 numberOfVideos:(unsigned int)arg2 numberOfOtherItems:(unsigned int)arg3;
- (void)setHasChangesToProcess:(char)arg0;
- (NSString *)libraryIdentifier;
- (void)closeAndDeactivate:(char)arg0 completionHandler:(id /* block */)arg1;
- (CPLStatistics *)statistics;
- (void)notifyAttachedObjectsUploadTaskDidStart:(id)arg0;
- (void)notifyAttachedObjectsUploadTask:(NSObject *)arg0 didProgress:(float)arg1;
- (void)notifyAttachedObjectsUploadTask:(NSObject *)arg0 didFinishWithError:(NSError *)arg1;
- (void)setIsExceedingQuota:(char)arg0;
- (void)setExitDeleteTime:(NSDate *)arg0;
- (void)setICloudLibraryHasBeenWiped:(char)arg0;
- (char)iCloudLibraryExists;
- (void)setICloudLibraryExists:(char)arg0;
- (CPLEngineSyncManager *)syncManager;
- (CPLEngineSystemMonitor *)systemMonitor;
- (void)notifyAttachedObjectsPullQueueIsFull;
- (void)updateLastSuccessfullSyncDate:(NSDate *)arg0;
- (void)reportUnsuccessfulSync;
- (void)notifyAttachedObjectsResourceDidDowloadInBackground:(id)arg0;
- (void)notifyAttachedObjectsResourceDidFailBackgroundDownloadOfResource:(NSObject *)arg0;
- (void)updateAssetCountsFromServer:(NSObject *)arg0;
- (NSURL *)cloudLibraryStateStorageURL;
- (void)getListOfComponentsWithCompletionHandler:(id /* block */)arg0;
- (void)getStatusArrayForComponents:(NSArray *)arg0 completionHandler:(id /* block */)arg1;
- (void)_openNextComponent:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)_closeNextComponent:(id)arg0 deactivate:(char)arg1 lastError:(NSError *)arg2 completionHandler:(id /* block */)arg3;
- (void)_updateTotalAssetCountWithAssetCounts:(id)arg0;
- (void)_performBlockWithLibrary:(char)arg0 enumerateAttachedObjects:(NSArray *)arg1;
- (void)reportLibraryCorrupted;
- (unsigned int)totalAssetCountOnServer;
- (void)attachObject:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)detachObject:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
- (CPLEngineTransport *)transport;
- (CPLEngineLibrary *)initWithClientLibraryBaseURL:(NSURL *)arg0 cloudLibraryStateStorageURL:(NSURL *)arg1 cloudLibraryResourceStorageURL:(NSURL *)arg2 libraryIdentifier:(NSString *)arg3;
- (void)startSyncSession;
- (void)getStatusForComponents:(NSArray *)arg0 completionHandler:(id /* block */)arg1;
- (char)iCloudLibraryHasBeenWiped;
- (char)hasChangesToProcess;
- (char)isExceedingQuota;
- (NSDate *)exitDeleteTime;

@end

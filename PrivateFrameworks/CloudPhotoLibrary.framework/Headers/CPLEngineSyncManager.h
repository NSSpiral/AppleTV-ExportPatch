/* Runtime dump - CPLEngineSyncManager
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineSyncManager : NSObject <CPLEngineSyncEmergencyTaskDelegate, CPLPushToTransportTaskDelegate, CPLPullFromTransportTaskDelegate, CPLMinglePulledChangesTaskDelegate, CPLBackgroundUploadsTaskDelegate, CPLBackgroundDownloadsTaskDelegate, CPLAbstractObject, CPLEngineComponent>
{
    <CPLEngineStoreUserIdentifier> * _transportUserIdentifier;
    NSString * _libraryZoneName;
    char _setupIsDone;
    <CPLEngineTransportSetupTask> * _setupTask;
    NSMutableArray * _setupBarriers;
    id _closingCompletionHandler;
    NSObject<OS_dispatch_queue> * _lock;
    NSError * _lastError;
    CPLEngineSyncEmergencyTask * _managementTask;
    NSMutableArray * _archivedManagementTasks;
    NSMutableDictionary * _completionHandlerPerTaskIdentifier;
    CPLPullFromTransportTask * _prePullTask;
    CPLPushToTransportTask * _pushTask;
    CPLPullFromTransportTask * _pullTask;
    CPLMinglePulledChangesTask * _mingleTask;
    CPLBackgroundUploadsTask * _backgroundUploadsTask;
    CPLBackgroundDownloadsTask * _backgroundDownloadsTask;
    unsigned int _shouldRestartSessionFromState;
    NSMutableArray * _lastErrors;
    char _foreground;
    char _hasTransactionForSyncSession;
    char _shouldTryToMingleImmediately;
    CPLPlatformObject * _platformObject;
    CPLEngineLibrary * _engineLibrary;
    unsigned int _state;
}

@property (readonly, weak, nonatomic) CPLEngineLibrary * engineLibrary;
@property (nonatomic) unsigned int state;
@property (nonatomic) char shouldTryToMingleImmediately;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) CPLPlatformObject * platformObject;

+ (NSObject *)platformImplementationProtocol;
+ (NSObject *)descriptionForState:(unsigned int)arg0;
+ (NSObject *)shortDescriptionForState:(unsigned int)arg0;

- (unsigned int)state;
- (void)_setState:(unsigned int)arg0;
- (NSString *)componentName;
- (void).cxx_destruct;
- (void)openWithCompletionHandler:(id /* block */)arg0;
- (CPLEngineLibrary *)engineLibrary;
- (CPLPlatformObject *)platformObject;
- (void)closeAndDeactivate:(char)arg0 completionHandler:(id /* block */)arg1;
- (void)getStatusWithCompletionHandler:(id /* block */)arg0;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)arg0;
- (CPLEngineSyncManager *)initWithEngineLibrary:(CPLEngineLibrary *)arg0;
- (void)startSyncSessionWithMinimalPhase:(unsigned int)arg0;
- (void)kickOffSyncSession;
- (void)setSyncSessionShouldBeForeground:(char)arg0;
- (void)cancelCurrentSyncSession;
- (void)resetTransportUserIdentifierAndRestartSync:(char)arg0;
- (void)addSetupBarrier:(id)arg0;
- (NSURLSessionTask *)task:(NSObject *)arg0 wantsToPushBatch:(id)arg1 continuationBlock:(id /* block */)arg2;
- (void)task:(NSObject *)arg0 didFinishWithError:(NSError *)arg1;
- (void)task:(NSObject *)arg0 didProgress:(float)arg1 userInfo:(NSDictionary *)arg2;
- (NSObject *)_descriptionForCurrentState;
- (id)_descriptionForLaunchedTasks;
- (void)_cancelAllTasksForSetup;
- (void)_cancelAllTasksForManagement;
- (void)_cancelAllTasksForPrePull;
- (void)_cancelAllTasksForPush;
- (void)_cancelAllTasksForPull;
- (void)_cancelAllTasksForBackgroundUploads;
- (void)_cancelAllTasksForBackgroundDownloads;
- (id)_descriptionForSetupTasks;
- (id)_descriptionForManagementTasks;
- (id)_descriptionForPrePullTasks;
- (id)_descriptionForPushTasks;
- (id)_descriptionForPullTasks;
- (id)_descriptionForBackgroundUploadsTasks;
- (id)_descriptionForBackgroundDownloadsTasks;
- (char)_launchSetupTask;
- (char)_launchManagementTask;
- (char)_launchNecessaryTasksForPrePull;
- (char)_launchNecessaryTasksForPush;
- (char)_launchNecessaryTasksForPull;
- (char)_launchNecessaryTasksForBackgroundUploads;
- (char)_launchNecessaryTasksForBackgroundDownloads;
- (char)_launchNecessaryTasksForCurrentStateLocked;
- (void)_notifyEndOfSyncSession;
- (void)_cancelAllTasksLocked;
- (void)_resetErrorForSyncSession;
- (void)_advanceToNextStateLocked;
- (void)_restartSyncSessionFromStateLocked:(unsigned int)arg0 cancelIfNecessary:(char)arg1;
- (void)_moveAllTasksToBackgroundLocked;
- (void)_setErrorForSyncSession:(NSObject *)arg0;
- (void)_saveManagementTasks;
- (char)_prepareAndLaunchSyncTask:(id *)arg0;
- (char)_didFinishSetupTaskWithError:(NSError *)arg0 shouldStop:(char *)arg1;
- (char)_didFinishManagementTask:(NSObject *)arg0 withError:(NSError *)arg1 shouldStop:(char *)arg2;
- (char)_didFinishPrePullTask:(NSObject *)arg0 withError:(NSError *)arg1 shouldStop:(char *)arg2;
- (char)_didFinishPushTask:(NSObject *)arg0 withError:(NSError *)arg1 shouldStop:(char *)arg2;
- (char)_didFinishPullTask:(NSObject *)arg0 withError:(NSError *)arg1 shouldStop:(char *)arg2;
- (char)_didFinishBackgroundUploadsTask:(NSObject *)arg0 withError:(NSError *)arg1 shouldStop:(char *)arg2;
- (char)_didFinishBackgroundDownloadsTask:(NSObject *)arg0 withError:(NSError *)arg1 shouldStop:(char *)arg2;
- (float)_progressForPrePullTask:(NSObject *)arg0 progress:(float)arg1;
- (float)_progressForPushTask:(NSObject *)arg0 progress:(float)arg1;
- (float)_progressForPullTask:(NSObject *)arg0 progress:(float)arg1;
- (float)_progressForBackgroundUploadsTask:(NSObject *)arg0 progress:(float)arg1;
- (float)_progressForBackgroundDownloadsTask:(NSObject *)arg0 progress:(float)arg1;
- (void)_loadManagementTasks;
- (void)beginClientWork:(id)arg0;
- (void)endClientWork:(id)arg0;
- (NSURLSessionTask *)task:(NSObject *)arg0 wantsToDownloadBatchesFromSyncAnchor:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startEmergencyTask:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
- (char)shouldTryToMingleImmediately;
- (void)setShouldTryToMingleImmediately:(char)arg0;

@end

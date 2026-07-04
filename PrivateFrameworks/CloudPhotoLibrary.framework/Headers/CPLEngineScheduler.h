/* Runtime dump - CPLEngineScheduler
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineScheduler : NSObject <CPLAbstractObject, CPLEngineComponent>
{
    unsigned int _requiredFirstState;
    unsigned int _lastRequestGeneration;
    unsigned int _currentRequestGeneration;
    NSDate * _nextScheduledDate;
    double _intervalForRetry;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int _currentSyncState;
    char _opened;
    NSDate * _unavailabilityLimitDate;
    unsigned int _foregroundCalls;
    NSCountedSet * _disablingReasons;
    unsigned int _disablingMinglingCount;
    NSDate * _lastSyncSessionDateCausedByForeground;
    char _shouldRetryASyncSessionForResourcesUpload;
    char _shouldDoSecondNormalPullPhase;
    CPLPlatformObject * _platformObject;
    CPLEngineLibrary * _engineLibrary;
}

@property (readonly, weak, nonatomic) CPLEngineLibrary * engineLibrary;
@property (readonly, nonatomic) char shouldDoSecondNormalPullPhase;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) CPLPlatformObject * platformObject;

+ (NSObject *)platformImplementationProtocol;

- (NSString *)componentName;
- (void).cxx_destruct;
- (void)openWithCompletionHandler:(id /* block */)arg0;
- (CPLEngineLibrary *)engineLibrary;
- (CPLPlatformObject *)platformObject;
- (void)closeAndDeactivate:(char)arg0 completionHandler:(id /* block */)arg1;
- (void)getStatusWithCompletionHandler:(id /* block */)arg0;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)arg0;
- (CPLEngineScheduler *)initWithEngineLibrary:(CPLEngineLibrary *)arg0;
- (void)notePullQueueIsFull;
- (void)_disableRetryAfterLocked;
- (char)_syncSessionIsPossible;
- (void)_reallyUnscheduleSession;
- (void)_scheduleNextSyncSession;
- (void)_reallyStartSyncSession;
- (void)_startRequiredSyncSession;
- (void)kickOffSyncSession;
- (void)notePushQueueIsEmpty;
- (void)_noteSyncSessionNeededFromState:(unsigned int)arg0;
- (void)notePushQueueIsFull;
- (void)_unscheduleNextSyncSession;
- (void)noteServerHasChanges;
- (void)_disableSynchronizationWithReasonLocked:(id)arg0;
- (void)_enableSynchronizationWithReasonLocked:(id)arg0;
- (void)_noteServerIsUnavailableWithErrorLocked:(id)arg0;
- (void)_backOff;
- (void)noteSyncSessionSucceeded;
- (void)_handleResetClientCacheWithError:(NSError *)arg0 completionHandler:(id /* block */)arg1;
- (void)_handleResetCloudCacheWithError:(NSError *)arg0 completionHandler:(id /* block */)arg1;
- (void)startRequiredSyncSessionNow;
- (void)noteClientIsInSyncWithClientCache;
- (void)noteClientIsNotInSyncWithClientCache;
- (void)noteResourceDownloadQueueIsFull;
- (void)noteResourceUploadQueueIsFull;
- (char)isClientInForeground;
- (void)disableSynchronizationWithReason:(NSString *)arg0;
- (void)enableSynchronizationWithReason:(NSString *)arg0;
- (void)disableMingling;
- (void)enableMingling;
- (char)isMinglingEnabled;
- (char)isSynchronizationDisabledWithReasonError:(id *)arg0;
- (void)noteServerIsUnavailableWithError:(NSError *)arg0;
- (void)noteNetworkStateDidChange;
- (void)noteSyncSessionStateWillBeAttempted:(unsigned int)arg0;
- (void)noteSyncSessionFailedDuringPhase:(unsigned int)arg0 withError:(NSError *)arg1;
- (void)resetBackoffInterval;
- (char)shouldDoSecondNormalPullPhase;
- (void)noteClientIsInForeground;
- (void)noteClientIsInBackground;

@end

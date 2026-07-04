/* Runtime dump - SBKUniversalPlaybackPositionStore
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKUniversalPlaybackPositionStore : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    char _isActive;
    char _hasLocalChangesToSync;
    NSMutableArray * _pendingTaskBlocks;
    NSString * _domain;
    unsigned int _automaticSynchronizeOptions;
    double _initialAutosyncInterval;
    double _pollingLimitFromBag;
    double _autorefreshInterval;
    char _refreshTimerActive;
    id _accountsObserver;
    id _prefsObserver;
    <SBKUniversalPlaybackPositionDataSource> * _dataSource;
    SBKAsynchronousTask * _currentTask;
    SBKAsynchronousTask * _lookupDomainVersionTask;
    SBKAsynchronousTask * _bagLookupTask;
    SBKRequestHandler * _currentTaskRequestHandler;
    NSDate * _dateToFireNextTimer;
    NSTimer * _timer;
}

@property (readonly, weak) <SBKUniversalPlaybackPositionDataSource> * dataSource;
@property unsigned int automaticSynchronizeOptions;
@property char hasLocalChangesToSync;
@property (retain) SBKAsynchronousTask * currentTask;
@property (retain) SBKAsynchronousTask * lookupDomainVersionTask;
@property (retain) SBKAsynchronousTask * bagLookupTask;
@property (retain) SBKRequestHandler * currentTaskRequestHandler;
@property (retain) NSDate * dateToFireNextTimer;
@property (retain) NSTimer * timer;

+ (NSObject *)keyValueStoreItemIdentifierForItem:(NSObject *)arg0;

- (void)_timerFired:(id)arg0;
- (void)resignActive;
- (void)becomeActive;
- (void)dealloc;
- (SBKUniversalPlaybackPositionStore *)init;
- (<SBKUniversalPlaybackPositionDataSource> *)dataSource;
- (void).cxx_destruct;
- (void)setTimer:(NSTimer *)arg0;
- (NSTimer *)timer;
- (SBKUniversalPlaybackPositionStore *)initWithDomain:(NSString *)arg0 dataSource:(<SBKUniversalPlaybackPositionDataSource> *)arg1 automaticSynchronizeOptions:(unsigned int)arg2 isActive:(char)arg3;
- (void)synchronizeImmediatelyWithCompletionHandler:(id /* block */)arg0;
- (void)setHasLocalChangesToSync:(char)arg0;
- (void)setDateToFireNextTimer:(NSDate *)arg0;
- (void)_updateAutorefreshRateSettingAndRestartTimer:(char)arg0;
- (void)_onQueueLoadBagContextWithCompletionHandler:(id /* block */)arg0;
- (void)_updateForStoreAccountsChange;
- (SBKUniversalPlaybackPositionStore *)initWithInitialUpdateDelay:(double)arg0;
- (void)_onQueueStopTimer;
- (void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(double)arg0;
- (SBKAsynchronousTask *)bagLookupTask;
- (SBKAsynchronousTask *)currentTask;
- (SBKAsynchronousTask *)lookupDomainVersionTask;
- (void)_onQueueSuspendTimer;
- (char)_automaticallySynchronizeOnBecomeActive;
- (void)_onQueueResumeTimer;
- (void)_onQueueUpdateTimerForActiveChanges;
- (char)_automaticallySynchronizeLocalChangesOnResignActive;
- (void)_onQueueSynchronizeWithAutosynchronizeMask:(unsigned int)arg0 withCompletionBlock:(id /* block */)arg1;
- (void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;
- (unsigned int)automaticSynchronizeOptions;
- (void)setAutomaticSynchronizeOptions:(unsigned int)arg0;
- (void)_onQueueSynchronizeImmediatelyWithCompletionHandler:(id /* block */)arg0;
- (void)_onQueuePushMetadataItem:(NSObject *)arg0 completionBlock:(id /* block */)arg1;
- (void)_onQueuePullMetadataItemWithItemIdentifier:(NSString *)arg0 completionBlock:(id /* block */)arg1;
- (id)_accountForSyncing;
- (void)_onQueueLoadRemoteDomainVersionWithCompletionBlock:(id /* block */)arg0;
- (void)_onQueueRunTaskWithName:(NSString *)arg0 taskCompletionHandler:(id /* block */)arg1 runTaskBlock:(/* block */ id)arg2;
- (void)_onQueueStartNewTimer;
- (void)_onQueueRunNextPendingTaskBlock;
- (double)_effectiveAutorefreshRate;
- (void)_updateSettingsFromLoadedBagContext:(NSObject *)arg0;
- (NSDate *)dateToFireNextTimer;
- (char)_timerIsStopped;
- (void)_onQueueScheduleTimer;
- (void)deprecated_setDataSource:(NSObject *)arg0;
- (char)hasLocalChangesToSync;
- (void)setAutomaticallySynchronizeLocalChangesOnResignActive:(char)arg0;
- (char)automaticallySynchronizeLocalChangesOnResignActive;
- (void)setAutomaticallySynchronizeOnBecomeActive:(char)arg0;
- (char)automaticallySynchronizeOnBecomeActive;
- (void)pushMetadataItem:(NSObject *)arg0 completionBlock:(id /* block */)arg1;
- (void)pullMetadataItemWithItemIdentifier:(NSString *)arg0 completionBlock:(id /* block */)arg1;
- (void)synchronizeImmediatelyWithCompletionBlock:(id /* block */)arg0;
- (void)checkForAvailabilityWithCompletionBlock:(id /* block */)arg0;
- (void)loadRemoteDomainVersionWithCompletionBlock:(id /* block */)arg0;
- (void)loadBagContextWithCompletionBlock:(id /* block */)arg0;
- (void)setCurrentTask:(SBKAsynchronousTask *)arg0;
- (void)setLookupDomainVersionTask:(SBKAsynchronousTask *)arg0;
- (void)setBagLookupTask:(SBKAsynchronousTask *)arg0;
- (SBKRequestHandler *)currentTaskRequestHandler;
- (void)setCurrentTaskRequestHandler:(SBKRequestHandler *)arg0;

@end

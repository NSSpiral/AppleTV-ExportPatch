/* Runtime dump - BRCContainerScheduler
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCContainerScheduler : NSObject <APSConnectionDelegate, BRCLocalContainerDelegate>
{
    BRCAccountSession * _session;
    BRCDeadlineToken * _containerMetadataSyncToken;
    BRCDeadlineToken * _sharedDatabaseSyncToken;
    NSObject<OS_dispatch_source> * _pushSource;
    NSString * _environmentName;
    APSConnection * _pushConnection;
    NSObject<OS_dispatch_queue> * _pushQueue;
    BRCContainerMetadataSyncPersistedState * _containerMetadataPersistedState;
    unsigned int _containerMetadataSyncState;
    struct _BRCOperation * _containerMetadataSyncOperation;
    struct _BRCOperation * _sharedDatabaseSyncOperation;
    struct _BRCOperation * _periodicSyncOperation;
    NSObject<OS_dispatch_group> * _initialSyncDownGroup;
    NSObject<OS_dispatch_group> * _syncGroup;
    BRCSyncBudgetThrottle * _syncUpBudget;
    BRCDeadlineScheduler * _syncScheduler;
}

@property (readonly, nonatomic) BRCAccountSession * session;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> * initialSyncDownGroup;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> * syncGroup;
@property (readonly, nonatomic) BRCSyncBudgetThrottle * syncUpBudget;
@property (readonly, nonatomic) BRCDeadlineScheduler * syncScheduler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)close;
- (void).cxx_destruct;
- (BRCAccountSession *)session;
- (void)didSyncDownSharedDatabase;
- (void)dumpToContext:(NSObject *)arg0;
- (BRCContainerScheduler *)initWithAccountSession:(NSObject *)arg0;
- (void)willInitialSyncDownForContainer:(NSObject *)arg0;
- (void)_syncScheduleForContainersMetadata;
- (void)_syncScheduleForSharedDatabase;
- (void)_updatePushTopicsRegistration;
- (void)_automaticSyncSchedule:(id)arg0;
- (void)_unscheduleContainer:(NSObject *)arg0;
- (void)_scheduleUpdatePushTopicsRegistration;
- (void)scheduleSyncDownForContainerMetadata;
- (void)scheduleSyncDownForSharedDatabaseImmediately:(char)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceivePublicToken:(NSString *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveToken:(NSString *)arg1 forTopic:(VCSessionMessageTopic *)arg2 identifier:(NSString *)arg3;
- (void)connection:(NSURLConnection *)arg0 didReceiveIncomingMessage:(NSString *)arg1;
- (void)didChangeSyncStatusForContainerMetadataForContainer:(NSObject *)arg0;
- (void)didInitialSyncDownForContainer:(NSObject *)arg0;
- (void)containerDidBecomeForeground:(id)arg0;
- (void)containerDidBecomeBackground:(id)arg0;
- (void)closeContainers:(id)arg0;
- (void)setupWithRoot:(NSObject *)arg0;
- (void)syncSuspend;
- (void)syncResume;
- (void)refreshPushRegistrationAfterAppsListChanged;
- (NSObject<OS_dispatch_group> *)initialSyncDownGroup;
- (NSObject<OS_dispatch_group> *)syncGroup;
- (BRCSyncBudgetThrottle *)syncUpBudget;
- (BRCDeadlineScheduler *)syncScheduler;

@end
